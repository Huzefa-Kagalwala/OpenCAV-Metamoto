// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/messages/log_message.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2fmessages_2flog_5fmessage_2eproto
#define PROTOBUF_INCLUDED_metamoto_2fmessages_2flog_5fmessage_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2fmessages_2flog_5fmessage_2eproto 

namespace protobuf_metamoto_2fmessages_2flog_5fmessage_2eproto {
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
}  // namespace protobuf_metamoto_2fmessages_2flog_5fmessage_2eproto
namespace metamoto {
namespace messages {
class LogMessage;
class LogMessageDefaultTypeInternal;
extern LogMessageDefaultTypeInternal _LogMessage_default_instance_;
}  // namespace messages
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::messages::LogMessage* Arena::CreateMaybeMessage<::metamoto::messages::LogMessage>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace messages {

enum LogMessage_Level {
  LogMessage_Level_LEVEL_UNKNOWN = 0,
  LogMessage_Level_LEVEL_ERROR = 1,
  LogMessage_Level_LEVEL_WARNING = 2,
  LogMessage_Level_LEVEL_INFO = 3,
  LogMessage_Level_LEVEL_TRACE = 4,
  LogMessage_Level_LogMessage_Level_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LogMessage_Level_LogMessage_Level_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LogMessage_Level_IsValid(int value);
const LogMessage_Level LogMessage_Level_Level_MIN = LogMessage_Level_LEVEL_UNKNOWN;
const LogMessage_Level LogMessage_Level_Level_MAX = LogMessage_Level_LEVEL_TRACE;
const int LogMessage_Level_Level_ARRAYSIZE = LogMessage_Level_Level_MAX + 1;

const ::google::protobuf::EnumDescriptor* LogMessage_Level_descriptor();
inline const ::std::string& LogMessage_Level_Name(LogMessage_Level value) {
  return ::google::protobuf::internal::NameOfEnum(
    LogMessage_Level_descriptor(), value);
}
inline bool LogMessage_Level_Parse(
    const ::std::string& name, LogMessage_Level* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LogMessage_Level>(
    LogMessage_Level_descriptor(), name, value);
}
// ===================================================================

class LogMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.messages.LogMessage) */ {
 public:
  LogMessage();
  virtual ~LogMessage();

  LogMessage(const LogMessage& from);

  inline LogMessage& operator=(const LogMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LogMessage(LogMessage&& from) noexcept
    : LogMessage() {
    *this = ::std::move(from);
  }

  inline LogMessage& operator=(LogMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LogMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogMessage* internal_default_instance() {
    return reinterpret_cast<const LogMessage*>(
               &_LogMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LogMessage* other);
  friend void swap(LogMessage& a, LogMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LogMessage* New() const final {
    return CreateMaybeMessage<LogMessage>(NULL);
  }

  LogMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LogMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LogMessage& from);
  void MergeFrom(const LogMessage& from);
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
  void InternalSwap(LogMessage* other);
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

  typedef LogMessage_Level Level;
  static const Level LEVEL_UNKNOWN =
    LogMessage_Level_LEVEL_UNKNOWN;
  static const Level LEVEL_ERROR =
    LogMessage_Level_LEVEL_ERROR;
  static const Level LEVEL_WARNING =
    LogMessage_Level_LEVEL_WARNING;
  static const Level LEVEL_INFO =
    LogMessage_Level_LEVEL_INFO;
  static const Level LEVEL_TRACE =
    LogMessage_Level_LEVEL_TRACE;
  static inline bool Level_IsValid(int value) {
    return LogMessage_Level_IsValid(value);
  }
  static const Level Level_MIN =
    LogMessage_Level_Level_MIN;
  static const Level Level_MAX =
    LogMessage_Level_Level_MAX;
  static const int Level_ARRAYSIZE =
    LogMessage_Level_Level_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Level_descriptor() {
    return LogMessage_Level_descriptor();
  }
  static inline const ::std::string& Level_Name(Level value) {
    return LogMessage_Level_Name(value);
  }
  static inline bool Level_Parse(const ::std::string& name,
      Level* value) {
    return LogMessage_Level_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string class_name = 3;
  void clear_class_name();
  static const int kClassNameFieldNumber = 3;
  const ::std::string& class_name() const;
  void set_class_name(const ::std::string& value);
  #if LANG_CXX11
  void set_class_name(::std::string&& value);
  #endif
  void set_class_name(const char* value);
  void set_class_name(const char* value, size_t size);
  ::std::string* mutable_class_name();
  ::std::string* release_class_name();
  void set_allocated_class_name(::std::string* class_name);

  // string method = 4;
  void clear_method();
  static const int kMethodFieldNumber = 4;
  const ::std::string& method() const;
  void set_method(const ::std::string& value);
  #if LANG_CXX11
  void set_method(::std::string&& value);
  #endif
  void set_method(const char* value);
  void set_method(const char* value, size_t size);
  ::std::string* mutable_method();
  ::std::string* release_method();
  void set_allocated_method(::std::string* method);

  // string message = 6;
  void clear_message();
  static const int kMessageFieldNumber = 6;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  #if LANG_CXX11
  void set_message(::std::string&& value);
  #endif
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // string filename = 8;
  void clear_filename();
  static const int kFilenameFieldNumber = 8;
  const ::std::string& filename() const;
  void set_filename(const ::std::string& value);
  #if LANG_CXX11
  void set_filename(::std::string&& value);
  #endif
  void set_filename(const char* value);
  void set_filename(const char* value, size_t size);
  ::std::string* mutable_filename();
  ::std::string* release_filename();
  void set_allocated_filename(::std::string* filename);

  // double time = 1;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  double time() const;
  void set_time(double value);

  // .metamoto.messages.LogMessage.Level level = 2;
  void clear_level();
  static const int kLevelFieldNumber = 2;
  ::metamoto::messages::LogMessage_Level level() const;
  void set_level(::metamoto::messages::LogMessage_Level value);

  // int32 line_number = 5;
  void clear_line_number();
  static const int kLineNumberFieldNumber = 5;
  ::google::protobuf::int32 line_number() const;
  void set_line_number(::google::protobuf::int32 value);

  // float real_time = 7;
  void clear_real_time();
  static const int kRealTimeFieldNumber = 7;
  float real_time() const;
  void set_real_time(float value);

  // @@protoc_insertion_point(class_scope:metamoto.messages.LogMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr class_name_;
  ::google::protobuf::internal::ArenaStringPtr method_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::google::protobuf::internal::ArenaStringPtr filename_;
  double time_;
  int level_;
  ::google::protobuf::int32 line_number_;
  float real_time_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2fmessages_2flog_5fmessage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogMessage

// double time = 1;
inline void LogMessage::clear_time() {
  time_ = 0;
}
inline double LogMessage::time() const {
  // @@protoc_insertion_point(field_get:metamoto.messages.LogMessage.time)
  return time_;
}
inline void LogMessage::set_time(double value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:metamoto.messages.LogMessage.time)
}

// .metamoto.messages.LogMessage.Level level = 2;
inline void LogMessage::clear_level() {
  level_ = 0;
}
inline ::metamoto::messages::LogMessage_Level LogMessage::level() const {
  // @@protoc_insertion_point(field_get:metamoto.messages.LogMessage.level)
  return static_cast< ::metamoto::messages::LogMessage_Level >(level_);
}
inline void LogMessage::set_level(::metamoto::messages::LogMessage_Level value) {
  
  level_ = value;
  // @@protoc_insertion_point(field_set:metamoto.messages.LogMessage.level)
}

// string class_name = 3;
inline void LogMessage::clear_class_name() {
  class_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogMessage::class_name() const {
  // @@protoc_insertion_point(field_get:metamoto.messages.LogMessage.class_name)
  return class_name_.GetNoArena();
}
inline void LogMessage::set_class_name(const ::std::string& value) {
  
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.messages.LogMessage.class_name)
}
#if LANG_CXX11
inline void LogMessage::set_class_name(::std::string&& value) {
  
  class_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.messages.LogMessage.class_name)
}
#endif
inline void LogMessage::set_class_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.messages.LogMessage.class_name)
}
inline void LogMessage::set_class_name(const char* value, size_t size) {
  
  class_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.messages.LogMessage.class_name)
}
inline ::std::string* LogMessage::mutable_class_name() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.messages.LogMessage.class_name)
  return class_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogMessage::release_class_name() {
  // @@protoc_insertion_point(field_release:metamoto.messages.LogMessage.class_name)
  
  return class_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogMessage::set_allocated_class_name(::std::string* class_name) {
  if (class_name != NULL) {
    
  } else {
    
  }
  class_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), class_name);
  // @@protoc_insertion_point(field_set_allocated:metamoto.messages.LogMessage.class_name)
}

// string method = 4;
inline void LogMessage::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogMessage::method() const {
  // @@protoc_insertion_point(field_get:metamoto.messages.LogMessage.method)
  return method_.GetNoArena();
}
inline void LogMessage::set_method(const ::std::string& value) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.messages.LogMessage.method)
}
#if LANG_CXX11
inline void LogMessage::set_method(::std::string&& value) {
  
  method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.messages.LogMessage.method)
}
#endif
inline void LogMessage::set_method(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.messages.LogMessage.method)
}
inline void LogMessage::set_method(const char* value, size_t size) {
  
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.messages.LogMessage.method)
}
inline ::std::string* LogMessage::mutable_method() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.messages.LogMessage.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogMessage::release_method() {
  // @@protoc_insertion_point(field_release:metamoto.messages.LogMessage.method)
  
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogMessage::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    
  } else {
    
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:metamoto.messages.LogMessage.method)
}

// int32 line_number = 5;
inline void LogMessage::clear_line_number() {
  line_number_ = 0;
}
inline ::google::protobuf::int32 LogMessage::line_number() const {
  // @@protoc_insertion_point(field_get:metamoto.messages.LogMessage.line_number)
  return line_number_;
}
inline void LogMessage::set_line_number(::google::protobuf::int32 value) {
  
  line_number_ = value;
  // @@protoc_insertion_point(field_set:metamoto.messages.LogMessage.line_number)
}

// string message = 6;
inline void LogMessage::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogMessage::message() const {
  // @@protoc_insertion_point(field_get:metamoto.messages.LogMessage.message)
  return message_.GetNoArena();
}
inline void LogMessage::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.messages.LogMessage.message)
}
#if LANG_CXX11
inline void LogMessage::set_message(::std::string&& value) {
  
  message_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.messages.LogMessage.message)
}
#endif
inline void LogMessage::set_message(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.messages.LogMessage.message)
}
inline void LogMessage::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.messages.LogMessage.message)
}
inline ::std::string* LogMessage::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.messages.LogMessage.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogMessage::release_message() {
  // @@protoc_insertion_point(field_release:metamoto.messages.LogMessage.message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogMessage::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:metamoto.messages.LogMessage.message)
}

// float real_time = 7;
inline void LogMessage::clear_real_time() {
  real_time_ = 0;
}
inline float LogMessage::real_time() const {
  // @@protoc_insertion_point(field_get:metamoto.messages.LogMessage.real_time)
  return real_time_;
}
inline void LogMessage::set_real_time(float value) {
  
  real_time_ = value;
  // @@protoc_insertion_point(field_set:metamoto.messages.LogMessage.real_time)
}

// string filename = 8;
inline void LogMessage::clear_filename() {
  filename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogMessage::filename() const {
  // @@protoc_insertion_point(field_get:metamoto.messages.LogMessage.filename)
  return filename_.GetNoArena();
}
inline void LogMessage::set_filename(const ::std::string& value) {
  
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.messages.LogMessage.filename)
}
#if LANG_CXX11
inline void LogMessage::set_filename(::std::string&& value) {
  
  filename_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.messages.LogMessage.filename)
}
#endif
inline void LogMessage::set_filename(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.messages.LogMessage.filename)
}
inline void LogMessage::set_filename(const char* value, size_t size) {
  
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.messages.LogMessage.filename)
}
inline ::std::string* LogMessage::mutable_filename() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.messages.LogMessage.filename)
  return filename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogMessage::release_filename() {
  // @@protoc_insertion_point(field_release:metamoto.messages.LogMessage.filename)
  
  return filename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogMessage::set_allocated_filename(::std::string* filename) {
  if (filename != NULL) {
    
  } else {
    
  }
  filename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), filename);
  // @@protoc_insertion_point(field_set_allocated:metamoto.messages.LogMessage.filename)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace metamoto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::metamoto::messages::LogMessage_Level> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::metamoto::messages::LogMessage_Level>() {
  return ::metamoto::messages::LogMessage_Level_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2fmessages_2flog_5fmessage_2eproto
