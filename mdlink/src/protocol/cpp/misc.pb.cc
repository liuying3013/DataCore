// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: misc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "misc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace jzs {
namespace msg {
namespace misc {

namespace {

const ::google::protobuf::Descriptor* Code_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Code_reflection_ = NULL;
const ::google::protobuf::Descriptor* CodeTable_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CodeTable_reflection_ = NULL;
const ::google::protobuf::Descriptor* LowHeartBeatReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LowHeartBeatReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* LowHeartBeatRsp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LowHeartBeatRsp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_misc_2eproto() {
  protobuf_AddDesc_misc_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "misc.proto");
  GOOGLE_CHECK(file != NULL);
  Code_descriptor_ = file->message_type(0);
  static const int Code_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Code, jzcode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Code, symbol_),
  };
  Code_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Code_descriptor_,
      Code::default_instance_,
      Code_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Code, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Code, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Code));
  CodeTable_descriptor_ = file->message_type(1);
  static const int CodeTable_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeTable, date_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeTable, codes_),
  };
  CodeTable_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CodeTable_descriptor_,
      CodeTable::default_instance_,
      CodeTable_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeTable, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CodeTable, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CodeTable));
  LowHeartBeatReq_descriptor_ = file->message_type(2);
  static const int LowHeartBeatReq_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatReq, req_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatReq, req_time_),
  };
  LowHeartBeatReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LowHeartBeatReq_descriptor_,
      LowHeartBeatReq::default_instance_,
      LowHeartBeatReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LowHeartBeatReq));
  LowHeartBeatRsp_descriptor_ = file->message_type(3);
  static const int LowHeartBeatRsp_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatRsp, req_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatRsp, req_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatRsp, rsp_time_),
  };
  LowHeartBeatRsp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LowHeartBeatRsp_descriptor_,
      LowHeartBeatRsp::default_instance_,
      LowHeartBeatRsp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatRsp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LowHeartBeatRsp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LowHeartBeatRsp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_misc_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Code_descriptor_, &Code::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CodeTable_descriptor_, &CodeTable::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LowHeartBeatReq_descriptor_, &LowHeartBeatReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LowHeartBeatRsp_descriptor_, &LowHeartBeatRsp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_misc_2eproto() {
  delete Code::default_instance_;
  delete Code_reflection_;
  delete CodeTable::default_instance_;
  delete CodeTable_reflection_;
  delete LowHeartBeatReq::default_instance_;
  delete LowHeartBeatReq_reflection_;
  delete LowHeartBeatRsp::default_instance_;
  delete LowHeartBeatRsp_reflection_;
}

void protobuf_AddDesc_misc_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nmisc.proto\022\014jzs.msg.misc\"&\n\004Code\022\016\n\006jz"
    "code\030\001 \002(\r\022\016\n\006symbol\030\002 \002(\t\"<\n\tCodeTable\022"
    "\014\n\004date\030\001 \002(\r\022!\n\005codes\030\002 \003(\0132\022.jzs.msg.m"
    "isc.Code\"3\n\017LowHeartBeatReq\022\016\n\006req_id\030\001 "
    "\002(\r\022\020\n\010req_time\030\002 \002(\004\"E\n\017LowHeartBeatRsp"
    "\022\016\n\006req_id\030\001 \002(\r\022\020\n\010req_time\030\002 \002(\004\022\020\n\010rs"
    "p_time\030\003 \002(\004", 252);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "misc.proto", &protobuf_RegisterTypes);
  Code::default_instance_ = new Code();
  CodeTable::default_instance_ = new CodeTable();
  LowHeartBeatReq::default_instance_ = new LowHeartBeatReq();
  LowHeartBeatRsp::default_instance_ = new LowHeartBeatRsp();
  Code::default_instance_->InitAsDefaultInstance();
  CodeTable::default_instance_->InitAsDefaultInstance();
  LowHeartBeatReq::default_instance_->InitAsDefaultInstance();
  LowHeartBeatRsp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_misc_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_misc_2eproto {
  StaticDescriptorInitializer_misc_2eproto() {
    protobuf_AddDesc_misc_2eproto();
  }
} static_descriptor_initializer_misc_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Code::kJzcodeFieldNumber;
const int Code::kSymbolFieldNumber;
#endif  // !_MSC_VER

Code::Code()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Code::InitAsDefaultInstance() {
}

Code::Code(const Code& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Code::SharedCtor() {
  _cached_size_ = 0;
  jzcode_ = 0u;
  symbol_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Code::~Code() {
  SharedDtor();
}

void Code::SharedDtor() {
  if (symbol_ != &::google::protobuf::internal::kEmptyString) {
    delete symbol_;
  }
  if (this != default_instance_) {
  }
}

void Code::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Code::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Code_descriptor_;
}

const Code& Code::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_misc_2eproto();
  return *default_instance_;
}

Code* Code::default_instance_ = NULL;

Code* Code::New() const {
  return new Code;
}

void Code::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    jzcode_ = 0u;
    if (has_symbol()) {
      if (symbol_ != &::google::protobuf::internal::kEmptyString) {
        symbol_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Code::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 jzcode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &jzcode_)));
          set_has_jzcode();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_symbol;
        break;
      }

      // required string symbol = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_symbol:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_symbol()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->symbol().data(), this->symbol().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Code::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 jzcode = 1;
  if (has_jzcode()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->jzcode(), output);
  }

  // required string symbol = 2;
  if (has_symbol()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->symbol().data(), this->symbol().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->symbol(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Code::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 jzcode = 1;
  if (has_jzcode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->jzcode(), target);
  }

  // required string symbol = 2;
  if (has_symbol()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->symbol().data(), this->symbol().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->symbol(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Code::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 jzcode = 1;
    if (has_jzcode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->jzcode());
    }

    // required string symbol = 2;
    if (has_symbol()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->symbol());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Code::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Code* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Code*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Code::MergeFrom(const Code& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_jzcode()) {
      set_jzcode(from.jzcode());
    }
    if (from.has_symbol()) {
      set_symbol(from.symbol());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Code::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Code::CopyFrom(const Code& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Code::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void Code::Swap(Code* other) {
  if (other != this) {
    std::swap(jzcode_, other->jzcode_);
    std::swap(symbol_, other->symbol_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Code::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Code_descriptor_;
  metadata.reflection = Code_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CodeTable::kDateFieldNumber;
const int CodeTable::kCodesFieldNumber;
#endif  // !_MSC_VER

CodeTable::CodeTable()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CodeTable::InitAsDefaultInstance() {
}

CodeTable::CodeTable(const CodeTable& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CodeTable::SharedCtor() {
  _cached_size_ = 0;
  date_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CodeTable::~CodeTable() {
  SharedDtor();
}

void CodeTable::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CodeTable::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CodeTable::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CodeTable_descriptor_;
}

const CodeTable& CodeTable::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_misc_2eproto();
  return *default_instance_;
}

CodeTable* CodeTable::default_instance_ = NULL;

CodeTable* CodeTable::New() const {
  return new CodeTable;
}

void CodeTable::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    date_ = 0u;
  }
  codes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CodeTable::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 date = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &date_)));
          set_has_date();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_codes;
        break;
      }

      // repeated .jzs.msg.misc.Code codes = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_codes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_codes()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_codes;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CodeTable::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 date = 1;
  if (has_date()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->date(), output);
  }

  // repeated .jzs.msg.misc.Code codes = 2;
  for (int i = 0; i < this->codes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->codes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CodeTable::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 date = 1;
  if (has_date()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->date(), target);
  }

  // repeated .jzs.msg.misc.Code codes = 2;
  for (int i = 0; i < this->codes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->codes(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CodeTable::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 date = 1;
    if (has_date()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->date());
    }

  }
  // repeated .jzs.msg.misc.Code codes = 2;
  total_size += 1 * this->codes_size();
  for (int i = 0; i < this->codes_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->codes(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CodeTable::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CodeTable* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CodeTable*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CodeTable::MergeFrom(const CodeTable& from) {
  GOOGLE_CHECK_NE(&from, this);
  codes_.MergeFrom(from.codes_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_date()) {
      set_date(from.date());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CodeTable::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CodeTable::CopyFrom(const CodeTable& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CodeTable::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < codes_size(); i++) {
    if (!this->codes(i).IsInitialized()) return false;
  }
  return true;
}

void CodeTable::Swap(CodeTable* other) {
  if (other != this) {
    std::swap(date_, other->date_);
    codes_.Swap(&other->codes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CodeTable::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CodeTable_descriptor_;
  metadata.reflection = CodeTable_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LowHeartBeatReq::kReqIdFieldNumber;
const int LowHeartBeatReq::kReqTimeFieldNumber;
#endif  // !_MSC_VER

LowHeartBeatReq::LowHeartBeatReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LowHeartBeatReq::InitAsDefaultInstance() {
}

LowHeartBeatReq::LowHeartBeatReq(const LowHeartBeatReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LowHeartBeatReq::SharedCtor() {
  _cached_size_ = 0;
  req_id_ = 0u;
  req_time_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LowHeartBeatReq::~LowHeartBeatReq() {
  SharedDtor();
}

void LowHeartBeatReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LowHeartBeatReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LowHeartBeatReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LowHeartBeatReq_descriptor_;
}

const LowHeartBeatReq& LowHeartBeatReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_misc_2eproto();
  return *default_instance_;
}

LowHeartBeatReq* LowHeartBeatReq::default_instance_ = NULL;

LowHeartBeatReq* LowHeartBeatReq::New() const {
  return new LowHeartBeatReq;
}

void LowHeartBeatReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    req_id_ = 0u;
    req_time_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LowHeartBeatReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 req_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &req_id_)));
          set_has_req_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_req_time;
        break;
      }

      // required uint64 req_time = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_req_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &req_time_)));
          set_has_req_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void LowHeartBeatReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 req_id = 1;
  if (has_req_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->req_id(), output);
  }

  // required uint64 req_time = 2;
  if (has_req_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->req_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LowHeartBeatReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 req_id = 1;
  if (has_req_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->req_id(), target);
  }

  // required uint64 req_time = 2;
  if (has_req_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->req_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LowHeartBeatReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 req_id = 1;
    if (has_req_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->req_id());
    }

    // required uint64 req_time = 2;
    if (has_req_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->req_time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LowHeartBeatReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LowHeartBeatReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LowHeartBeatReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LowHeartBeatReq::MergeFrom(const LowHeartBeatReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_req_id()) {
      set_req_id(from.req_id());
    }
    if (from.has_req_time()) {
      set_req_time(from.req_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LowHeartBeatReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LowHeartBeatReq::CopyFrom(const LowHeartBeatReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LowHeartBeatReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void LowHeartBeatReq::Swap(LowHeartBeatReq* other) {
  if (other != this) {
    std::swap(req_id_, other->req_id_);
    std::swap(req_time_, other->req_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LowHeartBeatReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LowHeartBeatReq_descriptor_;
  metadata.reflection = LowHeartBeatReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LowHeartBeatRsp::kReqIdFieldNumber;
const int LowHeartBeatRsp::kReqTimeFieldNumber;
const int LowHeartBeatRsp::kRspTimeFieldNumber;
#endif  // !_MSC_VER

LowHeartBeatRsp::LowHeartBeatRsp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LowHeartBeatRsp::InitAsDefaultInstance() {
}

LowHeartBeatRsp::LowHeartBeatRsp(const LowHeartBeatRsp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LowHeartBeatRsp::SharedCtor() {
  _cached_size_ = 0;
  req_id_ = 0u;
  req_time_ = GOOGLE_ULONGLONG(0);
  rsp_time_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LowHeartBeatRsp::~LowHeartBeatRsp() {
  SharedDtor();
}

void LowHeartBeatRsp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LowHeartBeatRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LowHeartBeatRsp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LowHeartBeatRsp_descriptor_;
}

const LowHeartBeatRsp& LowHeartBeatRsp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_misc_2eproto();
  return *default_instance_;
}

LowHeartBeatRsp* LowHeartBeatRsp::default_instance_ = NULL;

LowHeartBeatRsp* LowHeartBeatRsp::New() const {
  return new LowHeartBeatRsp;
}

void LowHeartBeatRsp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    req_id_ = 0u;
    req_time_ = GOOGLE_ULONGLONG(0);
    rsp_time_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LowHeartBeatRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 req_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &req_id_)));
          set_has_req_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_req_time;
        break;
      }

      // required uint64 req_time = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_req_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &req_time_)));
          set_has_req_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_rsp_time;
        break;
      }

      // required uint64 rsp_time = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rsp_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &rsp_time_)));
          set_has_rsp_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void LowHeartBeatRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 req_id = 1;
  if (has_req_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->req_id(), output);
  }

  // required uint64 req_time = 2;
  if (has_req_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->req_time(), output);
  }

  // required uint64 rsp_time = 3;
  if (has_rsp_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->rsp_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LowHeartBeatRsp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 req_id = 1;
  if (has_req_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->req_id(), target);
  }

  // required uint64 req_time = 2;
  if (has_req_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->req_time(), target);
  }

  // required uint64 rsp_time = 3;
  if (has_rsp_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->rsp_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LowHeartBeatRsp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 req_id = 1;
    if (has_req_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->req_id());
    }

    // required uint64 req_time = 2;
    if (has_req_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->req_time());
    }

    // required uint64 rsp_time = 3;
    if (has_rsp_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->rsp_time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LowHeartBeatRsp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LowHeartBeatRsp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LowHeartBeatRsp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LowHeartBeatRsp::MergeFrom(const LowHeartBeatRsp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_req_id()) {
      set_req_id(from.req_id());
    }
    if (from.has_req_time()) {
      set_req_time(from.req_time());
    }
    if (from.has_rsp_time()) {
      set_rsp_time(from.rsp_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LowHeartBeatRsp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LowHeartBeatRsp::CopyFrom(const LowHeartBeatRsp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LowHeartBeatRsp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void LowHeartBeatRsp::Swap(LowHeartBeatRsp* other) {
  if (other != this) {
    std::swap(req_id_, other->req_id_);
    std::swap(req_time_, other->req_time_);
    std::swap(rsp_time_, other->rsp_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LowHeartBeatRsp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LowHeartBeatRsp_descriptor_;
  metadata.reflection = LowHeartBeatRsp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace misc
}  // namespace msg
}  // namespace jzs

// @@protoc_insertion_point(global_scope)