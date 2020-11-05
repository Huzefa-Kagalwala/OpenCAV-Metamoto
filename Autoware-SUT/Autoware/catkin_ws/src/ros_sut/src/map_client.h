#pragma once

#include <grpc++/grpc++.h>
#include "metamoto/services/map.grpc.pb.h"

class MapClient {
 private:
  std::unique_ptr<metamoto::services::Map::Stub> _stub;

 public:
  MapClient(std::shared_ptr<grpc::Channel> channel) : 
    _stub(metamoto::services::Map::NewStub(channel)) {}

  std::unique_ptr<metamoto::types::RoadNetwork> GetRoadNetwork();
  std::unique_ptr<metamoto::types::Vector3> GetHeading(const metamoto::types::RoadPoint& roadPoint);
  std::unique_ptr<metamoto::types::Vector3> ToWorldPoint(const metamoto::types::RoadPoint& roadPoint);
  std::unique_ptr<google::protobuf::RepeatedPtrField<metamoto::types::Waypoint>> 
      GetPath(const metamoto::types::Waypoint& fromPoint, const metamoto::types::Waypoint& toPoint);
};
