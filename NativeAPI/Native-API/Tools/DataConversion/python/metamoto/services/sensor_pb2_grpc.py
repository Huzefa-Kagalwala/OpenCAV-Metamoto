# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from metamoto.services import sensor_pb2 as metamoto_dot_services_dot_sensor__pb2


class SensorStub(object):
  # missing associated documentation comment in .proto file
  pass

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.Setup = channel.unary_unary(
        '/metamoto.services.Sensor/Setup',
        request_serializer=metamoto_dot_services_dot_sensor__pb2.SensorSetupRequest.SerializeToString,
        response_deserializer=metamoto_dot_services_dot_sensor__pb2.SensorSetupReply.FromString,
        )
    self.Initialize = channel.unary_unary(
        '/metamoto.services.Sensor/Initialize',
        request_serializer=metamoto_dot_services_dot_sensor__pb2.SensorInitializeRequest.SerializeToString,
        response_deserializer=metamoto_dot_services_dot_sensor__pb2.SensorInitializeReply.FromString,
        )
    self.Update = channel.unary_unary(
        '/metamoto.services.Sensor/Update',
        request_serializer=metamoto_dot_services_dot_sensor__pb2.SensorUpdateRequest.SerializeToString,
        response_deserializer=metamoto_dot_services_dot_sensor__pb2.SensorUpdateReply.FromString,
        )
    self.Close = channel.unary_unary(
        '/metamoto.services.Sensor/Close',
        request_serializer=metamoto_dot_services_dot_sensor__pb2.SensorCloseRequest.SerializeToString,
        response_deserializer=metamoto_dot_services_dot_sensor__pb2.SensorCloseReply.FromString,
        )


class SensorServicer(object):
  # missing associated documentation comment in .proto file
  pass

  def Setup(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def Initialize(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def Update(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def Close(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_SensorServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'Setup': grpc.unary_unary_rpc_method_handler(
          servicer.Setup,
          request_deserializer=metamoto_dot_services_dot_sensor__pb2.SensorSetupRequest.FromString,
          response_serializer=metamoto_dot_services_dot_sensor__pb2.SensorSetupReply.SerializeToString,
      ),
      'Initialize': grpc.unary_unary_rpc_method_handler(
          servicer.Initialize,
          request_deserializer=metamoto_dot_services_dot_sensor__pb2.SensorInitializeRequest.FromString,
          response_serializer=metamoto_dot_services_dot_sensor__pb2.SensorInitializeReply.SerializeToString,
      ),
      'Update': grpc.unary_unary_rpc_method_handler(
          servicer.Update,
          request_deserializer=metamoto_dot_services_dot_sensor__pb2.SensorUpdateRequest.FromString,
          response_serializer=metamoto_dot_services_dot_sensor__pb2.SensorUpdateReply.SerializeToString,
      ),
      'Close': grpc.unary_unary_rpc_method_handler(
          servicer.Close,
          request_deserializer=metamoto_dot_services_dot_sensor__pb2.SensorCloseRequest.FromString,
          response_serializer=metamoto_dot_services_dot_sensor__pb2.SensorCloseReply.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'metamoto.services.Sensor', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
