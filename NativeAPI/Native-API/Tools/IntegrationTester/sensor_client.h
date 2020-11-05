#pragma once

#include "metamoto/services/sensor.grpc.pb.h"
#include <string>
#include <grpc++/grpc++.h>

class SensorClient {
 public:
  bool Initialize(const std::string& address, const std::string& dataBusURI);
  bool Update();
  bool Close();

 private:
  std::unique_ptr<metamoto::services::Sensor::Stub> _stub;
  double _time = 0;
  double _updateRate = 0;
};

