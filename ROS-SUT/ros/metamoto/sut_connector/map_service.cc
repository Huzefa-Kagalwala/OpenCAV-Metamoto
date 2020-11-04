#include "sut_connector_client.h"
#include "map_service.h"

#include <iostream>
#include <sstream>

using namespace metamoto::services;
using namespace grpc;
using namespace std;

MapService::MapService(SUTConnectorClient *connector)
  : _connector(connector)
{
}

Status MapService::GetRoadNetwork(ServerContext* context, const MapGetRoadNetworkRequest* request, MapGetRoadNetworkReply* response) {
  _connector->Trace("Map::GetRoadNetwork");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_map_get_road_network((MapGetRoadNetworkRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_map_get_road_network();

  if (lcReply.has_map_get_road_network()) {
    response->CopyFrom(*lcReply.mutable_map_get_road_network());
  }

  return status;
}

Status MapService::ToRoadPoint(ServerContext* context, const MapToRoadPointRequest* request, MapToRoadPointReply* response) {
  _connector->Trace("Map::ToRoadPoint");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_map_to_road_point((MapToRoadPointRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_map_to_road_point();

  if (lcReply.has_map_to_road_point()) {
    response->CopyFrom(*lcReply.mutable_map_to_road_point());
  }

  return status;
}

Status MapService::ToWorldPoint(ServerContext* context, const MapToWorldPointRequest* request, MapToWorldPointReply* response) {
  _connector->Trace("Map::ToWorldPoint");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_map_to_world_point((MapToWorldPointRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_map_to_world_point();

  if (lcReply.has_map_to_world_point()) {
    response->CopyFrom(*lcReply.mutable_map_to_world_point());
  }

  return status;
}

Status MapService::GetPath(ServerContext* context, const MapGetPathRequest* request, MapGetPathReply* response) {
  _connector->Trace("Map::GetPath");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_map_get_path((MapGetPathRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_map_get_path();

  if (lcReply.has_map_get_path()) {
    response->CopyFrom(*lcReply.mutable_map_get_path());
  }

  return status;
}

Status MapService::GetHeading(ServerContext* context, const MapGetHeadingRequest* request, MapGetHeadingReply* response) {
  _connector->Trace("Map::GetHeading");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_map_get_heading((MapGetHeadingRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_map_get_heading();

  if (lcReply.has_map_get_heading()) {
    response->CopyFrom(*lcReply.mutable_map_get_heading());
  }

  return status;
}

