// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/traffic_light.proto

#include "metamoto/types/traffic_light.pb.h"

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

namespace protobuf_metamoto_2ftypes_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fpose_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Pose;
}  // namespace protobuf_metamoto_2ftypes_2fpose_2eproto
namespace protobuf_metamoto_2ftypes_2fshape_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fshape_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Shape;
}  // namespace protobuf_metamoto_2ftypes_2fshape_2eproto
namespace protobuf_metamoto_2ftypes_2fsignal_5fconfiguration_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fsignal_5fconfiguration_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_SignalConfiguration_Signal_BulbType;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fsignal_5fconfiguration_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_SignalConfiguration_Signal_SignalState;
}  // namespace protobuf_metamoto_2ftypes_2fsignal_5fconfiguration_2eproto
namespace metamoto {
namespace types {
class TrafficLightDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TrafficLight>
      _instance;
} _TrafficLight_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto {
static void InitDefaultsTrafficLight() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_TrafficLight_default_instance_;
    new (ptr) ::metamoto::types::TrafficLight();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::TrafficLight::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<4> scc_info_TrafficLight =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 4, InitDefaultsTrafficLight}, {
      &protobuf_metamoto_2ftypes_2fpose_2eproto::scc_info_Pose.base,
      &protobuf_metamoto_2ftypes_2fshape_2eproto::scc_info_Shape.base,
      &protobuf_metamoto_2ftypes_2fsignal_5fconfiguration_2eproto::scc_info_SignalConfiguration_Signal_SignalState.base,
      &protobuf_metamoto_2ftypes_2fsignal_5fconfiguration_2eproto::scc_info_SignalConfiguration_Signal_BulbType.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TrafficLight.base);
}

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[3];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, signal_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, shape_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, color_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, mode_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, intersection_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, state_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TrafficLight, bulb_types_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::types::TrafficLight)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_TrafficLight_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/traffic_light.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n\"metamoto/types/traffic_light.proto\022\016me"
      "tamoto.types\032\031metamoto/types/pose.proto\032"
      "\032metamoto/types/shape.proto\032)metamoto/ty"
      "pes/signal_configuration.proto\"\303\005\n\014Traff"
      "icLight\022\n\n\002id\030\001 \001(\t\022\021\n\tsignal_id\030\002 \001(\t\022\""
      "\n\004pose\030\003 \001(\0132\024.metamoto.types.Pose\022$\n\005sh"
      "ape\030\004 \001(\0132\025.metamoto.types.Shape\022/\n\004type"
      "\030\005 \001(\0162!.metamoto.types.TrafficLight.Typ"
      "e\0221\n\005color\030\006 \001(\0162\".metamoto.types.Traffi"
      "cLight.Color\022/\n\004mode\030\007 \001(\0162!.metamoto.ty"
      "pes.TrafficLight.Mode\022\027\n\017intersection_id"
      "\030\010 \001(\t\022E\n\005state\030\t \001(\01326.metamoto.types.S"
      "ignalConfiguration.Signal.SignalState\022G\n"
      "\nbulb_types\030\n \003(\01323.metamoto.types.Signa"
      "lConfiguration.Signal.BulbType\"p\n\004Type\022\020"
      "\n\014TYPE_UNKNOWN\020\000\022\016\n\nTYPE_OTHER\020\001\022\n\n\006NORM"
      "AL\020\002\022\010\n\004LEFT\020\003\022\021\n\rLEFT_STRAIGHT\020\004\022\t\n\005RIG"
      "HT\020\005\022\022\n\016RIGHT_STRAIGHT\020\006\"K\n\005Color\022\021\n\rCOL"
      "OR_UNKNOWN\020\000\022\017\n\013COLOR_OTHER\020\001\022\007\n\003RED\020\002\022\n"
      "\n\006YELLOW\020\003\022\t\n\005GREEN\020\004\"M\n\004Mode\022\020\n\014MODE_UN"
      "KNOWN\020\000\022\016\n\nMODE_OTHER\020\001\022\007\n\003OFF\020\002\022\014\n\010CONS"
      "TANT\020\003\022\014\n\010BLINKING\020\004B\021\252\002\016Metamoto.Typesb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 887);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/traffic_light.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2fpose_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fshape_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fsignal_5fconfiguration_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto
namespace metamoto {
namespace types {
const ::google::protobuf::EnumDescriptor* TrafficLight_Type_descriptor() {
  protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::file_level_enum_descriptors[0];
}
bool TrafficLight_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const TrafficLight_Type TrafficLight::TYPE_UNKNOWN;
const TrafficLight_Type TrafficLight::TYPE_OTHER;
const TrafficLight_Type TrafficLight::NORMAL;
const TrafficLight_Type TrafficLight::LEFT;
const TrafficLight_Type TrafficLight::LEFT_STRAIGHT;
const TrafficLight_Type TrafficLight::RIGHT;
const TrafficLight_Type TrafficLight::RIGHT_STRAIGHT;
const TrafficLight_Type TrafficLight::Type_MIN;
const TrafficLight_Type TrafficLight::Type_MAX;
const int TrafficLight::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* TrafficLight_Color_descriptor() {
  protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::file_level_enum_descriptors[1];
}
bool TrafficLight_Color_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const TrafficLight_Color TrafficLight::COLOR_UNKNOWN;
const TrafficLight_Color TrafficLight::COLOR_OTHER;
const TrafficLight_Color TrafficLight::RED;
const TrafficLight_Color TrafficLight::YELLOW;
const TrafficLight_Color TrafficLight::GREEN;
const TrafficLight_Color TrafficLight::Color_MIN;
const TrafficLight_Color TrafficLight::Color_MAX;
const int TrafficLight::Color_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* TrafficLight_Mode_descriptor() {
  protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::file_level_enum_descriptors[2];
}
bool TrafficLight_Mode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const TrafficLight_Mode TrafficLight::MODE_UNKNOWN;
const TrafficLight_Mode TrafficLight::MODE_OTHER;
const TrafficLight_Mode TrafficLight::OFF;
const TrafficLight_Mode TrafficLight::CONSTANT;
const TrafficLight_Mode TrafficLight::BLINKING;
const TrafficLight_Mode TrafficLight::Mode_MIN;
const TrafficLight_Mode TrafficLight::Mode_MAX;
const int TrafficLight::Mode_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void TrafficLight::InitAsDefaultInstance() {
  ::metamoto::types::_TrafficLight_default_instance_._instance.get_mutable()->pose_ = const_cast< ::metamoto::types::Pose*>(
      ::metamoto::types::Pose::internal_default_instance());
  ::metamoto::types::_TrafficLight_default_instance_._instance.get_mutable()->shape_ = const_cast< ::metamoto::types::Shape*>(
      ::metamoto::types::Shape::internal_default_instance());
  ::metamoto::types::_TrafficLight_default_instance_._instance.get_mutable()->state_ = const_cast< ::metamoto::types::SignalConfiguration_Signal_SignalState*>(
      ::metamoto::types::SignalConfiguration_Signal_SignalState::internal_default_instance());
}
void TrafficLight::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
void TrafficLight::clear_shape() {
  if (GetArenaNoVirtual() == NULL && shape_ != NULL) {
    delete shape_;
  }
  shape_ = NULL;
}
void TrafficLight::clear_state() {
  if (GetArenaNoVirtual() == NULL && state_ != NULL) {
    delete state_;
  }
  state_ = NULL;
}
void TrafficLight::clear_bulb_types() {
  bulb_types_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TrafficLight::kIdFieldNumber;
const int TrafficLight::kSignalIdFieldNumber;
const int TrafficLight::kPoseFieldNumber;
const int TrafficLight::kShapeFieldNumber;
const int TrafficLight::kTypeFieldNumber;
const int TrafficLight::kColorFieldNumber;
const int TrafficLight::kModeFieldNumber;
const int TrafficLight::kIntersectionIdFieldNumber;
const int TrafficLight::kStateFieldNumber;
const int TrafficLight::kBulbTypesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TrafficLight::TrafficLight()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::scc_info_TrafficLight.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.TrafficLight)
}
TrafficLight::TrafficLight(const TrafficLight& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      bulb_types_(from.bulb_types_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  signal_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.signal_id().size() > 0) {
    signal_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.signal_id_);
  }
  intersection_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.intersection_id().size() > 0) {
    intersection_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.intersection_id_);
  }
  if (from.has_pose()) {
    pose_ = new ::metamoto::types::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  if (from.has_shape()) {
    shape_ = new ::metamoto::types::Shape(*from.shape_);
  } else {
    shape_ = NULL;
  }
  if (from.has_state()) {
    state_ = new ::metamoto::types::SignalConfiguration_Signal_SignalState(*from.state_);
  } else {
    state_ = NULL;
  }
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&mode_) -
    reinterpret_cast<char*>(&type_)) + sizeof(mode_));
  // @@protoc_insertion_point(copy_constructor:metamoto.types.TrafficLight)
}

void TrafficLight::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signal_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  intersection_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&mode_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(mode_));
}

TrafficLight::~TrafficLight() {
  // @@protoc_insertion_point(destructor:metamoto.types.TrafficLight)
  SharedDtor();
}

void TrafficLight::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signal_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  intersection_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete shape_;
  if (this != internal_default_instance()) delete state_;
}

void TrafficLight::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TrafficLight::descriptor() {
  ::protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TrafficLight& TrafficLight::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::scc_info_TrafficLight.base);
  return *internal_default_instance();
}


void TrafficLight::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.TrafficLight)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  bulb_types_.Clear();
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  signal_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  intersection_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  if (GetArenaNoVirtual() == NULL && shape_ != NULL) {
    delete shape_;
  }
  shape_ = NULL;
  if (GetArenaNoVirtual() == NULL && state_ != NULL) {
    delete state_;
  }
  state_ = NULL;
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&mode_) -
      reinterpret_cast<char*>(&type_)) + sizeof(mode_));
  _internal_metadata_.Clear();
}

bool TrafficLight::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.TrafficLight)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.TrafficLight.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string signal_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_signal_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->signal_id().data(), static_cast<int>(this->signal_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.TrafficLight.signal_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Pose pose = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Shape shape = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_shape()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.TrafficLight.Type type = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::metamoto::types::TrafficLight_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.TrafficLight.Color color = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_color(static_cast< ::metamoto::types::TrafficLight_Color >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.TrafficLight.Mode mode = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_mode(static_cast< ::metamoto::types::TrafficLight_Mode >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string intersection_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_intersection_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->intersection_id().data(), static_cast<int>(this->intersection_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.TrafficLight.intersection_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.SignalConfiguration.Signal.SignalState state = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_state()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metamoto.types.SignalConfiguration.Signal.BulbType bulb_types = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_bulb_types()));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.TrafficLight)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.TrafficLight)
  return false;
#undef DO_
}

void TrafficLight::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.TrafficLight)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TrafficLight.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // string signal_id = 2;
  if (this->signal_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->signal_id().data(), static_cast<int>(this->signal_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TrafficLight.signal_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->signal_id(), output);
  }

  // .metamoto.types.Pose pose = 3;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_pose(), output);
  }

  // .metamoto.types.Shape shape = 4;
  if (this->has_shape()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_shape(), output);
  }

  // .metamoto.types.TrafficLight.Type type = 5;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->type(), output);
  }

  // .metamoto.types.TrafficLight.Color color = 6;
  if (this->color() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->color(), output);
  }

  // .metamoto.types.TrafficLight.Mode mode = 7;
  if (this->mode() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->mode(), output);
  }

  // string intersection_id = 8;
  if (this->intersection_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->intersection_id().data(), static_cast<int>(this->intersection_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TrafficLight.intersection_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->intersection_id(), output);
  }

  // .metamoto.types.SignalConfiguration.Signal.SignalState state = 9;
  if (this->has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->_internal_state(), output);
  }

  // repeated .metamoto.types.SignalConfiguration.Signal.BulbType bulb_types = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->bulb_types_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10,
      this->bulb_types(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.TrafficLight)
}

::google::protobuf::uint8* TrafficLight::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.TrafficLight)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TrafficLight.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // string signal_id = 2;
  if (this->signal_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->signal_id().data(), static_cast<int>(this->signal_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TrafficLight.signal_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->signal_id(), target);
  }

  // .metamoto.types.Pose pose = 3;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_pose(), deterministic, target);
  }

  // .metamoto.types.Shape shape = 4;
  if (this->has_shape()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_shape(), deterministic, target);
  }

  // .metamoto.types.TrafficLight.Type type = 5;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->type(), target);
  }

  // .metamoto.types.TrafficLight.Color color = 6;
  if (this->color() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      6, this->color(), target);
  }

  // .metamoto.types.TrafficLight.Mode mode = 7;
  if (this->mode() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->mode(), target);
  }

  // string intersection_id = 8;
  if (this->intersection_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->intersection_id().data(), static_cast<int>(this->intersection_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TrafficLight.intersection_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->intersection_id(), target);
  }

  // .metamoto.types.SignalConfiguration.Signal.SignalState state = 9;
  if (this->has_state()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, this->_internal_state(), deterministic, target);
  }

  // repeated .metamoto.types.SignalConfiguration.Signal.BulbType bulb_types = 10;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->bulb_types_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        10, this->bulb_types(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.TrafficLight)
  return target;
}

size_t TrafficLight::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.TrafficLight)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .metamoto.types.SignalConfiguration.Signal.BulbType bulb_types = 10;
  {
    unsigned int count = static_cast<unsigned int>(this->bulb_types_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->bulb_types(static_cast<int>(i)));
    }
  }

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // string signal_id = 2;
  if (this->signal_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->signal_id());
  }

  // string intersection_id = 8;
  if (this->intersection_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->intersection_id());
  }

  // .metamoto.types.Pose pose = 3;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // .metamoto.types.Shape shape = 4;
  if (this->has_shape()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *shape_);
  }

  // .metamoto.types.SignalConfiguration.Signal.SignalState state = 9;
  if (this->has_state()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *state_);
  }

  // .metamoto.types.TrafficLight.Type type = 5;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // .metamoto.types.TrafficLight.Color color = 6;
  if (this->color() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->color());
  }

  // .metamoto.types.TrafficLight.Mode mode = 7;
  if (this->mode() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->mode());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TrafficLight::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.TrafficLight)
  GOOGLE_DCHECK_NE(&from, this);
  const TrafficLight* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TrafficLight>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.TrafficLight)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.TrafficLight)
    MergeFrom(*source);
  }
}

void TrafficLight::MergeFrom(const TrafficLight& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.TrafficLight)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  bulb_types_.MergeFrom(from.bulb_types_);
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.signal_id().size() > 0) {

    signal_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.signal_id_);
  }
  if (from.intersection_id().size() > 0) {

    intersection_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.intersection_id_);
  }
  if (from.has_pose()) {
    mutable_pose()->::metamoto::types::Pose::MergeFrom(from.pose());
  }
  if (from.has_shape()) {
    mutable_shape()->::metamoto::types::Shape::MergeFrom(from.shape());
  }
  if (from.has_state()) {
    mutable_state()->::metamoto::types::SignalConfiguration_Signal_SignalState::MergeFrom(from.state());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.color() != 0) {
    set_color(from.color());
  }
  if (from.mode() != 0) {
    set_mode(from.mode());
  }
}

void TrafficLight::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.TrafficLight)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrafficLight::CopyFrom(const TrafficLight& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.TrafficLight)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrafficLight::IsInitialized() const {
  return true;
}

void TrafficLight::Swap(TrafficLight* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TrafficLight::InternalSwap(TrafficLight* other) {
  using std::swap;
  CastToBase(&bulb_types_)->InternalSwap(CastToBase(&other->bulb_types_));
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  signal_id_.Swap(&other->signal_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  intersection_id_.Swap(&other->intersection_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(pose_, other->pose_);
  swap(shape_, other->shape_);
  swap(state_, other->state_);
  swap(type_, other->type_);
  swap(color_, other->color_);
  swap(mode_, other->mode_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TrafficLight::GetMetadata() const {
  protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::TrafficLight* Arena::CreateMaybeMessage< ::metamoto::types::TrafficLight >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::TrafficLight >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)