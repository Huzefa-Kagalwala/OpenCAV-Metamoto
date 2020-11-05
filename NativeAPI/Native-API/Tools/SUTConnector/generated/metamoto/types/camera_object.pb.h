// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/camera_object.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2ftypes_2fcamera_5fobject_2eproto
#define PROTOBUF_INCLUDED_metamoto_2ftypes_2fcamera_5fobject_2eproto

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
#include "metamoto/types/acceleration.pb.h"
#include "metamoto/types/enumerations.pb.h"
#include "metamoto/types/pose.pb.h"
#include "metamoto/types/shape.pb.h"
#include "metamoto/types/velocity.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fcamera_5fobject_2eproto 

namespace protobuf_metamoto_2ftypes_2fcamera_5fobject_2eproto {
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
}  // namespace protobuf_metamoto_2ftypes_2fcamera_5fobject_2eproto
namespace metamoto {
namespace types {
class CameraObject;
class CameraObjectDefaultTypeInternal;
extern CameraObjectDefaultTypeInternal _CameraObject_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::types::CameraObject* Arena::CreateMaybeMessage<::metamoto::types::CameraObject>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace types {

// ===================================================================

class CameraObject : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.CameraObject) */ {
 public:
  CameraObject();
  virtual ~CameraObject();

  CameraObject(const CameraObject& from);

  inline CameraObject& operator=(const CameraObject& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CameraObject(CameraObject&& from) noexcept
    : CameraObject() {
    *this = ::std::move(from);
  }

  inline CameraObject& operator=(CameraObject&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CameraObject& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CameraObject* internal_default_instance() {
    return reinterpret_cast<const CameraObject*>(
               &_CameraObject_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CameraObject* other);
  friend void swap(CameraObject& a, CameraObject& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CameraObject* New() const final {
    return CreateMaybeMessage<CameraObject>(NULL);
  }

  CameraObject* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CameraObject>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CameraObject& from);
  void MergeFrom(const CameraObject& from);
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
  void InternalSwap(CameraObject* other);
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

  // .metamoto.types.Pose pose = 4;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 4;
  private:
  const ::metamoto::types::Pose& _internal_pose() const;
  public:
  const ::metamoto::types::Pose& pose() const;
  ::metamoto::types::Pose* release_pose();
  ::metamoto::types::Pose* mutable_pose();
  void set_allocated_pose(::metamoto::types::Pose* pose);

  // .metamoto.types.Velocity velocity = 5;
  bool has_velocity() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 5;
  private:
  const ::metamoto::types::Velocity& _internal_velocity() const;
  public:
  const ::metamoto::types::Velocity& velocity() const;
  ::metamoto::types::Velocity* release_velocity();
  ::metamoto::types::Velocity* mutable_velocity();
  void set_allocated_velocity(::metamoto::types::Velocity* velocity);

  // .metamoto.types.Acceleration acceleration = 6;
  bool has_acceleration() const;
  void clear_acceleration();
  static const int kAccelerationFieldNumber = 6;
  private:
  const ::metamoto::types::Acceleration& _internal_acceleration() const;
  public:
  const ::metamoto::types::Acceleration& acceleration() const;
  ::metamoto::types::Acceleration* release_acceleration();
  ::metamoto::types::Acceleration* mutable_acceleration();
  void set_allocated_acceleration(::metamoto::types::Acceleration* acceleration);

  // .metamoto.types.Shape shape = 7;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 7;
  private:
  const ::metamoto::types::Shape& _internal_shape() const;
  public:
  const ::metamoto::types::Shape& shape() const;
  ::metamoto::types::Shape* release_shape();
  ::metamoto::types::Shape* mutable_shape();
  void set_allocated_shape(::metamoto::types::Shape* shape);

  // uint32 object_id = 1;
  void clear_object_id();
  static const int kObjectIdFieldNumber = 1;
  ::google::protobuf::uint32 object_id() const;
  void set_object_id(::google::protobuf::uint32 value);

  // .metamoto.types.ObjectType object_type = 2;
  void clear_object_type();
  static const int kObjectTypeFieldNumber = 2;
  ::metamoto::types::ObjectType object_type() const;
  void set_object_type(::metamoto::types::ObjectType value);

  // .metamoto.types.ReferenceFrame reference_frame = 3;
  void clear_reference_frame();
  static const int kReferenceFrameFieldNumber = 3;
  ::metamoto::types::ReferenceFrame reference_frame() const;
  void set_reference_frame(::metamoto::types::ReferenceFrame value);

  // uint32 x_lower_left = 8;
  void clear_x_lower_left();
  static const int kXLowerLeftFieldNumber = 8;
  ::google::protobuf::uint32 x_lower_left() const;
  void set_x_lower_left(::google::protobuf::uint32 value);

  // uint32 y_lower_left = 9;
  void clear_y_lower_left();
  static const int kYLowerLeftFieldNumber = 9;
  ::google::protobuf::uint32 y_lower_left() const;
  void set_y_lower_left(::google::protobuf::uint32 value);

  // uint32 x_upper_right = 10;
  void clear_x_upper_right();
  static const int kXUpperRightFieldNumber = 10;
  ::google::protobuf::uint32 x_upper_right() const;
  void set_x_upper_right(::google::protobuf::uint32 value);

  // uint32 y_upper_right = 11;
  void clear_y_upper_right();
  static const int kYUpperRightFieldNumber = 11;
  ::google::protobuf::uint32 y_upper_right() const;
  void set_y_upper_right(::google::protobuf::uint32 value);

  // uint32 pixel_count = 12;
  void clear_pixel_count();
  static const int kPixelCountFieldNumber = 12;
  ::google::protobuf::uint32 pixel_count() const;
  void set_pixel_count(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:metamoto.types.CameraObject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::metamoto::types::Pose* pose_;
  ::metamoto::types::Velocity* velocity_;
  ::metamoto::types::Acceleration* acceleration_;
  ::metamoto::types::Shape* shape_;
  ::google::protobuf::uint32 object_id_;
  int object_type_;
  int reference_frame_;
  ::google::protobuf::uint32 x_lower_left_;
  ::google::protobuf::uint32 y_lower_left_;
  ::google::protobuf::uint32 x_upper_right_;
  ::google::protobuf::uint32 y_upper_right_;
  ::google::protobuf::uint32 pixel_count_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2ftypes_2fcamera_5fobject_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CameraObject

// uint32 object_id = 1;
inline void CameraObject::clear_object_id() {
  object_id_ = 0u;
}
inline ::google::protobuf::uint32 CameraObject::object_id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.object_id)
  return object_id_;
}
inline void CameraObject::set_object_id(::google::protobuf::uint32 value) {
  
  object_id_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.CameraObject.object_id)
}

// .metamoto.types.ObjectType object_type = 2;
inline void CameraObject::clear_object_type() {
  object_type_ = 0;
}
inline ::metamoto::types::ObjectType CameraObject::object_type() const {
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.object_type)
  return static_cast< ::metamoto::types::ObjectType >(object_type_);
}
inline void CameraObject::set_object_type(::metamoto::types::ObjectType value) {
  
  object_type_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.CameraObject.object_type)
}

// .metamoto.types.ReferenceFrame reference_frame = 3;
inline void CameraObject::clear_reference_frame() {
  reference_frame_ = 0;
}
inline ::metamoto::types::ReferenceFrame CameraObject::reference_frame() const {
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.reference_frame)
  return static_cast< ::metamoto::types::ReferenceFrame >(reference_frame_);
}
inline void CameraObject::set_reference_frame(::metamoto::types::ReferenceFrame value) {
  
  reference_frame_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.CameraObject.reference_frame)
}

// .metamoto.types.Pose pose = 4;
inline bool CameraObject::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::metamoto::types::Pose& CameraObject::_internal_pose() const {
  return *pose_;
}
inline const ::metamoto::types::Pose& CameraObject::pose() const {
  const ::metamoto::types::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Pose*>(
      &::metamoto::types::_Pose_default_instance_);
}
inline ::metamoto::types::Pose* CameraObject::release_pose() {
  // @@protoc_insertion_point(field_release:metamoto.types.CameraObject.pose)
  
  ::metamoto::types::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::metamoto::types::Pose* CameraObject::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.CameraObject.pose)
  return pose_;
}
inline void CameraObject::set_allocated_pose(::metamoto::types::Pose* pose) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(pose_);
  }
  if (pose) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      pose = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    
  } else {
    
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.CameraObject.pose)
}

// .metamoto.types.Velocity velocity = 5;
inline bool CameraObject::has_velocity() const {
  return this != internal_default_instance() && velocity_ != NULL;
}
inline const ::metamoto::types::Velocity& CameraObject::_internal_velocity() const {
  return *velocity_;
}
inline const ::metamoto::types::Velocity& CameraObject::velocity() const {
  const ::metamoto::types::Velocity* p = velocity_;
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.velocity)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Velocity*>(
      &::metamoto::types::_Velocity_default_instance_);
}
inline ::metamoto::types::Velocity* CameraObject::release_velocity() {
  // @@protoc_insertion_point(field_release:metamoto.types.CameraObject.velocity)
  
  ::metamoto::types::Velocity* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline ::metamoto::types::Velocity* CameraObject::mutable_velocity() {
  
  if (velocity_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Velocity>(GetArenaNoVirtual());
    velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.CameraObject.velocity)
  return velocity_;
}
inline void CameraObject::set_allocated_velocity(::metamoto::types::Velocity* velocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(velocity_);
  }
  if (velocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      velocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, velocity, submessage_arena);
    }
    
  } else {
    
  }
  velocity_ = velocity;
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.CameraObject.velocity)
}

// .metamoto.types.Acceleration acceleration = 6;
inline bool CameraObject::has_acceleration() const {
  return this != internal_default_instance() && acceleration_ != NULL;
}
inline const ::metamoto::types::Acceleration& CameraObject::_internal_acceleration() const {
  return *acceleration_;
}
inline const ::metamoto::types::Acceleration& CameraObject::acceleration() const {
  const ::metamoto::types::Acceleration* p = acceleration_;
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.acceleration)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Acceleration*>(
      &::metamoto::types::_Acceleration_default_instance_);
}
inline ::metamoto::types::Acceleration* CameraObject::release_acceleration() {
  // @@protoc_insertion_point(field_release:metamoto.types.CameraObject.acceleration)
  
  ::metamoto::types::Acceleration* temp = acceleration_;
  acceleration_ = NULL;
  return temp;
}
inline ::metamoto::types::Acceleration* CameraObject::mutable_acceleration() {
  
  if (acceleration_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Acceleration>(GetArenaNoVirtual());
    acceleration_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.CameraObject.acceleration)
  return acceleration_;
}
inline void CameraObject::set_allocated_acceleration(::metamoto::types::Acceleration* acceleration) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(acceleration_);
  }
  if (acceleration) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      acceleration = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, acceleration, submessage_arena);
    }
    
  } else {
    
  }
  acceleration_ = acceleration;
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.CameraObject.acceleration)
}

// .metamoto.types.Shape shape = 7;
inline bool CameraObject::has_shape() const {
  return this != internal_default_instance() && shape_ != NULL;
}
inline const ::metamoto::types::Shape& CameraObject::_internal_shape() const {
  return *shape_;
}
inline const ::metamoto::types::Shape& CameraObject::shape() const {
  const ::metamoto::types::Shape* p = shape_;
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.shape)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Shape*>(
      &::metamoto::types::_Shape_default_instance_);
}
inline ::metamoto::types::Shape* CameraObject::release_shape() {
  // @@protoc_insertion_point(field_release:metamoto.types.CameraObject.shape)
  
  ::metamoto::types::Shape* temp = shape_;
  shape_ = NULL;
  return temp;
}
inline ::metamoto::types::Shape* CameraObject::mutable_shape() {
  
  if (shape_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Shape>(GetArenaNoVirtual());
    shape_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.CameraObject.shape)
  return shape_;
}
inline void CameraObject::set_allocated_shape(::metamoto::types::Shape* shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(shape_);
  }
  if (shape) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      shape = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, shape, submessage_arena);
    }
    
  } else {
    
  }
  shape_ = shape;
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.CameraObject.shape)
}

// uint32 x_lower_left = 8;
inline void CameraObject::clear_x_lower_left() {
  x_lower_left_ = 0u;
}
inline ::google::protobuf::uint32 CameraObject::x_lower_left() const {
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.x_lower_left)
  return x_lower_left_;
}
inline void CameraObject::set_x_lower_left(::google::protobuf::uint32 value) {
  
  x_lower_left_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.CameraObject.x_lower_left)
}

// uint32 y_lower_left = 9;
inline void CameraObject::clear_y_lower_left() {
  y_lower_left_ = 0u;
}
inline ::google::protobuf::uint32 CameraObject::y_lower_left() const {
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.y_lower_left)
  return y_lower_left_;
}
inline void CameraObject::set_y_lower_left(::google::protobuf::uint32 value) {
  
  y_lower_left_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.CameraObject.y_lower_left)
}

// uint32 x_upper_right = 10;
inline void CameraObject::clear_x_upper_right() {
  x_upper_right_ = 0u;
}
inline ::google::protobuf::uint32 CameraObject::x_upper_right() const {
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.x_upper_right)
  return x_upper_right_;
}
inline void CameraObject::set_x_upper_right(::google::protobuf::uint32 value) {
  
  x_upper_right_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.CameraObject.x_upper_right)
}

// uint32 y_upper_right = 11;
inline void CameraObject::clear_y_upper_right() {
  y_upper_right_ = 0u;
}
inline ::google::protobuf::uint32 CameraObject::y_upper_right() const {
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.y_upper_right)
  return y_upper_right_;
}
inline void CameraObject::set_y_upper_right(::google::protobuf::uint32 value) {
  
  y_upper_right_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.CameraObject.y_upper_right)
}

// uint32 pixel_count = 12;
inline void CameraObject::clear_pixel_count() {
  pixel_count_ = 0u;
}
inline ::google::protobuf::uint32 CameraObject::pixel_count() const {
  // @@protoc_insertion_point(field_get:metamoto.types.CameraObject.pixel_count)
  return pixel_count_;
}
inline void CameraObject::set_pixel_count(::google::protobuf::uint32 value) {
  
  pixel_count_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.CameraObject.pixel_count)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace types
}  // namespace metamoto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2ftypes_2fcamera_5fobject_2eproto
