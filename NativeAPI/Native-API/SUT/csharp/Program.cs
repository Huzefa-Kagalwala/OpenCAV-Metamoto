using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using Grpc.Core;

class Program {    
  public static ManualResetEvent shutdown = new ManualResetEvent(false);

  static void Main(string[] args) {
    int controllerPort = 50001;
    int sensorPort = 50002;
    string host = "0.0.0.0";

    Server server = new Server {
      Services = { 
        Metamoto.Services.Controller.BindService(new TestController()),
        Metamoto.Services.Sensor.BindService(new TestSensor())
      },
      Ports = {
        new ServerPort(host, controllerPort, ServerCredentials.Insecure),
        new ServerPort(host, sensorPort, ServerCredentials.Insecure)
      }        
    };

    server.Start();

    string message = "Running on: ";    
    foreach (ServerPort sp in server.Ports) {
      message += sp.Host + ":" + sp.Port + " ";
    }
        
    Console.WriteLine(message);
    shutdown.WaitOne();

    server.ShutdownAsync().Wait();
  }
}

