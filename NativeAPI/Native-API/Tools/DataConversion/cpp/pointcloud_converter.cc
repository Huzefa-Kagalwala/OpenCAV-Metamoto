#include "pointcloud_converter.h"
#include "utm_converter.h"

#ifdef _WIN32
#include <direct.h>
#else
#include <sys/stat.h>
#include <unistd.h>
#endif

using namespace std;
using namespace metamoto::messages;

void WritePcdHeader(ofstream &pcdFile, int numPoints) {
  pcdFile << "VERSION 0.7" << endl;
  pcdFile << "FIELDS x y z rgb" << endl;
  pcdFile << "SIZE 4 4 4 4" << endl;
  pcdFile << "TYPE F F F F" << endl;
  pcdFile << "COUNT 1 1 1 1" << endl;
  pcdFile << "WIDTH " << numPoints << endl;
  pcdFile << "HEIGHT 1" << endl;
  pcdFile << "VIEWPOINT 0 0 0 1 0 0 0" << endl;
  pcdFile << "POINTS " << numPoints << endl;
  pcdFile << "DATA binary" << endl;
}

// The PCD file will be in right-handed ENU coordinate system
bool PointCloudConverter::Dbm2Pcd(std::string dbmFilename, 
                                  shared_ptr<float> latitude, 
                                  shared_ptr<float> longitude, 
                                  float maxFileSize,
                                  bool timeStampedPcd) {
  if (maxFileSize <= 0) {
    maxFileSize = std::numeric_limits<float>::max();
  }

  string tmpFolder;
  if (!timeStampedPcd) {
    tmpFolder = dbmFilename.substr(0, dbmFilename.find_last_of("/\\")) + "/tmp";

#ifdef _WIN32
    _mkdir(tmpFolder.c_str());
#else
    mkdir(tmpFolder.c_str(), S_IRWXU);
#endif
  }

  double originX = 0, originY = 0;
  if (latitude != nullptr && longitude != nullptr) {
    int zone = UtmConverter::LatLonToUTMXY(*latitude, *longitude, 0, originX, originY);
    printf("UTM Origin. Easting: %12.3f, Northing: %12.3f, Zone: %d\n\n", originX, originY, zone);
  }

  ifstream messageFile;
  size_t dbmFileSize = Utilities::OpenDatabusMessageFile(&messageFile, dbmFilename);
  if (dbmFileSize < 0) {
    return false;
  }

  int numTotPoints = 0;
  int numMessages = 0;
  float progressPercent = 1;
  vector<pair<string, int>> pcdFilenames;

  while ((size_t)messageFile.tellg() < dbmFileSize) {
    DataBusMessage message;
    if (!Utilities::ReadOneDbmMessage(message, &messageFile)) {
      return false;
    }

    int numPoints = 0;
    for (auto &group : message.lidar().groups()) {
      for (auto &laserReturn : group.returns()) {
        numPoints += laserReturn.ranges_size();
        numTotPoints += laserReturn.ranges_size();
      }
    }
    ++numMessages;

    // Open the PCD file
    string pcdFilename = dbmFilename.substr(0, dbmFilename.find_last_of("/\\")) + (timeStampedPcd ? "/" : "/tmp/") + to_string(message.header().time()) + ".pcd";
    pcdFilenames.push_back(make_pair(pcdFilename, numPoints));

    ofstream pcdFile(pcdFilename, ios::out | ios::binary);
    if (!pcdFile.is_open()) {
      cout << "Failed to open PCD file " << pcdFilename << endl;
      return false;
    }

    if (timeStampedPcd) {
      WritePcdHeader(pcdFile, numPoints);
    }

    for (auto &group : message.lidar().groups()) {
      Eigen::Vector3f origin = Utilities::Convert(group.pose().position());
      Eigen::Quaternionf orientation = Utilities::Convert(group.pose().orientation());
      Eigen::Vector3f sensorRight = orientation * Eigen::Vector3f::UnitX();
      Eigen::Vector3f sensorForward = orientation * Eigen::Vector3f::UnitY();
      Eigen::Vector3f sensorUp = orientation * Eigen::Vector3f::UnitZ();
      Eigen::AngleAxisf channelOrientation = Eigen::AngleAxisf(-group.azimuth_angle() * Utilities::DEG_2_RAD, sensorUp);
      Eigen::Vector3f direction = channelOrientation * sensorForward;
      Eigen::Vector3f right = channelOrientation * sensorRight;

      for (auto &laserReturn : group.returns()) {
        float elevation = laserReturn.elevation_angle() * Utilities::DEG_2_RAD;
        Eigen::Vector3f rayDirection = Eigen::AngleAxisf(elevation, right) * direction;

        for (int i = 0; i < laserReturn.ranges_size(); ++i) {
          // Intensities should be between 0 and 1. If the rang of intensities is different, scale the '255' value below.
          // The idea is to have the output rgb values between 0 and 255.
          if (laserReturn.intensities()[i] < 0 || laserReturn.intensities()[i] > 1) {
            //cout << "invalid intensity: " << laserReturn.intensities()[i] << endl;
          }

          Eigen::Vector3f hitPoint = origin + laserReturn.ranges()[i] * rayDirection;
          int intensity = (int)(laserReturn.intensities()[i] * 1);
          int rgb = intensity << 16 | intensity << 8 | intensity;

          float x = hitPoint.x() + (float)originX;
          float y = hitPoint.y() + (float)originY;
          float z = hitPoint.z();

          pcdFile.write((char*)&x, sizeof(float));
          pcdFile.write((char*)&y, sizeof(float));
          pcdFile.write((char*)&z, sizeof(float));
          pcdFile.write((char*)&rgb, sizeof(rgb));
        }
      }
    }

    pcdFile.close();
    
    if (100.0f * messageFile.tellg() / dbmFileSize >= progressPercent) {
      cout << "\r   Progress: " << progressPercent << "% done. Number of messages: " << numMessages << ", numTotPoints: " << numTotPoints;
      progressPercent += 1;
    }
  }
  cout << "\r   Progress: 100% done. Number of messages: " << numMessages << ", numTotPoints: " << numTotPoints << endl;

  if (!timeStampedPcd) {
    float pointSizeInMB = 16.0f / 1024 / 1024; // Each point takes 16 B (x,y,z,intensity)
    progressPercent = 1;
    int fileCounter = 0;
    int tmpFileCounter = 0;
    
    while (tmpFileCounter < pcdFilenames.size()) {
      float fileSize = 0;
      int numPointsInFile = 0;
      int tmpFileCounterStop = tmpFileCounter;
      for (; tmpFileCounterStop < pcdFilenames.size(); ++tmpFileCounterStop) {
        numPointsInFile += pcdFilenames[tmpFileCounterStop].second;
        fileSize += pointSizeInMB * pcdFilenames[tmpFileCounterStop].second;

        if (fileSize >= maxFileSize) {
          break;
        }
      }

      // Open the final PCD file
      string pcdFilename = dbmFilename.substr(0, dbmFilename.size() - 4) + "_" + to_string(fileCounter++) + ".pcd";
      ofstream pcdFile(pcdFilename, ios::out | ios::binary);
      if (!pcdFile.is_open()) {
        cout << "Failed to open the final PCD file " << pcdFilename << endl;
        return false;
      }
      WritePcdHeader(pcdFile, numPointsInFile);

      for (int i = tmpFileCounter; i < tmpFileCounterStop; ++i) {
        ++tmpFileCounter;

        ifstream tmpFile(pcdFilenames[i].first, ios::in | ios::binary);
        if (!tmpFile.is_open()) {
          cout << "Failed to open temp PCD file " << pcdFilenames[i].first << endl;
          return false;
        }

        streamsize size = pcdFilenames[i].second * 16; // each point takes 16 bytes
        vector<char> buffer(size);
        if (tmpFile.read(buffer.data(), size)) {
          pcdFile.write(buffer.data(), size);
        }

        tmpFile.close();
        remove(pcdFilenames[i].first.c_str());

        if (100.0f * tmpFileCounter / pcdFilenames.size() >= progressPercent) {
          cout << "\r   Post processing: " << progressPercent << "% done";
          progressPercent += 1;
        }
      }

      pcdFile.close();
    }

#ifdef _WIN32
    _rmdir(tmpFolder.c_str());
#else
    rmdir(tmpFolder.c_str());
#endif

    cout << "\r   Post processing: 100% done" << endl;
  }

  messageFile.close();

  return true;
}

bool PointCloudConverter::ParsePcd(std::string pcdFilename) {
  std::ifstream pcdFile;
  pcdFile.open(pcdFilename, std::ios::in | std::ios::binary);

  if (!pcdFile.is_open()) {
    cout << "Failed to open PCD file " << pcdFilename << endl;
    return false;
  }

  string field;
  int numPoints;
  while (field != "DATA") {
    string line;
    getline(pcdFile, line);

    stringstream ss(line);
    ss >> field;

    if (field == "POINTS") {
      ss >> numPoints;
    }
  }

  cout << "number of points in the pcd file is " << numPoints << endl;

  double aveX = 0;
  double aveY = 0;
  double aveZ = 0;

  for (int i = 0; i < numPoints; ++i) {
    float x, y, z;
    int intensity;
    pcdFile.read(reinterpret_cast<char*>(&x), sizeof(float));
    pcdFile.read(reinterpret_cast<char*>(&y), sizeof(float));
    pcdFile.read(reinterpret_cast<char*>(&z), sizeof(float));
    pcdFile.read(reinterpret_cast<char*>(&intensity), sizeof(float));

    aveX += x;
    aveY += y;
    aveZ += z;

    if (i < 10) {
      int r = (intensity >> 16) & 0x0000ff;
      int g = (intensity >> 8) & 0x0000ff;
      int b = (intensity) & 0x0000ff;

      //cout << "rgb: (" << r << ", " << g << ", " << b << ")" << endl;
      //cout << i << ", " << x << ", " << y << ", " << z << ", " << intensity << ", rgb: (" << r << ", " << g << ", " << b << ")" << endl;
    }
  }

  cout << "center: (" << aveX / numPoints << ", " << aveY / numPoints << ", " << aveZ / numPoints << ")\n";

  pcdFile.close();

  return true;
}
