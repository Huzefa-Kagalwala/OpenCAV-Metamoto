// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/messages/ground_truth.proto

#include "metamoto/messages/ground_truth.pb.h"

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

namespace protobuf_metamoto_2ftypes_2fenvironment_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fenvironment_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_Environment;
}  // namespace protobuf_metamoto_2ftypes_2fenvironment_2eproto
namespace protobuf_metamoto_2ftypes_2fpedestrian_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fpedestrian_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_Pedestrian;
}  // namespace protobuf_metamoto_2ftypes_2fpedestrian_2eproto
namespace protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_TrafficLight;
}  // namespace protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto
namespace protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_TrafficSign;
}  // namespace protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto
namespace protobuf_metamoto_2ftypes_2fvehicle_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fvehicle_2eproto ::google::protobuf::internal::SCCInfo<5> scc_info_Vehicle;
}  // namespace protobuf_metamoto_2ftypes_2fvehicle_2eproto
namespace metamoto {
namespace messages {
class GroundTruthDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GroundTruth>
      _instance;
} _GroundTruth_default_instance_;
}  // namespace messages
}  // namespace metamoto
namespace protobuf_metamoto_2fmessages_2fground_5ftruth_2eproto {
static void InitDefaultsGroundTruth() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::messages::_GroundTruth_default_instance_;
    new (ptr) ::metamoto::messages::GroundTruth();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::messages::GroundTruth::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<5> scc_info_GroundTruth =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsGroundTruth}, {
      &protobuf_metamoto_2ftypes_2fenvironment_2eproto::scc_info_Environment.base,
      &protobuf_metamoto_2ftypes_2fvehicle_2eproto::scc_info_Vehicle.base,
      &protobuf_metamoto_2ftypes_2fpedestrian_2eproto::scc_info_Pedestrian.base,
      &protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::scc_info_TrafficLight.base,
      &protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto::scc_info_TrafficSign.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_GroundTruth.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GroundTruth, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GroundTruth, environment_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GroundTruth, ego_vehicle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GroundTruth, vehicles_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GroundTruth, pedestrians_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GroundTruth, traffic_lights_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GroundTruth, traffic_signs_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::messages::GroundTruth, ego_vehicles_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::messages::GroundTruth)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::messages::_GroundTruth_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/messages/ground_truth.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n$metamoto/messages/ground_truth.proto\022\021"
      "metamoto.messages\032 metamoto/types/enviro"
      "nment.proto\032\037metamoto/types/pedestrian.p"
      "roto\032!metamoto/types/traffic_sign.proto\032"
      "\"metamoto/types/traffic_light.proto\032\034met"
      "amoto/types/vehicle.proto\"\342\002\n\013GroundTrut"
      "h\0220\n\013environment\030\001 \001(\0132\033.metamoto.types."
      "Environment\022,\n\013ego_vehicle\030\002 \001(\0132\027.metam"
      "oto.types.Vehicle\022)\n\010vehicles\030\003 \003(\0132\027.me"
      "tamoto.types.Vehicle\022/\n\013pedestrians\030\004 \003("
      "\0132\032.metamoto.types.Pedestrian\0224\n\016traffic"
      "_lights\030\005 \003(\0132\034.metamoto.types.TrafficLi"
      "ght\0222\n\rtraffic_signs\030\006 \003(\0132\033.metamoto.ty"
      "pes.TrafficSign\022-\n\014ego_vehicles\030\007 \003(\0132\027."
      "metamoto.types.VehicleB\024\252\002\021Metamoto.Mess"
      "agesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 612);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/messages/ground_truth.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2fenvironment_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fpedestrian_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fvehicle_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2fmessages_2fground_5ftruth_2eproto
namespace metamoto {
namespace messages {

// ===================================================================

void GroundTruth::InitAsDefaultInstance() {
  ::metamoto::messages::_GroundTruth_default_instance_._instance.get_mutable()->environment_ = const_cast< ::metamoto::types::Environment*>(
      ::metamoto::types::Environment::internal_default_instance());
  ::metamoto::messages::_GroundTruth_default_instance_._instance.get_mutable()->ego_vehicle_ = const_cast< ::metamoto::types::Vehicle*>(
      ::metamoto::types::Vehicle::internal_default_instance());
}
void GroundTruth::clear_environment() {
  if (GetArenaNoVirtual() == NULL && environment_ != NULL) {
    delete environment_;
  }
  environment_ = NULL;
}
void GroundTruth::clear_ego_vehicle() {
  if (GetArenaNoVirtual() == NULL && ego_vehicle_ != NULL) {
    delete ego_vehicle_;
  }
  ego_vehicle_ = NULL;
}
void GroundTruth::clear_vehicles() {
  vehicles_.Clear();
}
void GroundTruth::clear_pedestrians() {
  pedestrians_.Clear();
}
void GroundTruth::clear_traffic_lights() {
  traffic_lights_.Clear();
}
void GroundTruth::clear_traffic_signs() {
  traffic_signs_.Clear();
}
void GroundTruth::clear_ego_vehicles() {
  ego_vehicles_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GroundTruth::kEnvironmentFieldNumber;
const int GroundTruth::kEgoVehicleFieldNumber;
const int GroundTruth::kVehiclesFieldNumber;
const int GroundTruth::kPedestriansFieldNumber;
const int GroundTruth::kTrafficLightsFieldNumber;
const int GroundTruth::kTrafficSignsFieldNumber;
const int GroundTruth::kEgoVehiclesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GroundTruth::GroundTruth()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2fmessages_2fground_5ftruth_2eproto::scc_info_GroundTruth.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.messages.GroundTruth)
}
GroundTruth::GroundTruth(const GroundTruth& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      vehicles_(from.vehicles_),
      pedestrians_(from.pedestrians_),
      traffic_lights_(from.traffic_lights_),
      traffic_signs_(from.traffic_signs_),
      ego_vehicles_(from.ego_vehicles_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_environment()) {
    environment_ = new ::metamoto::types::Environment(*from.environment_);
  } else {
    environment_ = NULL;
  }
  if (from.has_ego_vehicle()) {
    ego_vehicle_ = new ::metamoto::types::Vehicle(*from.ego_vehicle_);
  } else {
    ego_vehicle_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:metamoto.messages.GroundTruth)
}

void GroundTruth::SharedCtor() {
  ::memset(&environment_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&ego_vehicle_) -
      reinterpret_cast<char*>(&environment_)) + sizeof(ego_vehicle_));
}

GroundTruth::~GroundTruth() {
  // @@protoc_insertion_point(destructor:metamoto.messages.GroundTruth)
  SharedDtor();
}

void GroundTruth::SharedDtor() {
  if (this != internal_default_instance()) delete environment_;
  if (this != internal_default_instance()) delete ego_vehicle_;
}

void GroundTruth::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GroundTruth::descriptor() {
  ::protobuf_metamoto_2fmessages_2fground_5ftruth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2fmessages_2fground_5ftruth_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GroundTruth& GroundTruth::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2fmessages_2fground_5ftruth_2eproto::scc_info_GroundTruth.base);
  return *internal_default_instance();
}


void GroundTruth::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.messages.GroundTruth)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  vehicles_.Clear();
  pedestrians_.Clear();
  traffic_lights_.Clear();
  traffic_signs_.Clear();
  ego_vehicles_.Clear();
  if (GetArenaNoVirtual() == NULL && environment_ != NULL) {
    delete environment_;
  }
  environment_ = NULL;
  if (GetArenaNoVirtual() == NULL && ego_vehicle_ != NULL) {
    delete ego_vehicle_;
  }
  ego_vehicle_ = NULL;
  _internal_metadata_.Clear();
}

bool GroundTruth::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.messages.GroundTruth)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .metamoto.types.Environment environment = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_environment()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Vehicle ego_vehicle = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_ego_vehicle()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metamoto.types.Vehicle vehicles = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_vehicles()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metamoto.types.Pedestrian pedestrians = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_pedestrians()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metamoto.types.TrafficLight traffic_lights = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_traffic_lights()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metamoto.types.TrafficSign traffic_signs = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_traffic_signs()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metamoto.types.Vehicle ego_vehicles = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_ego_vehicles()));
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
  // @@protoc_insertion_point(parse_success:metamoto.messages.GroundTruth)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.messages.GroundTruth)
  return false;
#undef DO_
}

void GroundTruth::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.messages.GroundTruth)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Environment environment = 1;
  if (this->has_environment()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_environment(), output);
  }

  // .metamoto.types.Vehicle ego_vehicle = 2;
  if (this->has_ego_vehicle()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_ego_vehicle(), output);
  }

  // repeated .metamoto.types.Vehicle vehicles = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->vehicles_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->vehicles(static_cast<int>(i)),
      output);
  }

  // repeated .metamoto.types.Pedestrian pedestrians = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->pedestrians_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4,
      this->pedestrians(static_cast<int>(i)),
      output);
  }

  // repeated .metamoto.types.TrafficLight traffic_lights = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->traffic_lights_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5,
      this->traffic_lights(static_cast<int>(i)),
      output);
  }

  // repeated .metamoto.types.TrafficSign traffic_signs = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->traffic_signs_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6,
      this->traffic_signs(static_cast<int>(i)),
      output);
  }

  // repeated .metamoto.types.Vehicle ego_vehicles = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ego_vehicles_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7,
      this->ego_vehicles(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.messages.GroundTruth)
}

::google::protobuf::uint8* GroundTruth::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.messages.GroundTruth)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Environment environment = 1;
  if (this->has_environment()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_environment(), deterministic, target);
  }

  // .metamoto.types.Vehicle ego_vehicle = 2;
  if (this->has_ego_vehicle()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_ego_vehicle(), deterministic, target);
  }

  // repeated .metamoto.types.Vehicle vehicles = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->vehicles_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->vehicles(static_cast<int>(i)), deterministic, target);
  }

  // repeated .metamoto.types.Pedestrian pedestrians = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->pedestrians_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->pedestrians(static_cast<int>(i)), deterministic, target);
  }

  // repeated .metamoto.types.TrafficLight traffic_lights = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->traffic_lights_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->traffic_lights(static_cast<int>(i)), deterministic, target);
  }

  // repeated .metamoto.types.TrafficSign traffic_signs = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->traffic_signs_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->traffic_signs(static_cast<int>(i)), deterministic, target);
  }

  // repeated .metamoto.types.Vehicle ego_vehicles = 7;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->ego_vehicles_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->ego_vehicles(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.messages.GroundTruth)
  return target;
}

size_t GroundTruth::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.messages.GroundTruth)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .metamoto.types.Vehicle vehicles = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->vehicles_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->vehicles(static_cast<int>(i)));
    }
  }

  // repeated .metamoto.types.Pedestrian pedestrians = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->pedestrians_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->pedestrians(static_cast<int>(i)));
    }
  }

  // repeated .metamoto.types.TrafficLight traffic_lights = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->traffic_lights_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->traffic_lights(static_cast<int>(i)));
    }
  }

  // repeated .metamoto.types.TrafficSign traffic_signs = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->traffic_signs_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->traffic_signs(static_cast<int>(i)));
    }
  }

  // repeated .metamoto.types.Vehicle ego_vehicles = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->ego_vehicles_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->ego_vehicles(static_cast<int>(i)));
    }
  }

  // .metamoto.types.Environment environment = 1;
  if (this->has_environment()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *environment_);
  }

  // .metamoto.types.Vehicle ego_vehicle = 2;
  if (this->has_ego_vehicle()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *ego_vehicle_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GroundTruth::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.messages.GroundTruth)
  GOOGLE_DCHECK_NE(&from, this);
  const GroundTruth* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GroundTruth>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.messages.GroundTruth)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.messages.GroundTruth)
    MergeFrom(*source);
  }
}

void GroundTruth::MergeFrom(const GroundTruth& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.messages.GroundTruth)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  vehicles_.MergeFrom(from.vehicles_);
  pedestrians_.MergeFrom(from.pedestrians_);
  traffic_lights_.MergeFrom(from.traffic_lights_);
  traffic_signs_.MergeFrom(from.traffic_signs_);
  ego_vehicles_.MergeFrom(from.ego_vehicles_);
  if (from.has_environment()) {
    mutable_environment()->::metamoto::types::Environment::MergeFrom(from.environment());
  }
  if (from.has_ego_vehicle()) {
    mutable_ego_vehicle()->::metamoto::types::Vehicle::MergeFrom(from.ego_vehicle());
  }
}

void GroundTruth::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.messages.GroundTruth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GroundTruth::CopyFrom(const GroundTruth& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.messages.GroundTruth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroundTruth::IsInitialized() const {
  return true;
}

void GroundTruth::Swap(GroundTruth* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GroundTruth::InternalSwap(GroundTruth* other) {
  using std::swap;
  CastToBase(&vehicles_)->InternalSwap(CastToBase(&other->vehicles_));
  CastToBase(&pedestrians_)->InternalSwap(CastToBase(&other->pedestrians_));
  CastToBase(&traffic_lights_)->InternalSwap(CastToBase(&other->traffic_lights_));
  CastToBase(&traffic_signs_)->InternalSwap(CastToBase(&other->traffic_signs_));
  CastToBase(&ego_vehicles_)->InternalSwap(CastToBase(&other->ego_vehicles_));
  swap(environment_, other->environment_);
  swap(ego_vehicle_, other->ego_vehicle_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GroundTruth::GetMetadata() const {
  protobuf_metamoto_2fmessages_2fground_5ftruth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2fmessages_2fground_5ftruth_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messages
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::messages::GroundTruth* Arena::CreateMaybeMessage< ::metamoto::messages::GroundTruth >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::messages::GroundTruth >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)