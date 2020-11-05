// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/service_description.proto

#include "metamoto/types/service_description.pb.h"

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
namespace types {
class ServiceDescriptionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ServiceDescription>
      _instance;
} _ServiceDescription_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2fservice_5fdescription_2eproto {
static void InitDefaultsServiceDescription() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_ServiceDescription_default_instance_;
    new (ptr) ::metamoto::types::ServiceDescription();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::ServiceDescription::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ServiceDescription =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsServiceDescription}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ServiceDescription.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::ServiceDescription, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::ServiceDescription, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::ServiceDescription, uri_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::types::ServiceDescription)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_ServiceDescription_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/service_description.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n(metamoto/types/service_description.pro"
      "to\022\016metamoto.types\"/\n\022ServiceDescription"
      "\022\014\n\004name\030\001 \001(\t\022\013\n\003uri\030\002 \001(\tB\021\252\002\016Metamoto"
      ".Typesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 134);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/service_description.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_metamoto_2ftypes_2fservice_5fdescription_2eproto
namespace metamoto {
namespace types {

// ===================================================================

void ServiceDescription::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServiceDescription::kNameFieldNumber;
const int ServiceDescription::kUriFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServiceDescription::ServiceDescription()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2fservice_5fdescription_2eproto::scc_info_ServiceDescription.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.ServiceDescription)
}
ServiceDescription::ServiceDescription(const ServiceDescription& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  uri_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uri().size() > 0) {
    uri_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uri_);
  }
  // @@protoc_insertion_point(copy_constructor:metamoto.types.ServiceDescription)
}

void ServiceDescription::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uri_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ServiceDescription::~ServiceDescription() {
  // @@protoc_insertion_point(destructor:metamoto.types.ServiceDescription)
  SharedDtor();
}

void ServiceDescription::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uri_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ServiceDescription::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ServiceDescription::descriptor() {
  ::protobuf_metamoto_2ftypes_2fservice_5fdescription_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fservice_5fdescription_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ServiceDescription& ServiceDescription::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2fservice_5fdescription_2eproto::scc_info_ServiceDescription.base);
  return *internal_default_instance();
}


void ServiceDescription::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.ServiceDescription)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool ServiceDescription::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.ServiceDescription)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.ServiceDescription.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string uri = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uri()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uri().data(), static_cast<int>(this->uri().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.ServiceDescription.uri"));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.ServiceDescription)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.ServiceDescription)
  return false;
#undef DO_
}

void ServiceDescription::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.ServiceDescription)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.ServiceDescription.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string uri = 2;
  if (this->uri().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uri().data(), static_cast<int>(this->uri().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.ServiceDescription.uri");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->uri(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.ServiceDescription)
}

::google::protobuf::uint8* ServiceDescription::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.ServiceDescription)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.ServiceDescription.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string uri = 2;
  if (this->uri().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uri().data(), static_cast<int>(this->uri().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.ServiceDescription.uri");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->uri(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.ServiceDescription)
  return target;
}

size_t ServiceDescription::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.ServiceDescription)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string uri = 2;
  if (this->uri().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uri());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServiceDescription::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.ServiceDescription)
  GOOGLE_DCHECK_NE(&from, this);
  const ServiceDescription* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ServiceDescription>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.ServiceDescription)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.ServiceDescription)
    MergeFrom(*source);
  }
}

void ServiceDescription::MergeFrom(const ServiceDescription& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.ServiceDescription)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.uri().size() > 0) {

    uri_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uri_);
  }
}

void ServiceDescription::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.ServiceDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServiceDescription::CopyFrom(const ServiceDescription& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.ServiceDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServiceDescription::IsInitialized() const {
  return true;
}

void ServiceDescription::Swap(ServiceDescription* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServiceDescription::InternalSwap(ServiceDescription* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  uri_.Swap(&other->uri_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ServiceDescription::GetMetadata() const {
  protobuf_metamoto_2ftypes_2fservice_5fdescription_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fservice_5fdescription_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::ServiceDescription* Arena::CreateMaybeMessage< ::metamoto::types::ServiceDescription >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::ServiceDescription >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
