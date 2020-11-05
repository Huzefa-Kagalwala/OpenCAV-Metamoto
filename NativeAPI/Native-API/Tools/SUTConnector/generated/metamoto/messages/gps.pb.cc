// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/messages/gps.proto

#include "metamoto/messages/gps.pb.h"

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

namespace protobuf_metamoto_2ftypes_2fgeo_5fcoordinates_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fgeo_5fcoordinates_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_GeoCoordinates;
}  // namespace protobuf_metamoto_2ftypes_2fgeo_5fcoordinates_2eproto
namespace metamoto {
namespace messages {
class GPSDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GPS>
      _instance;
} _GPS_default_instance_;
}  // namespace messages
}  // namespace metamoto
namespace protobuf_metamoto_2fmessages_2fgps_2eproto {
static void InitDefaultsGPS() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::messages::_GPS_default_instance_;
    new (ptr) ::metamoto::messages::GPS();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::messages::GPS::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_GPS =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsGPS}, {
      &protobuf_metamoto_2ftypes_2fgeo_5fcoordinates_2eproto::scc_info_GeoCoordinates.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GPS.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GPS, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GPS, coordinate_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::messages::GPS)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::messages::_GPS_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/messages/gps.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\033metamoto/messages/gps.proto\022\021metamoto."
      "messages\032$metamoto/types/geo_coordinates"
      ".proto\"9\n\003GPS\0222\n\ncoordinate\030\001 \001(\0132\036.meta"
      "moto.types.GeoCoordinatesB\024\252\002\021Metamoto.M"
      "essagesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 175);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/messages/gps.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2fgeo_5fcoordinates_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2fmessages_2fgps_2eproto
namespace metamoto {
namespace messages {

// ===================================================================

void GPS::InitAsDefaultInstance() {
  ::metamoto::messages::_GPS_default_instance_._instance.get_mutable()->coordinate_ = const_cast< ::metamoto::types::GeoCoordinates*>(
      ::metamoto::types::GeoCoordinates::internal_default_instance());
}
void GPS::clear_coordinate() {
  if (GetArenaNoVirtual() == NULL && coordinate_ != NULL) {
    delete coordinate_;
  }
  coordinate_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GPS::kCoordinateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GPS::GPS()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2fmessages_2fgps_2eproto::scc_info_GPS.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.messages.GPS)
}
GPS::GPS(const GPS& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_coordinate()) {
    coordinate_ = new ::metamoto::types::GeoCoordinates(*from.coordinate_);
  } else {
    coordinate_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:metamoto.messages.GPS)
}

void GPS::SharedCtor() {
  coordinate_ = NULL;
}

GPS::~GPS() {
  // @@protoc_insertion_point(destructor:metamoto.messages.GPS)
  SharedDtor();
}

void GPS::SharedDtor() {
  if (this != internal_default_instance()) delete coordinate_;
}

void GPS::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GPS::descriptor() {
  ::protobuf_metamoto_2fmessages_2fgps_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2fmessages_2fgps_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GPS& GPS::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2fmessages_2fgps_2eproto::scc_info_GPS.base);
  return *internal_default_instance();
}


void GPS::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.messages.GPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && coordinate_ != NULL) {
    delete coordinate_;
  }
  coordinate_ = NULL;
  _internal_metadata_.Clear();
}

bool GPS::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.messages.GPS)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .metamoto.types.GeoCoordinates coordinate = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_coordinate()));
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
  // @@protoc_insertion_point(parse_success:metamoto.messages.GPS)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.messages.GPS)
  return false;
#undef DO_
}

void GPS::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.messages.GPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.GeoCoordinates coordinate = 1;
  if (this->has_coordinate()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_coordinate(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.messages.GPS)
}

::google::protobuf::uint8* GPS::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.messages.GPS)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.GeoCoordinates coordinate = 1;
  if (this->has_coordinate()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_coordinate(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.messages.GPS)
  return target;
}

size_t GPS::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.messages.GPS)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .metamoto.types.GeoCoordinates coordinate = 1;
  if (this->has_coordinate()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *coordinate_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GPS::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.messages.GPS)
  GOOGLE_DCHECK_NE(&from, this);
  const GPS* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GPS>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.messages.GPS)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.messages.GPS)
    MergeFrom(*source);
  }
}

void GPS::MergeFrom(const GPS& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.messages.GPS)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_coordinate()) {
    mutable_coordinate()->::metamoto::types::GeoCoordinates::MergeFrom(from.coordinate());
  }
}

void GPS::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.messages.GPS)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GPS::CopyFrom(const GPS& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.messages.GPS)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GPS::IsInitialized() const {
  return true;
}

void GPS::Swap(GPS* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GPS::InternalSwap(GPS* other) {
  using std::swap;
  swap(coordinate_, other->coordinate_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GPS::GetMetadata() const {
  protobuf_metamoto_2fmessages_2fgps_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2fmessages_2fgps_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::messages::GPS* Arena::CreateMaybeMessage< ::metamoto::messages::GPS >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::messages::GPS >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
