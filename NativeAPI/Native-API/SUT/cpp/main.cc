#include <chrono>
#include <thread>
#include <sstream>
#include "controller_service.h"
#include "sensor_service.h"

using namespace std;

bool _shutDown = false;

string Trim(string str) {
  while (str[0] == ' ') {
    str = str.substr(1);
  }
  while (str[str.size() - 1] == ' ') {
    str = str.substr(0, str.size() - 1);
  }
  return str;
}


int main(int argc, char** argv) {
  string port = "50001";
  unsigned int sutType = 1; // 1: cotroller, 2: sensor

  ostringstream usage;
  usage
    << "usage: reference-sut [OPTIONS]" << endl
    << "  --port <sut-port> (default: 50001)" << endl
    << "  --sut-type <sut-type>  Format: 1 = controller (default), 2 = sensor" << endl;
  
  // Get commandline parameters.
  for (int i = 1; i < argc; ++i) {
    string arg(argv[i]);
    ++i;

    if (i >= argc) {
      cout << "Value missing for argument '" << arg << "'." << endl;
      cout << usage.str();
      return -1;
    }

    if (arg.compare("--port") == 0) {
      port = argv[i];

    } else if (arg == "--sut-type") {
      istringstream iss;
      iss.str(argv[i]);
      iss >> sutType;
      if (sutType != 1 && sutType != 2) {
        std::cout << "Invalid type. Use 1 for a controller and 2 for a sensor." << endl;
      }
    }
  }

  string serverAddress("0.0.0.0:" + port);
  grpc::ServerBuilder builder;
  builder.AddListeningPort(serverAddress, grpc::InsecureServerCredentials());

  if (sutType == 1) {
    ControllerService service(&_shutDown);

    builder.RegisterService(&service);
    unique_ptr<grpc::Server> server(builder.BuildAndStart());

    cout << "Controller Server listening on " << serverAddress << endl;

    while (!_shutDown) {
      this_thread::sleep_for(chrono::seconds(1));
    }

  } else if (sutType == 2) {
    SensorService service(&_shutDown);

    builder.RegisterService(&service);
    unique_ptr<grpc::Server> server(builder.BuildAndStart());

    cout << "Sensor Server listening on " << serverAddress << endl;

    while (!_shutDown) {
      this_thread::sleep_for(chrono::seconds(1));
    }
  }

  this_thread::sleep_for(chrono::seconds(1));
  return 0;
}
