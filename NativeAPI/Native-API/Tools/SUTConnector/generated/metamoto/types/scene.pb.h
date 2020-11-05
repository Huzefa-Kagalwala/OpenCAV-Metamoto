// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/scene.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2ftypes_2fscene_2eproto
#define PROTOBUF_INCLUDED_metamoto_2ftypes_2fscene_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fscene_2eproto 

namespace protobuf_metamoto_2ftypes_2fscene_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_metamoto_2ftypes_2fscene_2eproto
namespace metamoto {
namespace types {
class Scene;
class SceneDefaultTypeInternal;
extern SceneDefaultTypeInternal _Scene_default_instance_;
class SceneImport;
class SceneImportDefaultTypeInternal;
extern SceneImportDefaultTypeInternal _SceneImport_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::types::Scene* Arena::CreateMaybeMessage<::metamoto::types::Scene>(Arena*);
template<> ::metamoto::types::SceneImport* Arena::CreateMaybeMessage<::metamoto::types::SceneImport>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace types {

enum SceneImport_Status {
  SceneImport_Status_UNKNOWN = 0,
  SceneImport_Status_QUEUED = 1,
  SceneImport_Status_BUILDING = 2,
  SceneImport_Status_SUCCEEDED = 3,
  SceneImport_Status_FAILED = 4,
  SceneImport_Status_CANCELLED = 5,
  SceneImport_Status_SceneImport_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SceneImport_Status_SceneImport_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SceneImport_Status_IsValid(int value);
const SceneImport_Status SceneImport_Status_Status_MIN = SceneImport_Status_UNKNOWN;
const SceneImport_Status SceneImport_Status_Status_MAX = SceneImport_Status_CANCELLED;
const int SceneImport_Status_Status_ARRAYSIZE = SceneImport_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* SceneImport_Status_descriptor();
inline const ::std::string& SceneImport_Status_Name(SceneImport_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    SceneImport_Status_descriptor(), value);
}
inline bool SceneImport_Status_Parse(
    const ::std::string& name, SceneImport_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SceneImport_Status>(
    SceneImport_Status_descriptor(), name, value);
}
// ===================================================================

class SceneImport : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.SceneImport) */ {
 public:
  SceneImport();
  virtual ~SceneImport();

  SceneImport(const SceneImport& from);

  inline SceneImport& operator=(const SceneImport& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SceneImport(SceneImport&& from) noexcept
    : SceneImport() {
    *this = ::std::move(from);
  }

  inline SceneImport& operator=(SceneImport&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SceneImport& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SceneImport* internal_default_instance() {
    return reinterpret_cast<const SceneImport*>(
               &_SceneImport_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SceneImport* other);
  friend void swap(SceneImport& a, SceneImport& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SceneImport* New() const final {
    return CreateMaybeMessage<SceneImport>(NULL);
  }

  SceneImport* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SceneImport>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SceneImport& from);
  void MergeFrom(const SceneImport& from);
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
  void InternalSwap(SceneImport* other);
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

  typedef SceneImport_Status Status;
  static const Status UNKNOWN =
    SceneImport_Status_UNKNOWN;
  static const Status QUEUED =
    SceneImport_Status_QUEUED;
  static const Status BUILDING =
    SceneImport_Status_BUILDING;
  static const Status SUCCEEDED =
    SceneImport_Status_SUCCEEDED;
  static const Status FAILED =
    SceneImport_Status_FAILED;
  static const Status CANCELLED =
    SceneImport_Status_CANCELLED;
  static inline bool Status_IsValid(int value) {
    return SceneImport_Status_IsValid(value);
  }
  static const Status Status_MIN =
    SceneImport_Status_Status_MIN;
  static const Status Status_MAX =
    SceneImport_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    SceneImport_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return SceneImport_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return SceneImport_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return SceneImport_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string status_message = 3;
  void clear_status_message();
  static const int kStatusMessageFieldNumber = 3;
  const ::std::string& status_message() const;
  void set_status_message(const ::std::string& value);
  #if LANG_CXX11
  void set_status_message(::std::string&& value);
  #endif
  void set_status_message(const char* value);
  void set_status_message(const char* value, size_t size);
  ::std::string* mutable_status_message();
  ::std::string* release_status_message();
  void set_allocated_status_message(::std::string* status_message);

  // string start_time = 4;
  void clear_start_time();
  static const int kStartTimeFieldNumber = 4;
  const ::std::string& start_time() const;
  void set_start_time(const ::std::string& value);
  #if LANG_CXX11
  void set_start_time(::std::string&& value);
  #endif
  void set_start_time(const char* value);
  void set_start_time(const char* value, size_t size);
  ::std::string* mutable_start_time();
  ::std::string* release_start_time();
  void set_allocated_start_time(::std::string* start_time);

  // string end_time = 5;
  void clear_end_time();
  static const int kEndTimeFieldNumber = 5;
  const ::std::string& end_time() const;
  void set_end_time(const ::std::string& value);
  #if LANG_CXX11
  void set_end_time(::std::string&& value);
  #endif
  void set_end_time(const char* value);
  void set_end_time(const char* value, size_t size);
  ::std::string* mutable_end_time();
  ::std::string* release_end_time();
  void set_allocated_end_time(::std::string* end_time);

  // string started_by = 6;
  void clear_started_by();
  static const int kStartedByFieldNumber = 6;
  const ::std::string& started_by() const;
  void set_started_by(const ::std::string& value);
  #if LANG_CXX11
  void set_started_by(::std::string&& value);
  #endif
  void set_started_by(const char* value);
  void set_started_by(const char* value, size_t size);
  ::std::string* mutable_started_by();
  ::std::string* release_started_by();
  void set_allocated_started_by(::std::string* started_by);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // .metamoto.types.SceneImport.Status status = 2;
  void clear_status();
  static const int kStatusFieldNumber = 2;
  ::metamoto::types::SceneImport_Status status() const;
  void set_status(::metamoto::types::SceneImport_Status value);

  // float progress = 7;
  void clear_progress();
  static const int kProgressFieldNumber = 7;
  float progress() const;
  void set_progress(float value);

  // @@protoc_insertion_point(class_scope:metamoto.types.SceneImport)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr status_message_;
  ::google::protobuf::internal::ArenaStringPtr start_time_;
  ::google::protobuf::internal::ArenaStringPtr end_time_;
  ::google::protobuf::internal::ArenaStringPtr started_by_;
  ::google::protobuf::int32 id_;
  int status_;
  float progress_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2ftypes_2fscene_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Scene : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.Scene) */ {
 public:
  Scene();
  virtual ~Scene();

  Scene(const Scene& from);

  inline Scene& operator=(const Scene& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Scene(Scene&& from) noexcept
    : Scene() {
    *this = ::std::move(from);
  }

  inline Scene& operator=(Scene&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Scene& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Scene* internal_default_instance() {
    return reinterpret_cast<const Scene*>(
               &_Scene_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Scene* other);
  friend void swap(Scene& a, Scene& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Scene* New() const final {
    return CreateMaybeMessage<Scene>(NULL);
  }

  Scene* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Scene>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Scene& from);
  void MergeFrom(const Scene& from);
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
  void InternalSwap(Scene* other);
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

  // repeated .metamoto.types.SceneImport imports = 6;
  int imports_size() const;
  void clear_imports();
  static const int kImportsFieldNumber = 6;
  ::metamoto::types::SceneImport* mutable_imports(int index);
  ::google::protobuf::RepeatedPtrField< ::metamoto::types::SceneImport >*
      mutable_imports();
  const ::metamoto::types::SceneImport& imports(int index) const;
  ::metamoto::types::SceneImport* add_imports();
  const ::google::protobuf::RepeatedPtrField< ::metamoto::types::SceneImport >&
      imports() const;

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

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string display_name = 3;
  void clear_display_name();
  static const int kDisplayNameFieldNumber = 3;
  const ::std::string& display_name() const;
  void set_display_name(const ::std::string& value);
  #if LANG_CXX11
  void set_display_name(::std::string&& value);
  #endif
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  ::std::string* mutable_display_name();
  ::std::string* release_display_name();
  void set_allocated_display_name(::std::string* display_name);

  // string description = 4;
  void clear_description();
  static const int kDescriptionFieldNumber = 4;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // bool ready = 5;
  void clear_ready();
  static const int kReadyFieldNumber = 5;
  bool ready() const;
  void set_ready(bool value);

  // @@protoc_insertion_point(class_scope:metamoto.types.Scene)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::metamoto::types::SceneImport > imports_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr display_name_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  bool ready_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2ftypes_2fscene_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SceneImport

// int32 id = 1;
inline void SceneImport::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 SceneImport::id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.SceneImport.id)
  return id_;
}
inline void SceneImport::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.SceneImport.id)
}

// .metamoto.types.SceneImport.Status status = 2;
inline void SceneImport::clear_status() {
  status_ = 0;
}
inline ::metamoto::types::SceneImport_Status SceneImport::status() const {
  // @@protoc_insertion_point(field_get:metamoto.types.SceneImport.status)
  return static_cast< ::metamoto::types::SceneImport_Status >(status_);
}
inline void SceneImport::set_status(::metamoto::types::SceneImport_Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.SceneImport.status)
}

// string status_message = 3;
inline void SceneImport::clear_status_message() {
  status_message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SceneImport::status_message() const {
  // @@protoc_insertion_point(field_get:metamoto.types.SceneImport.status_message)
  return status_message_.GetNoArena();
}
inline void SceneImport::set_status_message(const ::std::string& value) {
  
  status_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.SceneImport.status_message)
}
#if LANG_CXX11
inline void SceneImport::set_status_message(::std::string&& value) {
  
  status_message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.SceneImport.status_message)
}
#endif
inline void SceneImport::set_status_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  status_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.SceneImport.status_message)
}
inline void SceneImport::set_status_message(const char* value, size_t size) {
  
  status_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.SceneImport.status_message)
}
inline ::std::string* SceneImport::mutable_status_message() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.SceneImport.status_message)
  return status_message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SceneImport::release_status_message() {
  // @@protoc_insertion_point(field_release:metamoto.types.SceneImport.status_message)
  
  return status_message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SceneImport::set_allocated_status_message(::std::string* status_message) {
  if (status_message != NULL) {
    
  } else {
    
  }
  status_message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), status_message);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.SceneImport.status_message)
}

// string start_time = 4;
inline void SceneImport::clear_start_time() {
  start_time_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SceneImport::start_time() const {
  // @@protoc_insertion_point(field_get:metamoto.types.SceneImport.start_time)
  return start_time_.GetNoArena();
}
inline void SceneImport::set_start_time(const ::std::string& value) {
  
  start_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.SceneImport.start_time)
}
#if LANG_CXX11
inline void SceneImport::set_start_time(::std::string&& value) {
  
  start_time_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.SceneImport.start_time)
}
#endif
inline void SceneImport::set_start_time(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  start_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.SceneImport.start_time)
}
inline void SceneImport::set_start_time(const char* value, size_t size) {
  
  start_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.SceneImport.start_time)
}
inline ::std::string* SceneImport::mutable_start_time() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.SceneImport.start_time)
  return start_time_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SceneImport::release_start_time() {
  // @@protoc_insertion_point(field_release:metamoto.types.SceneImport.start_time)
  
  return start_time_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SceneImport::set_allocated_start_time(::std::string* start_time) {
  if (start_time != NULL) {
    
  } else {
    
  }
  start_time_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), start_time);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.SceneImport.start_time)
}

// string end_time = 5;
inline void SceneImport::clear_end_time() {
  end_time_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SceneImport::end_time() const {
  // @@protoc_insertion_point(field_get:metamoto.types.SceneImport.end_time)
  return end_time_.GetNoArena();
}
inline void SceneImport::set_end_time(const ::std::string& value) {
  
  end_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.SceneImport.end_time)
}
#if LANG_CXX11
inline void SceneImport::set_end_time(::std::string&& value) {
  
  end_time_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.SceneImport.end_time)
}
#endif
inline void SceneImport::set_end_time(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  end_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.SceneImport.end_time)
}
inline void SceneImport::set_end_time(const char* value, size_t size) {
  
  end_time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.SceneImport.end_time)
}
inline ::std::string* SceneImport::mutable_end_time() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.SceneImport.end_time)
  return end_time_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SceneImport::release_end_time() {
  // @@protoc_insertion_point(field_release:metamoto.types.SceneImport.end_time)
  
  return end_time_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SceneImport::set_allocated_end_time(::std::string* end_time) {
  if (end_time != NULL) {
    
  } else {
    
  }
  end_time_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), end_time);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.SceneImport.end_time)
}

// string started_by = 6;
inline void SceneImport::clear_started_by() {
  started_by_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SceneImport::started_by() const {
  // @@protoc_insertion_point(field_get:metamoto.types.SceneImport.started_by)
  return started_by_.GetNoArena();
}
inline void SceneImport::set_started_by(const ::std::string& value) {
  
  started_by_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.SceneImport.started_by)
}
#if LANG_CXX11
inline void SceneImport::set_started_by(::std::string&& value) {
  
  started_by_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.SceneImport.started_by)
}
#endif
inline void SceneImport::set_started_by(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  started_by_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.SceneImport.started_by)
}
inline void SceneImport::set_started_by(const char* value, size_t size) {
  
  started_by_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.SceneImport.started_by)
}
inline ::std::string* SceneImport::mutable_started_by() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.SceneImport.started_by)
  return started_by_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SceneImport::release_started_by() {
  // @@protoc_insertion_point(field_release:metamoto.types.SceneImport.started_by)
  
  return started_by_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SceneImport::set_allocated_started_by(::std::string* started_by) {
  if (started_by != NULL) {
    
  } else {
    
  }
  started_by_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), started_by);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.SceneImport.started_by)
}

// float progress = 7;
inline void SceneImport::clear_progress() {
  progress_ = 0;
}
inline float SceneImport::progress() const {
  // @@protoc_insertion_point(field_get:metamoto.types.SceneImport.progress)
  return progress_;
}
inline void SceneImport::set_progress(float value) {
  
  progress_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.SceneImport.progress)
}

// -------------------------------------------------------------------

// Scene

// string id = 1;
inline void Scene::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Scene::id() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Scene.id)
  return id_.GetNoArena();
}
inline void Scene::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.Scene.id)
}
#if LANG_CXX11
inline void Scene::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.Scene.id)
}
#endif
inline void Scene::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.Scene.id)
}
inline void Scene::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.Scene.id)
}
inline ::std::string* Scene::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.Scene.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Scene::release_id() {
  // @@protoc_insertion_point(field_release:metamoto.types.Scene.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Scene::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Scene.id)
}

// string name = 2;
inline void Scene::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Scene::name() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Scene.name)
  return name_.GetNoArena();
}
inline void Scene::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.Scene.name)
}
#if LANG_CXX11
inline void Scene::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.Scene.name)
}
#endif
inline void Scene::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.Scene.name)
}
inline void Scene::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.Scene.name)
}
inline ::std::string* Scene::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.Scene.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Scene::release_name() {
  // @@protoc_insertion_point(field_release:metamoto.types.Scene.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Scene::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Scene.name)
}

// string display_name = 3;
inline void Scene::clear_display_name() {
  display_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Scene::display_name() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Scene.display_name)
  return display_name_.GetNoArena();
}
inline void Scene::set_display_name(const ::std::string& value) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.Scene.display_name)
}
#if LANG_CXX11
inline void Scene::set_display_name(::std::string&& value) {
  
  display_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.Scene.display_name)
}
#endif
inline void Scene::set_display_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.Scene.display_name)
}
inline void Scene::set_display_name(const char* value, size_t size) {
  
  display_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.Scene.display_name)
}
inline ::std::string* Scene::mutable_display_name() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.Scene.display_name)
  return display_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Scene::release_display_name() {
  // @@protoc_insertion_point(field_release:metamoto.types.Scene.display_name)
  
  return display_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Scene::set_allocated_display_name(::std::string* display_name) {
  if (display_name != NULL) {
    
  } else {
    
  }
  display_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), display_name);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Scene.display_name)
}

// string description = 4;
inline void Scene::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Scene::description() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Scene.description)
  return description_.GetNoArena();
}
inline void Scene::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.Scene.description)
}
#if LANG_CXX11
inline void Scene::set_description(::std::string&& value) {
  
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.Scene.description)
}
#endif
inline void Scene::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.Scene.description)
}
inline void Scene::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.Scene.description)
}
inline ::std::string* Scene::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.Scene.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Scene::release_description() {
  // @@protoc_insertion_point(field_release:metamoto.types.Scene.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Scene::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Scene.description)
}

// bool ready = 5;
inline void Scene::clear_ready() {
  ready_ = false;
}
inline bool Scene::ready() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Scene.ready)
  return ready_;
}
inline void Scene::set_ready(bool value) {
  
  ready_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.Scene.ready)
}

// repeated .metamoto.types.SceneImport imports = 6;
inline int Scene::imports_size() const {
  return imports_.size();
}
inline void Scene::clear_imports() {
  imports_.Clear();
}
inline ::metamoto::types::SceneImport* Scene::mutable_imports(int index) {
  // @@protoc_insertion_point(field_mutable:metamoto.types.Scene.imports)
  return imports_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::metamoto::types::SceneImport >*
Scene::mutable_imports() {
  // @@protoc_insertion_point(field_mutable_list:metamoto.types.Scene.imports)
  return &imports_;
}
inline const ::metamoto::types::SceneImport& Scene::imports(int index) const {
  // @@protoc_insertion_point(field_get:metamoto.types.Scene.imports)
  return imports_.Get(index);
}
inline ::metamoto::types::SceneImport* Scene::add_imports() {
  // @@protoc_insertion_point(field_add:metamoto.types.Scene.imports)
  return imports_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::metamoto::types::SceneImport >&
Scene::imports() const {
  // @@protoc_insertion_point(field_list:metamoto.types.Scene.imports)
  return imports_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace types
}  // namespace metamoto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metamoto::types::SceneImport_Status> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metamoto::types::SceneImport_Status>() {
  return ::metamoto::types::SceneImport_Status_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2ftypes_2fscene_2eproto