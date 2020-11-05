using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Metamoto.Services;
using Metamoto.Messages;
using Grpc.Core;

class DataBusClient {
  private const string VEHICLE_STATE_TOPIC = "VehicleState";
  private const string VEHICLE_CONTROLS_TOPIC = "VehicleControls";
  
  private Channel _channel;
  private DataBus.DataBusClient _client;
  private string _name;
  private string _egoVehicleId;
  
  public bool Initialize(string name, string uri, string egoVehicleId) {
    try {
      _channel = new Channel(uri, ChannelCredentials.Insecure);
      _client = new DataBus.DataBusClient(_channel);    
    } catch (RpcException rpcEx) {
      Console.WriteLine("DataBusClient::Initialize: " + rpcEx.Status.StatusCode + ", " + rpcEx.Status.Detail);
      return false;
    } catch (System.Exception ex) {
      Console.WriteLine("DataBusClient::Initialize: " + ex.Message);
      return false;
    }    
    
    _name = name;
    _egoVehicleId = egoVehicleId;
    
    return true;
  }  

  public void Close() {
    if ((_client == null) || (_channel == null)) {
      return;
    }
    
    _channel.ShutdownAsync().Wait();
    _channel = null;
    _client = null;    
  }  
  
  public bool Subscribe(string topic) {
    if ((_client == null) || (_channel == null)) {
      return false;
    }

    DataBusSubscribeRequest request = new DataBusSubscribeRequest();
    request.Topic = topic;
    request.ReaderName = _name;
    request.EgoVehicleId = _egoVehicleId;
    
    try {
      DataBusSubscribeReply reply = _client.Subscribe(request);
      if (reply != null) {
        Console.WriteLine("DataBusClient::Subscribe: Subscribed to " + request.Topic);
        return true;
      } else {
        Console.WriteLine("DataBusClient::Subscribe: Data bus subscribe reply is null.");
      }
    } catch (RpcException rpcEx) {
      Console.WriteLine("DataBusClient::Subscribe: RPC Exception: " + rpcEx.Status.StatusCode + ", " + rpcEx.Status.Detail);
    } catch (System.Exception ex) {
      Console.WriteLine("DataBusClient::Subscribe: System Exception: " + ex.Message);
    }
    
    return false;
  }    

  public bool Publish(string topic) {
    if ((_client == null) || (_channel == null)) {
      return false;
    }

    DataBusPublishRequest request = new DataBusPublishRequest();
    request.Topic = topic;
    request.WriterName = _name;
    request.EgoVehicleId = _egoVehicleId;
    
    try {
      DataBusPublishReply reply = _client.Publish(request);
      if (reply != null) {
        Console.WriteLine("DataBusClient::Publish: Publishing " + request.Topic);
        return true;
      } else {
        Console.WriteLine("DataBusClient::Publish: Data bus publish reply is null.");
      }
    } catch (RpcException rpcEx) {
      Console.WriteLine("DataBusClient::Publish: RPC Exception: " + rpcEx.Status.StatusCode + ", " + rpcEx.Status.Detail);
    } catch (System.Exception ex) {
      Console.WriteLine("DataBusClient::Publish: System Exception: " + ex.Message);
    }
    
    return false;
  }    
  
  public DataBusMessage Read(double t, string topic) {
    if ((_client == null) || (_channel == null)) {
      return null;
    }
    
    DataBusReadRequest request = new DataBusReadRequest();
    request.Topic = topic;
    request.ReaderName = _name;
    request.EgoVehicleId = _egoVehicleId;
    request.Time = t;
    
    DataBusReadReply reply = null;
    
    try {
      reply = _client.Read(request);
    } catch (RpcException rpcEx) {
      Console.WriteLine("DataBusClient::ReadVehicleState: RPC Exception: " + rpcEx.Status.StatusCode + ", " + rpcEx.Status.Detail);
      return null;
    } catch (System.Exception ex) {
      Console.WriteLine("DataBusClient::ReadVehicleState: System Exception: " + ex.Message);
      return null;
    }
    
    return reply.Message;
  }  
  
  public bool Write(DataBusMessage message, string topic) {
    if ((_client == null) || (_channel == null)) {
      return false;
    }
    
    DataBusWriteRequest request = new DataBusWriteRequest();
    request.Topic = topic;
    request.WriterName = _name;
    request.EgoVehicleId = _egoVehicleId;
    request.Message = message;
    
    DataBusWriteReply reply = null;
    
    try {
      reply = _client.Write(request);
    } catch (RpcException rpcEx) {
      Console.WriteLine("WriteVehicleControls: RPC Exception: " + rpcEx.Status.StatusCode + ", " + rpcEx.Status.Detail);
      return false;
    } catch (System.Exception ex) {
      Console.WriteLine("WriteVehicleControls: System Exception: " + ex.Message);
      return false;
    }    

    return true;
  }
}
