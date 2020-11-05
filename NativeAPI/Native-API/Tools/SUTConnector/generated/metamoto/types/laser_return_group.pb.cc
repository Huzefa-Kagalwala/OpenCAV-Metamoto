// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/laser_return_group.proto

#include "metamoto/types/laser_return_group.pb.h"

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

namespace protobuf_metamoto_2ftypes_2flaser_5freturn_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2flaser_5freturn_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_LaserReturn;
}  // namespace protobuf_metamoto_2ftypes_2flaser_5freturn_2eproto
namespace protobuf_metamoto_2ftypes_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fpose_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Pose;
}  // namespace protobuf_metamoto_2ftypes_2fpose_2eproto
namespace metamoto {
namespace types {
class LaserReturnGroupDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<LaserReturnGroup>
      _instance;
} _LaserReturnGroup_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2flaser_5freturn_5fgroup_2eproto {
static void InitDefaultsLaserReturnGroup() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_LaserReturnGroup_default_instance_;
    new (ptr) ::metamoto::types::LaserReturnGroup();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::LaserReturnGroup::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_LaserReturnGroup =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsLaserReturnGroup}, {
      &protobuf_metamoto_2ftypes_2fpose_2eproto::scc_info_Pose.base,
      &protobuf_metamoto_2ftypes_2flaser_5freturn_2eproto::scc_info_LaserReturn.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_LaserReturnGroup.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::LaserReturnGroup, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::LaserReturnGroup, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::LaserReturnGroup, azimuth_angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::LaserReturnGroup, returns_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::types::LaserReturnGroup)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_LaserReturnGroup_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/laser_return_group.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\'metamoto/types/laser_return_group.prot"
      "o\022\016metamoto.types\032!metamoto/types/laser_"
      "return.proto\032\031metamoto/types/pose.proto\""
      "{\n\020LaserReturnGroup\022\"\n\004pose\030\001 \001(\0132\024.meta"
      "moto.types.Pose\022\025\n\razimuth_angle\030\002 \001(\002\022,"
      "\n\007returns\030\003 \003(\0132\033.metamoto.types.LaserRe"
      "turnB\021\252\002\016Metamoto.Typesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 271);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/laser_return_group.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2flaser_5freturn_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fpose_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2ftypes_2flaser_5freturn_5fgroup_2eproto
namespace metamoto {
namespace types {

// ===================================================================

void LaserReturnGroup::InitAsDefaultInstance() {
  ::metamoto::types::_LaserReturnGroup_default_instance_._instance.get_mutable()->pose_ = const_cast< ::metamoto::types::Pose*>(
      ::metamoto::types::Pose::internal_default_instance());
}
void LaserReturnGroup::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
void LaserReturnGroup::clear_returns() {
  returns_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LaserReturnGroup::kPoseFieldNumber;
const int LaserReturnGroup::kAzimuthAngleFieldNumber;
const int LaserReturnGroup::kReturnsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LaserReturnGroup::LaserReturnGroup()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2flaser_5freturn_5fgroup_2eproto::scc_info_LaserReturnGroup.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.LaserReturnGroup)
}
LaserReturnGroup::LaserReturnGroup(const LaserReturnGroup& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      returns_(from.returns_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pose()) {
    pose_ = new ::metamoto::types::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  azimuth_angle_ = from.azimuth_angle_;
  // @@protoc_insertion_point(copy_constructor:metamoto.types.LaserReturnGroup)
}

void LaserReturnGroup::SharedCtor() {
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&azimuth_angle_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(azimuth_angle_));
}

LaserReturnGroup::~LaserReturnGroup() {
  // @@protoc_insertion_point(destructor:metamoto.types.LaserReturnGroup)
  SharedDtor();
}

void LaserReturnGroup::SharedDtor() {
  if (this != internal_default_instance()) delete pose_;
}

void LaserReturnGroup::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* LaserReturnGroup::descriptor() {
  ::protobuf_metamoto_2ftypes_2flaser_5freturn_5fgroup_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2flaser_5freturn_5fgroup_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const LaserReturnGroup& LaserReturnGroup::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2flaser_5freturn_5fgroup_2eproto::scc_info_LaserReturnGroup.base);
  return *internal_default_instance();
}


void LaserReturnGroup::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.LaserReturnGroup)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  returns_.Clear();
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  azimuth_angle_ = 0;
  _internal_metadata_.Clear();
}

bool LaserReturnGroup::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.LaserReturnGroup)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .metamoto.types.Pose pose = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float azimuth_angle = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &azimuth_angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .metamoto.types.LaserReturn returns = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_returns()));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.LaserReturnGroup)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.LaserReturnGroup)
  return false;
#undef DO_
}

void LaserReturnGroup::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.LaserReturnGroup)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Pose pose = 1;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_pose(), output);
  }

  // float azimuth_angle = 2;
  if (this->azimuth_angle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->azimuth_angle(), output);
  }

  // repeated .metamoto.types.LaserReturn returns = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->returns_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->returns(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.LaserReturnGroup)
}

::google::protobuf::uint8* LaserReturnGroup::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.LaserReturnGroup)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Pose pose = 1;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_pose(), deterministic, target);
  }

  // float azimuth_angle = 2;
  if (this->azimuth_angle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->azimuth_angle(), target);
  }

  // repeated .metamoto.types.LaserReturn returns = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->returns_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->returns(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.LaserReturnGroup)
  return target;
}

size_t LaserReturnGroup::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.LaserReturnGroup)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .metamoto.types.LaserReturn returns = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->returns_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->returns(static_cast<int>(i)));
    }
  }

  // .metamoto.types.Pose pose = 1;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // float azimuth_angle = 2;
  if (this->azimuth_angle() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LaserReturnGroup::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.LaserReturnGroup)
  GOOGLE_DCHECK_NE(&from, this);
  const LaserReturnGroup* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LaserReturnGroup>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.LaserReturnGroup)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.LaserReturnGroup)
    MergeFrom(*source);
  }
}

void LaserReturnGroup::MergeFrom(const LaserReturnGroup& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.LaserReturnGroup)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  returns_.MergeFrom(from.returns_);
  if (from.has_pose()) {
    mutable_pose()->::metamoto::types::Pose::MergeFrom(from.pose());
  }
  if (from.azimuth_angle() != 0) {
    set_azimuth_angle(from.azimuth_angle());
  }
}

void LaserReturnGroup::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.LaserReturnGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LaserReturnGroup::CopyFrom(const LaserReturnGroup& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.LaserReturnGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LaserReturnGroup::IsInitialized() const {
  return true;
}

void LaserReturnGroup::Swap(LaserReturnGroup* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LaserReturnGroup::InternalSwap(LaserReturnGroup* other) {
  using std::swap;
  CastToBase(&returns_)->InternalSwap(CastToBase(&other->returns_));
  swap(pose_, other->pose_);
  swap(azimuth_angle_, other->azimuth_angle_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata LaserReturnGroup::GetMetadata() const {
  protobuf_metamoto_2ftypes_2flaser_5freturn_5fgroup_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2flaser_5freturn_5fgroup_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::LaserReturnGroup* Arena::CreateMaybeMessage< ::metamoto::types::LaserReturnGroup >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::LaserReturnGroup >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
