// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: invoices.proto

#ifndef PROTOBUF_invoices_2eproto__INCLUDED
#define PROTOBUF_invoices_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_invoices_2eproto();
void protobuf_AssignDesc_invoices_2eproto();
void protobuf_ShutdownFile_invoices_2eproto();

class Output;
class IdentityData;
class Invoice;

// ===================================================================

class Output : public ::google::protobuf::Message {
 public:
  Output();
  virtual ~Output();
  
  Output(const Output& from);
  
  inline Output& operator=(const Output& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Output& default_instance();
  
  void Swap(Output* other);
  
  // implements Message ----------------------------------------------
  
  Output* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Output& from);
  void MergeFrom(const Output& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint64 value = 1;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 1;
  inline ::google::protobuf::uint64 value() const;
  inline void set_value(::google::protobuf::uint64 value);
  
  // required bytes script = 2;
  inline bool has_script() const;
  inline void clear_script();
  static const int kScriptFieldNumber = 2;
  inline const ::std::string& script() const;
  inline void set_script(const ::std::string& value);
  inline void set_script(const char* value);
  inline void set_script(const void* value, size_t size);
  inline ::std::string* mutable_script();
  inline ::std::string* release_script();
  
  // @@protoc_insertion_point(class_scope:Output)
 private:
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_script();
  inline void clear_has_script();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 value_;
  ::std::string* script_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_invoices_2eproto();
  friend void protobuf_AssignDesc_invoices_2eproto();
  friend void protobuf_ShutdownFile_invoices_2eproto();
  
  void InitAsDefaultInstance();
  static Output* default_instance_;
};
// -------------------------------------------------------------------

class IdentityData : public ::google::protobuf::Message {
 public:
  IdentityData();
  virtual ~IdentityData();
  
  IdentityData(const IdentityData& from);
  
  inline IdentityData& operator=(const IdentityData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const IdentityData& default_instance();
  
  void Swap(IdentityData* other);
  
  // implements Message ----------------------------------------------
  
  IdentityData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IdentityData& from);
  void MergeFrom(const IdentityData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional bytes signature = 1;
  inline bool has_signature() const;
  inline void clear_signature();
  static const int kSignatureFieldNumber = 1;
  inline const ::std::string& signature() const;
  inline void set_signature(const ::std::string& value);
  inline void set_signature(const char* value);
  inline void set_signature(const void* value, size_t size);
  inline ::std::string* mutable_signature();
  inline ::std::string* release_signature();
  
  // repeated bytes cert_chain = 2;
  inline int cert_chain_size() const;
  inline void clear_cert_chain();
  static const int kCertChainFieldNumber = 2;
  inline const ::std::string& cert_chain(int index) const;
  inline ::std::string* mutable_cert_chain(int index);
  inline void set_cert_chain(int index, const ::std::string& value);
  inline void set_cert_chain(int index, const char* value);
  inline void set_cert_chain(int index, const void* value, size_t size);
  inline ::std::string* add_cert_chain();
  inline void add_cert_chain(const ::std::string& value);
  inline void add_cert_chain(const char* value);
  inline void add_cert_chain(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& cert_chain() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_cert_chain();
  
  // @@protoc_insertion_point(class_scope:IdentityData)
 private:
  inline void set_has_signature();
  inline void clear_has_signature();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* signature_;
  ::google::protobuf::RepeatedPtrField< ::std::string> cert_chain_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_invoices_2eproto();
  friend void protobuf_AssignDesc_invoices_2eproto();
  friend void protobuf_ShutdownFile_invoices_2eproto();
  
  void InitAsDefaultInstance();
  static IdentityData* default_instance_;
};
// -------------------------------------------------------------------

class Invoice : public ::google::protobuf::Message {
 public:
  Invoice();
  virtual ~Invoice();
  
  Invoice(const Invoice& from);
  
  inline Invoice& operator=(const Invoice& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Invoice& default_instance();
  
  void Swap(Invoice* other);
  
  // implements Message ----------------------------------------------
  
  Invoice* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Invoice& from);
  void MergeFrom(const Invoice& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // repeated .Output outputs = 1;
  inline int outputs_size() const;
  inline void clear_outputs();
  static const int kOutputsFieldNumber = 1;
  inline const ::Output& outputs(int index) const;
  inline ::Output* mutable_outputs(int index);
  inline ::Output* add_outputs();
  inline const ::google::protobuf::RepeatedPtrField< ::Output >&
      outputs() const;
  inline ::google::protobuf::RepeatedPtrField< ::Output >*
      mutable_outputs();
  
  // optional .IdentityData identity_data = 2;
  inline bool has_identity_data() const;
  inline void clear_identity_data();
  static const int kIdentityDataFieldNumber = 2;
  inline const ::IdentityData& identity_data() const;
  inline ::IdentityData* mutable_identity_data();
  inline ::IdentityData* release_identity_data();
  
  // optional string label = 3;
  inline bool has_label() const;
  inline void clear_label();
  static const int kLabelFieldNumber = 3;
  inline const ::std::string& label() const;
  inline void set_label(const ::std::string& value);
  inline void set_label(const char* value);
  inline void set_label(const char* value, size_t size);
  inline ::std::string* mutable_label();
  inline ::std::string* release_label();
  
  // @@protoc_insertion_point(class_scope:Invoice)
 private:
  inline void set_has_identity_data();
  inline void clear_has_identity_data();
  inline void set_has_label();
  inline void clear_has_label();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::Output > outputs_;
  ::IdentityData* identity_data_;
  ::std::string* label_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_invoices_2eproto();
  friend void protobuf_AssignDesc_invoices_2eproto();
  friend void protobuf_ShutdownFile_invoices_2eproto();
  
  void InitAsDefaultInstance();
  static Invoice* default_instance_;
};
// ===================================================================


// ===================================================================

// Output

// required uint64 value = 1;
inline bool Output::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Output::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Output::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Output::clear_value() {
  value_ = GOOGLE_ULONGLONG(0);
  clear_has_value();
}
inline ::google::protobuf::uint64 Output::value() const {
  return value_;
}
inline void Output::set_value(::google::protobuf::uint64 value) {
  set_has_value();
  value_ = value;
}

// required bytes script = 2;
inline bool Output::has_script() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Output::set_has_script() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Output::clear_has_script() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Output::clear_script() {
  if (script_ != &::google::protobuf::internal::kEmptyString) {
    script_->clear();
  }
  clear_has_script();
}
inline const ::std::string& Output::script() const {
  return *script_;
}
inline void Output::set_script(const ::std::string& value) {
  set_has_script();
  if (script_ == &::google::protobuf::internal::kEmptyString) {
    script_ = new ::std::string;
  }
  script_->assign(value);
}
inline void Output::set_script(const char* value) {
  set_has_script();
  if (script_ == &::google::protobuf::internal::kEmptyString) {
    script_ = new ::std::string;
  }
  script_->assign(value);
}
inline void Output::set_script(const void* value, size_t size) {
  set_has_script();
  if (script_ == &::google::protobuf::internal::kEmptyString) {
    script_ = new ::std::string;
  }
  script_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Output::mutable_script() {
  set_has_script();
  if (script_ == &::google::protobuf::internal::kEmptyString) {
    script_ = new ::std::string;
  }
  return script_;
}
inline ::std::string* Output::release_script() {
  clear_has_script();
  if (script_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = script_;
    script_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// IdentityData

// optional bytes signature = 1;
inline bool IdentityData::has_signature() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IdentityData::set_has_signature() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IdentityData::clear_has_signature() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IdentityData::clear_signature() {
  if (signature_ != &::google::protobuf::internal::kEmptyString) {
    signature_->clear();
  }
  clear_has_signature();
}
inline const ::std::string& IdentityData::signature() const {
  return *signature_;
}
inline void IdentityData::set_signature(const ::std::string& value) {
  set_has_signature();
  if (signature_ == &::google::protobuf::internal::kEmptyString) {
    signature_ = new ::std::string;
  }
  signature_->assign(value);
}
inline void IdentityData::set_signature(const char* value) {
  set_has_signature();
  if (signature_ == &::google::protobuf::internal::kEmptyString) {
    signature_ = new ::std::string;
  }
  signature_->assign(value);
}
inline void IdentityData::set_signature(const void* value, size_t size) {
  set_has_signature();
  if (signature_ == &::google::protobuf::internal::kEmptyString) {
    signature_ = new ::std::string;
  }
  signature_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* IdentityData::mutable_signature() {
  set_has_signature();
  if (signature_ == &::google::protobuf::internal::kEmptyString) {
    signature_ = new ::std::string;
  }
  return signature_;
}
inline ::std::string* IdentityData::release_signature() {
  clear_has_signature();
  if (signature_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = signature_;
    signature_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// repeated bytes cert_chain = 2;
inline int IdentityData::cert_chain_size() const {
  return cert_chain_.size();
}
inline void IdentityData::clear_cert_chain() {
  cert_chain_.Clear();
}
inline const ::std::string& IdentityData::cert_chain(int index) const {
  return cert_chain_.Get(index);
}
inline ::std::string* IdentityData::mutable_cert_chain(int index) {
  return cert_chain_.Mutable(index);
}
inline void IdentityData::set_cert_chain(int index, const ::std::string& value) {
  cert_chain_.Mutable(index)->assign(value);
}
inline void IdentityData::set_cert_chain(int index, const char* value) {
  cert_chain_.Mutable(index)->assign(value);
}
inline void IdentityData::set_cert_chain(int index, const void* value, size_t size) {
  cert_chain_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* IdentityData::add_cert_chain() {
  return cert_chain_.Add();
}
inline void IdentityData::add_cert_chain(const ::std::string& value) {
  cert_chain_.Add()->assign(value);
}
inline void IdentityData::add_cert_chain(const char* value) {
  cert_chain_.Add()->assign(value);
}
inline void IdentityData::add_cert_chain(const void* value, size_t size) {
  cert_chain_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
IdentityData::cert_chain() const {
  return cert_chain_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
IdentityData::mutable_cert_chain() {
  return &cert_chain_;
}

// -------------------------------------------------------------------

// Invoice

// repeated .Output outputs = 1;
inline int Invoice::outputs_size() const {
  return outputs_.size();
}
inline void Invoice::clear_outputs() {
  outputs_.Clear();
}
inline const ::Output& Invoice::outputs(int index) const {
  return outputs_.Get(index);
}
inline ::Output* Invoice::mutable_outputs(int index) {
  return outputs_.Mutable(index);
}
inline ::Output* Invoice::add_outputs() {
  return outputs_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Output >&
Invoice::outputs() const {
  return outputs_;
}
inline ::google::protobuf::RepeatedPtrField< ::Output >*
Invoice::mutable_outputs() {
  return &outputs_;
}

// optional .IdentityData identity_data = 2;
inline bool Invoice::has_identity_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Invoice::set_has_identity_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Invoice::clear_has_identity_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Invoice::clear_identity_data() {
  if (identity_data_ != NULL) identity_data_->::IdentityData::Clear();
  clear_has_identity_data();
}
inline const ::IdentityData& Invoice::identity_data() const {
  return identity_data_ != NULL ? *identity_data_ : *default_instance_->identity_data_;
}
inline ::IdentityData* Invoice::mutable_identity_data() {
  set_has_identity_data();
  if (identity_data_ == NULL) identity_data_ = new ::IdentityData;
  return identity_data_;
}
inline ::IdentityData* Invoice::release_identity_data() {
  clear_has_identity_data();
  ::IdentityData* temp = identity_data_;
  identity_data_ = NULL;
  return temp;
}

// optional string label = 3;
inline bool Invoice::has_label() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Invoice::set_has_label() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Invoice::clear_has_label() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Invoice::clear_label() {
  if (label_ != &::google::protobuf::internal::kEmptyString) {
    label_->clear();
  }
  clear_has_label();
}
inline const ::std::string& Invoice::label() const {
  return *label_;
}
inline void Invoice::set_label(const ::std::string& value) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(value);
}
inline void Invoice::set_label(const char* value) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(value);
}
inline void Invoice::set_label(const char* value, size_t size) {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  label_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Invoice::mutable_label() {
  set_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    label_ = new ::std::string;
  }
  return label_;
}
inline ::std::string* Invoice::release_label() {
  clear_has_label();
  if (label_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = label_;
    label_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_invoices_2eproto__INCLUDED
