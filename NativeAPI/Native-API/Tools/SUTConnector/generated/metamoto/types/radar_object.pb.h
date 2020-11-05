// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/radar_object.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2ftypes_2fradar_5fobject_2eproto
#define PROTOBUF_INCLUDED_metamoto_2ftypes_2fradar_5fobject_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "metamoto/types/enumerations.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fradar_5fobject_2eproto 

namespace protobuf_metamoto_2ftypes_2fradar_5fobject_2eproto {
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
}  // namespace protobuf_metamoto_2ftypes_2fradar_5fobject_2eproto
namespace metamoto {
namespace types {
class RadarObject;
class RadarObjectDefaultTypeInternal;
extern RadarObjectDefaultTypeInternal _RadarObject_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::types::RadarObject* Arena::CreateMaybeMessage<::metamoto::types::RadarObject>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace types {

enum RadarObject_Status {
  RadarObject_Status_STATUS_UNKNOWN = 0,
  RadarObject_Status_STATUS_NEW_OBJECT = 1,
  RadarObject_Status_STATUS_UPDATED = 2,
  RadarObject_Status_STATUS_NOT_UPDATED = 3,
  RadarObject_Status_RadarObject_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  RadarObject_Status_RadarObject_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool RadarObject_Status_IsValid(int value);
const RadarObject_Status RadarObject_Status_Status_MIN = RadarObject_Status_STATUS_UNKNOWN;
const RadarObject_Status RadarObject_Status_Status_MAX = RadarObject_Status_STATUS_NOT_UPDATED;
const int RadarObject_Status_Status_ARRAYSIZE = RadarObject_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* RadarObject_Status_descriptor();
inline const ::std::string& RadarObject_Status_Name(RadarObject_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    RadarObject_Status_descriptor(), value);
}
inline bool RadarObject_Status_Parse(
    const ::std::string& name, RadarObject_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RadarObject_Status>(
    RadarObject_Status_descriptor(), name, value);
}
// ===================================================================

class RadarObject : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.RadarObject) */ {
 public:
  RadarObject();
  virtual ~RadarObject();

  RadarObject(const RadarObject& from);

  inline RadarObject& operator=(const RadarObject& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RadarObject(RadarObject&& from) noexcept
    : RadarObject() {
    *this = ::std::move(from);
  }

  inline RadarObject& operator=(RadarObject&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RadarObject& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RadarObject* internal_default_instance() {
    return reinterpret_cast<const RadarObject*>(
               &_RadarObject_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(RadarObject* other);
  friend void swap(RadarObject& a, RadarObject& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RadarObject* New() const final {
    return CreateMaybeMessage<RadarObject>(NULL);
  }

  RadarObject* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RadarObject>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RadarObject& from);
  void MergeFrom(const RadarObject& from);
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
  void InternalSwap(RadarObject* other);
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

  typedef RadarObject_Status Status;
  static const Status STATUS_UNKNOWN =
    RadarObject_Status_STATUS_UNKNOWN;
  static const Status STATUS_NEW_OBJECT =
    RadarObject_Status_STATUS_NEW_OBJECT;
  static const Status STATUS_UPDATED =
    RadarObject_Status_STATUS_UPDATED;
  static const Status STATUS_NOT_UPDATED =
    RadarObject_Status_STATUS_NOT_UPDATED;
  static inline bool Status_IsValid(int value) {
    return RadarObject_Status_IsValid(value);
  }
  static const Status Status_MIN =
    RadarObject_Status_Status_MIN;
  static const Status Status_MAX =
    RadarObject_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    RadarObject_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return RadarObject_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return RadarObject_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return RadarObject_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // uint32 internal_id = 1;
  void clear_internal_id();
  static const int kInternalIdFieldNumber = 1;
  ::google::protobuf::uint32 internal_id() const;
  void set_internal_id(::google::protobuf::uint32 value);

  // uint32 object_id = 2;
  void clear_object_id();
  static const int kObjectIdFieldNumber = 2;
  ::google::protobuf::uint32 object_id() const;
  void set_object_id(::google::protobuf::uint32 value);

  // .metamoto.types.ObjectType object_type = 3;
  void clear_object_type();
  static const int kObjectTypeFieldNumber = 3;
  ::metamoto::types::ObjectType object_type() const;
  void set_object_type(::metamoto::types::ObjectType value);

  // .metamoto.types.RadarObject.Status status = 4;
  void clear_status();
  static const int kStatusFieldNumber = 4;
  ::metamoto::types::RadarObject_Status status() const;
  void set_status(::metamoto::types::RadarObject_Status value);

  // float range = 5;
  void clear_range();
  static const int kRangeFieldNumber = 5;
  float range() const;
  void set_range(float value);

  // float range_rate = 6;
  void clear_range_rate();
  static const int kRangeRateFieldNumber = 6;
  float range_rate() const;
  void set_range_rate(float value);

  // float range_acceleration = 7;
  void clear_range_acceleration();
  static const int kRangeAccelerationFieldNumber = 7;
  float range_acceleration() const;
  void set_range_acceleration(float value);

  // float angle = 8;
  void clear_angle();
  static const int kAngleFieldNumber = 8;
  float angle() const;
  void set_angle(float value);

  // float width = 9;
  void clear_width();
  static const int kWidthFieldNumber = 9;
  float width() const;
  void set_width(float value);

  // float length = 10;
  void clear_length();
  static const int kLengthFieldNumber = 10;
  float length() const;
  void set_length(float value);

  // float position_x = 11;
  void clear_position_x();
  static const int kPositionXFieldNumber = 11;
  float position_x() const;
  void set_position_x(float value);

  // float position_z = 12;
  void clear_position_z();
  static const int kPositionZFieldNumber = 12;
  float position_z() const;
  void set_position_z(float value);

  // float velocity_x = 13;
  void clear_velocity_x();
  static const int kVelocityXFieldNumber = 13;
  float velocity_x() const;
  void set_velocity_x(float value);

  // float velocity_z = 14;
  void clear_velocity_z();
  static const int kVelocityZFieldNumber = 14;
  float velocity_z() const;
  void set_velocity_z(float value);

  // float acceleration_z = 15;
  void clear_acceleration_z();
  static const int kAccelerationZFieldNumber = 15;
  float acceleration_z() const;
  void set_acceleration_z(float value);

  // float rcs = 16;
  void clear_rcs();
  static const int kRcsFieldNumber = 16;
  float rcs() const;
  void set_rcs(float value);

  // float snr = 17;
  void clear_snr();
  static const int kSnrFieldNumber = 17;
  float snr() const;
  void set_snr(float value);

  // @@protoc_insertion_point(class_scope:metamoto.types.RadarObject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 internal_id_;
  ::google::protobuf::uint32 object_id_;
  int object_type_;
  int status_;
  float range_;
  float range_rate_;
  float range_acceleration_;
  float angle_;
  float width_;
  float length_;
  float position_x_;
  float position_z_;
  float velocity_x_;
  float velocity_z_;
  float acceleration_z_;
  float rcs_;
  float snr_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2ftypes_2fradar_5fobject_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RadarObject

// uint32 internal_id = 1;
inline void RadarObject::clear_internal_id() {
  internal_id_ = 0u;
}
inline ::google::protobuf::uint32 RadarObject::internal_id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.internal_id)
  return internal_id_;
}
inline void RadarObject::set_internal_id(::google::protobuf::uint32 value) {
  
  internal_id_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.internal_id)
}

// uint32 object_id = 2;
inline void RadarObject::clear_object_id() {
  object_id_ = 0u;
}
inline ::google::protobuf::uint32 RadarObject::object_id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.object_id)
  return object_id_;
}
inline void RadarObject::set_object_id(::google::protobuf::uint32 value) {
  
  object_id_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.object_id)
}

// .metamoto.types.ObjectType object_type = 3;
inline void RadarObject::clear_object_type() {
  object_type_ = 0;
}
inline ::metamoto::types::ObjectType RadarObject::object_type() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.object_type)
  return static_cast< ::metamoto::types::ObjectType >(object_type_);
}
inline void RadarObject::set_object_type(::metamoto::types::ObjectType value) {
  
  object_type_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.object_type)
}

// .metamoto.types.RadarObject.Status status = 4;
inline void RadarObject::clear_status() {
  status_ = 0;
}
inline ::metamoto::types::RadarObject_Status RadarObject::status() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.status)
  return static_cast< ::metamoto::types::RadarObject_Status >(status_);
}
inline void RadarObject::set_status(::metamoto::types::RadarObject_Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.status)
}

// float range = 5;
inline void RadarObject::clear_range() {
  range_ = 0;
}
inline float RadarObject::range() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.range)
  return range_;
}
inline void RadarObject::set_range(float value) {
  
  range_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.range)
}

// float range_rate = 6;
inline void RadarObject::clear_range_rate() {
  range_rate_ = 0;
}
inline float RadarObject::range_rate() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.range_rate)
  return range_rate_;
}
inline void RadarObject::set_range_rate(float value) {
  
  range_rate_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.range_rate)
}

// float range_acceleration = 7;
inline void RadarObject::clear_range_acceleration() {
  range_acceleration_ = 0;
}
inline float RadarObject::range_acceleration() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.range_acceleration)
  return range_acceleration_;
}
inline void RadarObject::set_range_acceleration(float value) {
  
  range_acceleration_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.range_acceleration)
}

// float angle = 8;
inline void RadarObject::clear_angle() {
  angle_ = 0;
}
inline float RadarObject::angle() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.angle)
  return angle_;
}
inline void RadarObject::set_angle(float value) {
  
  angle_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.angle)
}

// float width = 9;
inline void RadarObject::clear_width() {
  width_ = 0;
}
inline float RadarObject::width() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.width)
  return width_;
}
inline void RadarObject::set_width(float value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.width)
}

// float length = 10;
inline void RadarObject::clear_length() {
  length_ = 0;
}
inline float RadarObject::length() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.length)
  return length_;
}
inline void RadarObject::set_length(float value) {
  
  length_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.length)
}

// float position_x = 11;
inline void RadarObject::clear_position_x() {
  position_x_ = 0;
}
inline float RadarObject::position_x() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.position_x)
  return position_x_;
}
inline void RadarObject::set_position_x(float value) {
  
  position_x_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.position_x)
}

// float position_z = 12;
inline void RadarObject::clear_position_z() {
  position_z_ = 0;
}
inline float RadarObject::position_z() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.position_z)
  return position_z_;
}
inline void RadarObject::set_position_z(float value) {
  
  position_z_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.position_z)
}

// float velocity_x = 13;
inline void RadarObject::clear_velocity_x() {
  velocity_x_ = 0;
}
inline float RadarObject::velocity_x() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.velocity_x)
  return velocity_x_;
}
inline void RadarObject::set_velocity_x(float value) {
  
  velocity_x_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.velocity_x)
}

// float velocity_z = 14;
inline void RadarObject::clear_velocity_z() {
  velocity_z_ = 0;
}
inline float RadarObject::velocity_z() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.velocity_z)
  return velocity_z_;
}
inline void RadarObject::set_velocity_z(float value) {
  
  velocity_z_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.velocity_z)
}

// float acceleration_z = 15;
inline void RadarObject::clear_acceleration_z() {
  acceleration_z_ = 0;
}
inline float RadarObject::acceleration_z() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.acceleration_z)
  return acceleration_z_;
}
inline void RadarObject::set_acceleration_z(float value) {
  
  acceleration_z_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.acceleration_z)
}

// float rcs = 16;
inline void RadarObject::clear_rcs() {
  rcs_ = 0;
}
inline float RadarObject::rcs() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.rcs)
  return rcs_;
}
inline void RadarObject::set_rcs(float value) {
  
  rcs_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.rcs)
}

// float snr = 17;
inline void RadarObject::clear_snr() {
  snr_ = 0;
}
inline float RadarObject::snr() const {
  // @@protoc_insertion_point(field_get:metamoto.types.RadarObject.snr)
  return snr_;
}
inline void RadarObject::set_snr(float value) {
  
  snr_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.RadarObject.snr)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace types
}  // namespace metamoto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metamoto::types::RadarObject_Status> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metamoto::types::RadarObject_Status>() {
  return ::metamoto::types::RadarObject_Status_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2ftypes_2fradar_5fobject_2eproto