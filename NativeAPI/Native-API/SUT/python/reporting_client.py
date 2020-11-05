# Metamoto, Inc., 2018
# System Under Test (SUT) Example
# TensorFlow/Python Vehicle Detector
#
# ReportingClient class
# ==============================================================================

import grpc

from metamoto.services import reporting_pb2
from metamoto.services import reporting_pb2_grpc


class ReportingClient:

  def __init__(self, channel, egoVehicleID):
    self._channel = grpc.insecure_channel(channel)
    self._stub = reporting_pb2_grpc.ReportingStub(self._channel)
    self._egoVehicleID = egoVehicleID

  def log(self, message):
    self._stub.Log(reporting_pb2.ReportingLogRequest(log_message=message,
                                                     ego_vehicle_id=self._egoVehicleID))

  def visualize(self, visual):
    self._stub.Visualize(reporting_pb2.ReportingVisualizeRequest(visualization=visual,
                                                                 ego_vehicle_id=self._egoVehicleID))