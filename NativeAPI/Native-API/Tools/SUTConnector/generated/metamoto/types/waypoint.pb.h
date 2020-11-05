// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/waypoint.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2ftypes_2fwaypoint_2eproto
#define PROTOBUF_INCLUDED_metamoto_2ftypes_2fwaypoint_2eproto

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
#include <google/protobuf/wrappers.pb.h>
#include "metamoto/types/roads.pb.h"
#include "metamoto/types/pose.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fwaypoint_2eproto 

namespace protobuf_metamoto_2ftypes_2fwaypoint_2eproto {
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
}  // namespace protobuf_metamoto_2ftypes_2fwaypoint_2eproto
namespace metamoto {
namespace types {
class Waypoint;
class WaypointDefaultTypeInternal;
extern WaypointDefaultTypeInternal _Waypoint_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::types::Waypoint* Arena::CreateMaybeMessage<::metamoto::types::Waypoint>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace types {

// ===================================================================

class Waypoint : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.Waypoint) */ {
 public:
  Waypoint();
  virtual ~Waypoint();

  Waypoint(const Waypoint& from);

  inline Waypoint& operator=(const Waypoint& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Waypoint(Waypoint&& from) noexcept
    : Waypoint() {
    *this = ::std::move(from);
  }

  inline Waypoint& operator=(Waypoint&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Waypoint& default_instance();

  enum PointOneofCase {
    kWorldPoint = 1,
    kRoadPoint = 2,
    POINT_ONEOF_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Waypoint* internal_default_instance() {
    return reinterpret_cast<const Waypoint*>(
               &_Waypoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Waypoint* other);
  friend void swap(Waypoint& a, Waypoint& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Waypoint* New() const final {
    return CreateMaybeMessage<Waypoint>(NULL);
  }

  Waypoint* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Waypoint>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Waypoint& from);
  void MergeFrom(const Waypoint& from);
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
  void InternalSwap(Waypoint* other);
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

  // string relative_object_id = 6;
  void clear_relative_object_id();
  static const int kRelativeObjectIdFieldNumber = 6;
  const ::std::string& relative_object_id() const;
  void set_relative_object_id(const ::std::string& value);
  #if LANG_CXX11
  void set_relative_object_id(::std::string&& value);
  #endif
  void set_relative_object_id(const char* value);
  void set_relative_object_id(const char* value, size_t size);
  ::std::string* mutable_relative_object_id();
  ::std::string* release_relative_object_id();
  void set_allocated_relative_object_id(::std::string* relative_object_id);

  // .google.protobuf.FloatValue target_speed = 3;
  bool has_target_speed() const;
  void clear_target_speed();
  static const int kTargetSpeedFieldNumber = 3;
  private:
  const ::google::protobuf::FloatValue& _internal_target_speed() const;
  public:
  const ::google::protobuf::FloatValue& target_speed() const;
  ::google::protobuf::FloatValue* release_target_speed();
  ::google::protobuf::FloatValue* mutable_target_speed();
  void set_allocated_target_speed(::google::protobuf::FloatValue* target_speed);

  // bool pure_pursuit = 4;
  void clear_pure_pursuit();
  static const int kPurePursuitFieldNumber = 4;
  bool pure_pursuit() const;
  void set_pure_pursuit(bool value);

  // float idle_time = 5;
  void clear_idle_time();
  static const int kIdleTimeFieldNumber = 5;
  float idle_time() const;
  void set_idle_time(float value);

  // .metamoto.types.Pose world_point = 1;
  bool has_world_point() const;
  void clear_world_point();
  static const int kWorldPointFieldNumber = 1;
  private:
  const ::metamoto::types::Pose& _internal_world_point() const;
  public:
  const ::metamoto::types::Pose& world_point() const;
  ::metamoto::types::Pose* release_world_point();
  ::metamoto::types::Pose* mutable_world_point();
  void set_allocated_world_point(::metamoto::types::Pose* world_point);

  // .metamoto.types.RoadPoint road_point = 2;
  bool has_road_point() const;
  void clear_road_point();
  static const int kRoadPointFieldNumber = 2;
  private:
  const ::metamoto::types::RoadPoint& _internal_road_point() const;
  public:
  const ::metamoto::types::RoadPoint& road_point() const;
  ::metamoto::types::RoadPoint* release_road_point();
  ::metamoto::types::RoadPoint* mutable_road_point();
  void set_allocated_road_point(::metamoto::types::RoadPoint* road_point);

  void clear_point_oneof();
  PointOneofCase point_oneof_case() const;
  // @@protoc_insertion_point(class_scope:metamoto.types.Waypoint)
 private:
  void set_has_world_point();
  void set_has_road_point();

  inline bool has_point_oneof() const;
  inline void clear_has_point_oneof();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr relative_object_id_;
  ::google::protobuf::FloatValue* target_speed_;
  bool pure_pursuit_;
  float idle_time_;
  union PointOneofUnion {
    PointOneofUnion() {}
    ::metamoto::types::Pose* world_point_;
    ::metamoto::types::RoadPoint* road_point_;
  } point_oneof_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_metamoto_2ftypes_2fwaypoint_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Waypoint

// .metamoto.types.Pose world_point = 1;
inline bool Waypoint::has_world_point() const {
  return point_oneof_case() == kWorldPoint;
}
inline void Waypoint::set_has_world_point() {
  _oneof_case_[0] = kWorldPoint;
}
inline const ::metamoto::types::Pose& Waypoint::_internal_world_point() const {
  return *point_oneof_.world_point_;
}
inline ::metamoto::types::Pose* Waypoint::release_world_point() {
  // @@protoc_insertion_point(field_release:metamoto.types.Waypoint.world_point)
  if (has_world_point()) {
    clear_has_point_oneof();
      ::metamoto::types::Pose* temp = point_oneof_.world_point_;
    point_oneof_.world_point_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::metamoto::types::Pose& Waypoint::world_point() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Waypoint.world_point)
  return has_world_point()
      ? *point_oneof_.world_point_
      : *reinterpret_cast< ::metamoto::types::Pose*>(&::metamoto::types::_Pose_default_instance_);
}
inline ::metamoto::types::Pose* Waypoint::mutable_world_point() {
  if (!has_world_point()) {
    clear_point_oneof();
    set_has_world_point();
    point_oneof_.world_point_ = CreateMaybeMessage< ::metamoto::types::Pose >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.Waypoint.world_point)
  return point_oneof_.world_point_;
}

// .metamoto.types.RoadPoint road_point = 2;
inline bool Waypoint::has_road_point() const {
  return point_oneof_case() == kRoadPoint;
}
inline void Waypoint::set_has_road_point() {
  _oneof_case_[0] = kRoadPoint;
}
inline const ::metamoto::types::RoadPoint& Waypoint::_internal_road_point() const {
  return *point_oneof_.road_point_;
}
inline ::metamoto::types::RoadPoint* Waypoint::release_road_point() {
  // @@protoc_insertion_point(field_release:metamoto.types.Waypoint.road_point)
  if (has_road_point()) {
    clear_has_point_oneof();
      ::metamoto::types::RoadPoint* temp = point_oneof_.road_point_;
    point_oneof_.road_point_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::metamoto::types::RoadPoint& Waypoint::road_point() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Waypoint.road_point)
  return has_road_point()
      ? *point_oneof_.road_point_
      : *reinterpret_cast< ::metamoto::types::RoadPoint*>(&::metamoto::types::_RoadPoint_default_instance_);
}
inline ::metamoto::types::RoadPoint* Waypoint::mutable_road_point() {
  if (!has_road_point()) {
    clear_point_oneof();
    set_has_road_point();
    point_oneof_.road_point_ = CreateMaybeMessage< ::metamoto::types::RoadPoint >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.Waypoint.road_point)
  return point_oneof_.road_point_;
}

// .google.protobuf.FloatValue target_speed = 3;
inline bool Waypoint::has_target_speed() const {
  return this != internal_default_instance() && target_speed_ != NULL;
}
inline const ::google::protobuf::FloatValue& Waypoint::_internal_target_speed() const {
  return *target_speed_;
}
inline const ::google::protobuf::FloatValue& Waypoint::target_speed() const {
  const ::google::protobuf::FloatValue* p = target_speed_;
  // @@protoc_insertion_point(field_get:metamoto.types.Waypoint.target_speed)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::FloatValue*>(
      &::google::protobuf::_FloatValue_default_instance_);
}
inline ::google::protobuf::FloatValue* Waypoint::release_target_speed() {
  // @@protoc_insertion_point(field_release:metamoto.types.Waypoint.target_speed)
  
  ::google::protobuf::FloatValue* temp = target_speed_;
  target_speed_ = NULL;
  return temp;
}
inline ::google::protobuf::FloatValue* Waypoint::mutable_target_speed() {
  
  if (target_speed_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::FloatValue>(GetArenaNoVirtual());
    target_speed_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.Waypoint.target_speed)
  return target_speed_;
}
inline void Waypoint::set_allocated_target_speed(::google::protobuf::FloatValue* target_speed) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(target_speed_);
  }
  if (target_speed) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(target_speed)->GetArena();
    if (message_arena != submessage_arena) {
      target_speed = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, target_speed, submessage_arena);
    }
    
  } else {
    
  }
  target_speed_ = target_speed;
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Waypoint.target_speed)
}

// bool pure_pursuit = 4;
inline void Waypoint::clear_pure_pursuit() {
  pure_pursuit_ = false;
}
inline bool Waypoint::pure_pursuit() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Waypoint.pure_pursuit)
  return pure_pursuit_;
}
inline void Waypoint::set_pure_pursuit(bool value) {
  
  pure_pursuit_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.Waypoint.pure_pursuit)
}

// float idle_time = 5;
inline void Waypoint::clear_idle_time() {
  idle_time_ = 0;
}
inline float Waypoint::idle_time() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Waypoint.idle_time)
  return idle_time_;
}
inline void Waypoint::set_idle_time(float value) {
  
  idle_time_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.Waypoint.idle_time)
}

// string relative_object_id = 6;
inline void Waypoint::clear_relative_object_id() {
  relative_object_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Waypoint::relative_object_id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Waypoint.relative_object_id)
  return relative_object_id_.GetNoArena();
}
inline void Waypoint::set_relative_object_id(const ::std::string& value) {
  
  relative_object_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.Waypoint.relative_object_id)
}
#if LANG_CXX11
inline void Waypoint::set_relative_object_id(::std::string&& value) {
  
  relative_object_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.Waypoint.relative_object_id)
}
#endif
inline void Waypoint::set_relative_object_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  relative_object_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.Waypoint.relative_object_id)
}
inline void Waypoint::set_relative_object_id(const char* value, size_t size) {
  
  relative_object_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.Waypoint.relative_object_id)
}
inline ::std::string* Waypoint::mutable_relative_object_id() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.Waypoint.relative_object_id)
  return relative_object_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Waypoint::release_relative_object_id() {
  // @@protoc_insertion_point(field_release:metamoto.types.Waypoint.relative_object_id)
  
  return relative_object_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Waypoint::set_allocated_relative_object_id(::std::string* relative_object_id) {
  if (relative_object_id != NULL) {
    
  } else {
    
  }
  relative_object_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), relative_object_id);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Waypoint.relative_object_id)
}

inline bool Waypoint::has_point_oneof() const {
  return point_oneof_case() != POINT_ONEOF_NOT_SET;
}
inline void Waypoint::clear_has_point_oneof() {
  _oneof_case_[0] = POINT_ONEOF_NOT_SET;
}
inline Waypoint::PointOneofCase Waypoint::point_oneof_case() const {
  return Waypoint::PointOneofCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace types
}  // namespace metamoto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2ftypes_2fwaypoint_2eproto
