// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: metamoto/types/test_vector.proto

#include "metamoto/types/test_vector.pb.h"

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

namespace protobuf_metamoto_2ftypes_2fego_5fvehicle_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fego_5fvehicle_2eproto ::google::protobuf::internal::SCCInfo<8> scc_info_EgoVehicle;
}  // namespace protobuf_metamoto_2ftypes_2fego_5fvehicle_2eproto
namespace protobuf_metamoto_2ftypes_2frange_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2frange_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Parameter;
}  // namespace protobuf_metamoto_2ftypes_2frange_2eproto
namespace protobuf_metamoto_2ftypes_2fscenario_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2fscenario_2eproto ::google::protobuf::internal::SCCInfo<12> scc_info_Scenario;
}  // namespace protobuf_metamoto_2ftypes_2fscenario_2eproto
namespace protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_TestVector_ParametersEntry_DoNotUse;
}  // namespace protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto
namespace metamoto {
namespace types {
class TestVector_ParametersEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TestVector_ParametersEntry_DoNotUse>
      _instance;
} _TestVector_ParametersEntry_DoNotUse_default_instance_;
class TestVectorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TestVector>
      _instance;
} _TestVector_default_instance_;
}  // namespace types
}  // namespace metamoto
namespace protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto {
static void InitDefaultsTestVector_ParametersEntry_DoNotUse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_TestVector_ParametersEntry_DoNotUse_default_instance_;
    new (ptr) ::metamoto::types::TestVector_ParametersEntry_DoNotUse();
  }
  ::metamoto::types::TestVector_ParametersEntry_DoNotUse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_TestVector_ParametersEntry_DoNotUse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsTestVector_ParametersEntry_DoNotUse}, {
      &protobuf_metamoto_2ftypes_2frange_2eproto::scc_info_Parameter.base,}};

static void InitDefaultsTestVector() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metamoto::types::_TestVector_default_instance_;
    new (ptr) ::metamoto::types::TestVector();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metamoto::types::TestVector::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_TestVector =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsTestVector}, {
      &protobuf_metamoto_2ftypes_2fscenario_2eproto::scc_info_Scenario.base,
      &protobuf_metamoto_2ftypes_2fego_5fvehicle_2eproto::scc_info_EgoVehicle.base,
      &protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::scc_info_TestVector_ParametersEntry_DoNotUse.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TestVector_ParametersEntry_DoNotUse.base);
  ::google::protobuf::internal::InitSCC(&scc_info_TestVector.base);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector_ParametersEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector_ParametersEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector_ParametersEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector_ParametersEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector, strategy_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector, num_tests_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector, scenario_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector, ego_vehicle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::metamoto::types::TestVector, parameters_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::metamoto::types::TestVector_ParametersEntry_DoNotUse)},
  { 9, -1, sizeof(::metamoto::types::TestVector)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_TestVector_ParametersEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::metamoto::types::_TestVector_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "metamoto/types/test_vector.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
      "\n metamoto/types/test_vector.proto\022\016meta"
      "moto.types\032 metamoto/types/ego_vehicle.p"
      "roto\032\032metamoto/types/range.proto\032\035metamo"
      "to/types/scenario.proto\"\262\003\n\nTestVector\022\n"
      "\n\002id\030\001 \001(\t\022\014\n\004name\030\002 \001(\t\0225\n\010strategy\030\003 \001"
      "(\0162#.metamoto.types.TestVector.Strategy\022"
      "\021\n\tnum_tests\030\004 \001(\005\022*\n\010scenario\030\005 \001(\0132\030.m"
      "etamoto.types.Scenario\022/\n\013ego_vehicle\030\006 "
      "\001(\0132\032.metamoto.types.EgoVehicle\022>\n\nparam"
      "eters\030d \003(\0132*.metamoto.types.TestVector."
      "ParametersEntry\032L\n\017ParametersEntry\022\013\n\003ke"
      "y\030\001 \001(\t\022(\n\005value\030\002 \001(\0132\031.metamoto.types."
      "Parameter:\0028\001\"U\n\010Strategy\022\013\n\007UNKNOWN\020\000\022\t"
      "\n\005OTHER\020\001\022\n\n\006SINGLE\020\002\022\016\n\nEXHAUSTIVE\020\003\022\n\n"
      "\006RANDOM\020\004\022\t\n\005EDGES\020\005B\021\252\002\016Metamoto.Typesb"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 607);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "metamoto/types/test_vector.proto", &protobuf_RegisterTypes);
  ::protobuf_metamoto_2ftypes_2fego_5fvehicle_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2frange_2eproto::AddDescriptors();
  ::protobuf_metamoto_2ftypes_2fscenario_2eproto::AddDescriptors();
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
}  // namespace protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto
namespace metamoto {
namespace types {
const ::google::protobuf::EnumDescriptor* TestVector_Strategy_descriptor() {
  protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::file_level_enum_descriptors[0];
}
bool TestVector_Strategy_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const TestVector_Strategy TestVector::UNKNOWN;
const TestVector_Strategy TestVector::OTHER;
const TestVector_Strategy TestVector::SINGLE;
const TestVector_Strategy TestVector::EXHAUSTIVE;
const TestVector_Strategy TestVector::RANDOM;
const TestVector_Strategy TestVector::EDGES;
const TestVector_Strategy TestVector::Strategy_MIN;
const TestVector_Strategy TestVector::Strategy_MAX;
const int TestVector::Strategy_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

TestVector_ParametersEntry_DoNotUse::TestVector_ParametersEntry_DoNotUse() {}
TestVector_ParametersEntry_DoNotUse::TestVector_ParametersEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void TestVector_ParametersEntry_DoNotUse::MergeFrom(const TestVector_ParametersEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata TestVector_ParametersEntry_DoNotUse::GetMetadata() const {
  ::protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::file_level_metadata[0];
}
void TestVector_ParametersEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void TestVector::InitAsDefaultInstance() {
  ::metamoto::types::_TestVector_default_instance_._instance.get_mutable()->scenario_ = const_cast< ::metamoto::types::Scenario*>(
      ::metamoto::types::Scenario::internal_default_instance());
  ::metamoto::types::_TestVector_default_instance_._instance.get_mutable()->ego_vehicle_ = const_cast< ::metamoto::types::EgoVehicle*>(
      ::metamoto::types::EgoVehicle::internal_default_instance());
}
void TestVector::clear_scenario() {
  if (GetArenaNoVirtual() == NULL && scenario_ != NULL) {
    delete scenario_;
  }
  scenario_ = NULL;
}
void TestVector::clear_ego_vehicle() {
  if (GetArenaNoVirtual() == NULL && ego_vehicle_ != NULL) {
    delete ego_vehicle_;
  }
  ego_vehicle_ = NULL;
}
void TestVector::clear_parameters() {
  parameters_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestVector::kIdFieldNumber;
const int TestVector::kNameFieldNumber;
const int TestVector::kStrategyFieldNumber;
const int TestVector::kNumTestsFieldNumber;
const int TestVector::kScenarioFieldNumber;
const int TestVector::kEgoVehicleFieldNumber;
const int TestVector::kParametersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestVector::TestVector()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::scc_info_TestVector.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metamoto.types.TestVector)
}
TestVector::TestVector(const TestVector& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  parameters_.MergeFrom(from.parameters_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_scenario()) {
    scenario_ = new ::metamoto::types::Scenario(*from.scenario_);
  } else {
    scenario_ = NULL;
  }
  if (from.has_ego_vehicle()) {
    ego_vehicle_ = new ::metamoto::types::EgoVehicle(*from.ego_vehicle_);
  } else {
    ego_vehicle_ = NULL;
  }
  ::memcpy(&strategy_, &from.strategy_,
    static_cast<size_t>(reinterpret_cast<char*>(&num_tests_) -
    reinterpret_cast<char*>(&strategy_)) + sizeof(num_tests_));
  // @@protoc_insertion_point(copy_constructor:metamoto.types.TestVector)
}

void TestVector::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&scenario_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&num_tests_) -
      reinterpret_cast<char*>(&scenario_)) + sizeof(num_tests_));
}

TestVector::~TestVector() {
  // @@protoc_insertion_point(destructor:metamoto.types.TestVector)
  SharedDtor();
}

void TestVector::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete scenario_;
  if (this != internal_default_instance()) delete ego_vehicle_;
}

void TestVector::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TestVector::descriptor() {
  ::protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TestVector& TestVector::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::scc_info_TestVector.base);
  return *internal_default_instance();
}


void TestVector::Clear() {
// @@protoc_insertion_point(message_clear_start:metamoto.types.TestVector)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  parameters_.Clear();
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && scenario_ != NULL) {
    delete scenario_;
  }
  scenario_ = NULL;
  if (GetArenaNoVirtual() == NULL && ego_vehicle_ != NULL) {
    delete ego_vehicle_;
  }
  ego_vehicle_ = NULL;
  ::memset(&strategy_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&num_tests_) -
      reinterpret_cast<char*>(&strategy_)) + sizeof(num_tests_));
  _internal_metadata_.Clear();
}

bool TestVector::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:metamoto.types.TestVector)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.TestVector.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.TestVector.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.TestVector.Strategy strategy = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_strategy(static_cast< ::metamoto::types::TestVector_Strategy >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 num_tests = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_tests_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.Scenario scenario = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_scenario()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .metamoto.types.EgoVehicle ego_vehicle = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_ego_vehicle()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<string, .metamoto.types.Parameter> parameters = 100;
      case 100: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 802 & 0xFF */)) {
          TestVector_ParametersEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              TestVector_ParametersEntry_DoNotUse,
              ::std::string, ::metamoto::types::Parameter,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter > > parser(&parameters_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), static_cast<int>(parser.key().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "metamoto.types.TestVector.ParametersEntry.key"));
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
  // @@protoc_insertion_point(parse_success:metamoto.types.TestVector)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metamoto.types.TestVector)
  return false;
#undef DO_
}

void TestVector::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metamoto.types.TestVector)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TestVector.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TestVector.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // .metamoto.types.TestVector.Strategy strategy = 3;
  if (this->strategy() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->strategy(), output);
  }

  // int32 num_tests = 4;
  if (this->num_tests() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->num_tests(), output);
  }

  // .metamoto.types.Scenario scenario = 5;
  if (this->has_scenario()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_scenario(), output);
  }

  // .metamoto.types.EgoVehicle ego_vehicle = 6;
  if (this->has_ego_vehicle()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_ego_vehicle(), output);
  }

  // map<string, .metamoto.types.Parameter> parameters = 100;
  if (!this->parameters().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "metamoto.types.TestVector.ParametersEntry.key");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->parameters().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->parameters().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::const_iterator
          it = this->parameters().begin();
          it != this->parameters().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<TestVector_ParametersEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(parameters_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            100, *entry, output);
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::std::unique_ptr<TestVector_ParametersEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::const_iterator
          it = this->parameters().begin();
          it != this->parameters().end(); ++it) {
        entry.reset(parameters_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            100, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:metamoto.types.TestVector)
}

::google::protobuf::uint8* TestVector::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:metamoto.types.TestVector)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TestVector.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "metamoto.types.TestVector.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // .metamoto.types.TestVector.Strategy strategy = 3;
  if (this->strategy() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->strategy(), target);
  }

  // int32 num_tests = 4;
  if (this->num_tests() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->num_tests(), target);
  }

  // .metamoto.types.Scenario scenario = 5;
  if (this->has_scenario()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_scenario(), deterministic, target);
  }

  // .metamoto.types.EgoVehicle ego_vehicle = 6;
  if (this->has_ego_vehicle()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_ego_vehicle(), deterministic, target);
  }

  // map<string, .metamoto.types.Parameter> parameters = 100;
  if (!this->parameters().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "metamoto.types.TestVector.ParametersEntry.key");
      }
    };

    if (deterministic &&
        this->parameters().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->parameters().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::const_iterator
          it = this->parameters().begin();
          it != this->parameters().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<TestVector_ParametersEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(parameters_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       100, *entry, deterministic, target);
;
        Utf8Check::Check(items[static_cast<ptrdiff_t>(i)]);
      }
    } else {
      ::std::unique_ptr<TestVector_ParametersEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::const_iterator
          it = this->parameters().begin();
          it != this->parameters().end(); ++it) {
        entry.reset(parameters_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       100, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:metamoto.types.TestVector)
  return target;
}

size_t TestVector::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metamoto.types.TestVector)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // map<string, .metamoto.types.Parameter> parameters = 100;
  total_size += 2 *
      ::google::protobuf::internal::FromIntSize(this->parameters_size());
  {
    ::std::unique_ptr<TestVector_ParametersEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::std::string, ::metamoto::types::Parameter >::const_iterator
        it = this->parameters().begin();
        it != this->parameters().end(); ++it) {
      entry.reset(parameters_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // string id = 1;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // .metamoto.types.Scenario scenario = 5;
  if (this->has_scenario()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *scenario_);
  }

  // .metamoto.types.EgoVehicle ego_vehicle = 6;
  if (this->has_ego_vehicle()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *ego_vehicle_);
  }

  // .metamoto.types.TestVector.Strategy strategy = 3;
  if (this->strategy() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->strategy());
  }

  // int32 num_tests = 4;
  if (this->num_tests() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_tests());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestVector::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:metamoto.types.TestVector)
  GOOGLE_DCHECK_NE(&from, this);
  const TestVector* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TestVector>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:metamoto.types.TestVector)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:metamoto.types.TestVector)
    MergeFrom(*source);
  }
}

void TestVector::MergeFrom(const TestVector& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metamoto.types.TestVector)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  parameters_.MergeFrom(from.parameters_);
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_scenario()) {
    mutable_scenario()->::metamoto::types::Scenario::MergeFrom(from.scenario());
  }
  if (from.has_ego_vehicle()) {
    mutable_ego_vehicle()->::metamoto::types::EgoVehicle::MergeFrom(from.ego_vehicle());
  }
  if (from.strategy() != 0) {
    set_strategy(from.strategy());
  }
  if (from.num_tests() != 0) {
    set_num_tests(from.num_tests());
  }
}

void TestVector::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:metamoto.types.TestVector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestVector::CopyFrom(const TestVector& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metamoto.types.TestVector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestVector::IsInitialized() const {
  return true;
}

void TestVector::Swap(TestVector* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TestVector::InternalSwap(TestVector* other) {
  using std::swap;
  parameters_.Swap(&other->parameters_);
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(scenario_, other->scenario_);
  swap(ego_vehicle_, other->ego_vehicle_);
  swap(strategy_, other->strategy_);
  swap(num_tests_, other->num_tests_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TestVector::GetMetadata() const {
  protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_metamoto_2ftypes_2ftest_5fvector_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace types
}  // namespace metamoto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::TestVector_ParametersEntry_DoNotUse* Arena::CreateMaybeMessage< ::metamoto::types::TestVector_ParametersEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::TestVector_ParametersEntry_DoNotUse >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metamoto::types::TestVector* Arena::CreateMaybeMessage< ::metamoto::types::TestVector >(Arena* arena) {
  return Arena::CreateInternal< ::metamoto::types::TestVector >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
