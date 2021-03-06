# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
import grpc

from metamoto.services import image_renderer_pb2 as metamoto_dot_services_dot_image__renderer__pb2


class ImageRendererStub(object):
  """The image renderer service provides the ability to acquire images from the simulator's
  rendering engine. Use SetCamera at initialization to create and configure a new camera.
  Then during each update, call GetImage using the camera ID returned by SetCamera to
  retrieve the latest image.
  """

  def __init__(self, channel):
    """Constructor.

    Args:
      channel: A grpc.Channel.
    """
    self.SetCamera = channel.unary_unary(
        '/metamoto.services.ImageRenderer/SetCamera',
        request_serializer=metamoto_dot_services_dot_image__renderer__pb2.ImageRendererSetCameraRequest.SerializeToString,
        response_deserializer=metamoto_dot_services_dot_image__renderer__pb2.ImageRendererSetCameraReply.FromString,
        )
    self.GetImage = channel.unary_unary(
        '/metamoto.services.ImageRenderer/GetImage',
        request_serializer=metamoto_dot_services_dot_image__renderer__pb2.ImageRendererGetImageRequest.SerializeToString,
        response_deserializer=metamoto_dot_services_dot_image__renderer__pb2.ImageRendererGetImageReply.FromString,
        )


class ImageRendererServicer(object):
  """The image renderer service provides the ability to acquire images from the simulator's
  rendering engine. Use SetCamera at initialization to create and configure a new camera.
  Then during each update, call GetImage using the camera ID returned by SetCamera to
  retrieve the latest image.
  """

  def SetCamera(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')

  def GetImage(self, request, context):
    # missing associated documentation comment in .proto file
    pass
    context.set_code(grpc.StatusCode.UNIMPLEMENTED)
    context.set_details('Method not implemented!')
    raise NotImplementedError('Method not implemented!')


def add_ImageRendererServicer_to_server(servicer, server):
  rpc_method_handlers = {
      'SetCamera': grpc.unary_unary_rpc_method_handler(
          servicer.SetCamera,
          request_deserializer=metamoto_dot_services_dot_image__renderer__pb2.ImageRendererSetCameraRequest.FromString,
          response_serializer=metamoto_dot_services_dot_image__renderer__pb2.ImageRendererSetCameraReply.SerializeToString,
      ),
      'GetImage': grpc.unary_unary_rpc_method_handler(
          servicer.GetImage,
          request_deserializer=metamoto_dot_services_dot_image__renderer__pb2.ImageRendererGetImageRequest.FromString,
          response_serializer=metamoto_dot_services_dot_image__renderer__pb2.ImageRendererGetImageReply.SerializeToString,
      ),
  }
  generic_handler = grpc.method_handlers_generic_handler(
      'metamoto.services.ImageRenderer', rpc_method_handlers)
  server.add_generic_rpc_handlers((generic_handler,))
