#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <Eigen/Dense>
#include <nlohmann/json.hpp>
#include <google/protobuf/util/json_util.h>

#include "generated/metamoto/messages/data_bus_message.pb.h"

using json = nlohmann::json;

class Utilities {
public:

  static const float DEG_2_RAD;
  static const float RAD_2_DEG;

  static const std::string DBM_MAGIC_STRING;
  static const unsigned int DBM_VERSION;

  static size_t OpenDatabusMessageFile(std::ifstream* messageFile, const std::string &filename);
  static bool ReadOneDbmMessage(metamoto::messages::DataBusMessage &message, std::ifstream* messageFile);
  static bool ReadDatabusMessageFile(std::vector<metamoto::messages::DataBusMessage> &messages, const std::string &filename);
  static bool Dbm2Json(const std::string &dbmFilename);

  static std::string GetString(std::ifstream &f, size_t size);
  static unsigned int GetUInt32(std::ifstream &f);

  static const metamoto::types::Vector3 Convert(const Eigen::Vector3f &vec);
  static const Eigen::Vector3f Convert(const metamoto::types::Vector3 &vec);
  static const metamoto::types::Quaternion Convert(const Eigen::Quaternionf &vec);
  static const Eigen::Quaternionf Convert(const metamoto::types::Quaternion &vec);
};

