// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/traffic_sign.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2ftypes_2ftraffic_5fsign_2eproto
#define PROTOBUF_INCLUDED_metamoto_2ftypes_2ftraffic_5fsign_2eproto

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
#include "metamoto/types/pose.pb.h"
#include "metamoto/types/shape.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto 

namespace protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto {
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
}  // namespace protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto
namespace metamoto {
namespace types {
class TrafficSign;
class TrafficSignDefaultTypeInternal;
extern TrafficSignDefaultTypeInternal _TrafficSign_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::types::TrafficSign* Arena::CreateMaybeMessage<::metamoto::types::TrafficSign>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace types {

enum TrafficSign_Type {
  TrafficSign_Type_UNKNOWN = 0,
  TrafficSign_Type_OTHER = 1,
  TrafficSign_Type_STOP = 2,
  TrafficSign_Type_YIELD = 3,
  TrafficSign_Type_DO_NOT_ENTER = 4,
  TrafficSign_Type_NO_LEFT_TURN = 5,
  TrafficSign_Type_NO_RIGHT_TURN = 6,
  TrafficSign_Type_NO_U_TURN = 7,
  TrafficSign_Type_NO_LEFT_OR_U_TURN = 8,
  TrafficSign_Type_ONE_WAY = 9,
  TrafficSign_Type_SPEED_LIMIT = 10,
  TrafficSign_Type_NO_TRUCKS = 11,
  TrafficSign_Type_NO_PEDESTRIANS = 12,
  TrafficSign_Type_NO_BICYCLES = 13,
  TrafficSign_Type_NO_PARKING = 14,
  TrafficSign_Type_TrafficSign_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  TrafficSign_Type_TrafficSign_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool TrafficSign_Type_IsValid(int value);
const TrafficSign_Type TrafficSign_Type_Type_MIN = TrafficSign_Type_UNKNOWN;
const TrafficSign_Type TrafficSign_Type_Type_MAX = TrafficSign_Type_NO_PARKING;
const int TrafficSign_Type_Type_ARRAYSIZE = TrafficSign_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* TrafficSign_Type_descriptor();
inline const ::std::string& TrafficSign_Type_Name(TrafficSign_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    TrafficSign_Type_descriptor(), value);
}
inline bool TrafficSign_Type_Parse(
    const ::std::string& name, TrafficSign_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TrafficSign_Type>(
    TrafficSign_Type_descriptor(), name, value);
}
// ===================================================================

class TrafficSign : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.TrafficSign) */ {
 public:
  TrafficSign();
  virtual ~TrafficSign();

  TrafficSign(const TrafficSign& from);

  inline TrafficSign& operator=(const TrafficSign& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TrafficSign(TrafficSign&& from) noexcept
    : TrafficSign() {
    *this = ::std::move(from);
  }

  inline TrafficSign& operator=(TrafficSign&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TrafficSign& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TrafficSign* internal_default_instance() {
    return reinterpret_cast<const TrafficSign*>(
               &_TrafficSign_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TrafficSign* other);
  friend void swap(TrafficSign& a, TrafficSign& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TrafficSign* New() const final {
    return CreateMaybeMessage<TrafficSign>(NULL);
  }

  TrafficSign* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TrafficSign>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TrafficSign& from);
  void MergeFrom(const TrafficSign& from);
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
  void InternalSwap(TrafficSign* other);
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

  typedef TrafficSign_Type Type;
  static const Type UNKNOWN =
    TrafficSign_Type_UNKNOWN;
  static const Type OTHER =
    TrafficSign_Type_OTHER;
  static const Type STOP =
    TrafficSign_Type_STOP;
  static const Type YIELD =
    TrafficSign_Type_YIELD;
  static const Type DO_NOT_ENTER =
    TrafficSign_Type_DO_NOT_ENTER;
  static const Type NO_LEFT_TURN =
    TrafficSign_Type_NO_LEFT_TURN;
  static const Type NO_RIGHT_TURN =
    TrafficSign_Type_NO_RIGHT_TURN;
  static const Type NO_U_TURN =
    TrafficSign_Type_NO_U_TURN;
  static const Type NO_LEFT_OR_U_TURN =
    TrafficSign_Type_NO_LEFT_OR_U_TURN;
  static const Type ONE_WAY =
    TrafficSign_Type_ONE_WAY;
  static const Type SPEED_LIMIT =
    TrafficSign_Type_SPEED_LIMIT;
  static const Type NO_TRUCKS =
    TrafficSign_Type_NO_TRUCKS;
  static const Type NO_PEDESTRIANS =
    TrafficSign_Type_NO_PEDESTRIANS;
  static const Type NO_BICYCLES =
    TrafficSign_Type_NO_BICYCLES;
  static const Type NO_PARKING =
    TrafficSign_Type_NO_PARKING;
  static inline bool Type_IsValid(int value) {
    return TrafficSign_Type_IsValid(value);
  }
  static const Type Type_MIN =
    TrafficSign_Type_Type_MIN;
  static const Type Type_MAX =
    TrafficSign_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    TrafficSign_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return TrafficSign_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return TrafficSign_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return TrafficSign_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // string signal_id = 2;
  void clear_signal_id();
  static const int kSignalIdFieldNumber = 2;
  const ::std::string& signal_id() const;
  void set_signal_id(const ::std::string& value);
  #if LANG_CXX11
  void set_signal_id(::std::string&& value);
  #endif
  void set_signal_id(const char* value);
  void set_signal_id(const char* value, size_t size);
  ::std::string* mutable_signal_id();
  ::std::string* release_signal_id();
  void set_allocated_signal_id(::std::string* signal_id);

  // .metamoto.types.Pose pose = 3;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 3;
  private:
  const ::metamoto::types::Pose& _internal_pose() const;
  public:
  const ::metamoto::types::Pose& pose() const;
  ::metamoto::types::Pose* release_pose();
  ::metamoto::types::Pose* mutable_pose();
  void set_allocated_pose(::metamoto::types::Pose* pose);

  // .metamoto.types.Shape shape = 4;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 4;
  private:
  const ::metamoto::types::Shape& _internal_shape() const;
  public:
  const ::metamoto::types::Shape& shape() const;
  ::metamoto::types::Shape* release_shape();
  ::metamoto::types::Shape* mutable_shape();
  void set_allocated_shape(::metamoto::types::Shape* shape);

  // .metamoto.types.TrafficSign.Type type = 5;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  ::metamoto::types::TrafficSign_Type type() const;
  void set_type(::metamoto::types::TrafficSign_Type value);

  // float value = 6;
  void clear_value();
  static const int kValueFieldNumber = 6;
  float value() const;
  void set_value(float value);

  // @@protoc_insertion_point(class_scope:metamoto.types.TrafficSign)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr signal_id_;
  ::metamoto::types::Pose* pose_;
  ::metamoto::types::Shape* shape_;
  int type_;
  float value_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2ftypes_2ftraffic_5fsign_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrafficSign

// string id = 1;
inline void TrafficSign::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TrafficSign::id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficSign.id)
  return id_.GetNoArena();
}
inline void TrafficSign::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficSign.id)
}
#if LANG_CXX11
inline void TrafficSign::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.TrafficSign.id)
}
#endif
inline void TrafficSign::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.TrafficSign.id)
}
inline void TrafficSign::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.TrafficSign.id)
}
inline ::std::string* TrafficSign::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficSign.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TrafficSign::release_id() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficSign.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficSign::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficSign.id)
}

// string signal_id = 2;
inline void TrafficSign::clear_signal_id() {
  signal_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TrafficSign::signal_id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficSign.signal_id)
  return signal_id_.GetNoArena();
}
inline void TrafficSign::set_signal_id(const ::std::string& value) {
  
  signal_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficSign.signal_id)
}
#if LANG_CXX11
inline void TrafficSign::set_signal_id(::std::string&& value) {
  
  signal_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.TrafficSign.signal_id)
}
#endif
inline void TrafficSign::set_signal_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  signal_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.TrafficSign.signal_id)
}
inline void TrafficSign::set_signal_id(const char* value, size_t size) {
  
  signal_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.TrafficSign.signal_id)
}
inline ::std::string* TrafficSign::mutable_signal_id() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficSign.signal_id)
  return signal_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TrafficSign::release_signal_id() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficSign.signal_id)
  
  return signal_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficSign::set_allocated_signal_id(::std::string* signal_id) {
  if (signal_id != NULL) {
    
  } else {
    
  }
  signal_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signal_id);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficSign.signal_id)
}

// .metamoto.types.Pose pose = 3;
inline bool TrafficSign::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::metamoto::types::Pose& TrafficSign::_internal_pose() const {
  return *pose_;
}
inline const ::metamoto::types::Pose& TrafficSign::pose() const {
  const ::metamoto::types::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficSign.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Pose*>(
      &::metamoto::types::_Pose_default_instance_);
}
inline ::metamoto::types::Pose* TrafficSign::release_pose() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficSign.pose)
  
  ::metamoto::types::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::metamoto::types::Pose* TrafficSign::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficSign.pose)
  return pose_;
}
inline void TrafficSign::set_allocated_pose(::metamoto::types::Pose* pose) {
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
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficSign.pose)
}

// .metamoto.types.Shape shape = 4;
inline bool TrafficSign::has_shape() const {
  return this != internal_default_instance() && shape_ != NULL;
}
inline const ::metamoto::types::Shape& TrafficSign::_internal_shape() const {
  return *shape_;
}
inline const ::metamoto::types::Shape& TrafficSign::shape() const {
  const ::metamoto::types::Shape* p = shape_;
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficSign.shape)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Shape*>(
      &::metamoto::types::_Shape_default_instance_);
}
inline ::metamoto::types::Shape* TrafficSign::release_shape() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficSign.shape)
  
  ::metamoto::types::Shape* temp = shape_;
  shape_ = NULL;
  return temp;
}
inline ::metamoto::types::Shape* TrafficSign::mutable_shape() {
  
  if (shape_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Shape>(GetArenaNoVirtual());
    shape_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficSign.shape)
  return shape_;
}
inline void TrafficSign::set_allocated_shape(::metamoto::types::Shape* shape) {
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
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficSign.shape)
}

// .metamoto.types.TrafficSign.Type type = 5;
inline void TrafficSign::clear_type() {
  type_ = 0;
}
inline ::metamoto::types::TrafficSign_Type TrafficSign::type() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficSign.type)
  return static_cast< ::metamoto::types::TrafficSign_Type >(type_);
}
inline void TrafficSign::set_type(::metamoto::types::TrafficSign_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficSign.type)
}

// float value = 6;
inline void TrafficSign::clear_value() {
  value_ = 0;
}
inline float TrafficSign::value() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficSign.value)
  return value_;
}
inline void TrafficSign::set_value(float value) {
  
  value_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficSign.value)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace types
}  // namespace metamoto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metamoto::types::TrafficSign_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metamoto::types::TrafficSign_Type>() {
  return ::metamoto::types::TrafficSign_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2ftypes_2ftraffic_5fsign_2eproto
