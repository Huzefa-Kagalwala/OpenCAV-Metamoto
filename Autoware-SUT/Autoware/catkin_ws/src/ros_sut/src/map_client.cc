#include <cmath>
#include <exception>
#include "map_client.h"

using namespace std;
using namespace metamoto::types;
using namespace metamoto::services;

unique_ptr<RoadNetwork> MapClient::GetRoadNetwork() {
  MapGetRoadNetworkRequest request;
  MapGetRoadNetworkReply reply;

  grpc::ClientContext context; 
  grpc::Status status;

  try {
    status = _stub->GetRoadNetwork(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return nullptr;
  }

  if (status.ok()) {
    cout << "Map->GetRoadNetwork." << endl;
    return unique_ptr<RoadNetwork>(new RoadNetwork(reply.road_network()));;
  } else {
    cout << "GetRoadNetwork failed: " << status.error_message() << endl;
    return nullptr; 
  }
}

unique_ptr<Vector3> MapClient::GetHeading(const RoadPoint& roadPoint) {
  MapGetHeadingRequest request;
  MapGetHeadingReply reply; 

  grpc::ClientContext context; 

  request.mutable_road_point()->CopyFrom(roadPoint);

  grpc::Status status;

  try {
    status = _stub->GetHeading(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return nullptr;
  }

  if (status.ok()) {
    cout << "Map->GetHeading." << endl;
    return unique_ptr<Vector3>(new Vector3(reply.heading()));;
  } else {
    cout << "GetHeading failed: " << status.error_message() << endl;
    return nullptr; 
  }
}

unique_ptr<Vector3> MapClient::ToWorldPoint(const RoadPoint& roadPoint) {
  MapToWorldPointRequest request;
  MapToWorldPointReply reply; 

  grpc::ClientContext context; 

  request.mutable_road_point()->CopyFrom(roadPoint);

  grpc::Status status;

  try {
    status = _stub->ToWorldPoint(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return nullptr;
  }

  if (status.ok()) {
    cout << "Map->ToWorldPoint." << endl;
    return unique_ptr<Vector3>(new Vector3(reply.world_point()));;
  } else {
    cout << "ToWorldPoint failed: " << status.error_message() << endl;
    return nullptr; 
  }
}

unique_ptr<google::protobuf::RepeatedPtrField<Waypoint>> MapClient::GetPath(const Waypoint& fromPoint,
																		    const Waypoint& toPoint) {
  MapGetPathRequest request;
  MapGetPathReply reply; 

  grpc::ClientContext context; 

  request.mutable_from_point()->CopyFrom(fromPoint);
  request.mutable_to_point()->CopyFrom(toPoint);

  grpc::Status status;

  try {
    status = _stub->GetPath(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return nullptr;
  }

  if (status.ok()) {
    cout << "Map->GetPath." << endl;
    return unique_ptr<google::protobuf::RepeatedPtrField<Waypoint>>(new google::protobuf::RepeatedPtrField<Waypoint>(reply.path()));
  } else {
    cout << "GetPath failed: " << status.error_message() << endl;
    return nullptr; 
  }
}
