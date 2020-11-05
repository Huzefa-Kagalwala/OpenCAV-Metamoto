#include "sut_connector_client.h"
#include "data_bus_service.h"
#include "map_service.h"
#include "ray_tracer_service.h"
#include "reporting_service.h"
#include "scenario_service.h"
#include "system_service.h"

#include <chrono>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace metamoto::services;
using namespace std;

SUTConnectorClient::SUTConnectorClient()
  : _running(false),
    _trace(false),
    _controller(nullptr),
    _sensor(nullptr)
{
}

bool SUTConnectorClient::Connect(const string &serverURI, const string &sutURI, const string &id, 
                                 SUTConnectorConnectRequest::SUTType type,
                                 const string &rootCertificatesFilename, const string &accessToken) {
  if (id.empty()) {
    Log("Connect: ID is empty.");
    return false;
  }

  _serverURI = serverURI;
  _sutURI = sutURI;
  _id = id;
  _type = type;

  grpc::SslCredentialsOptions sslOptions;
  if (!ReadFile(sslOptions.pem_root_certs, rootCertificatesFilename)) {
    return false;
  }

  grpc::ChannelArguments chArgs;
  chArgs.SetMaxReceiveMessageSize(-1);  // Unlimited receive size (for large images).
  _stub = SUTConnector::NewStub(grpc::CreateCustomChannel(serverURI, grpc::SslCredentials(sslOptions), chArgs));

  _streamContext.AddMetadata("authorization", "Bearer " + accessToken);

  _stream = _stub->Connect(&_streamContext);

  SUTConnectorRequest connectRequest;
  connectRequest.set_allocated_connect(new SUTConnectorConnectRequest);
  connectRequest.mutable_connect()->set_id(_id);
  connectRequest.mutable_connect()->set_type(_type);

  if (!_stream->Write(connectRequest)) {
    grpc::Status status = _stream->Finish();
    ostringstream oss;
    oss << "Connect request write failed: " << status.error_code() << ": " << status.error_message();
    Log(oss.str());
    _running = false;
    return false;
  }

  _stop = false;
  _running = true;
  _connectThread = std::unique_ptr<std::thread>(new thread(&SUTConnectorClient::Run, this));

  return true;
}

bool SUTConnectorClient::Disconnect() {
  _stop = false;

  if (_running) {
    grpc::WriteOptions options;
    options.set_last_message();
    SUTConnectorRequest request;
    request.set_allocated_disconnect(new SUTConnectorDisconnectRequest);
    _stream->WriteLast(request, options);
  }

  _connectThread->join();
  return true;
}

bool SUTConnectorClient::IsConnected() const {
  return _running;
}

void SUTConnectorClient::Wait() const {
  while (IsConnected()) {
    this_thread::sleep_for(chrono::seconds(1));
  }
}

void SUTConnectorClient::Log(const string &message) {
  cout << message << endl;
}

void SUTConnectorClient::Trace(const string &message) {
  if (_trace) {
    cout << "Trace: " << message << endl;
  }
}

void SUTConnectorClient::SetTraceEnabled(bool enable) {
  _trace = enable;
}

grpc::Status SUTConnectorClient::Request(const SUTConnectorRequest &request, SUTConnectorReply &reply) {
  _stream->Write(request);

  // Timeout to service should occur on connector server
  _stream->Read(&reply);

  if (reply.has_status()) {
    return grpc::Status((grpc::StatusCode)reply.mutable_status()->code(), reply.mutable_status()->message());
  }

  return grpc::Status(grpc::Status::OK);
}

void SUTConnectorClient::ShutdownServices() {
  for (size_t i = 0; i < _services.size(); i++) {
    if (_servers[i] != nullptr) {
      _servers[i]->Shutdown();
    }
  }

  _servers.clear();
  _services.clear();
}

grpc::Service *SUTConnectorClient::AllocateService(const string &name) {
  if (name == "databus") {
    return new DataBusService(this);
  } else if (name == "raytracer") {
    return new RayTracerService(this);
  } else if (name == "map") {
    return new MapService(this);
  } else if (name == "reporting") {
    return new ReportingService(this);
  } else if (name == "scenario") {
    return new ScenarioService(this);
  } else if (name == "system") {
    return new SystemService(this);
  } else {
    Log("SUTConnectorClient::AllocateService: Unknown service '" + name + "'.");
    return nullptr;
  }
}

void SUTConnectorClient::InitializeServices(google::protobuf::RepeatedPtrField<metamoto::types::ServiceDescription> *services) {
  for (int i = 0; i < services->size(); i++) {
    string name = (*services)[i].name();
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);

    grpc::Service *service = AllocateService(name);
    if (service != nullptr) {
      ostringstream uri;
      uri << "[::]:0";  // Let system choose port

      int port;
      grpc::ServerBuilder builder;
      builder.AddListeningPort(uri.str(), grpc::InsecureServerCredentials(), &port);
      builder.RegisterService(service);

      _services.push_back(unique_ptr<grpc::Service>(service));
      _servers.push_back(builder.BuildAndStart());

      uri.str("");
      uri << "127.0.0.1:" << port;
      (*services)[i].set_uri(uri.str());

      if (_servers.back() == nullptr) {
        Log("InitializeServices: Failed to start " + (*services)[i].name() + " service at " + uri.str());
      } else {
        Log("InitializeServices: " + (*services)[i].name() + " service running at " + uri.str());
      }
    }
  }
}

google::rpc::Status *SUTConnectorClient::Convert(const grpc::Status &status) {
  google::rpc::Status *rpcStatus = new google::rpc::Status;
  rpcStatus->set_code(status.error_code());
  rpcStatus->set_message(status.error_message());
  return rpcStatus;
}

bool SUTConnectorClient::ReadFile(string &contents, const string &filename) {
  fstream file(filename.c_str(), ios::in | ios::binary);
  if (!file.good()) {
    return false;
  }

  file.seekg(0, std::ios::end);
  contents.resize(file.tellg());
  file.seekg(0, std::ios::beg);
  file.read(&contents[0], contents.size());
  return true;
}

void SUTConnectorClient::Run() {
  std::thread heartbeatThread(&SUTConnectorClient::Heartbeat, this);

  while (!_stop) {
    SUTConnectorReply msg;
    if (!_stream->Read(&msg)) {
      break;
    }

    SUTConnectorRequest request;
    grpc::ClientContext context;

    if (msg.has_controller_setup()) {
      Trace("Controller: Setup");

      grpc::Status status;
      if (_controller != nullptr) {
        cout << "Closing previous connection." << endl;
        _controller = nullptr;
        ShutdownServices();
      }

      InitializeServices(msg.mutable_controller_setup()->mutable_services());
      _controller = Controller::NewStub(grpc::CreateChannel(_sutURI, grpc::InsecureChannelCredentials()));

      request.set_allocated_controller_setup(new ControllerSetupReply);
      status = _controller->Setup(&context, *msg.mutable_controller_setup(), request.mutable_controller_setup());

      if (!status.ok()) {
        cout << status.error_message() << endl;
        request.clear_controller_setup();
        request.set_allocated_status(Convert(status));
      }

      _stream->Write(request);
    } else if (msg.has_controller_initialize()) {
      Trace("Controller: Initialize");

      grpc::Status status;
      if (_controller != nullptr) {
        cout << "Closing previous connection." << endl;
        _controller = nullptr;
        ShutdownServices();
      }

      InitializeServices(msg.mutable_controller_initialize()->mutable_services());
      _controller = Controller::NewStub(grpc::CreateChannel(_sutURI, grpc::InsecureChannelCredentials()));

      request.set_allocated_controller_initialize(new ControllerInitializeReply);
      status = _controller->Initialize(&context, *msg.mutable_controller_initialize(), request.mutable_controller_initialize());

      if (!status.ok()) {
        cout << status.error_message() << endl;
        request.clear_controller_initialize();
        request.set_allocated_status(Convert(status));
      }

      _stream->Write(request);

    } else if (msg.has_controller_update()) {
      Trace("Controller: Update");

      grpc::Status status;
      if (_controller == nullptr) {
        status = grpc::Status(grpc::StatusCode::FAILED_PRECONDITION, "Controller not initialized.");
      } else {
        request.set_allocated_controller_update(new ControllerUpdateReply);
        status = _controller->Update(&context, *msg.mutable_controller_update(), request.mutable_controller_update());
      }

      if (!status.ok()) {
        cout << status.error_message() << endl;
        request.clear_controller_update();
        request.set_allocated_status(Convert(status));
      }

      _stream->Write(request);
      
    } else if (msg.has_controller_close()) {
      Trace("Controller: Close");

      grpc::Status status;
      if (_controller == nullptr) {
        status = grpc::Status(grpc::StatusCode::FAILED_PRECONDITION, "Controller not initialized.");
      } else {
        request.set_allocated_controller_close(new ControllerCloseReply);
        status = _controller->Close(&context, *msg.mutable_controller_close(), request.mutable_controller_close());
      }

      if (!status.ok()) {
        cout << status.error_message() << endl;
        request.clear_controller_close();
        request.set_allocated_status(Convert(status));
      }

      _stream->Write(request);

      _controller = nullptr;
      ShutdownServices();

    } else if (msg.has_sensor_setup()) {
      Trace("Sensor: Setup");

      grpc::Status status;
      if (_sensor != nullptr) {
        cout << "Closing previous connection." << endl;
        _sensor = nullptr;
        ShutdownServices();
      }

      InitializeServices(msg.mutable_sensor_setup()->mutable_services());
      _sensor = Sensor::NewStub(grpc::CreateChannel(_sutURI, grpc::InsecureChannelCredentials()));

      request.set_allocated_sensor_setup(new SensorSetupReply);
      status = _sensor->Setup(&context, *msg.mutable_sensor_setup(), request.mutable_sensor_setup());

      if (!status.ok()) {
        cout << status.error_message() << endl;
        request.clear_sensor_setup();
        request.set_allocated_status(Convert(status));
      }

      _stream->Write(request);

    } else if (msg.has_sensor_initialize()) {
      Trace("Sensor: Initialize");

      grpc::Status status;
      if (_sensor != nullptr) {
        cout << "Closing previous connection." << endl;
        _sensor = nullptr;
        ShutdownServices();
      }

      InitializeServices(msg.mutable_sensor_initialize()->mutable_services());
      _sensor = Sensor::NewStub(grpc::CreateChannel(_sutURI, grpc::InsecureChannelCredentials()));

      request.set_allocated_sensor_initialize(new SensorInitializeReply);
      status = _sensor->Initialize(&context, *msg.mutable_sensor_initialize(), request.mutable_sensor_initialize());

      if (!status.ok()) {
        cout << status.error_message() << endl;
        request.clear_sensor_initialize();
        request.set_allocated_status(Convert(status));
      }

      _stream->Write(request);

    } else if (msg.has_sensor_update()) {
      Trace("Sensor: Update");

      grpc::Status status;
      if (_sensor == nullptr) {
        status = grpc::Status(grpc::StatusCode::FAILED_PRECONDITION, "Sensor not initialized.");
      } else {
        request.set_allocated_sensor_update(new SensorUpdateReply);
        status = _sensor->Update(&context, *msg.mutable_sensor_update(), request.mutable_sensor_update());
      }

      if (!status.ok()) {
        cout << status.error_message() << endl;
        request.clear_sensor_update();
        request.set_allocated_status(Convert(status));
      }

      _stream->Write(request);

    } else if (msg.has_sensor_close()) {
      Trace("Sensor: Close");

      grpc::Status status;
      if (_sensor == nullptr) {
        status = grpc::Status(grpc::StatusCode::FAILED_PRECONDITION, "Sensor not initialized.");
      } else {
        request.set_allocated_sensor_close(new SensorCloseReply);
        status = _sensor->Close(&context, *msg.mutable_sensor_close(), request.mutable_sensor_close());
      }

      if (!status.ok()) {
        cout << status.error_message() << endl;
        request.clear_sensor_close();
        request.set_allocated_status(Convert(status));
      }

      _stream->Write(request);

      _sensor = nullptr;
      ShutdownServices();

    } else if (msg.has_disconnect()) {
      break;
    } else {
      Log("Invalid message received.");
      break;
    }
  }

  _stop = true;
  heartbeatThread.join();

  grpc::Status status = _stream->Finish();
  ostringstream oss;
  oss << "Disconnected: " << status.error_code() << ": " << status.error_message();
  Log(oss.str());

  _running = false;
}


void SUTConnectorClient::Heartbeat() {
  while (!_stop) {
    SUTConnectorHeartbeatRequest request;
    request.set_id(_id);

    SUTConnectorHeartbeatReply reply;

    grpc::ClientContext context;
    context.set_deadline(chrono::system_clock::now() + chrono::milliseconds(5000));

    grpc::Status status = _stub->Heartbeat(&context, request, &reply);

    if (!status.ok()) {
      cout << "Heartbeat reply not received. Disconnecting." << endl;
      _stop = true;
      _streamContext.TryCancel();
      break;
    }

    this_thread::sleep_for(chrono::seconds(1));
  }
}
