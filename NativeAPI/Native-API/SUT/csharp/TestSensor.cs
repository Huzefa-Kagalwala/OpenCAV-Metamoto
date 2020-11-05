using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Metamoto.Messages;
using Metamoto.Services;
using Metamoto.Types;
using Grpc.Core;

class TestSensor : Metamoto.Services.Sensor.SensorBase {
  private const string VEHICLE_STATE_TOPIC = "VehicleState";
   
  private DataBusClient _dataBusClient;
  private RayTracerClient _rayTracerClient;
  private Pose _sensorPose, _vehiclePose;
    
  public TestSensor() {
    _dataBusClient = new DataBusClient();
    _rayTracerClient = new RayTracerClient();
  }  
  
  public override Task<SensorInitializeReply> Initialize(SensorInitializeRequest request, ServerCallContext context) {
    string rayTracerURI = "";
    string dataBusURI = "";
    
    foreach (Metamoto.Types.ServiceDescription s in request.Services) {
      if (s.Name == "dataBus") {
        dataBusURI = s.Uri;
      } else if (s.Name == "rayTracer") {
        rayTracerURI = s.Uri;
      }        
    }
    
    if (dataBusURI == "") {
      string message = "Data bus service URI not found.";
      Console.WriteLine("TestSensor::Initialize: " + message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }
    
    if (!_dataBusClient.Initialize("TestSensor", dataBusURI, request.EgoVehicleId)) {
      string message = "Failed to initialize data bus client.";
      Console.WriteLine("TestSensor::Initialize: "+ message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }      
    
    if (!_dataBusClient.Subscribe(VEHICLE_STATE_TOPIC)) {
      string message = "Failed to subscribe to vehicle state topic.";
      Console.WriteLine("TestSensor::Initialize: "+ message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }    

    if (rayTracerURI == "") {
      string message = "Ray tracer service URI not found.";
      Console.WriteLine("TestSensor::Initialize: " + message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }

    if (!_rayTracerClient.Initialize(rayTracerURI)) {
      string message = "Failed to initialize ray tracer client.";
      Console.WriteLine("TestSensor::Initialize: "+ message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);
    }
    
    if (request.Pose == null) {
      string message = "Pose field missing.";
      Console.WriteLine("TestSensor::Initialize: "+ message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);      
    }
    
    _sensorPose = request.Pose;
    
    for (int i = 0; i < request.Parameters.Fields.Count; i++) {
      // Handle parameters
    }
    
    SensorInitializeReply reply = new SensorInitializeReply();
    reply.Name = "CSharp Test Sensor";
    reply.Version = "0.1a";
    reply.UpdateRate = 100.0f;
    reply.RequiresRayTracing = true;
    Console.WriteLine("TestSensor: Initialize");
    return Task.FromResult(reply);
  }

  public override Task<SensorUpdateReply> Update(SensorUpdateRequest request, ServerCallContext context) {
    
    ReadVehicleState(request.Time);    
    
    Trace();
            
    SensorUpdateReply reply = new SensorUpdateReply();
    reply.NextUpdateTime = 0.0f;
    Console.WriteLine("TestSensor: Update: " + request.Time);
    return Task.FromResult(reply);
  }

  public override Task<SensorCloseReply> Close(SensorCloseRequest request, ServerCallContext context) {
    _dataBusClient.Close();
    _rayTracerClient.Close();
    
    SensorCloseReply reply = new SensorCloseReply();
    Console.WriteLine("TestSensor: Close");
    return Task.FromResult(reply);
  }
  
  private void ReadVehicleState(double t) {
    DataBusMessage message = _dataBusClient.Read(t, VEHICLE_STATE_TOPIC);    
    if ((message == null) || (message.VehicleState == null)) {
      return;
    }

    Metamoto.Types.Pose pose = message.VehicleState.Pose;
    if ((pose != null) && (pose.Position != null)) {
      _vehiclePose = pose;
      Console.WriteLine("Vehicle Position: " + pose.Position.X + ", " + pose.Position.Y + ", " + pose.Position.Z);    
    }
  }
  
  private void Trace() {
    if (_vehiclePose == null) {
      return;
    }
  
    List<Ray> rays = new List<Ray>();
    for (int i = 0; i < 360; i += 10) {
      double angle = ((double)i)*Math.PI/180.0;
      
      Ray ray = new Ray();
      ray.Origin = new Metamoto.Types.Vector3();
      ray.Origin.X = _vehiclePose.Position.X + _sensorPose.Position.X;
      ray.Origin.Y = _vehiclePose.Position.Y + _sensorPose.Position.Y;
      ray.Origin.Z = _vehiclePose.Position.Z + _sensorPose.Position.Z;
      ray.Direction = new Metamoto.Types.Vector3();
      ray.Direction.X = (float)(System.Math.Cos(angle) - System.Math.Sin(angle));
      ray.Direction.Y = 0.0f;
      ray.Direction.Z = (float)(System.Math.Sin(angle) + System.Math.Cos(angle));
      rays.Add(ray);
    }
    
    List<RayHit> hits = new List<RayHit>();
    
    if (!_rayTracerClient.Trace(rays, ref hits)) {
      string message = "Trace failed.";
      Console.WriteLine("RayTracer::Trace: "+ message);
      Status status = new Grpc.Core.Status(StatusCode.FailedPrecondition, message);
      throw new RpcException(status);        
    }

    Console.WriteLine("TestSensor::Trace: Received " + hits.Count + " hits.");
  }
}
