#pragma once
#include <string>
#include <vector>
#include <fstream>

#include "utilities.h"
#include "generated/metamoto/messages/data_bus_message.pb.h"

class PointCloudConverter {
private:

public:

  static bool Dbm2Pcd(std::string dbmFilename, std::shared_ptr<float> latitude, std::shared_ptr<float> longitude, 
                      float maxFileSize, bool timeStampedPcd);
  static bool ParsePcd(std::string pcdFilename);
};

