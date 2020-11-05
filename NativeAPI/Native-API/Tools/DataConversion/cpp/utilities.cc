#include <iomanip>
#include "utilities.h"

using namespace std;
using namespace metamoto::messages;

const float Utilities::DEG_2_RAD = 0.01745329252f;
const float Utilities::RAD_2_DEG = 57.2957795f;

const std::string Utilities::DBM_MAGIC_STRING = "MetamotoMessageFile";
const unsigned int Utilities::DBM_VERSION = 0;


size_t Utilities::OpenDatabusMessageFile(ifstream * messageFile, const string &filename) {
  messageFile->open(filename, std::ios::in | std::ios::binary);
  if (!messageFile->is_open()) {
    cout << "Failed to open databus message file " << filename << endl;
    return -1;
  }

  messageFile->seekg(0, ios::end);
  size_t fileSize = messageFile->tellg();
  messageFile->seekg(0, ios::beg);

  string magicString = GetString(*messageFile, DBM_MAGIC_STRING.size());
  unsigned int version = GetUInt32(*messageFile);

  return fileSize;
}

bool Utilities::ReadOneDbmMessage(DataBusMessage &message, ifstream *messageFile) {
  unsigned int dataSize = GetUInt32(*messageFile);
  string str = GetString(*messageFile, dataSize);

  if (!message.ParseFromString(str)) {
    cout << "Failed to parse the message from the file." << endl;
    return false;
  }
  return true;
}

bool Utilities::ReadDatabusMessageFile(vector<DataBusMessage> &messages, const string &filename) {
  ifstream messageFile;

  size_t fileSize = OpenDatabusMessageFile(&messageFile, filename);
  if (fileSize < 0) {
    return false;
  }

  int totalRecords = 0;
  float percent = 5;
  while ((size_t)messageFile.tellg() < fileSize) {
    if (100.0f * messageFile.tellg() / fileSize >= percent) {
      cout << "\r   Read dbm file: " << percent << "% done. Number of records: " << totalRecords;
      percent += 5;
    }
    ++totalRecords;
    
    DataBusMessage message;
    if (!ReadOneDbmMessage(message, &messageFile)) {
      return false;
    }
    messages.push_back(message);
  }

  cout << "\r   Read dbm file: 100% done. Number of records: " << totalRecords;
  messageFile.close();
  cout << endl;
  return true;
}

bool Utilities::Dbm2Json(const string &dbmFilename) {
  vector<DataBusMessage> messages;
  json js;

  if (!Utilities::ReadDatabusMessageFile(messages, dbmFilename)) {
    return false;
  }

  for (auto &m : messages) {
    if (m.data_oneof_case() == DataBusMessage::DataOneofCase::kCamera) {
      m.mutable_camera()->clear_d();
      m.mutable_camera()->clear_k();
      m.mutable_camera()->clear_p();
    }

    string j;
    google::protobuf::util::MessageToJsonString(m, &j);
    js.push_back(json::parse(j));
  }

  string jsonFilename = dbmFilename.substr(0, dbmFilename.size() - 4) + ".json";
  cout << "Json file name: " << jsonFilename << endl;
  std::ofstream jsonFile(jsonFilename);
  jsonFile << std::setw(2) << js << std::endl;
  jsonFile.close();
  return true;
}

string Utilities::GetString(std::ifstream &f, size_t size) {
  string val;
  val.resize(size);
  f.read(&val[0], size);
  return val;
}

unsigned int Utilities::GetUInt32(std::ifstream &f) {
  unsigned int val;
  f.read(reinterpret_cast<char *>(&val), sizeof(unsigned int));
  return val;
}


// Convert from right-handed ENU to left-handed EUN
const metamoto::types::Vector3 Utilities::Convert(const Eigen::Vector3f &vec) {
  metamoto::types::Vector3 vec_mm;
  vec_mm.set_x(vec.x());
  vec_mm.set_y(vec.z());
  vec_mm.set_z(vec.y());
  return vec_mm;
}

// Convert from right-handed ENU to left-handed EUN
const metamoto::types::Quaternion Utilities::Convert(const Eigen::Quaternionf &qt) {
  metamoto::types::Quaternion qt_mm;
  qt_mm.set_x(qt.x());
  qt_mm.set_y(qt.z());
  qt_mm.set_z(qt.y());
  qt_mm.set_w(-qt.w());
  return qt_mm;
}

// Convert from left-handed EUN to right-handed ENU
const Eigen::Vector3f Utilities::Convert(const metamoto::types::Vector3 &vec) {
  return Eigen::Vector3f(vec.x(), vec.z(), vec.y());
}

// Convert from left-handed EUN to right-handed ENU
const Eigen::Quaternionf Utilities::Convert(const metamoto::types::Quaternion &qt) {
  return Eigen::Quaternionf(-qt.w(), qt.x(), qt.z(), qt.y());
}