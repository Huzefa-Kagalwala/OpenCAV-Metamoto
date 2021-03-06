// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/waypoint.proto

#include "metamoto/types/waypoint.pb.h"

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

namespace protobuf_google_2fprotobuf_2fwrappers_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fprotobuf_2fwrappers_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_FloatValue;
}  // namespace protobuf_google_2fprotobuf_2fwrappers_2eproto
namespace protobuf_metamoto_2ftypes_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fpose_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Pose;
}  // namespace protobuf_metamoto_2ftypes_2fpose_2eproto
namespace protobuf_metamoto_2ftypes_2froads_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2froads_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_RoadPoint;
}  // namespace protobuf_metamoto_2ftypes_2froads_2eproto
namespace metamoto {
namespace types {
class WaypointDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Waypoint>
      _instance;
  const ::metamoto::types::Pose* world_point_;
  const ::metamoto::types::RoadPoint* road_point_;
} _Waypoint_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2fwaypoint_2eproto {
static void InitDefaultsWaypoint() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_Waypoint_default_instance_;
    new (ptr) ::metamoto::types::Waypoint();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::Waypoint::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_Waypoint =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsWaypoint}, {
      &protobuf_metamoto_2ftypes_2fpose_2eproto::scc_info_Pose.base,
      &protobuf_metamoto_2ftypes_2froads_2eproto::scc_info_RoadPoint.base,
      &protobuf_google_2fprotobuf_2fwrappers_2eproto::scc_info_FloatValue.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Waypoint.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::Waypoint, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::Waypoint, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(::metamoto::types::WaypointDefaultTypeInternal, world_point_),
  offsetof(::metamoto::types::WaypointDefaultTypeInternal, road_point_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::Waypoint, target_speed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::Waypoint, pure_pursuit_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::Waypoint, idle_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::Waypoint, relative_object_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::Waypoint, point_oneof_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::types::Waypoint)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_Waypoint_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/waypoint.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\035metamoto/types/waypoint.proto\022\016metamot"
      "o.types\032\036google/protobuf/wrappers.proto\032"
      "\032metamoto/types/roads.proto\032\031metamoto/ty"
      "pes/pose.proto\"\357\001\n\010Waypoint\022+\n\013world_poi"
      "nt\030\001 \001(\0132\024.metamoto.types.PoseH\000\022/\n\nroad"
      "_point\030\002 \001(\0132\031.metamoto.types.RoadPointH"
      "\000\0221\n\014target_speed\030\003 \001(\0132\033.google.protobu"
      "f.FloatValue\022\024\n\014pure_pursuit\030\004 \001(\010\022\021\n\tid"
      "le_time\030\005 \001(\002\022\032\n\022relative_object_id\030\006 \001("
      "\tB\r\n\013point_oneofB\021\252\002\016Metamoto.Typesb\006pro"
      "to3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 403);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/waypoint.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2fwrappers_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2froads_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fpose_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2ftypes_2fwaypoint_2eproto
namespace metamoto {
namespace types {

// ===================================================================

void Waypoint::InitAsDefaultInstance() {
  ::metamoto::types::_Waypoint_default_instance_.world_point_ = const_cast< ::metamoto::types::Pose*>(
      ::metamoto::types::Pose::internal_default_instance());
  ::metamoto::types::_Waypoint_default_instance_.road_point_ = const_cast< ::metamoto::types::RoadPoint*>(
      ::metamoto::types::RoadPoint::internal_default_instance());
  ::metamoto::types::_Waypoint_default_instance_._instance.get_mutable()->target_speed_ = const_cast< ::google::protobuf::FloatValue*>(
      ::google::protobuf::FloatValue::internal_default_instance());
}
void Waypoint::set_allocated_world_point(::metamoto::types::Pose* world_point) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_point_oneof();
  if (world_point) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      world_point = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, world_point, submessage_arena);
    }
    set_has_world_point();
    point_oneof_.world_point_ = world_point;
  }
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Waypoint.world_point)
}
void Waypoint::clear_world_point() {
  if (has_world_point()) {
    delete point_oneof_.world_point_;
    clear_has_point_oneof();
  }
}
void Waypoint::set_allocated_road_point(::metamoto::types::RoadPoint* road_point) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  clear_point_oneof();
  if (road_point) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      road_point = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, road_point, submessage_arena);
    }
    set_has_road_point();
    point_oneof_.road_point_ = road_point;
  }
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Waypoint.road_point)
}
void Waypoint::clear_road_point() {
  if (has_road_point()) {
    delete point_oneof_.road_point_;
    clear_has_point_oneof();
  }
}
void Waypoint::clear_target_speed() {
  if (GetArenaNoVirtual() == NULL && target_speed_ != NULL) {
    delete target_speed_;
  }
  target_speed_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Waypoint::kWorldPointFieldNumber;
const int Waypoint::kRoadPointFieldNumber;
const int Waypoint::kTargetSpeedFieldNumber;
const int Waypoint::kPurePursuitFieldNumber;
const int Waypoint::kIdleTimeFieldNumber;
const int Waypoint::kRelativeObjectIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Waypoint::Waypoint()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2fwaypoint_2eproto::scc_info_Waypoint.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.Waypoint)
}
Waypoint::Waypoint(const Waypoint& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  relative_object_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.relative_object_id().size() > 0) {
    relative_object_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.relative_object_id_);
  }
  if (from.has_target_speed()) {
    target_speed_ = new ::google::protobuf::FloatValue(*from.target_speed_);
  } else {
    target_speed_ = NULL;
  }
  ::memcpy(&pure_pursuit_, &from.pure_pursuit_,
    static_cast<size_t>(reinterpret_cast<char*>(&idle_time_) -
    reinterpret_cast<char*>(&pure_pursuit_)) + sizeof(idle_time_));
  clear_has_point_oneof();
  switch (from.point_oneof_case()) {
    case kWorldPoint: {
      mutable_world_point()->::metamoto::types::Pose::MergeFrom(from.world_point());
      break;
    }
    case kRoadPoint: {
      mutable_road_point()->::metamoto::types::RoadPoint::MergeFrom(from.road_point());
      break;
    }
    case POINT_ONEOF_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:metamoto.types.Waypoint)
}

void Waypoint::SharedCtor() {
  relative_object_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&target_speed_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&idle_time_) -
      reinterpret_cast<char*>(&target_speed_)) + sizeof(idle_time_));
  clear_has_point_oneof();
}

Waypoint::~Waypoint() {
  // @@protoc_insertion_point(destructor:metamoto.types.Waypoint)
  SharedDtor();
}

void Waypoint::SharedDtor() {
  relative_object_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete target_speed_;
  if (has_point_oneof()) {
    clear_point_oneof();
  }
}

void Waypoint::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Waypoint::descriptor() {
  ::protobuf_metamoto_2ftypes_2fwaypoint_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fwaypoint_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Waypoint& Waypoint::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2fwaypoint_2eproto::scc_info_Waypoint.base);
  return *internal_default_instance();
}


void Waypoint::clear_point_oneof() {
// @@protoc_insertion_point(one_of_clear_start:metamoto.types.Waypoint)
  switch (point_oneof_case()) {
    case kWorldPoint: {
      delete point_oneof_.world_point_;
      break;
    }
    case kRoadPoint: {
      delete point_oneof_.road_point_;
      break;
    }
    case POINT_ONEOF_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = POINT_ONEOF_NOT_SET;
}


void Waypoint::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.Waypoint)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  relative_object_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && target_speed_ != NULL) {
    delete target_speed_;
  }
  target_speed_ = NULL;
  ::memset(&pure_pursuit_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&idle_time_) -
      reinterpret_cast<char*>(&pure_pursuit_)) + sizeof(idle_time_));
  clear_point_oneof();
  _internal_metadata_.Clear();
}

bool Waypoint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.Waypoint)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .metamoto.types.Pose world_point = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_world_point()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.RoadPoint road_point = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_road_point()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.FloatValue target_speed = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_target_speed()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool pure_pursuit = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &pure_pursuit_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float idle_time = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &idle_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string relative_object_id = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_relative_object_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->relative_object_id().data(), static_cast<int>(this->relative_object_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.Waypoint.relative_object_id"));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.Waypoint)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.Waypoint)
  return false;
#undef DO_
}

void Waypoint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.Waypoint)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Pose world_point = 1;
  if (has_world_point()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_world_point(), output);
  }

  // .metamoto.types.RoadPoint road_point = 2;
  if (has_road_point()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_road_point(), output);
  }

  // .google.protobuf.FloatValue target_speed = 3;
  if (this->has_target_speed()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_target_speed(), output);
  }

  // bool pure_pursuit = 4;
  if (this->pure_pursuit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->pure_pursuit(), output);
  }

  // float idle_time = 5;
  if (this->idle_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->idle_time(), output);
  }

  // string relative_object_id = 6;
  if (this->relative_object_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->relative_object_id().data(), static_cast<int>(this->relative_object_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.Waypoint.relative_object_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->relative_object_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.Waypoint)
}

::google::protobuf::uint8* Waypoint::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.Waypoint)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Pose world_point = 1;
  if (has_world_point()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_world_point(), deterministic, target);
  }

  // .metamoto.types.RoadPoint road_point = 2;
  if (has_road_point()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_road_point(), deterministic, target);
  }

  // .google.protobuf.FloatValue target_speed = 3;
  if (this->has_target_speed()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_target_speed(), deterministic, target);
  }

  // bool pure_pursuit = 4;
  if (this->pure_pursuit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->pure_pursuit(), target);
  }

  // float idle_time = 5;
  if (this->idle_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->idle_time(), target);
  }

  // string relative_object_id = 6;
  if (this->relative_object_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->relative_object_id().data(), static_cast<int>(this->relative_object_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.Waypoint.relative_object_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->relative_object_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.Waypoint)
  return target;
}

size_t Waypoint::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.Waypoint)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string relative_object_id = 6;
  if (this->relative_object_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->relative_object_id());
  }

  // .google.protobuf.FloatValue target_speed = 3;
  if (this->has_target_speed()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *target_speed_);
  }

  // bool pure_pursuit = 4;
  if (this->pure_pursuit() != 0) {
    total_size += 1 + 1;
  }

  // float idle_time = 5;
  if (this->idle_time() != 0) {
    total_size += 1 + 4;
  }

  switch (point_oneof_case()) {
    // .metamoto.types.Pose world_point = 1;
    case kWorldPoint: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *point_oneof_.world_point_);
      break;
    }
    // .metamoto.types.RoadPoint road_point = 2;
    case kRoadPoint: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *point_oneof_.road_point_);
      break;
    }
    case POINT_ONEOF_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Waypoint::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.Waypoint)
  GOOGLE_DCHECK_NE(&from, this);
  const Waypoint* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Waypoint>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.Waypoint)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.Waypoint)
    MergeFrom(*source);
  }
}

void Waypoint::MergeFrom(const Waypoint& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.Waypoint)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.relative_object_id().size() > 0) {

    relative_object_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.relative_object_id_);
  }
  if (from.has_target_speed()) {
    mutable_target_speed()->::google::protobuf::FloatValue::MergeFrom(from.target_speed());
  }
  if (from.pure_pursuit() != 0) {
    set_pure_pursuit(from.pure_pursuit());
  }
  if (from.idle_time() != 0) {
    set_idle_time(from.idle_time());
  }
  switch (from.point_oneof_case()) {
    case kWorldPoint: {
      mutable_world_point()->::metamoto::types::Pose::MergeFrom(from.world_point());
      break;
    }
    case kRoadPoint: {
      mutable_road_point()->::metamoto::types::RoadPoint::MergeFrom(from.road_point());
      break;
    }
    case POINT_ONEOF_NOT_SET: {
      break;
    }
  }
}

void Waypoint::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.Waypoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Waypoint::CopyFrom(const Waypoint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.Waypoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Waypoint::IsInitialized() const {
  return true;
}

void Waypoint::Swap(Waypoint* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Waypoint::InternalSwap(Waypoint* other) {
  using std::swap;
  relative_object_id_.Swap(&other->relative_object_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(target_speed_, other->target_speed_);
  swap(pure_pursuit_, other->pure_pursuit_);
  swap(idle_time_, other->idle_time_);
  swap(point_oneof_, other->point_oneof_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Waypoint::GetMetadata() const {
  protobuf_metamoto_2ftypes_2fwaypoint_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fwaypoint_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::Waypoint* Arena::CreateMaybeMessage< ::metamoto::types::Waypoint >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::Waypoint >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
