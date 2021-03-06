// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/pedestrian_library.proto

#include "metamoto/types/pedestrian_library.pb.h"

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

namespace protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_PedestrianLibrary_PedestrianTemplate;
}  // namespace protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto
namespace metamoto {
namespace types {
class PedestrianLibrary_PedestrianTemplateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PedestrianLibrary_PedestrianTemplate>
      _instance;
} _PedestrianLibrary_PedestrianTemplate_default_instance_;
class PedestrianLibraryDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PedestrianLibrary>
      _instance;
} _PedestrianLibrary_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto {
static void InitDefaultsPedestrianLibrary_PedestrianTemplate() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_PedestrianLibrary_PedestrianTemplate_default_instance_;
    new (ptr) ::metamoto::types::PedestrianLibrary_PedestrianTemplate();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::PedestrianLibrary_PedestrianTemplate::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PedestrianLibrary_PedestrianTemplate =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPedestrianLibrary_PedestrianTemplate}, {}};

static void InitDefaultsPedestrianLibrary() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_PedestrianLibrary_default_instance_;
    new (ptr) ::metamoto::types::PedestrianLibrary();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::PedestrianLibrary::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_PedestrianLibrary =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsPedestrianLibrary}, {
      &protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::scc_info_PedestrianLibrary_PedestrianTemplate.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PedestrianLibrary_PedestrianTemplate.base);
  ::google::protobuf::internal::InitSCC(&scc_info_PedestrianLibrary.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::PedestrianLibrary_PedestrianTemplate, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::PedestrianLibrary_PedestrianTemplate, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::PedestrianLibrary_PedestrianTemplate, other_names_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::PedestrianLibrary_PedestrianTemplate, prefab_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::PedestrianLibrary_PedestrianTemplate, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::PedestrianLibrary_PedestrianTemplate, weight_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::PedestrianLibrary, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::PedestrianLibrary, pedestrians_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::metamoto::types::PedestrianLibrary_PedestrianTemplate)},
  { 10, -1, sizeof(::metamoto::types::PedestrianLibrary)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_PedestrianLibrary_PedestrianTemplate_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_PedestrianLibrary_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/pedestrian_library.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\'metamoto/types/pedestrian_library.prot"
      "o\022\016metamoto.types\032\037metamoto/types/pedest"
      "rian.proto\"\347\001\n\021PedestrianLibrary\022I\n\013pede"
      "strians\030\001 \003(\01324.metamoto.types.Pedestria"
      "nLibrary.PedestrianTemplate\032\206\001\n\022Pedestri"
      "anTemplate\022\014\n\004name\030\001 \001(\t\022\023\n\013other_names\030"
      "\002 \003(\t\022\016\n\006prefab\030\003 \001(\t\022-\n\004type\030\004 \001(\0162\037.me"
      "tamoto.types.Pedestrian.Type\022\016\n\006weight\030\005"
      " \001(\002B\021\252\002\016Metamoto.Typesb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 351);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/pedestrian_library.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2fpedestrian_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto
namespace metamoto {
namespace types {

// ===================================================================

void PedestrianLibrary_PedestrianTemplate::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PedestrianLibrary_PedestrianTemplate::kNameFieldNumber;
const int PedestrianLibrary_PedestrianTemplate::kOtherNamesFieldNumber;
const int PedestrianLibrary_PedestrianTemplate::kPrefabFieldNumber;
const int PedestrianLibrary_PedestrianTemplate::kTypeFieldNumber;
const int PedestrianLibrary_PedestrianTemplate::kWeightFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PedestrianLibrary_PedestrianTemplate::PedestrianLibrary_PedestrianTemplate()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::scc_info_PedestrianLibrary_PedestrianTemplate.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.PedestrianLibrary.PedestrianTemplate)
}
PedestrianLibrary_PedestrianTemplate::PedestrianLibrary_PedestrianTemplate(const PedestrianLibrary_PedestrianTemplate& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      other_names_(from.other_names_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  prefab_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.prefab().size() > 0) {
    prefab_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.prefab_);
  }
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&weight_) -
    reinterpret_cast<char*>(&type_)) + sizeof(weight_));
  // @@protoc_insertion_point(copy_constructor:metamoto.types.PedestrianLibrary.PedestrianTemplate)
}

void PedestrianLibrary_PedestrianTemplate::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  prefab_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&weight_) -
      reinterpret_cast<char*>(&type_)) + sizeof(weight_));
}

PedestrianLibrary_PedestrianTemplate::~PedestrianLibrary_PedestrianTemplate() {
  // @@protoc_insertion_point(destructor:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  SharedDtor();
}

void PedestrianLibrary_PedestrianTemplate::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  prefab_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PedestrianLibrary_PedestrianTemplate::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PedestrianLibrary_PedestrianTemplate::descriptor() {
  ::protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PedestrianLibrary_PedestrianTemplate& PedestrianLibrary_PedestrianTemplate::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::scc_info_PedestrianLibrary_PedestrianTemplate.base);
  return *internal_default_instance();
}


void PedestrianLibrary_PedestrianTemplate::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  other_names_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  prefab_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&weight_) -
      reinterpret_cast<char*>(&type_)) + sizeof(weight_));
  _internal_metadata_.Clear();
}

bool PedestrianLibrary_PedestrianTemplate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.PedestrianLibrary.PedestrianTemplate.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string other_names = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_other_names()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->other_names(this->other_names_size() - 1).data(),
            static_cast<int>(this->other_names(this->other_names_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.PedestrianLibrary.PedestrianTemplate.other_names"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string prefab = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_prefab()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->prefab().data(), static_cast<int>(this->prefab().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.PedestrianLibrary.PedestrianTemplate.prefab"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Pedestrian.Type type = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::metamoto::types::Pedestrian_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float weight = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(45u /* 45 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &weight_)));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  return false;
#undef DO_
}

void PedestrianLibrary_PedestrianTemplate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.PedestrianLibrary.PedestrianTemplate.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated string other_names = 2;
  for (int i = 0, n = this->other_names_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->other_names(i).data(), static_cast<int>(this->other_names(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.PedestrianLibrary.PedestrianTemplate.other_names");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->other_names(i), output);
  }

  // string prefab = 3;
  if (this->prefab().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->prefab().data(), static_cast<int>(this->prefab().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.PedestrianLibrary.PedestrianTemplate.prefab");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->prefab(), output);
  }

  // .metamoto.types.Pedestrian.Type type = 4;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->type(), output);
  }

  // float weight = 5;
  if (this->weight() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->weight(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.PedestrianLibrary.PedestrianTemplate)
}

::google::protobuf::uint8* PedestrianLibrary_PedestrianTemplate::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.PedestrianLibrary.PedestrianTemplate.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated string other_names = 2;
  for (int i = 0, n = this->other_names_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->other_names(i).data(), static_cast<int>(this->other_names(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.PedestrianLibrary.PedestrianTemplate.other_names");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->other_names(i), target);
  }

  // string prefab = 3;
  if (this->prefab().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->prefab().data(), static_cast<int>(this->prefab().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.PedestrianLibrary.PedestrianTemplate.prefab");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->prefab(), target);
  }

  // .metamoto.types.Pedestrian.Type type = 4;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->type(), target);
  }

  // float weight = 5;
  if (this->weight() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->weight(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  return target;
}

size_t PedestrianLibrary_PedestrianTemplate::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string other_names = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->other_names_size());
  for (int i = 0, n = this->other_names_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->other_names(i));
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string prefab = 3;
  if (this->prefab().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->prefab());
  }

  // .metamoto.types.Pedestrian.Type type = 4;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // float weight = 5;
  if (this->weight() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PedestrianLibrary_PedestrianTemplate::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  GOOGLE_DCHECK_NE(&from, this);
  const PedestrianLibrary_PedestrianTemplate* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PedestrianLibrary_PedestrianTemplate>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.PedestrianLibrary.PedestrianTemplate)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.PedestrianLibrary.PedestrianTemplate)
    MergeFrom(*source);
  }
}

void PedestrianLibrary_PedestrianTemplate::MergeFrom(const PedestrianLibrary_PedestrianTemplate& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  other_names_.MergeFrom(from.other_names_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.prefab().size() > 0) {

    prefab_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.prefab_);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.weight() != 0) {
    set_weight(from.weight());
  }
}

void PedestrianLibrary_PedestrianTemplate::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PedestrianLibrary_PedestrianTemplate::CopyFrom(const PedestrianLibrary_PedestrianTemplate& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.PedestrianLibrary.PedestrianTemplate)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PedestrianLibrary_PedestrianTemplate::IsInitialized() const {
  return true;
}

void PedestrianLibrary_PedestrianTemplate::Swap(PedestrianLibrary_PedestrianTemplate* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PedestrianLibrary_PedestrianTemplate::InternalSwap(PedestrianLibrary_PedestrianTemplate* other) {
  using std::swap;
  other_names_.InternalSwap(CastToBase(&other->other_names_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  prefab_.Swap(&other->prefab_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(type_, other->type_);
  swap(weight_, other->weight_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PedestrianLibrary_PedestrianTemplate::GetMetadata() const {
  protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void PedestrianLibrary::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PedestrianLibrary::kPedestriansFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PedestrianLibrary::PedestrianLibrary()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::scc_info_PedestrianLibrary.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.PedestrianLibrary)
}
PedestrianLibrary::PedestrianLibrary(const PedestrianLibrary& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      pedestrians_(from.pedestrians_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:metamoto.types.PedestrianLibrary)
}

void PedestrianLibrary::SharedCtor() {
}

PedestrianLibrary::~PedestrianLibrary() {
  // @@protoc_insertion_point(destructor:metamoto.types.PedestrianLibrary)
  SharedDtor();
}

void PedestrianLibrary::SharedDtor() {
}

void PedestrianLibrary::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* PedestrianLibrary::descriptor() {
  ::protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PedestrianLibrary& PedestrianLibrary::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::scc_info_PedestrianLibrary.base);
  return *internal_default_instance();
}


void PedestrianLibrary::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.PedestrianLibrary)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  pedestrians_.Clear();
  _internal_metadata_.Clear();
}

bool PedestrianLibrary::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.PedestrianLibrary)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .metamoto.types.PedestrianLibrary.PedestrianTemplate pedestrians = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_pedestrians()));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.PedestrianLibrary)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.PedestrianLibrary)
  return false;
#undef DO_
}

void PedestrianLibrary::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.PedestrianLibrary)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .metamoto.types.PedestrianLibrary.PedestrianTemplate pedestrians = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->pedestrians_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->pedestrians(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.PedestrianLibrary)
}

::google::protobuf::uint8* PedestrianLibrary::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.PedestrianLibrary)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .metamoto.types.PedestrianLibrary.PedestrianTemplate pedestrians = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->pedestrians_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->pedestrians(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.PedestrianLibrary)
  return target;
}

size_t PedestrianLibrary::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.PedestrianLibrary)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .metamoto.types.PedestrianLibrary.PedestrianTemplate pedestrians = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->pedestrians_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->pedestrians(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PedestrianLibrary::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.PedestrianLibrary)
  GOOGLE_DCHECK_NE(&from, this);
  const PedestrianLibrary* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PedestrianLibrary>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.PedestrianLibrary)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.PedestrianLibrary)
    MergeFrom(*source);
  }
}

void PedestrianLibrary::MergeFrom(const PedestrianLibrary& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.PedestrianLibrary)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  pedestrians_.MergeFrom(from.pedestrians_);
}

void PedestrianLibrary::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.PedestrianLibrary)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PedestrianLibrary::CopyFrom(const PedestrianLibrary& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.PedestrianLibrary)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PedestrianLibrary::IsInitialized() const {
  return true;
}

void PedestrianLibrary::Swap(PedestrianLibrary* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PedestrianLibrary::InternalSwap(PedestrianLibrary* other) {
  using std::swap;
  CastToBase(&pedestrians_)->InternalSwap(CastToBase(&other->pedestrians_));
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata PedestrianLibrary::GetMetadata() const {
  protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2fpedestrian_5flibrary_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::PedestrianLibrary_PedestrianTemplate* Arena::CreateMaybeMessage< ::metamoto::types::PedestrianLibrary_PedestrianTemplate >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::PedestrianLibrary_PedestrianTemplate >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::PedestrianLibrary* Arena::CreateMaybeMessage< ::metamoto::types::PedestrianLibrary >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::PedestrianLibrary >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
