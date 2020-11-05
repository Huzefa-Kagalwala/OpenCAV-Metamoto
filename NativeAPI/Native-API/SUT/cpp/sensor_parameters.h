#pragma once
#include <vector>
#include "metamoto/services/sensor.grpc.pb.h"
#include "metamoto/messages/data_bus_message.pb.h"

struct Parameters {
  int exampleIntParam;
  bool exampleBoolParam;
  float exampleFloatParam;
  std::string exampleStringParam;
};

class SensorParameters {
public:
  const grpc::Status SetParameters(const metamoto::services::SensorInitializeRequest* request);

  const Parameters& Get() const;

  const float GetFloat(const google::protobuf::Struct &params,
                        const std::string &name,
                        const float defVal) const;

  const int GetInt32(const google::protobuf::Struct &params,
                      const std::string &name,
                      const int defVal) const;

  const std::string GetString(const google::protobuf::Struct &params,
                              const std::string &name, const std::string &defVal) const;

  const bool GetBool(const google::protobuf::Struct &params,
                      const std::string &name,
                      const bool defVal) const;

private:
  Parameters _params;

  const google::protobuf::Value *GetParameter(const google::protobuf::Struct &params,
                                              const std::string &name) const;
};

