#pragma once

#include "metamoto/services/controller.grpc.pb.h"
#include <string>
#include <grpc++/grpc++.h>

class ControllerClient {
 public:
  bool Initialize(const std::string& address, const std::string& dataBusURI);
  bool Update();
  bool Close();

 private:
  std::unique_ptr<metamoto::services::Controller::Stub> _stub;
  double _time = 0;
  double _updateRate = 0;
};

