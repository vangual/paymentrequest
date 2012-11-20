// Demo of how to verify X509 cert chain without an SSL connection.

// Apple has deprecated OpenSSL in latest MacOS, shut up compiler warnings about it.
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include <string>
#include <fstream>
#include <assert.h>

#include <openssl/bio.h>
#include <openssl/ssl.h>
#include <openssl/pem.h>
#include <openssl/x509.h>
#include <openssl/x509_vfy.h>

#include "invoices.pb.h";

using std::string;

// Take binary DER data and return an X509 object suitable for verification or use.
X509 *parse_der_cert(string cert_data) {
    const unsigned char *data = (const unsigned char *)cert_data.data();
    X509 *cert = d2i_X509(NULL, &data, cert_data.size());
    assert(cert);
    return cert;
}

int main(int argc, char **argv) {
    SSL_library_init();
    ERR_load_BIO_strings();
    SSL_load_error_strings();
    OpenSSL_add_all_algorithms();
    // Verify that the version of the library that we linked against is
    // compatible with the version of the headers we compiled against.
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    // Load all the cert authorities.
    // The cert store will have all of the certificates for the trusted root authorities.
    X509_STORE *cert_store = X509_STORE_new();
    // This tells the store to find certificates by loading them from a file.
    // The X509_LOOKUP_file() method here is actually just telling OpenSSL
    // how to do it, it doesn't actually look anything up despite the name.
    X509_LOOKUP *lookup = X509_STORE_add_lookup(cert_store, X509_LOOKUP_file());
    // Load all the root authority certificates. This file was retrieved from
    // http://www.startssl.com/certs/ca-bundle.pem on Nov 18th 2012.
    assert(X509_LOOKUP_load_file(lookup, "ca-bundle-startcom.pem", X509_FILETYPE_PEM));

    // Load the invoice file.
    std::ifstream infile("demo.bitcoin-invoice", std::ios::in | std::ios::binary);
    Invoice invoice;
    assert(invoice.ParseFromIstream(&infile));

    // Dump in raw text format, obviously this is mostly useless as bulk of
    // the data is binary.
    // printf("%s\n", invoice.DebugString().c_str());

    // Load the certs from the invoice.
    const IdentityData &id_data = invoice.identity_data();
    std::vector<X509*> certs;
    for (int i = 0; i < id_data.cert_chain_size(); i++) {
        X509 *cert = parse_der_cert(id_data.cert_chain(i));
        certs.push_back(cert);
    }
    assert(certs.size() > 0);
    
    // The last cert is the signing cert, the rest are untrusted certs that chain
    // to a valid root authority. OpenSSL needs them separately.
    STACK_OF(X509) *chain = sk_X509_new_null();    
    for (int i = 0; i < certs.size() - 1; i++) {
        sk_X509_push(chain, certs[i]);
    }
    X509 *signing_cert = certs[certs.size() - 1];

    // Now create a "store context", which is a single use object for checking,
    // load the signing cert into it and verify.
    X509_STORE_CTX *store_ctx = X509_STORE_CTX_new();   
    assert(X509_STORE_CTX_init(store_ctx, cert_store, signing_cert, chain));
    // Override the verification time so Mikes expired cert can be used as a demo.
    // The verify param ownership is taken by the store context. Set this to false
    // to see "cert expired" as an error. Don't just comment out the set_time call
    // as setting an empty verify param apparently causes other issues.
    if (true) {
        X509_VERIFY_PARAM *vpm = X509_VERIFY_PARAM_new();
        X509_VERIFY_PARAM_set_time(vpm, static_cast<time_t>(1293843600));
        X509_STORE_CTX_set0_param(store_ctx, vpm);
    }
    // Now do the verification!
    int result = X509_verify_cert(store_ctx);
    X509_NAME *certname = X509_get_subject_name(signing_cert);
    if (result < 0) {
        int error = X509_STORE_CTX_get_error(store_ctx);
        printf("%d: %s\n", error, X509_verify_cert_error_string(error));
        exit(1);
    }

    // The cert is valid. Now we need to check the signature. Start by deleting it
    // from the protobuf.
    string signature = id_data.signature();
    invoice.mutable_identity_data()->clear_signature();
    string data_to_verify;
    invoice.SerializeToString(&data_to_verify);

    EVP_MD_CTX ctx;
    EVP_PKEY *pubkey = X509_get_pubkey(signing_cert);
    EVP_MD_CTX_init(&ctx);
    assert(EVP_VerifyInit_ex(&ctx, EVP_sha256(), NULL));
    assert(EVP_VerifyUpdate(&ctx, data_to_verify.data(), data_to_verify.size()));
    assert(EVP_VerifyFinal(&ctx, (const unsigned char*)signature.data(), signature.size(), pubkey));

    // OpenSSL API for getting human printable strings from certs is baroque.
    int textlen = X509_NAME_get_text_by_NID(certname, NID_commonName, NULL, 0);
    char *website = new char[textlen + 1];
    assert(X509_NAME_get_text_by_NID(certname, NID_commonName, website, textlen + 1) == textlen);
    printf("Invoice is valid! Signed by %s\n", website);
    printf("Label: %s\n", invoice.label().c_str());

    // Avoid reported memory leaks.
    delete website;
    X509_STORE_CTX_free(store_ctx);
    for (int i = 0; i < certs.size(); i++)
        X509_free(certs[i]);
    X509_STORE_free(cert_store);
    google::protobuf::ShutdownProtobufLibrary();
}



