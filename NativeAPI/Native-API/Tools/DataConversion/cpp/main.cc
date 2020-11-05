#include "ground_truth_converter.h"
#include "pointcloud_converter.h"
#include "utilities.h"

using namespace std;
using namespace metamoto::messages;
using namespace metamoto::types;

int main(int argc, char** argv) {
  std::ostringstream usage;
  usage << "usage: executable [OPTIONS]\n"
        << "   Available options are:\n"
        << "      -help\n"
        << "      -groundTruthDbm2csv -f dbm_file\n"
        << "      -lidarDbm2pcd -f dbm_file [-t] [-s max_pcd_file_size] [-utm latitude longitude]\n"
        << "      -dbm2json -f dbm_file\n"
        << "      -parsePcd -f pcd_file\n"
        << "   Notes:\n"
        << "      1. The PCD file will be in right-handed ENU coordinate system.\n"
        << "      2. Provide '-t' to write seperate time-stapmed PCD files for each lidar databus message (optional). The name of each PCD file will be the timestap of that message.\n"
        << "      3. Provide max_pcd_file_size (in MB) to split the output into multiple pcd files (optional).\n"
        << "      4. '-t' and '-s' options cannot be used at the same time.\n"
        << "      5. Provide '-utm latitude longitude' values to output the pointcloud in UTM coordinate system (optional).\n"
        << "      6. parsePcd option only parses the pcd file and does not create anything.\n";

  bool groundTruthDbm2csv = false;
  bool dbm2json = false;
  bool lidarDbm2pcd = false;
  bool parsePcd = false;
  bool timeStampedPcd = false;
  float maxDbmFileSize = -1;
  shared_ptr<float> latitude;
  shared_ptr<float> longitude;
  string filename = "";

  for (int i = 1; i < argc; ++i) {
    std::string arg(argv[i]);
    std::transform(arg.begin(), arg.end(), arg.begin(), ::tolower);

    if (arg.compare("-h") == 0 || arg.compare("-help") == 0) {
      std::cout << usage.str();
      return 0;

    } else if (arg.compare("-f") == 0) {
      if (argc > i + 1 && argv[++i][0] != '-') {
        filename = argv[i];
      } else {
        std::cout << usage.str();
        return 0;
      }

    } else if (arg.compare("-s") == 0) {
      if (argc > i + 1 && argv[++i][0] != '-') {
        maxDbmFileSize = (float)atof(argv[i]);
      } else {
        std::cout << usage.str();
        return 0;
      }

    } else if (arg.compare("-t") == 0) {
      timeStampedPcd = true;

    } else if (arg.compare("-utm") == 0) {
      if (argc > i + 2) {
        latitude = make_shared<float>((float)atof(argv[++i]));
        longitude = make_shared<float>((float)atof(argv[++i]));
      } else {
        std::cout << usage.str();
        return 0;
      }

    } else if (arg.compare("-groundtruthdbm2csv") == 0) {
      groundTruthDbm2csv = true;

    } else if (arg.compare("-dbm2json") == 0) {
      dbm2json = true;

    } else if (arg.compare("-lidardbm2pcd") == 0) {
      lidarDbm2pcd = true;

    } else if (arg.compare("-parsepcd") == 0) {
      parsePcd = true;
    }
  }

  if (argc <= 1) {
    cout << "Error: No argument is provided.\n" << usage.str();
    return 0;
  } else if (filename == "") {
    cout << "Error: No file name is provided.\n" << usage.str();
    return 0;
  } else if (maxDbmFileSize > 0 && timeStampedPcd) {
    cout << "Error: '-t' and '-s' options cannot be used at the same time. Provide only of them.\n" << usage.str();
    return 0;
  }

  if (groundTruthDbm2csv) {
    GroundTruthConverter::ToCsv(filename);
  } else if (dbm2json) {
    Utilities::Dbm2Json(filename);
  } else if (lidarDbm2pcd) {
    PointCloudConverter::Dbm2Pcd(filename, latitude, longitude, maxDbmFileSize, timeStampedPcd);
  } else if (parsePcd) {
    PointCloudConverter::ParsePcd(filename);
  } else {
    std::cout << usage.str();
  }

  return 0;
}

