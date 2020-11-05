#include "sut_connector_client.h"
#include "data_bus_service.h"

#include <iostream>
#include <sstream>

using namespace metamoto::services;
using namespace grpc;
using namespace std;

DataBusService::DataBusService(SUTConnectorClient *connector) 
  : _connector(connector)
{
}

Status DataBusService::Publish(ServerContext* context, const DataBusPublishRequest* request, DataBusPublishReply* response) {
  _connector->Trace("DataBus::Publish");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_data_bus_publish((DataBusPublishRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_data_bus_publish();

  if (lcReply.has_data_bus_publish()) {
    response->CopyFrom(*lcReply.mutable_data_bus_publish());
  }

  return status;
}

Status DataBusService::Subscribe(ServerContext* context, const DataBusSubscribeRequest* request, DataBusSubscribeReply* response) {
  _connector->Trace("DataBus::Subscribe");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_data_bus_subscribe((DataBusSubscribeRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_data_bus_subscribe();

  if (lcReply.has_data_bus_subscribe()) {
    response->CopyFrom(*lcReply.mutable_data_bus_subscribe());
  }

  return status;
}

Status DataBusService::Write(ServerContext* context, const DataBusWriteRequest* request, DataBusWriteReply* response) {
  _connector->Trace("DataBus::Write");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_data_bus_write((DataBusWriteRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_data_bus_write();

  if (lcReply.has_data_bus_write()) {
    response->CopyFrom(*lcReply.mutable_data_bus_write());
  }

  return status;
}

Status DataBusService::Read(ServerContext* context, const DataBusReadRequest* request, DataBusReadReply* response) {
  _connector->Trace("DataBus::Read");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_data_bus_read((DataBusReadRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_data_bus_read();

  if (lcReply.has_data_bus_read()) {
    response->CopyFrom(*lcReply.mutable_data_bus_read());
  }

  return status;
}

Status DataBusService::ReadAll(ServerContext* context, const DataBusReadAllRequest* request, DataBusReadAllReply* response) {
  _connector->Trace("DataBus::ReadAll");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_data_bus_read_all((DataBusReadAllRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_data_bus_read_all();

  if (lcReply.has_data_bus_read_all()) {
    response->CopyFrom(*lcReply.mutable_data_bus_read_all());
  }

  return status;
}

Status DataBusService::ReadLast(ServerContext* context, const DataBusReadLastRequest* request, DataBusReadLastReply* response) {
  _connector->Trace("DataBus::ReadLast");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_data_bus_read_last((DataBusReadLastRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_data_bus_read_last();

  if (lcReply.has_data_bus_read_last()) {
    response->CopyFrom(*lcReply.mutable_data_bus_read_last());
  }

  return status;
}


