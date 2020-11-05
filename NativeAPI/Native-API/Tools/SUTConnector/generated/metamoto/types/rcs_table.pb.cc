// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/rcs_table.proto

#include "metamoto/types/rcs_table.pb.h"

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

namespace metamoto {
namespace types {
class RCSTableDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RCSTable>
      _instance;
} _RCSTable_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2frcs_5ftable_2eproto {
static void InitDefaultsRCSTable() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_RCSTable_default_instance_;
    new (ptr) ::metamoto::types::RCSTable();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::RCSTable::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RCSTable =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRCSTable}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RCSTable.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RCSTable, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RCSTable, object_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RCSTable, azimuth_angles_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RCSTable, elevation_angles_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RCSTable, rcs_values_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::types::RCSTable)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_RCSTable_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/rcs_table.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\036metamoto/types/rcs_table.proto\022\016metamo"
      "to.types\032!metamoto/types/enumerations.pr"
      "oto\"\201\001\n\010RCSTable\022/\n\013object_type\030\001 \001(\0162\032."
      "metamoto.types.ObjectType\022\026\n\016azimuth_ang"
      "les\030\002 \003(\002\022\030\n\020elevation_angles\030\003 \003(\002\022\022\n\nr"
      "cs_values\030\004 \003(\002B\021\252\002\016Metamoto.Typesb\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 242);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/rcs_table.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2fenumerations_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2ftypes_2frcs_5ftable_2eproto
namespace metamoto {
namespace types {

// ===================================================================

void RCSTable::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RCSTable::kObjectTypeFieldNumber;
const int RCSTable::kAzimuthAnglesFieldNumber;
const int RCSTable::kElevationAnglesFieldNumber;
const int RCSTable::kRcsValuesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RCSTable::RCSTable()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2frcs_5ftable_2eproto::scc_info_RCSTable.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.RCSTable)
}
RCSTable::RCSTable(const RCSTable& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      azimuth_angles_(from.azimuth_angles_),
      elevation_angles_(from.elevation_angles_),
      rcs_values_(from.rcs_values_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  object_type_ = from.object_type_;
  // @@protoc_insertion_point(copy_constructor:metamoto.types.RCSTable)
}

void RCSTable::SharedCtor() {
  object_type_ = 0;
}

RCSTable::~RCSTable() {
  // @@protoc_insertion_point(destructor:metamoto.types.RCSTable)
  SharedDtor();
}

void RCSTable::SharedDtor() {
}

void RCSTable::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RCSTable::descriptor() {
  ::protobuf_metamoto_2ftypes_2frcs_5ftable_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2frcs_5ftable_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RCSTable& RCSTable::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2frcs_5ftable_2eproto::scc_info_RCSTable.base);
  return *internal_default_instance();
}


void RCSTable::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.RCSTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  azimuth_angles_.Clear();
  elevation_angles_.Clear();
  rcs_values_.Clear();
  object_type_ = 0;
  _internal_metadata_.Clear();
}

bool RCSTable::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.RCSTable)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .metamoto.types.ObjectType object_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_object_type(static_cast< ::metamoto::types::ObjectType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float azimuth_angles = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_azimuth_angles())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 18u, input, this->mutable_azimuth_angles())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float elevation_angles = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_elevation_angles())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(29u /* 29 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 26u, input, this->mutable_elevation_angles())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated float rcs_values = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_rcs_values())));
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 34u, input, this->mutable_rcs_values())));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.RCSTable)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.RCSTable)
  return false;
#undef DO_
}

void RCSTable::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.RCSTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.ObjectType object_type = 1;
  if (this->object_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->object_type(), output);
  }

  // repeated float azimuth_angles = 2;
  if (this->azimuth_angles_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _azimuth_angles_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->azimuth_angles().data(), this->azimuth_angles_size(), output);
  }

  // repeated float elevation_angles = 3;
  if (this->elevation_angles_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _elevation_angles_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->elevation_angles().data(), this->elevation_angles_size(), output);
  }

  // repeated float rcs_values = 4;
  if (this->rcs_values_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(static_cast< ::google::protobuf::uint32>(
        _rcs_values_cached_byte_size_));
    ::google::protobuf::internal::WireFormatLite::WriteFloatArray(
      this->rcs_values().data(), this->rcs_values_size(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.RCSTable)
}

::google::protobuf::uint8* RCSTable::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.RCSTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.ObjectType object_type = 1;
  if (this->object_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->object_type(), target);
  }

  // repeated float azimuth_angles = 2;
  if (this->azimuth_angles_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _azimuth_angles_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->azimuth_angles_, target);
  }

  // repeated float elevation_angles = 3;
  if (this->elevation_angles_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _elevation_angles_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->elevation_angles_, target);
  }

  // repeated float rcs_values = 4;
  if (this->rcs_values_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
        static_cast< ::google::protobuf::int32>(
            _rcs_values_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->rcs_values_, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.RCSTable)
  return target;
}

size_t RCSTable::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.RCSTable)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated float azimuth_angles = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->azimuth_angles_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _azimuth_angles_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float elevation_angles = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->elevation_angles_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _elevation_angles_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated float rcs_values = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->rcs_values_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _rcs_values_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // .metamoto.types.ObjectType object_type = 1;
  if (this->object_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->object_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RCSTable::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.RCSTable)
  GOOGLE_DCHECK_NE(&from, this);
  const RCSTable* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RCSTable>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.RCSTable)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.RCSTable)
    MergeFrom(*source);
  }
}

void RCSTable::MergeFrom(const RCSTable& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.RCSTable)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  azimuth_angles_.MergeFrom(from.azimuth_angles_);
  elevation_angles_.MergeFrom(from.elevation_angles_);
  rcs_values_.MergeFrom(from.rcs_values_);
  if (from.object_type() != 0) {
    set_object_type(from.object_type());
  }
}

void RCSTable::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.RCSTable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RCSTable::CopyFrom(const RCSTable& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.RCSTable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RCSTable::IsInitialized() const {
  return true;
}

void RCSTable::Swap(RCSTable* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RCSTable::InternalSwap(RCSTable* other) {
  using std::swap;
  azimuth_angles_.InternalSwap(&other->azimuth_angles_);
  elevation_angles_.InternalSwap(&other->elevation_angles_);
  rcs_values_.InternalSwap(&other->rcs_values_);
  swap(object_type_, other->object_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RCSTable::GetMetadata() const {
  protobuf_metamoto_2ftypes_2frcs_5ftable_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2frcs_5ftable_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::RCSTable* Arena::CreateMaybeMessage< ::metamoto::types::RCSTable >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::RCSTable >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)