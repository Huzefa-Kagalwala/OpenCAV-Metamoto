// Integration Tester
// SUT should be able to establish connection with the tester and 
// publish and subscribe to the data bus.

#include "controller_client.h"
#include "sensor_client.h"
#include "data_bus_service.h"

#include <iostream>
#include <sstream>
#include <thread>

using namespace std;


void InitializeDataBus(unsigned int port) {
  ostringstream address;
  address << "0.0.0.0:" << port;

  DataBusService* dataBusService = new DataBusService();
  grpc::ServerBuilder builder;
  builder.AddListeningPort(address.str(), grpc::InsecureServerCredentials());
  builder.RegisterService(dataBusService);
  std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
  server->Wait();
}


int main(int argc, char** argv) {
  unsigned int dataBusPort = 8086;
  string controllerAddress, sensorAddress;

  ostringstream usage;
  usage 
    << "usage:  integration-tester [OPTIONS]" << endl
    << "Options:" << endl
    << "  --databus <port> " << endl
    << "      The port to emulate the data bus on. Default is " << dataBusPort << endl
    << "  --controller <address:port>" << endl
    << "      The address and port of the controller to test." << endl
    << "  --sensor <address:port>" << endl
    << "      The address and port of the sensor to test." << endl;

  for(int i = 0; i < argc; ++i) {
    string arg = argv[i];
    if (arg == "--databus") {
      if (i + 1 >= argc) {
        cout << usage.str() << endl;
        return - 1;
      }

      i++;
      istringstream iss;
      iss.str(argv[i]);
      iss >> dataBusPort;
    } else if (arg == "--controller") {
      if (i + 1 >= argc) {
        cout << usage.str() << endl;
        return -1;
      }

      i++;
      controllerAddress = argv[i];
    } else if (arg == "--sensor") {
      if (i + 1 >= argc) {
        cout << usage.str() << endl;
        return -1;
      }

      i++;
      sensorAddress = argv[i];
    } else if (arg.compare("--help") == 0 || arg.compare("-h") == 0) {
      cout << usage.str() << endl;
      return 0; 
    }
  }

  if (controllerAddress.empty() && sensorAddress.empty()) {
    cout << "Must specify a controller or sensor." << endl
         << usage.str() << endl;
    return -1;
  } else if (!controllerAddress.empty() && !sensorAddress.empty()) {
    cout << "Either a controller or sensor should be specified, not both." << endl
      << usage.str() << endl;
    return -1;
  }

  cout << "Data Bus Port:      " << dataBusPort << endl;

  if (!controllerAddress.empty()) {
    cout << "Controller Address: " << controllerAddress << endl;
  }

  if (!sensorAddress.empty()) {
    cout << "Sensor Address:     " << sensorAddress << endl;
  }

  try {
    std::thread dataBusThread(InitializeDataBus, dataBusPort);
    dataBusThread.detach();
  } catch (...) {
    cout << "Failed to start data bus." << endl;
    return -1;
  }

  ostringstream dataBusURI;
  dataBusURI << "localhost:" << dataBusPort;

  SensorClient sensor;
  if (!sensorAddress.empty()) {
    if (!sensor.Initialize(sensorAddress, dataBusURI.str())) {
      return -1;
    }
  }

  ControllerClient controller;
  if (!controllerAddress.empty()) {
    if (!controller.Initialize(controllerAddress, dataBusURI.str())) {
      return -1;
    }
  }
  
  for (int i = 0; i < 10; ++i) {
    if (!sensorAddress.empty()) {
      if (!sensor.Update()) {
        break;
      }
    }

    if (!controllerAddress.empty()) {
      if (!controller.Update()) {
        break;
      }
    }
  }

  if (!sensorAddress.empty()) {
    sensor.Close();
  }

  if (!controllerAddress.empty()) {
    controller.Close();
  }

  return 0;
}


