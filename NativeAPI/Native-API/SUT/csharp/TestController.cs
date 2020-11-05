using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Metamoto.Messages;
using Metamoto.Services;
using Grpc.Core;

class TestController : Metamoto.Services.Controller.ControllerBase {
  private const string VEHICLE_STATE_TOPIC = "VehicleState";
  private const string VEHICLE_CONTROLS_TOPIC = "VehicleControls";
  
  private DataBusClient _dataBusClient;
  
  public TestController() {
    _dataBusClient = new DataBusClient();
  }
  
  public override Task<ControllerInitializeReply> Initialize(ControllerInitializeRequest request, ServerCallContext context) {
    string dataBusURI = "";
    
    foreach (Metamoto.Types.ServiceDescription s in request.Services) {
      if (s.Name == "dataBus") {
        dataBusURI = s.Uri;
      }        
    }
    
    if (dataBusURI == "") {
      string message = "Data bus service URI not found.";
      Console.WriteLine("TestController::Initialize: " + message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }

    if (!_dataBusClient.Initialize("TestController", dataBusURI, request.EgoVehicleId)) {
      string message = "Failed to initialize data bus client.";
      Console.WriteLine("TestController::Initialize: "+ message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }         
    
    if (!_dataBusClient.Subscribe(VEHICLE_STATE_TOPIC)) {
      string message = "Failed to subscribe to vehicle state topic.";
      Console.WriteLine("TestController::Initialize: "+ message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }
    
    if (!_dataBusClient.Publish(VEHICLE_CONTROLS_TOPIC)) {
      string message = "Failed to publish the vehicle controls topic.";
      Console.WriteLine("TestController::Initialize: "+ message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }      
    
    ControllerInitializeReply reply = new ControllerInitializeReply();
    reply.Name = "CSharp Test Controller";
    reply.Version = "0.1a";
    reply.UpdateRate = 10.0f;
    Console.WriteLine("TestController: Initialize");
    return Task.FromResult(reply);
  }

  public override Task<ControllerUpdateReply> Update(ControllerUpdateRequest request, ServerCallContext context) {
    ReadVehicleState(request.Time);
    WriteVehicleControls(request.Time);
    
    ControllerUpdateReply reply = new ControllerUpdateReply();
    reply.NextUpdateTime = 0.0f;
    Console.WriteLine("TestController: Update: " + request.Time);
    return Task.FromResult(reply);
  }

  public override Task<ControllerCloseReply> Close(ControllerCloseRequest request, ServerCallContext context) {
    _dataBusClient.Close();
    
    ControllerCloseReply reply = new ControllerCloseReply();
    Console.WriteLine("TestController: Close");
    return Task.FromResult(reply);
  } 
  
  private void ReadVehicleState(double t) {
    DataBusMessage message = _dataBusClient.Read(t, VEHICLE_STATE_TOPIC);    
    if ((message == null) || (message.VehicleState == null)) {
      return;
    }

    Metamoto.Types.Pose pose = message.VehicleState.Pose;
    if ((pose != null) && (pose.Position != null)) {
      Console.WriteLine("Vehicle Position: " + pose.Position.X + ", " + pose.Position.Y + ", " + pose.Position.Z);    
    }
  }  
  
  private void WriteVehicleControls(double t) {
    DataBusMessage message = new DataBusMessage();
    message.Header = new Header();
    message.Header.Time = t;    
    message.VehicleControls = new VehicleControls();
    message.VehicleControls.HeadLights = Metamoto.Types.Vehicle.Types.LightState.On;
    
    _dataBusClient.Write(message, VEHICLE_CONTROLS_TOPIC);
  }
}
