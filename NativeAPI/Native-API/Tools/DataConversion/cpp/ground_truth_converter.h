#pragma once

#include "utilities.h"
#include "metamoto/messages/data_bus_message.pb.h"

class GroundTruthConverter {
private:
  static std::string Vehicle2csv(const metamoto::types::Vehicle &vehicle);
  static std::string Pedestrian2csv(const metamoto::types::Pedestrian &pedestrian);

public:
  static bool ToCsv(std::string filename);
};

