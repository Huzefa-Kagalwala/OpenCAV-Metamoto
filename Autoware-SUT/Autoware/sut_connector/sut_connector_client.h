#pragma once

#include "metamoto/services/controller.grpc.pb.h"
#include "metamoto/services/sensor.grpc.pb.h"
#include "metamoto/services/sut_connector.grpc.pb.h"

#include <mutex>
#include <string>
#include <thread>
#include <grpc++/grpc++.h>

class SUTConnectorClient {
  public:
    SUTConnectorClient();

    bool IsConnected() const;
    void Wait() const;

    bool Connect(const std::string &serverURI, const std::string &sutURI,
                 const std::string &id, metamoto::services::SUTConnectorConnectRequest::SUTType type,
                 const std::string &rootCertificatesFilename,
                 const std::string &accessToken);
    bool Disconnect();

    void Log(const std::string &message);
    void Trace(const std::string &message);
    void SetTraceEnabled(bool enable);

    grpc::Status Request(const metamoto::services::SUTConnectorRequest &request,
                         metamoto::services::SUTConnectorReply &reply);
                 
  private:
    bool _stop, _running, _trace;
    std::string _serverURI, _sutURI, _id;
    metamoto::services::SUTConnectorConnectRequest::SUTType _type;
    std::unique_ptr<metamoto::services::SUTConnector::Stub> _stub;
    std::unique_ptr<metamoto::services::Controller::Stub> _controller;
    std::unique_ptr<metamoto::services::Sensor::Stub> _sensor;
    grpc::ClientContext _streamContext;
    std::unique_ptr<grpc::ClientReaderWriter<metamoto::services::SUTConnectorRequest, metamoto::services::SUTConnectorReply> > _stream;
    std::unique_ptr<std::thread> _connectThread;
    std::mutex _streamMutex;
    std::vector<std::unique_ptr<grpc::Service> > _services;
    std::vector<std::unique_ptr<grpc::Server> > _servers;

    grpc::Service *AllocateService(const std::string &name);
    void InitializeServices(google::protobuf::RepeatedPtrField<metamoto::types::ServiceDescription> *services);
    void ShutdownServices();
    bool IsSUTConnected() const;
    google::rpc::Status *Convert(const grpc::Status &status);
    bool ReadFile(std::string &contents, const std::string &filename);
    void Run();
    void Heartbeat();
};
