#include "ground_truth_converter.h"

using namespace metamoto::messages;
using namespace metamoto::types;
using namespace std;

bool GroundTruthConverter::ToCsv(std::string filename) {
  vector<DataBusMessage> gtMessages;

  cout << "Reading the " << filename << " file" << endl;
  if (!Utilities::ReadDatabusMessageFile(gtMessages, filename)) {
    return false;
  }

  // Open the CSV file
  std::ofstream csvFile;
  string csvFilename = filename.substr(0, filename.size() - 4) + ".csv";
  cout << "csv filename: " << csvFilename << endl;

  csvFile.open(csvFilename, std::ios::out);
  if (!csvFile.is_open()) {
    cout << "Failed to open csv file " << csvFilename << endl;
    return false;
  }

  for (auto const &gtm : gtMessages) {
    auto gt = gtm.ground_truth();
    csvFile << gtm.header().time() << ", " << gt.ego_vehicles_size() + gt.vehicles_size() << ", " << gt.pedestrians_size()
      << ", " << gt.traffic_lights_size() << ", " << gt.traffic_signs_size() << std::endl;

    for (auto const &ego : gt.ego_vehicles()) {
      csvFile << Vehicle2csv(ego);
    }

    for (auto const &veh : gt.vehicles()) {
      csvFile << Vehicle2csv(veh);
    }

    for (auto const &ped : gt.pedestrians()) {
      csvFile << Pedestrian2csv(ped);
    }
  }

  csvFile.close();
  return true;
}

std::string GroundTruthConverter::Vehicle2csv(const metamoto::types::Vehicle &vehicle) {
  ostringstream oss;

  oss << vehicle.id();
  oss << "," << vehicle.pose().position().x() << "," << vehicle.pose().position().y() << "," << vehicle.pose().position().z();
  oss << "," << vehicle.pose().orientation().x() << "," << vehicle.pose().orientation().y() << "," << vehicle.pose().orientation().z() << "," << vehicle.pose().orientation().w();

  for (auto const &dimension : vehicle.shape().dimensions()) {
    oss << "," << dimension;
  }

  oss << endl;
  return oss.str();
}

std::string GroundTruthConverter::Pedestrian2csv(const metamoto::types::Pedestrian &ped) {
  ostringstream oss;

  oss << ped.id();
  oss << "," << ped.pose().position().x() << "," << ped.pose().position().y() << "," << ped.pose().position().z();
  oss << "," << ped.pose().orientation().x() << "," << ped.pose().orientation().y() << "," << ped.pose().orientation().z() << "," << ped.pose().orientation().w();

  for (auto const &dimension : ped.shape().dimensions()) {
    oss << "," << dimension;
  }

  oss << endl;
  return oss.str();
}