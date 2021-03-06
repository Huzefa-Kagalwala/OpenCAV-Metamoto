// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/image.proto

#ifndef PROTOBUF_INCLUDED_metamoto_2ftypes_2fimage_2eproto
#define PROTOBUF_INCLUDED_metamoto_2ftypes_2fimage_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fimage_2eproto 

namespace protobuf_metamoto_2ftypes_2fimage_2eproto {
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
}  // namespace protobuf_metamoto_2ftypes_2fimage_2eproto
namespace metamoto {
namespace types {
class Image;
class ImageDefaultTypeInternal;
extern ImageDefaultTypeInternal _Image_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> ::metamoto::types::Image* Arena::CreateMaybeMessage<::metamoto::types::Image>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metamoto {
namespace types {

// ===================================================================

class Image : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:metamoto.types.Image) */ {
 public:
  Image();
  virtual ~Image();

  Image(const Image& from);

  inline Image& operator=(const Image& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Image(Image&& from) noexcept
    : Image() {
    *this = ::std::move(from);
  }

  inline Image& operator=(Image&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Image& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Image* internal_default_instance() {
    return reinterpret_cast<const Image*>(
               &_Image_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Image* other);
  friend void swap(Image& a, Image& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Image* New() const final {
    return CreateMaybeMessage<Image>(NULL);
  }

  Image* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Image>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Image& from);
  void MergeFrom(const Image& from);
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
  void InternalSwap(Image* other);
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

  // string encoding = 4;
  void clear_encoding();
  static const int kEncodingFieldNumber = 4;
  const ::std::string& encoding() const;
  void set_encoding(const ::std::string& value);
  #if LANG_CXX11
  void set_encoding(::std::string&& value);
  #endif
  void set_encoding(const char* value);
  void set_encoding(const char* value, size_t size);
  ::std::string* mutable_encoding();
  ::std::string* release_encoding();
  void set_allocated_encoding(::std::string* encoding);

  // bytes data = 5;
  void clear_data();
  static const int kDataFieldNumber = 5;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // uint32 width = 1;
  void clear_width();
  static const int kWidthFieldNumber = 1;
  ::google::protobuf::uint32 width() const;
  void set_width(::google::protobuf::uint32 value);

  // uint32 height = 2;
  void clear_height();
  static const int kHeightFieldNumber = 2;
  ::google::protobuf::uint32 height() const;
  void set_height(::google::protobuf::uint32 value);

  // uint32 step = 3;
  void clear_step();
  static const int kStepFieldNumber = 3;
  ::google::protobuf::uint32 step() const;
  void set_step(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:metamoto.types.Image)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr encoding_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::uint32 width_;
  ::google::protobuf::uint32 height_;
  ::google::protobuf::uint32 step_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_metamoto_2ftypes_2fimage_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Image

// uint32 width = 1;
inline void Image::clear_width() {
  width_ = 0u;
}
inline ::google::protobuf::uint32 Image::width() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Image.width)
  return width_;
}
inline void Image::set_width(::google::protobuf::uint32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.Image.width)
}

// uint32 height = 2;
inline void Image::clear_height() {
  height_ = 0u;
}
inline ::google::protobuf::uint32 Image::height() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Image.height)
  return height_;
}
inline void Image::set_height(::google::protobuf::uint32 value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.Image.height)
}

// uint32 step = 3;
inline void Image::clear_step() {
  step_ = 0u;
}
inline ::google::protobuf::uint32 Image::step() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Image.step)
  return step_;
}
inline void Image::set_step(::google::protobuf::uint32 value) {
  
  step_ = value;
  // @@protoc_insertion_point(field_set:metamoto.types.Image.step)
}

// string encoding = 4;
inline void Image::clear_encoding() {
  encoding_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Image::encoding() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Image.encoding)
  return encoding_.GetNoArena();
}
inline void Image::set_encoding(const ::std::string& value) {
  
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.Image.encoding)
}
#if LANG_CXX11
inline void Image::set_encoding(::std::string&& value) {
  
  encoding_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.Image.encoding)
}
#endif
inline void Image::set_encoding(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.Image.encoding)
}
inline void Image::set_encoding(const char* value, size_t size) {
  
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.Image.encoding)
}
inline ::std::string* Image::mutable_encoding() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.Image.encoding)
  return encoding_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Image::release_encoding() {
  // @@protoc_insertion_point(field_release:metamoto.types.Image.encoding)
  
  return encoding_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_encoding(::std::string* encoding) {
  if (encoding != NULL) {
    
  } else {
    
  }
  encoding_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encoding);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Image.encoding)
}

// bytes data = 5;
inline void Image::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Image::data() const {
  // @@protoc_insertion_point(field_get:metamoto.types.Image.data)
  return data_.GetNoArena();
}
inline void Image::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metamoto.types.Image.data)
}
#if LANG_CXX11
inline void Image::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metamoto.types.Image.data)
}
#endif
inline void Image::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metamoto.types.Image.data)
}
inline void Image::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metamoto.types.Image.data)
}
inline ::std::string* Image::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:metamoto.types.Image.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Image::release_data() {
  // @@protoc_insertion_point(field_release:metamoto.types.Image.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Image::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:metamoto.types.Image.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace types
}  // namespace metamoto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_metamoto_2ftypes_2fimage_2eproto
