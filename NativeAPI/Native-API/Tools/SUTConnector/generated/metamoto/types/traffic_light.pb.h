// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/traffic_light.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2ftypes_2ftraffic_5flight_2eproto
#define PROTOBUF_INCLUDED_metamoto_2ftypes_2ftraffic_5flight_2eproto

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
#include "metamoto/types/signal_configuration.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto 

namespace protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto {
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
}  // namespace protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto
namespace metamoto {
namespace types {
class TrafficLight;
class TrafficLightDefaultTypeInternal;
extern TrafficLightDefaultTypeInternal _TrafficLight_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::types::TrafficLight* Arena::CreateMaybeMessage<::metamoto::types::TrafficLight>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace types {

enum TrafficLight_Type {
  TrafficLight_Type_TYPE_UNKNOWN = 0,
  TrafficLight_Type_TYPE_OTHER = 1,
  TrafficLight_Type_NORMAL = 2,
  TrafficLight_Type_LEFT = 3,
  TrafficLight_Type_LEFT_STRAIGHT = 4,
  TrafficLight_Type_RIGHT = 5,
  TrafficLight_Type_RIGHT_STRAIGHT = 6,
  TrafficLight_Type_TrafficLight_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  TrafficLight_Type_TrafficLight_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool TrafficLight_Type_IsValid(int value);
const TrafficLight_Type TrafficLight_Type_Type_MIN = TrafficLight_Type_TYPE_UNKNOWN;
const TrafficLight_Type TrafficLight_Type_Type_MAX = TrafficLight_Type_RIGHT_STRAIGHT;
const int TrafficLight_Type_Type_ARRAYSIZE = TrafficLight_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* TrafficLight_Type_descriptor();
inline const ::std::string& TrafficLight_Type_Name(TrafficLight_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    TrafficLight_Type_descriptor(), value);
}
inline bool TrafficLight_Type_Parse(
    const ::std::string& name, TrafficLight_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TrafficLight_Type>(
    TrafficLight_Type_descriptor(), name, value);
}
enum TrafficLight_Color {
  TrafficLight_Color_COLOR_UNKNOWN = 0,
  TrafficLight_Color_COLOR_OTHER = 1,
  TrafficLight_Color_RED = 2,
  TrafficLight_Color_YELLOW = 3,
  TrafficLight_Color_GREEN = 4,
  TrafficLight_Color_TrafficLight_Color_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  TrafficLight_Color_TrafficLight_Color_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool TrafficLight_Color_IsValid(int value);
const TrafficLight_Color TrafficLight_Color_Color_MIN = TrafficLight_Color_COLOR_UNKNOWN;
const TrafficLight_Color TrafficLight_Color_Color_MAX = TrafficLight_Color_GREEN;
const int TrafficLight_Color_Color_ARRAYSIZE = TrafficLight_Color_Color_MAX + 1;

const ::google::protobuf::EnumDescriptor* TrafficLight_Color_descriptor();
inline const ::std::string& TrafficLight_Color_Name(TrafficLight_Color value) {
  return ::google::protobuf::internal::NameOfEnum(
    TrafficLight_Color_descriptor(), value);
}
inline bool TrafficLight_Color_Parse(
    const ::std::string& name, TrafficLight_Color* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TrafficLight_Color>(
    TrafficLight_Color_descriptor(), name, value);
}
enum TrafficLight_Mode {
  TrafficLight_Mode_MODE_UNKNOWN = 0,
  TrafficLight_Mode_MODE_OTHER = 1,
  TrafficLight_Mode_OFF = 2,
  TrafficLight_Mode_CONSTANT = 3,
  TrafficLight_Mode_BLINKING = 4,
  TrafficLight_Mode_TrafficLight_Mode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  TrafficLight_Mode_TrafficLight_Mode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool TrafficLight_Mode_IsValid(int value);
const TrafficLight_Mode TrafficLight_Mode_Mode_MIN = TrafficLight_Mode_MODE_UNKNOWN;
const TrafficLight_Mode TrafficLight_Mode_Mode_MAX = TrafficLight_Mode_BLINKING;
const int TrafficLight_Mode_Mode_ARRAYSIZE = TrafficLight_Mode_Mode_MAX + 1;

const ::google::protobuf::EnumDescriptor* TrafficLight_Mode_descriptor();
inline const ::std::string& TrafficLight_Mode_Name(TrafficLight_Mode value) {
  return ::google::protobuf::internal::NameOfEnum(
    TrafficLight_Mode_descriptor(), value);
}
inline bool TrafficLight_Mode_Parse(
    const ::std::string& name, TrafficLight_Mode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TrafficLight_Mode>(
    TrafficLight_Mode_descriptor(), name, value);
}
// ===================================================================

class TrafficLight : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.TrafficLight) */ {
 public:
  TrafficLight();
  virtual ~TrafficLight();

  TrafficLight(const TrafficLight& from);

  inline TrafficLight& operator=(const TrafficLight& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TrafficLight(TrafficLight&& from) noexcept
    : TrafficLight() {
    *this = ::std::move(from);
  }

  inline TrafficLight& operator=(TrafficLight&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TrafficLight& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TrafficLight* internal_default_instance() {
    return reinterpret_cast<const TrafficLight*>(
               &_TrafficLight_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TrafficLight* other);
  friend void swap(TrafficLight& a, TrafficLight& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TrafficLight* New() const final {
    return CreateMaybeMessage<TrafficLight>(NULL);
  }

  TrafficLight* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TrafficLight>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TrafficLight& from);
  void MergeFrom(const TrafficLight& from);
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
  void InternalSwap(TrafficLight* other);
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

  typedef TrafficLight_Type Type;
  static const Type TYPE_UNKNOWN =
    TrafficLight_Type_TYPE_UNKNOWN;
  static const Type TYPE_OTHER =
    TrafficLight_Type_TYPE_OTHER;
  static const Type NORMAL =
    TrafficLight_Type_NORMAL;
  static const Type LEFT =
    TrafficLight_Type_LEFT;
  static const Type LEFT_STRAIGHT =
    TrafficLight_Type_LEFT_STRAIGHT;
  static const Type RIGHT =
    TrafficLight_Type_RIGHT;
  static const Type RIGHT_STRAIGHT =
    TrafficLight_Type_RIGHT_STRAIGHT;
  static inline bool Type_IsValid(int value) {
    return TrafficLight_Type_IsValid(value);
  }
  static const Type Type_MIN =
    TrafficLight_Type_Type_MIN;
  static const Type Type_MAX =
    TrafficLight_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    TrafficLight_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return TrafficLight_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return TrafficLight_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return TrafficLight_Type_Parse(name, value);
  }

  typedef TrafficLight_Color Color;
  static const Color COLOR_UNKNOWN =
    TrafficLight_Color_COLOR_UNKNOWN;
  static const Color COLOR_OTHER =
    TrafficLight_Color_COLOR_OTHER;
  static const Color RED =
    TrafficLight_Color_RED;
  static const Color YELLOW =
    TrafficLight_Color_YELLOW;
  static const Color GREEN =
    TrafficLight_Color_GREEN;
  static inline bool Color_IsValid(int value) {
    return TrafficLight_Color_IsValid(value);
  }
  static const Color Color_MIN =
    TrafficLight_Color_Color_MIN;
  static const Color Color_MAX =
    TrafficLight_Color_Color_MAX;
  static const int Color_ARRAYSIZE =
    TrafficLight_Color_Color_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Color_descriptor() {
    return TrafficLight_Color_descriptor();
  }
  static inline const ::std::string& Color_Name(Color value) {
    return TrafficLight_Color_Name(value);
  }
  static inline bool Color_Parse(const ::std::string& name,
      Color* value) {
    return TrafficLight_Color_Parse(name, value);
  }

  typedef TrafficLight_Mode Mode;
  static const Mode MODE_UNKNOWN =
    TrafficLight_Mode_MODE_UNKNOWN;
  static const Mode MODE_OTHER =
    TrafficLight_Mode_MODE_OTHER;
  static const Mode OFF =
    TrafficLight_Mode_OFF;
  static const Mode CONSTANT =
    TrafficLight_Mode_CONSTANT;
  static const Mode BLINKING =
    TrafficLight_Mode_BLINKING;
  static inline bool Mode_IsValid(int value) {
    return TrafficLight_Mode_IsValid(value);
  }
  static const Mode Mode_MIN =
    TrafficLight_Mode_Mode_MIN;
  static const Mode Mode_MAX =
    TrafficLight_Mode_Mode_MAX;
  static const int Mode_ARRAYSIZE =
    TrafficLight_Mode_Mode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Mode_descriptor() {
    return TrafficLight_Mode_descriptor();
  }
  static inline const ::std::string& Mode_Name(Mode value) {
    return TrafficLight_Mode_Name(value);
  }
  static inline bool Mode_Parse(const ::std::string& name,
      Mode* value) {
    return TrafficLight_Mode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .metamoto.types.SignalConfiguration.Signal.BulbType bulb_types = 10;
  int bulb_types_size() const;
  void clear_bulb_types();
  static const int kBulbTypesFieldNumber = 10;
  ::metamoto::types::SignalConfiguration_Signal_BulbType* mutable_bulb_types(int index);
  ::google::protobuf::RepeatedPtrField< ::metamoto::types::SignalConfiguration_Signal_BulbType >*
      mutable_bulb_types();
  const ::metamoto::types::SignalConfiguration_Signal_BulbType& bulb_types(int index) const;
  ::metamoto::types::SignalConfiguration_Signal_BulbType* add_bulb_types();
  const ::google::protobuf::RepeatedPtrField< ::metamoto::types::SignalConfiguration_Signal_BulbType >&
      bulb_types() const;

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

  // string intersection_id = 8;
  void clear_intersection_id();
  static const int kIntersectionIdFieldNumber = 8;
  const ::std::string& intersection_id() const;
  void set_intersection_id(const ::std::string& value);
  #if LANG_CXX11
  void set_intersection_id(::std::string&& value);
  #endif
  void set_intersection_id(const char* value);
  void set_intersection_id(const char* value, size_t size);
  ::std::string* mutable_intersection_id();
  ::std::string* release_intersection_id();
  void set_allocated_intersection_id(::std::string* intersection_id);

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

  // .metamoto.types.SignalConfiguration.Signal.SignalState state = 9;
  bool has_state() const;
  void clear_state();
  static const int kStateFieldNumber = 9;
  private:
  const ::metamoto::types::SignalConfiguration_Signal_SignalState& _internal_state() const;
  public:
  const ::metamoto::types::SignalConfiguration_Signal_SignalState& state() const;
  ::metamoto::types::SignalConfiguration_Signal_SignalState* release_state();
  ::metamoto::types::SignalConfiguration_Signal_SignalState* mutable_state();
  void set_allocated_state(::metamoto::types::SignalConfiguration_Signal_SignalState* state);

  // .metamoto.types.TrafficLight.Type type = 5;
  void clear_type();
  static const int kTypeFieldNumber = 5;
  ::metamoto::types::TrafficLight_Type type() const;
  void set_type(::metamoto::types::TrafficLight_Type value);

  // .metamoto.types.TrafficLight.Color color = 6;
  void clear_color();
  static const int kColorFieldNumber = 6;
  ::metamoto::types::TrafficLight_Color color() const;
  void set_color(::metamoto::types::TrafficLight_Color value);

  // .metamoto.types.TrafficLight.Mode mode = 7;
  void clear_mode();
  static const int kModeFieldNumber = 7;
  ::metamoto::types::TrafficLight_Mode mode() const;
  void set_mode(::metamoto::types::TrafficLight_Mode value);

  // @@protoc_insertion_point(class_scope:metamoto.types.TrafficLight)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::metamoto::types::SignalConfiguration_Signal_BulbType > bulb_types_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr signal_id_;
  ::google::protobuf::internal::ArenaStringPtr intersection_id_;
  ::metamoto::types::Pose* pose_;
  ::metamoto::types::Shape* shape_;
  ::metamoto::types::SignalConfiguration_Signal_SignalState* state_;
  int type_;
  int color_;
  int mode_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2ftypes_2ftraffic_5flight_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrafficLight

// string id = 1;
inline void TrafficLight::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TrafficLight::id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.id)
  return id_.GetNoArena();
}
inline void TrafficLight::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficLight.id)
}
#if LANG_CXX11
inline void TrafficLight::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.TrafficLight.id)
}
#endif
inline void TrafficLight::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.TrafficLight.id)
}
inline void TrafficLight::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.TrafficLight.id)
}
inline ::std::string* TrafficLight::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficLight.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TrafficLight::release_id() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficLight.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficLight::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficLight.id)
}

// string signal_id = 2;
inline void TrafficLight::clear_signal_id() {
  signal_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TrafficLight::signal_id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.signal_id)
  return signal_id_.GetNoArena();
}
inline void TrafficLight::set_signal_id(const ::std::string& value) {
  
  signal_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficLight.signal_id)
}
#if LANG_CXX11
inline void TrafficLight::set_signal_id(::std::string&& value) {
  
  signal_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.TrafficLight.signal_id)
}
#endif
inline void TrafficLight::set_signal_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  signal_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.TrafficLight.signal_id)
}
inline void TrafficLight::set_signal_id(const char* value, size_t size) {
  
  signal_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.TrafficLight.signal_id)
}
inline ::std::string* TrafficLight::mutable_signal_id() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficLight.signal_id)
  return signal_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TrafficLight::release_signal_id() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficLight.signal_id)
  
  return signal_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficLight::set_allocated_signal_id(::std::string* signal_id) {
  if (signal_id != NULL) {
    
  } else {
    
  }
  signal_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), signal_id);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficLight.signal_id)
}

// .metamoto.types.Pose pose = 3;
inline bool TrafficLight::has_pose() const {
  return this != internal_default_instance() && pose_ != NULL;
}
inline const ::metamoto::types::Pose& TrafficLight::_internal_pose() const {
  return *pose_;
}
inline const ::metamoto::types::Pose& TrafficLight::pose() const {
  const ::metamoto::types::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.pose)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Pose*>(
      &::metamoto::types::_Pose_default_instance_);
}
inline ::metamoto::types::Pose* TrafficLight::release_pose() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficLight.pose)
  
  ::metamoto::types::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline ::metamoto::types::Pose* TrafficLight::mutable_pose() {
  
  if (pose_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficLight.pose)
  return pose_;
}
inline void TrafficLight::set_allocated_pose(::metamoto::types::Pose* pose) {
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
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficLight.pose)
}

// .metamoto.types.Shape shape = 4;
inline bool TrafficLight::has_shape() const {
  return this != internal_default_instance() && shape_ != NULL;
}
inline const ::metamoto::types::Shape& TrafficLight::_internal_shape() const {
  return *shape_;
}
inline const ::metamoto::types::Shape& TrafficLight::shape() const {
  const ::metamoto::types::Shape* p = shape_;
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.shape)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::Shape*>(
      &::metamoto::types::_Shape_default_instance_);
}
inline ::metamoto::types::Shape* TrafficLight::release_shape() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficLight.shape)
  
  ::metamoto::types::Shape* temp = shape_;
  shape_ = NULL;
  return temp;
}
inline ::metamoto::types::Shape* TrafficLight::mutable_shape() {
  
  if (shape_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::Shape>(GetArenaNoVirtual());
    shape_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficLight.shape)
  return shape_;
}
inline void TrafficLight::set_allocated_shape(::metamoto::types::Shape* shape) {
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
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficLight.shape)
}

// .metamoto.types.TrafficLight.Type type = 5;
inline void TrafficLight::clear_type() {
  type_ = 0;
}
inline ::metamoto::types::TrafficLight_Type TrafficLight::type() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.type)
  return static_cast< ::metamoto::types::TrafficLight_Type >(type_);
}
inline void TrafficLight::set_type(::metamoto::types::TrafficLight_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficLight.type)
}

// .metamoto.types.TrafficLight.Color color = 6;
inline void TrafficLight::clear_color() {
  color_ = 0;
}
inline ::metamoto::types::TrafficLight_Color TrafficLight::color() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.color)
  return static_cast< ::metamoto::types::TrafficLight_Color >(color_);
}
inline void TrafficLight::set_color(::metamoto::types::TrafficLight_Color value) {
  
  color_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficLight.color)
}

// .metamoto.types.TrafficLight.Mode mode = 7;
inline void TrafficLight::clear_mode() {
  mode_ = 0;
}
inline ::metamoto::types::TrafficLight_Mode TrafficLight::mode() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.mode)
  return static_cast< ::metamoto::types::TrafficLight_Mode >(mode_);
}
inline void TrafficLight::set_mode(::metamoto::types::TrafficLight_Mode value) {
  
  mode_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficLight.mode)
}

// string intersection_id = 8;
inline void TrafficLight::clear_intersection_id() {
  intersection_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TrafficLight::intersection_id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.intersection_id)
  return intersection_id_.GetNoArena();
}
inline void TrafficLight::set_intersection_id(const ::std::string& value) {
  
  intersection_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.TrafficLight.intersection_id)
}
#if LANG_CXX11
inline void TrafficLight::set_intersection_id(::std::string&& value) {
  
  intersection_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.TrafficLight.intersection_id)
}
#endif
inline void TrafficLight::set_intersection_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  intersection_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.TrafficLight.intersection_id)
}
inline void TrafficLight::set_intersection_id(const char* value, size_t size) {
  
  intersection_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.TrafficLight.intersection_id)
}
inline ::std::string* TrafficLight::mutable_intersection_id() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficLight.intersection_id)
  return intersection_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TrafficLight::release_intersection_id() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficLight.intersection_id)
  
  return intersection_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TrafficLight::set_allocated_intersection_id(::std::string* intersection_id) {
  if (intersection_id != NULL) {
    
  } else {
    
  }
  intersection_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), intersection_id);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficLight.intersection_id)
}

// .metamoto.types.SignalConfiguration.Signal.SignalState state = 9;
inline bool TrafficLight::has_state() const {
  return this != internal_default_instance() && state_ != NULL;
}
inline const ::metamoto::types::SignalConfiguration_Signal_SignalState& TrafficLight::_internal_state() const {
  return *state_;
}
inline const ::metamoto::types::SignalConfiguration_Signal_SignalState& TrafficLight::state() const {
  const ::metamoto::types::SignalConfiguration_Signal_SignalState* p = state_;
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.state)
  return p != NULL ? *p : *reinterpret_cast<const ::metamoto::types::SignalConfiguration_Signal_SignalState*>(
      &::metamoto::types::_SignalConfiguration_Signal_SignalState_default_instance_);
}
inline ::metamoto::types::SignalConfiguration_Signal_SignalState* TrafficLight::release_state() {
  // @@protoc_insertion_point(field_release:metamoto.types.TrafficLight.state)
  
  ::metamoto::types::SignalConfiguration_Signal_SignalState* temp = state_;
  state_ = NULL;
  return temp;
}
inline ::metamoto::types::SignalConfiguration_Signal_SignalState* TrafficLight::mutable_state() {
  
  if (state_ == NULL) {
    auto* p = CreateMaybeMessage<::metamoto::types::SignalConfiguration_Signal_SignalState>(GetArenaNoVirtual());
    state_ = p;
  }
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficLight.state)
  return state_;
}
inline void TrafficLight::set_allocated_state(::metamoto::types::SignalConfiguration_Signal_SignalState* state) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(state_);
  }
  if (state) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      state = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, state, submessage_arena);
    }
    
  } else {
    
  }
  state_ = state;
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.TrafficLight.state)
}

// repeated .metamoto.types.SignalConfiguration.Signal.BulbType bulb_types = 10;
inline int TrafficLight::bulb_types_size() const {
  return bulb_types_.size();
}
inline ::metamoto::types::SignalConfiguration_Signal_BulbType* TrafficLight::mutable_bulb_types(int index) {
  // @@protoc_insertion_point(field_mutable:metamoto.types.TrafficLight.bulb_types)
  return bulb_types_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::metamoto::types::SignalConfiguration_Signal_BulbType >*
TrafficLight::mutable_bulb_types() {
  // @@protoc_insertion_point(field_mutable_list:metamoto.types.TrafficLight.bulb_types)
  return &bulb_types_;
}
inline const ::metamoto::types::SignalConfiguration_Signal_BulbType& TrafficLight::bulb_types(int index) const {
  // @@protoc_insertion_point(field_get:metamoto.types.TrafficLight.bulb_types)
  return bulb_types_.Get(index);
}
inline ::metamoto::types::SignalConfiguration_Signal_BulbType* TrafficLight::add_bulb_types() {
  // @@protoc_insertion_point(field_add:metamoto.types.TrafficLight.bulb_types)
  return bulb_types_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::metamoto::types::SignalConfiguration_Signal_BulbType >&
TrafficLight::bulb_types() const {
  // @@protoc_insertion_point(field_list:metamoto.types.TrafficLight.bulb_types)
  return bulb_types_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace types
}  // namespace metamoto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metamoto::types::TrafficLight_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metamoto::types::TrafficLight_Type>() {
  return ::metamoto::types::TrafficLight_Type_descriptor();
}
template <> struct is_proto_enum< ::metamoto::types::TrafficLight_Color> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metamoto::types::TrafficLight_Color>() {
  return ::metamoto::types::TrafficLight_Color_descriptor();
}
template <> struct is_proto_enum< ::metamoto::types::TrafficLight_Mode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metamoto::types::TrafficLight_Mode>() {
  return ::metamoto::types::TrafficLight_Mode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2ftypes_2ftraffic_5flight_2eproto
