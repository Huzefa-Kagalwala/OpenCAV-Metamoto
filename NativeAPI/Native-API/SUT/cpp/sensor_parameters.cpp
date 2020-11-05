#include "sensor_parameters.h"

using namespace metamoto::messages;
using namespace metamoto::services;

const grpc::Status SensorParameters::SetParameters(const SensorInitializeRequest* request) {
  auto params = request->parameters();

  _params.exampleIntParam = GetInt32(params, "exampleIntParam", 10);
  _params.exampleFloatParam = GetFloat(params, "exampleFloatParam", 100.0f);
  _params.exampleStringParam = GetString(params, "exampleStringParam", "string parameter");
  _params.exampleBoolParam = GetBool(params, "exampleBoolParam", true);

  return grpc::Status::OK;
}

const Parameters& SensorParameters::Get() const {
  return _params;
}

const google::protobuf::Value *SensorParameters::GetParameter(const google::protobuf::Struct &params,
                                                        const std::string &name) const {
  for (auto const &x : params.fields()) {
    if (x.first == name) {
      return &x.second;
    }
  }

  return nullptr;
}

const float SensorParameters::GetFloat(const google::protobuf::Struct &params,
                                  const std::string &name,
                                  const float defVal) const {
  auto const p = GetParameter(params, name);

  if (p == nullptr) {
    return defVal;
  } else {
    return (float)p->number_value();
  }
}

const int SensorParameters::GetInt32(const google::protobuf::Struct &params,
                                const std::string &name,
                                const int defVal) const {
  auto const p = GetParameter(params, name);

  if (p == nullptr) {
    return defVal;
  } else {
    return (int)p->number_value();
  }
}

const std::string SensorParameters::GetString(const google::protobuf::Struct &params,
                                        const std::string &name,
                                        const std::string &defVal) const {
  auto const p = GetParameter(params, name);

  if (p == nullptr) {
    return defVal;
  } else {
    return p->string_value();
  }
}

const bool SensorParameters::GetBool(const google::protobuf::Struct &params,
                                const std::string &name,
                                const bool defVal) const {
  auto const p = GetParameter(params, name);

  if (p == nullptr) {
    return defVal;
  } else {
    return p->bool_value();
  }
}