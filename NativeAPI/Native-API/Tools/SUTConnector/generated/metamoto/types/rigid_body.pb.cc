// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/rigid_body.proto

#include "metamoto/types/rigid_body.pb.h"

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

namespace protobuf_metamoto_2ftypes_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fpose_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Pose;
}  // namespace protobuf_metamoto_2ftypes_2fpose_2eproto
namespace protobuf_metamoto_2ftypes_2fvector3_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fvector3_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vector3;
}  // namespace protobuf_metamoto_2ftypes_2fvector3_2eproto
namespace protobuf_metamoto_2ftypes_2fvelocity_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fvelocity_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Velocity;
}  // namespace protobuf_metamoto_2ftypes_2fvelocity_2eproto
namespace metamoto {
namespace types {
class TireContactDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TireContact>
      _instance;
} _TireContact_default_instance_;
class RigidBodyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RigidBody>
      _instance;
} _RigidBody_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto {
static void InitDefaultsTireContact() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_TireContact_default_instance_;
    new (ptr) ::metamoto::types::TireContact();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::TireContact::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_TireContact =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsTireContact}, {
      &protobuf_metamoto_2ftypes_2fvector3_2eproto::scc_info_Vector3.base,}};

static void InitDefaultsRigidBody() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_RigidBody_default_instance_;
    new (ptr) ::metamoto::types::RigidBody();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::RigidBody::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_RigidBody =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsRigidBody}, {
      &protobuf_metamoto_2ftypes_2fpose_2eproto::scc_info_Pose.base,
      &protobuf_metamoto_2ftypes_2fvelocity_2eproto::scc_info_Velocity.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TireContact.base);
  ::google::protobuf::internal::InitSCC(&scc_info_RigidBody.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TireContact, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TireContact, center_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TireContact, normal_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TireContact, material_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TireContact, wetness_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TireContact, puddle_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RigidBody, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RigidBody, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RigidBody, wheels_pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::RigidBody, velocity_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::types::TireContact)},
  { 10, -1, sizeof(::metamoto::types::RigidBody)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_TireContact_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_RigidBody_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/rigid_body.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\037metamoto/types/rigid_body.proto\022\016metam"
      "oto.types\032\031metamoto/types/pose.proto\032\035me"
      "tamoto/types/velocity.proto\032\034metamoto/ty"
      "pes/vector3.proto\032!metamoto/types/enumer"
      "ations.proto\"\260\001\n\013TireContact\022\'\n\006center\030\001"
      " \001(\0132\027.metamoto.types.Vector3\022\'\n\006normal\030"
      "\002 \001(\0132\027.metamoto.types.Vector3\022.\n\010materi"
      "al\030\003 \001(\0162\034.metamoto.types.MaterialType\022\017"
      "\n\007wetness\030\004 \001(\002\022\016\n\006puddle\030\005 \001(\002\"\206\001\n\tRigi"
      "dBody\022\"\n\004pose\030\001 \001(\0132\024.metamoto.types.Pos"
      "e\022)\n\013wheels_pose\030\002 \003(\0132\024.metamoto.types."
      "Pose\022*\n\010velocity\030\003 \001(\0132\030.metamoto.types."
      "VelocityB\021\252\002\016Metamoto.Typesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 515);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/rigid_body.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2fpose_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fvelocity_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fvector3_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto
namespace metamoto {
namespace types {

// ===================================================================

void TireContact::InitAsDefaultInstance() {
  ::metamoto::types::_TireContact_default_instance_._instance.get_mutable()->center_ = const_cast< ::metamoto::types::Vector3*>(
      ::metamoto::types::Vector3::internal_default_instance());
  ::metamoto::types::_TireContact_default_instance_._instance.get_mutable()->normal_ = const_cast< ::metamoto::types::Vector3*>(
      ::metamoto::types::Vector3::internal_default_instance());
}
void TireContact::clear_center() {
  if (GetArenaNoVirtual() == NULL && center_ != NULL) {
    delete center_;
  }
  center_ = NULL;
}
void TireContact::clear_normal() {
  if (GetArenaNoVirtual() == NULL && normal_ != NULL) {
    delete normal_;
  }
  normal_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TireContact::kCenterFieldNumber;
const int TireContact::kNormalFieldNumber;
const int TireContact::kMaterialFieldNumber;
const int TireContact::kWetnessFieldNumber;
const int TireContact::kPuddleFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TireContact::TireContact()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::scc_info_TireContact.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.TireContact)
}
TireContact::TireContact(const TireContact& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_center()) {
    center_ = new ::metamoto::types::Vector3(*from.center_);
  } else {
    center_ = NULL;
  }
  if (from.has_normal()) {
    normal_ = new ::metamoto::types::Vector3(*from.normal_);
  } else {
    normal_ = NULL;
  }
  ::memcpy(&material_, &from.material_,
    static_cast<size_t>(reinterpret_cast<char*>(&puddle_) -
    reinterpret_cast<char*>(&material_)) + sizeof(puddle_));
  // @@protoc_insertion_point(copy_constructor:metamoto.types.TireContact)
}

void TireContact::SharedCtor() {
  ::memset(&center_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&puddle_) -
      reinterpret_cast<char*>(&center_)) + sizeof(puddle_));
}

TireContact::~TireContact() {
  // @@protoc_insertion_point(destructor:metamoto.types.TireContact)
  SharedDtor();
}

void TireContact::SharedDtor() {
  if (this != internal_default_instance()) delete center_;
  if (this != internal_default_instance()) delete normal_;
}

void TireContact::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TireContact::descriptor() {
  ::protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TireContact& TireContact::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::scc_info_TireContact.base);
  return *internal_default_instance();
}


void TireContact::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.TireContact)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && center_ != NULL) {
    delete center_;
  }
  center_ = NULL;
  if (GetArenaNoVirtual() == NULL && normal_ != NULL) {
    delete normal_;
  }
  normal_ = NULL;
  ::memset(&material_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&puddle_) -
      reinterpret_cast<char*>(&material_)) + sizeof(puddle_));
  _internal_metadata_.Clear();
}

bool TireContact::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.TireContact)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .metamoto.types.Vector3 center = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_center()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Vector3 normal = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_normal()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.MaterialType material = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_material(static_cast< ::metamoto::types::MaterialType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float wetness = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(37u /* 37 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &wetness_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float puddle = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &puddle_)));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.TireContact)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.TireContact)
  return false;
#undef DO_
}

void TireContact::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.TireContact)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Vector3 center = 1;
  if (this->has_center()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_center(), output);
  }

  // .metamoto.types.Vector3 normal = 2;
  if (this->has_normal()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_normal(), output);
  }

  // .metamoto.types.MaterialType material = 3;
  if (this->material() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->material(), output);
  }

  // float wetness = 4;
  if (this->wetness() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->wetness(), output);
  }

  // float puddle = 5;
  if (this->puddle() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->puddle(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.TireContact)
}

::google::protobuf::uint8* TireContact::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.TireContact)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Vector3 center = 1;
  if (this->has_center()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_center(), deterministic, target);
  }

  // .metamoto.types.Vector3 normal = 2;
  if (this->has_normal()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_normal(), deterministic, target);
  }

  // .metamoto.types.MaterialType material = 3;
  if (this->material() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->material(), target);
  }

  // float wetness = 4;
  if (this->wetness() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->wetness(), target);
  }

  // float puddle = 5;
  if (this->puddle() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->puddle(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.TireContact)
  return target;
}

size_t TireContact::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.TireContact)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .metamoto.types.Vector3 center = 1;
  if (this->has_center()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *center_);
  }

  // .metamoto.types.Vector3 normal = 2;
  if (this->has_normal()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *normal_);
  }

  // .metamoto.types.MaterialType material = 3;
  if (this->material() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->material());
  }

  // float wetness = 4;
  if (this->wetness() != 0) {
    total_size += 1 + 4;
  }

  // float puddle = 5;
  if (this->puddle() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TireContact::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.TireContact)
  GOOGLE_DCHECK_NE(&from, this);
  const TireContact* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TireContact>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.TireContact)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.TireContact)
    MergeFrom(*source);
  }
}

void TireContact::MergeFrom(const TireContact& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.TireContact)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_center()) {
    mutable_center()->::metamoto::types::Vector3::MergeFrom(from.center());
  }
  if (from.has_normal()) {
    mutable_normal()->::metamoto::types::Vector3::MergeFrom(from.normal());
  }
  if (from.material() != 0) {
    set_material(from.material());
  }
  if (from.wetness() != 0) {
    set_wetness(from.wetness());
  }
  if (from.puddle() != 0) {
    set_puddle(from.puddle());
  }
}

void TireContact::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.TireContact)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TireContact::CopyFrom(const TireContact& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.TireContact)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TireContact::IsInitialized() const {
  return true;
}

void TireContact::Swap(TireContact* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TireContact::InternalSwap(TireContact* other) {
  using std::swap;
  swap(center_, other->center_);
  swap(normal_, other->normal_);
  swap(material_, other->material_);
  swap(wetness_, other->wetness_);
  swap(puddle_, other->puddle_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TireContact::GetMetadata() const {
  protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void RigidBody::InitAsDefaultInstance() {
  ::metamoto::types::_RigidBody_default_instance_._instance.get_mutable()->pose_ = const_cast< ::metamoto::types::Pose*>(
      ::metamoto::types::Pose::internal_default_instance());
  ::metamoto::types::_RigidBody_default_instance_._instance.get_mutable()->velocity_ = const_cast< ::metamoto::types::Velocity*>(
      ::metamoto::types::Velocity::internal_default_instance());
}
void RigidBody::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
void RigidBody::clear_wheels_pose() {
  wheels_pose_.Clear();
}
void RigidBody::clear_velocity() {
  if (GetArenaNoVirtual() == NULL && velocity_ != NULL) {
    delete velocity_;
  }
  velocity_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RigidBody::kPoseFieldNumber;
const int RigidBody::kWheelsPoseFieldNumber;
const int RigidBody::kVelocityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RigidBody::RigidBody()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::scc_info_RigidBody.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.RigidBody)
}
RigidBody::RigidBody(const RigidBody& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      wheels_pose_(from.wheels_pose_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_pose()) {
    pose_ = new ::metamoto::types::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  if (from.has_velocity()) {
    velocity_ = new ::metamoto::types::Velocity(*from.velocity_);
  } else {
    velocity_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:metamoto.types.RigidBody)
}

void RigidBody::SharedCtor() {
  ::memset(&pose_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&velocity_) -
      reinterpret_cast<char*>(&pose_)) + sizeof(velocity_));
}

RigidBody::~RigidBody() {
  // @@protoc_insertion_point(destructor:metamoto.types.RigidBody)
  SharedDtor();
}

void RigidBody::SharedDtor() {
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete velocity_;
}

void RigidBody::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RigidBody::descriptor() {
  ::protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RigidBody& RigidBody::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::scc_info_RigidBody.base);
  return *internal_default_instance();
}


void RigidBody::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.RigidBody)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  wheels_pose_.Clear();
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  if (GetArenaNoVirtual() == NULL && velocity_ != NULL) {
    delete velocity_;
  }
  velocity_ = NULL;
  _internal_metadata_.Clear();
}

bool RigidBody::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.RigidBody)
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

      // repeated .metamoto.types.Pose wheels_pose = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_wheels_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Velocity velocity = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_velocity()));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.RigidBody)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.RigidBody)
  return false;
#undef DO_
}

void RigidBody::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.RigidBody)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Pose pose = 1;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_pose(), output);
  }

  // repeated .metamoto.types.Pose wheels_pose = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->wheels_pose_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->wheels_pose(static_cast<int>(i)),
      output);
  }

  // .metamoto.types.Velocity velocity = 3;
  if (this->has_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_velocity(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.RigidBody)
}

::google::protobuf::uint8* RigidBody::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.RigidBody)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .metamoto.types.Pose pose = 1;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_pose(), deterministic, target);
  }

  // repeated .metamoto.types.Pose wheels_pose = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->wheels_pose_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->wheels_pose(static_cast<int>(i)), deterministic, target);
  }

  // .metamoto.types.Velocity velocity = 3;
  if (this->has_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_velocity(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.RigidBody)
  return target;
}

size_t RigidBody::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.RigidBody)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .metamoto.types.Pose wheels_pose = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->wheels_pose_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->wheels_pose(static_cast<int>(i)));
    }
  }

  // .metamoto.types.Pose pose = 1;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // .metamoto.types.Velocity velocity = 3;
  if (this->has_velocity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *velocity_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RigidBody::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.RigidBody)
  GOOGLE_DCHECK_NE(&from, this);
  const RigidBody* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RigidBody>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.RigidBody)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.RigidBody)
    MergeFrom(*source);
  }
}

void RigidBody::MergeFrom(const RigidBody& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.RigidBody)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  wheels_pose_.MergeFrom(from.wheels_pose_);
  if (from.has_pose()) {
    mutable_pose()->::metamoto::types::Pose::MergeFrom(from.pose());
  }
  if (from.has_velocity()) {
    mutable_velocity()->::metamoto::types::Velocity::MergeFrom(from.velocity());
  }
}

void RigidBody::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.RigidBody)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RigidBody::CopyFrom(const RigidBody& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.RigidBody)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RigidBody::IsInitialized() const {
  return true;
}

void RigidBody::Swap(RigidBody* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RigidBody::InternalSwap(RigidBody* other) {
  using std::swap;
  CastToBase(&wheels_pose_)->InternalSwap(CastToBase(&other->wheels_pose_));
  swap(pose_, other->pose_);
  swap(velocity_, other->velocity_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RigidBody::GetMetadata() const {
  protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2frigid_5fbody_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::TireContact* Arena::CreateMaybeMessage< ::metamoto::types::TireContact >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::TireContact >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::RigidBody* Arena::CreateMaybeMessage< ::metamoto::types::RigidBody >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::RigidBody >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
