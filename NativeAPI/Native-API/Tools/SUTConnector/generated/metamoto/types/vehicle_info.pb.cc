// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/vehicle_info.proto

#include "metamoto/types/vehicle_info.pb.h"

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

namespace protobuf_metamoto_2ftypes_2fvector3_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fvector3_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector3;
}  // namespace protobuf_metamoto_2ftypes_2fvector3_2eproto
namespace metamoto {
namespace types {
class VehicleInfoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VehicleInfo>
      _instance;
} _VehicleInfo_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto {
static void InitDefaultsVehicleInfo() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_VehicleInfo_default_instance_;
    new (ptr) ::metamoto::types::VehicleInfo();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::VehicleInfo::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_VehicleInfo =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsVehicleInfo}, {
      &protobuf_metamoto_2ftypes_2fvector3_2eproto::scc_info_Vector3.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VehicleInfo.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, max_steer_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, wheel_base_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, max_acceleration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, max_brake_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, coasting_deceleration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, dimensions_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, mass_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::VehicleInfo, type_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::types::VehicleInfo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_VehicleInfo_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/vehicle_info.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n!metamoto/types/vehicle_info.proto\022\016met"
      "amoto.types\032\034metamoto/types/vector3.prot"
      "o\032\034metamoto/types/vehicle.proto\"\355\001\n\013Vehi"
      "cleInfo\022\027\n\017max_steer_angle\030\001 \001(\002\022\022\n\nwhee"
      "l_base\030\002 \001(\002\022\030\n\020max_acceleration\030\003 \001(\002\022\021"
      "\n\tmax_brake\030\004 \001(\002\022\035\n\025coasting_decelerati"
      "on\030\005 \001(\002\022+\n\ndimensions\030\006 \001(\0132\027.metamoto."
      "types.Vector3\022\014\n\004mass\030\007 \001(\002\022*\n\004type\030\010 \001("
      "\0162\034.metamoto.types.Vehicle.TypeB\021\252\002\016Meta"
      "moto.Typesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 378);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/vehicle_info.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2fvector3_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto
namespace metamoto {
namespace types {

// ===================================================================

void VehicleInfo::InitAsDefaultInstance() {
  ::metamoto::types::_VehicleInfo_default_instance_._instance.get_mutable()->dimensions_ = const_cast< ::metamoto::types::Vector3*>(
      ::metamoto::types::Vector3::internal_default_instance());
}
void VehicleInfo::clear_dimensions() {
  if (GetArenaNoVirtual() == NULL && dimensions_ != NULL) {
    delete dimensions_;
  }
  dimensions_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VehicleInfo::kMaxSteerAngleFieldNumber;
const int VehicleInfo::kWheelBaseFieldNumber;
const int VehicleInfo::kMaxAccelerationFieldNumber;
const int VehicleInfo::kMaxBrakeFieldNumber;
const int VehicleInfo::kCoastingDecelerationFieldNumber;
const int VehicleInfo::kDimensionsFieldNumber;
const int VehicleInfo::kMassFieldNumber;
const int VehicleInfo::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VehicleInfo::VehicleInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto::scc_info_VehicleInfo.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.VehicleInfo)
}
VehicleInfo::VehicleInfo(const VehicleInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_dimensions()) {
    dimensions_ = new ::metamoto::types::Vector3(*from.dimensions_);
  } else {
    dimensions_ = NULL;
  }
  ::memcpy(&max_steer_angle_, &from.max_steer_angle_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&max_steer_angle_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:metamoto.types.VehicleInfo)
}

void VehicleInfo::SharedCtor() {
  ::memset(&dimensions_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&dimensions_)) + sizeof(type_));
}

VehicleInfo::~VehicleInfo() {
  // @@protoc_insertion_point(destructor:metamoto.types.VehicleInfo)
  SharedDtor();
}

void VehicleInfo::SharedDtor() {
  if (this != internal_default_instance()) delete dimensions_;
}

void VehicleInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VehicleInfo::descriptor() {
  ::protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VehicleInfo& VehicleInfo::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto::scc_info_VehicleInfo.base);
  return *internal_default_instance();
}


void VehicleInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.VehicleInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && dimensions_ != NULL) {
    delete dimensions_;
  }
  dimensions_ = NULL;
  ::memset(&max_steer_angle_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&max_steer_angle_)) + sizeof(type_));
  _internal_metadata_.Clear();
}

bool VehicleInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.VehicleInfo)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // float max_steer_angle = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(13u /* 13 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_steer_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float wheel_base = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &wheel_base_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float max_acceleration = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_acceleration_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float max_brake = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_brake_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float coasting_deceleration = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &coasting_deceleration_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Vector3 dimensions = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_dimensions()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float mass = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(61u /* 61 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &mass_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Vehicle.Type type = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::metamoto::types::Vehicle_Type >(value));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.VehicleInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.VehicleInfo)
  return false;
#undef DO_
}

void VehicleInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.VehicleInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float max_steer_angle = 1;
  if (this->max_steer_angle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->max_steer_angle(), output);
  }

  // float wheel_base = 2;
  if (this->wheel_base() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->wheel_base(), output);
  }

  // float max_acceleration = 3;
  if (this->max_acceleration() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->max_acceleration(), output);
  }

  // float max_brake = 4;
  if (this->max_brake() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->max_brake(), output);
  }

  // float coasting_deceleration = 5;
  if (this->coasting_deceleration() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->coasting_deceleration(), output);
  }

  // .metamoto.types.Vector3 dimensions = 6;
  if (this->has_dimensions()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_dimensions(), output);
  }

  // float mass = 7;
  if (this->mass() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(7, this->mass(), output);
  }

  // .metamoto.types.Vehicle.Type type = 8;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->type(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.VehicleInfo)
}

::google::protobuf::uint8* VehicleInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.VehicleInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // float max_steer_angle = 1;
  if (this->max_steer_angle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->max_steer_angle(), target);
  }

  // float wheel_base = 2;
  if (this->wheel_base() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->wheel_base(), target);
  }

  // float max_acceleration = 3;
  if (this->max_acceleration() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->max_acceleration(), target);
  }

  // float max_brake = 4;
  if (this->max_brake() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->max_brake(), target);
  }

  // float coasting_deceleration = 5;
  if (this->coasting_deceleration() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->coasting_deceleration(), target);
  }

  // .metamoto.types.Vector3 dimensions = 6;
  if (this->has_dimensions()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_dimensions(), deterministic, target);
  }

  // float mass = 7;
  if (this->mass() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(7, this->mass(), target);
  }

  // .metamoto.types.Vehicle.Type type = 8;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      8, this->type(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.VehicleInfo)
  return target;
}

size_t VehicleInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.VehicleInfo)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .metamoto.types.Vector3 dimensions = 6;
  if (this->has_dimensions()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *dimensions_);
  }

  // float max_steer_angle = 1;
  if (this->max_steer_angle() != 0) {
    total_size += 1 + 4;
  }

  // float wheel_base = 2;
  if (this->wheel_base() != 0) {
    total_size += 1 + 4;
  }

  // float max_acceleration = 3;
  if (this->max_acceleration() != 0) {
    total_size += 1 + 4;
  }

  // float max_brake = 4;
  if (this->max_brake() != 0) {
    total_size += 1 + 4;
  }

  // float coasting_deceleration = 5;
  if (this->coasting_deceleration() != 0) {
    total_size += 1 + 4;
  }

  // float mass = 7;
  if (this->mass() != 0) {
    total_size += 1 + 4;
  }

  // .metamoto.types.Vehicle.Type type = 8;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VehicleInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.VehicleInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const VehicleInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VehicleInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.VehicleInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.VehicleInfo)
    MergeFrom(*source);
  }
}

void VehicleInfo::MergeFrom(const VehicleInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.VehicleInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_dimensions()) {
    mutable_dimensions()->::metamoto::types::Vector3::MergeFrom(from.dimensions());
  }
  if (from.max_steer_angle() != 0) {
    set_max_steer_angle(from.max_steer_angle());
  }
  if (from.wheel_base() != 0) {
    set_wheel_base(from.wheel_base());
  }
  if (from.max_acceleration() != 0) {
    set_max_acceleration(from.max_acceleration());
  }
  if (from.max_brake() != 0) {
    set_max_brake(from.max_brake());
  }
  if (from.coasting_deceleration() != 0) {
    set_coasting_deceleration(from.coasting_deceleration());
  }
  if (from.mass() != 0) {
    set_mass(from.mass());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void VehicleInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.VehicleInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VehicleInfo::CopyFrom(const VehicleInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.VehicleInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VehicleInfo::IsInitialized() const {
  return true;
}

void VehicleInfo::Swap(VehicleInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VehicleInfo::InternalSwap(VehicleInfo* other) {
  using std::swap;
  swap(dimensions_, other->dimensions_);
  swap(max_steer_angle_, other->max_steer_angle_);
  swap(wheel_base_, other->wheel_base_);
  swap(max_acceleration_, other->max_acceleration_);
  swap(max_brake_, other->max_brake_);
  swap(coasting_deceleration_, other->coasting_deceleration_);
  swap(mass_, other->mass_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VehicleInfo::GetMetadata() const {
  protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::VehicleInfo* Arena::CreateMaybeMessage< ::metamoto::types::VehicleInfo >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::VehicleInfo >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
