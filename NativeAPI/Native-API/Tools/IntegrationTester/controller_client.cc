#include "controller_client.h"
#include <iostream>
#include <sstream>

using namespace std;
using namespace metamoto::services;
using namespace metamoto::types;
  
bool ControllerClient::Initialize(const string& address, const string& dataBusURI) {
  try {
    _stub = metamoto::services::Controller::NewStub(grpc::CreateChannel(address, grpc::InsecureChannelCredentials()));
  } catch (...) {
    return false;
  }

  ControllerInitializeRequest request;
  ControllerInitializeReply reply;
  grpc::ClientContext context;
  
  ServiceDescription* serviceDescription = request.add_services();
  serviceDescription->set_uri(dataBusURI);
  serviceDescription->set_name("dataBus");
  request.set_results_directory("");
  request.add_publish_topics("VehicleControls");
  grpc::Status status = _stub->Initialize(&context, request, &reply);

  if (!status.ok()) {
    cout << "Initialize failed: " << status.error_code() << " : " << status.error_message() << endl;
    return false;
  }

  _updateRate = reply.update_rate();

  cout << "Initialize: " << endl
       << "  Name: " << reply.name() << endl
       << "  Version: " << reply.version() << endl
       << "  Update Rate: " << reply.update_rate() << endl;

  return true;
}

bool ControllerClient::Update() {
  ControllerUpdateRequest request;
  ControllerUpdateReply reply;
  grpc::ClientContext context;

  request.set_time(_time);
  _time += 1.0 / _updateRate;

  grpc::Status status = _stub->Update(&context, request, &reply);

  if (!status.ok()) {
    cout << "Update failed: " << status.error_code() << " : " << status.error_message() << endl;
    return false;
  }

  cout << "Update: " << endl
       << "  Next Update Time: " << reply.next_update_time() << endl;

  return true;
}

bool ControllerClient::Close() {
  ControllerCloseRequest request;
  ControllerCloseReply reply;
  grpc::ClientContext context;

  grpc::Status status = _stub->Close(&context, request, &reply);

  if (!status.ok()) {
    cout << "Close failed: " << status.error_code() << " : " << status.error_message() << endl;
    return false;
  }

  cout << "Close: " << endl
       << "  Number of Results: " << reply.results_size() << endl;

  return true;
}



