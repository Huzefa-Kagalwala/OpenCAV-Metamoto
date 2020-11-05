using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Metamoto.Services;
using Metamoto.Messages;
using Grpc.Core;

class RayTracerClient {
  private Channel _channel;
  private RayTracer.RayTracerClient _client;
  
  public bool Initialize(string uri) {
    try {
      _channel = new Channel(uri, ChannelCredentials.Insecure);
      _client = new RayTracer.RayTracerClient(_channel);    
    } catch (RpcException rpcEx) {
      Console.WriteLine("RayTracer::Initialize: " + rpcEx.Status.StatusCode + ", " + rpcEx.Status.Detail);
      return false;
    } catch (System.Exception ex) {
      Console.WriteLine("RayTracer::Initialize: " + ex.Message);
      return false;
    }    
    
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
  
  public bool SetPatterns() {
    return true;
  }
  
  public bool Trace(List<Ray> rays, ref List<RayHit> hits) {
    if ((_channel == null) && (_client == null)) {
      return false;
    }
    
    RayTracerTraceRequest trace = new RayTracerTraceRequest();
    trace.MinimumDistance = 1.0;
    trace.MaximumDistance = 100.0;
    trace.NumberOfReturns = 1;
    trace.Wavelength = 0.000001;
    trace.BeamIntensity = 1.0;
    trace.UseBeamWidening = false;
    trace.UseRadiationPattern = false;
        
    trace.Rays.AddRange(rays);
    
    try {
      RayTracerTraceReply traceReply = _client.Trace(trace);
      foreach (RayHit hit in traceReply.Hits) {
        hits.Add(hit);
      }      
    } catch (RpcException rpcEx) {
      Console.WriteLine("RayTracerClient::Trace:RPC Exception: " + rpcEx.Status.StatusCode + ", " + rpcEx.Status.Detail);
      return false;
    } catch (System.Exception ex) {
      Console.WriteLine("RayTracerClient::TraceSystem Exception: " + ex.Message);
      return false;
    }
    
    return true;
  }  
}
