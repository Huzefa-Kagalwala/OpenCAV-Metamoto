// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/services/system.proto

#include "metamoto/services/system.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace metamoto {
namespace services {
class SystemGetResultsSizeRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SystemGetResultsSizeRequest>
      _instance;
} _SystemGetResultsSizeRequest_default_instance_;
class SystemGetResultsSizeReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SystemGetResultsSizeReply>
      _instance;
} _SystemGetResultsSizeReply_default_instance_;
}  // namespace services
}  // namespace metamoto
namespace protobuf_metamoto_2fservices_2fsystem_2eproto {
static void InitDefaultsSystemGetResultsSizeRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::services::_SystemGetResultsSizeRequest_default_instance_;
    new (ptr) ::metamoto::services::SystemGetResultsSizeRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::services::SystemGetResultsSizeRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SystemGetResultsSizeRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSystemGetResultsSizeRequest}, {}};

static void InitDefaultsSystemGetResultsSizeReply() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::services::_SystemGetResultsSizeReply_default_instance_;
    new (ptr) ::metamoto::services::SystemGetResultsSizeReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::services::SystemGetResultsSizeReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SystemGetResultsSizeReply =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSystemGetResultsSizeReply}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SystemGetResultsSizeRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_SystemGetResultsSizeReply.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::services::SystemGetResultsSizeRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::services::SystemGetResultsSizeReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::services::SystemGetResultsSizeReply, results_size_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::services::SystemGetResultsSizeRequest)},
  { 5, -1, sizeof(::metamoto::services::SystemGetResultsSizeReply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::services::_SystemGetResultsSizeRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::services::_SystemGetResultsSizeReply_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/services/system.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\036metamoto/services/system.proto\022\021metamo"
      "to.services\"\035\n\033SystemGetResultsSizeReque"
      "st\"1\n\031SystemGetResultsSizeReply\022\024\n\014resul"
      "ts_size\030\001 \001(\0032z\n\006System\022p\n\016GetResultsSiz"
      "e\022..metamoto.services.SystemGetResultsSi"
      "zeRequest\032,.metamoto.services.SystemGetR"
      "esultsSizeReply\"\000B\024\252\002\021Metamoto.Servicesb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 287);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/services/system.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_metamoto_2fservices_2fsystem_2eproto
namespace metamoto {
namespace services {

// ===================================================================

void SystemGetResultsSizeRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SystemGetResultsSizeRequest::SystemGetResultsSizeRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2fservices_2fsystem_2eproto::scc_info_SystemGetResultsSizeRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.services.SystemGetResultsSizeRequest)
}
SystemGetResultsSizeRequest::SystemGetResultsSizeRequest(const SystemGetResultsSizeRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:metamoto.services.SystemGetResultsSizeRequest)
}

void SystemGetResultsSizeRequest::SharedCtor() {
}

SystemGetResultsSizeRequest::~SystemGetResultsSizeRequest() {
  // @@protoc_insertion_point(destructor:metamoto.services.SystemGetResultsSizeRequest)
  SharedDtor();
}

void SystemGetResultsSizeRequest::SharedDtor() {
}

void SystemGetResultsSizeRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SystemGetResultsSizeRequest::descriptor() {
  ::protobuf_metamoto_2fservices_2fsystem_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2fservices_2fsystem_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SystemGetResultsSizeRequest& SystemGetResultsSizeRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2fservices_2fsystem_2eproto::scc_info_SystemGetResultsSizeRequest.base);
  return *internal_default_instance();
}


void SystemGetResultsSizeRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.services.SystemGetResultsSizeRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

bool SystemGetResultsSizeRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.services.SystemGetResultsSizeRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:metamoto.services.SystemGetResultsSizeRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.services.SystemGetResultsSizeRequest)
  return false;
#undef DO_
}

void SystemGetResultsSizeRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.services.SystemGetResultsSizeRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.services.SystemGetResultsSizeRequest)
}

::google::protobuf::uint8* SystemGetResultsSizeRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.services.SystemGetResultsSizeRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.services.SystemGetResultsSizeRequest)
  return target;
}

size_t SystemGetResultsSizeRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.services.SystemGetResultsSizeRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SystemGetResultsSizeRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.services.SystemGetResultsSizeRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const SystemGetResultsSizeRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SystemGetResultsSizeRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.services.SystemGetResultsSizeRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.services.SystemGetResultsSizeRequest)
    MergeFrom(*source);
  }
}

void SystemGetResultsSizeRequest::MergeFrom(const SystemGetResultsSizeRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.services.SystemGetResultsSizeRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void SystemGetResultsSizeRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.services.SystemGetResultsSizeRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemGetResultsSizeRequest::CopyFrom(const SystemGetResultsSizeRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.services.SystemGetResultsSizeRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemGetResultsSizeRequest::IsInitialized() const {
  return true;
}

void SystemGetResultsSizeRequest::Swap(SystemGetResultsSizeRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SystemGetResultsSizeRequest::InternalSwap(SystemGetResultsSizeRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SystemGetResultsSizeRequest::GetMetadata() const {
  protobuf_metamoto_2fservices_2fsystem_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2fservices_2fsystem_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void SystemGetResultsSizeReply::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SystemGetResultsSizeReply::kResultsSizeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SystemGetResultsSizeReply::SystemGetResultsSizeReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2fservices_2fsystem_2eproto::scc_info_SystemGetResultsSizeReply.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.services.SystemGetResultsSizeReply)
}
SystemGetResultsSizeReply::SystemGetResultsSizeReply(const SystemGetResultsSizeReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  results_size_ = from.results_size_;
  // @@protoc_insertion_point(copy_constructor:metamoto.services.SystemGetResultsSizeReply)
}

void SystemGetResultsSizeReply::SharedCtor() {
  results_size_ = GOOGLE_LONGLONG(0);
}

SystemGetResultsSizeReply::~SystemGetResultsSizeReply() {
  // @@protoc_insertion_point(destructor:metamoto.services.SystemGetResultsSizeReply)
  SharedDtor();
}

void SystemGetResultsSizeReply::SharedDtor() {
}

void SystemGetResultsSizeReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SystemGetResultsSizeReply::descriptor() {
  ::protobuf_metamoto_2fservices_2fsystem_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2fservices_2fsystem_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SystemGetResultsSizeReply& SystemGetResultsSizeReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2fservices_2fsystem_2eproto::scc_info_SystemGetResultsSizeReply.base);
  return *internal_default_instance();
}


void SystemGetResultsSizeReply::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.services.SystemGetResultsSizeReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  results_size_ = GOOGLE_LONGLONG(0);
  _internal_metadata_.Clear();
}

bool SystemGetResultsSizeReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.services.SystemGetResultsSizeReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 results_size = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &results_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:metamoto.services.SystemGetResultsSizeReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.services.SystemGetResultsSizeReply)
  return false;
#undef DO_
}

void SystemGetResultsSizeReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.services.SystemGetResultsSizeReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 results_size = 1;
  if (this->results_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->results_size(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.services.SystemGetResultsSizeReply)
}

::google::protobuf::uint8* SystemGetResultsSizeReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.services.SystemGetResultsSizeReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 results_size = 1;
  if (this->results_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->results_size(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.services.SystemGetResultsSizeReply)
  return target;
}

size_t SystemGetResultsSizeReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.services.SystemGetResultsSizeReply)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int64 results_size = 1;
  if (this->results_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->results_size());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SystemGetResultsSizeReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.services.SystemGetResultsSizeReply)
  GOOGLE_DCHECK_NE(&from, this);
  const SystemGetResultsSizeReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SystemGetResultsSizeReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.services.SystemGetResultsSizeReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.services.SystemGetResultsSizeReply)
    MergeFrom(*source);
  }
}

void SystemGetResultsSizeReply::MergeFrom(const SystemGetResultsSizeReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.services.SystemGetResultsSizeReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.results_size() != 0) {
    set_results_size(from.results_size());
  }
}

void SystemGetResultsSizeReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.services.SystemGetResultsSizeReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemGetResultsSizeReply::CopyFrom(const SystemGetResultsSizeReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.services.SystemGetResultsSizeReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemGetResultsSizeReply::IsInitialized() const {
  return true;
}

void SystemGetResultsSizeReply::Swap(SystemGetResultsSizeReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SystemGetResultsSizeReply::InternalSwap(SystemGetResultsSizeReply* other) {
  using std::swap;
  swap(results_size_, other->results_size_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SystemGetResultsSizeReply::GetMetadata() const {
  protobuf_metamoto_2fservices_2fsystem_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2fservices_2fsystem_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace services
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::services::SystemGetResultsSizeRequest* Arena::CreateMaybeMessage< ::metamoto::services::SystemGetResultsSizeRequest >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::services::SystemGetResultsSizeRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::services::SystemGetResultsSizeReply* Arena::CreateMaybeMessage< ::metamoto::services::SystemGetResultsSizeReply >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::services::SystemGetResultsSizeReply >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)