// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/vehicle_info.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2ftypes_2fvehicle_5finfo_2eproto
#define PROTOBUF_INCLUDED_metamoto_2ftypes_2fvehicle_5finfo_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "metamoto/types/vector3.pb.h"
#include "metamoto/types/vehicle.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto 

namespace protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto
namespace metamoto {
namespace types {
class VehicleInfo;
class VehicleInfoDefaultTypeInternal;
extern VehicleInfoDefaultTypeInternal _VehicleInfo_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::types::VehicleInfo* Arena::CreateMaybeMessage<::metamoto::types::VehicleInfo>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace types {

// ===================================================================

class VehicleInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.VehicleInfo) */ {
 public:
  VehicleInfo();
  virtual ~VehicleInfo();

  VehicleInfo(const VehicleInfo& from);

  inline VehicleInfo& operator=(const VehicleInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VehicleInfo(VehicleInfo&& from) noexcept
    : VehicleInfo() {
    *this = ::std::move(from);
  }

  inline VehicleInfo& operator=(VehicleInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const VehicleInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VehicleInfo* internal_default_instance() {
    return reinterpret_cast<const VehicleInfo*>(
               &_VehicleInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(VehicleInfo* other);
  friend void swap(VehicleInfo& a, VehicleInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VehicleInfo* New() const final {
    return CreateMaybeMessage<VehicleInfo>(NULL);
  }

  VehicleInfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VehicleInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const VehicleInfo& from);
  void MergeFrom(const VehicleInfo& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VehicleInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .metamoto.types.Vector3 dimensions = 6;
  bool has_dimensions() const;
  void clear_dimensions();
  static const int kDimensionsFieldNumber = 6;
  private:
  const ::metamoto::types::Vector3& _internal_dimensions() const;
  public:
  const ::metamoto::types::Vector3& dimensions() const;
  ::metamoto::types::Vector3* release_dimensions();
  ::metamoto::types::Vector3* mutable_dimensions();
  void set_allocated_dimensions(::metamoto::types::Vector3* dimensions);

  // float max_steer_angle = 1;
  void clear_max_steer_angle();
  static const int kMaxSteerAngleFieldNumber = 1;
  float max_steer_angle() const;
  void set_max_steer_angle(float value);

  // float wheel_base = 2;
  void clear_wheel_base();
  static const int kWheelBaseFieldNumber = 2;
  float wheel_base() const;
  void set_wheel_base(float value);

  // float max_acceleration = 3;
  void clear_max_acceleration();
  static const int kMaxAccelerationFieldNumber = 3;
  float max_acceleration() const;
  void set_max_acceleration(float value);

  // float max_brake = 4;
  void clear_max_brake();
  static const int kMaxBrakeFieldNumber = 4;
  float max_brake() const;
  void set_max_brake(float value);

  // float coasting_deceleration = 5;
  void clear_coasting_deceleration();
  static const int kCoastingDecelerationFieldNumber = 5;
  float coasting_deceleration() const;
  void set_coasting_deceleration(float value);

  // float mass = 7;
  void clear_mass();
  static const int kMassFieldNumber = 7;
  float mass() const;
  void set_mass(float value);

  // .metamoto.types.Vehicle.Type type = 8;
  void clear_type();
  static const int kTypeFieldNumber = 8;
  ::metamoto::types::Vehicle_Type type() const;
  void set_type(::metamoto::types::Vehicle_Type value);

  // @@protoc_insertion_point(class_scope:metamoto.types.VehicleInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::metamoto::types::Vector3* dimensions_;
  float max_steer_angle_;
  float wheel_base_;
  float max_acceleration_;
  float max_brake_;
  float coasting_deceleration_;
  float mass_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2ftypes_2fvehicle_5finfo_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VehicleInfo

// float max_steer_angle = 1;
inline void VehicleInfo::clear_max_steer_angle() {
  max_steer_angle_ = 0;
}
inline float VehicleInfo::max_steer_angle() const {
  // @@protoc_insertion_point(field_get:metamoto.types.VehicleInfo.max_steer_angle)
  return max_steer_angle_;
}
inline void VehicleInfo::set_max_steer_angle(float value) {
  
  max_steer_angle_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.VehicleInfo.max_steer_angle)
}

// float wheel_base = 2;
inline void VehicleInfo::clear_wheel_base() {
  wheel_base_ = 0;
}
inline float VehicleInfo::wheel_base() const {
  // @@protoc_insertion_point(field_get:metamoto.types.VehicleInfo.wheel_base)
  return wheel_base_;
}
inline void VehicleInfo::set_wheel_base(float value) {
  
  wheel_base_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.VehicleInfo.wheel_base)
}

// float max_acceleration = 3;
inline void VehicleInfo::clear_max_acceleration() {
  max_acceleration_ = 0;
}
inline float VehicleInfo::max_acceleration() const {
  // @@protoc_insertion_point(field_get:metamoto.types.VehicleInfo.max_acceleration)
  return max_acceleration_;
}
inline void VehicleInfo::set_max_acceleration(float value) {
  
  max_acceleration_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.VehicleInfo.max_acceleration)
}

// float max_brake = 4;
inline void VehicleInfo::clear_max_brake() {
  max_brake_ = 0;
}
inline float VehicleInfo::max_brake() const {
  // @@protoc_insertion_point(field_get:metamoto.types.VehicleInfo.max_brake)
  return max_brake_;
}
inline void VehicleInfo::set_max_brake(float value) {
  
  max_brake_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.VehicleInfo.max_brake)
}

// float coasting_deceleration = 5;
inline void VehicleInfo::clear_coasting_deceleration() {
  coasting_deceleration_ = 0;
}
inline float VehicleInfo::coasting_deceleration() const {
  // @@protoc_insertion_point(field_get:metamoto.types.VehicleInfo.coasting_deceleration)
  return coasting_deceleration_;
}
inline void VehicleInfo::set_coasting_deceleration(float value) {
  
  coasting_deceleration_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.VehicleInfo.coasting_deceleration)
}

// .metamoto.types.Vector3 dimensions = 6;
inline bool VehicleInfo::has_dimensions() const {
  return this != internal_default_instance() && dimensions_ != NULL;
}
inline const ::metamoto::types::Vector3& VehicleInfo::_internal_dimensions() const {
  return *dimensions_;
}
inline const ::metamoto::types::Vector3& VehicleInfo::dimensions() const {
  const ::metamoto::types::Vector3* p = dimensions_;
  // @@protoc_insertion_point(field_get:metamoto.types.VehicleInfo.dimensions)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Vector3*>(
      &::metamoto::types::_Vector3_default_instance_);
}
inline ::metamoto::types::Vector3* VehicleInfo::release_dimensions() {
  // @@protoc_insertion_point(field_release:metamoto.types.VehicleInfo.dimensions)
  
  ::metamoto::types::Vector3* temp = dimensions_;
  dimensions_ = NULL;
  return temp;
}
inline ::metamoto::types::Vector3* VehicleInfo::mutable_dimensions() {
  
  if (dimensions_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Vector3>(GetArenaNoVirtual());
    dimensions_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.VehicleInfo.dimensions)
  return dimensions_;
}
inline void VehicleInfo::set_allocated_dimensions(::metamoto::types::Vector3* dimensions) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(dimensions_);
  }
  if (dimensions) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      dimensions = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, dimensions, submessage_arena);
    }
    
  } else {
    
  }
  dimensions_ = dimensions;
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.VehicleInfo.dimensions)
}

// float mass = 7;
inline void VehicleInfo::clear_mass() {
  mass_ = 0;
}
inline float VehicleInfo::mass() const {
  // @@protoc_insertion_point(field_get:metamoto.types.VehicleInfo.mass)
  return mass_;
}
inline void VehicleInfo::set_mass(float value) {
  
  mass_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.VehicleInfo.mass)
}

// .metamoto.types.Vehicle.Type type = 8;
inline void VehicleInfo::clear_type() {
  type_ = 0;
}
inline ::metamoto::types::Vehicle_Type VehicleInfo::type() const {
  // @@protoc_insertion_point(field_get:metamoto.types.VehicleInfo.type)
  return static_cast< ::metamoto::types::Vehicle_Type >(type_);
}
inline void VehicleInfo::set_type(::metamoto::types::Vehicle_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.VehicleInfo.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace types
}  // namespace metamoto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2ftypes_2fvehicle_5finfo_2eproto