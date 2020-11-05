# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/messages/ground_truth.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import environment_pb2 as metamoto_dot_types_dot_environment__pb2
from metamoto.types import pedestrian_pb2 as metamoto_dot_types_dot_pedestrian__pb2
from metamoto.types import traffic_sign_pb2 as metamoto_dot_types_dot_traffic__sign__pb2
from metamoto.types import traffic_light_pb2 as metamoto_dot_types_dot_traffic__light__pb2
from metamoto.types import vehicle_pb2 as metamoto_dot_types_dot_vehicle__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/messages/ground_truth.proto',
  package='metamoto.messages',
  syntax='proto3',
  serialized_options=_b('\252\002\021Metamoto.Messages'),
  serialized_pb=_b('\n$metamoto/messages/ground_truth.proto\x12\x11metamoto.messages\x1a metamoto/types/environment.proto\x1a\x1fmetamoto/types/pedestrian.proto\x1a!metamoto/types/traffic_sign.proto\x1a\"metamoto/types/traffic_light.proto\x1a\x1cmetamoto/types/vehicle.proto\"\xe2\x02\n\x0bGroundTruth\x12\x30\n\x0b\x65nvironment\x18\x01 \x01(\x0b\x32\x1b.metamoto.types.Environment\x12,\n\x0b\x65go_vehicle\x18\x02 \x01(\x0b\x32\x17.metamoto.types.Vehicle\x12)\n\x08vehicles\x18\x03 \x03(\x0b\x32\x17.metamoto.types.Vehicle\x12/\n\x0bpedestrians\x18\x04 \x03(\x0b\x32\x1a.metamoto.types.Pedestrian\x12\x34\n\x0etraffic_lights\x18\x05 \x03(\x0b\x32\x1c.metamoto.types.TrafficLight\x12\x32\n\rtraffic_signs\x18\x06 \x03(\x0b\x32\x1b.metamoto.types.TrafficSign\x12-\n\x0c\x65go_vehicles\x18\x07 \x03(\x0b\x32\x17.metamoto.types.VehicleB\x14\xaa\x02\x11Metamoto.Messagesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_environment__pb2.DESCRIPTOR,metamoto_dot_types_dot_pedestrian__pb2.DESCRIPTOR,metamoto_dot_types_dot_traffic__sign__pb2.DESCRIPTOR,metamoto_dot_types_dot_traffic__light__pb2.DESCRIPTOR,metamoto_dot_types_dot_vehicle__pb2.DESCRIPTOR,])




_GROUNDTRUTH = _descriptor.Descriptor(
  name='GroundTruth',
  full_name='metamoto.messages.GroundTruth',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='environment', full_name='metamoto.messages.GroundTruth.environment', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ego_vehicle', full_name='metamoto.messages.GroundTruth.ego_vehicle', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='vehicles', full_name='metamoto.messages.GroundTruth.vehicles', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pedestrians', full_name='metamoto.messages.GroundTruth.pedestrians', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='traffic_lights', full_name='metamoto.messages.GroundTruth.traffic_lights', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='traffic_signs', full_name='metamoto.messages.GroundTruth.traffic_signs', index=5,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ego_vehicles', full_name='metamoto.messages.GroundTruth.ego_vehicles', index=6,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=228,
  serialized_end=582,
)

_GROUNDTRUTH.fields_by_name['environment'].message_type = metamoto_dot_types_dot_environment__pb2._ENVIRONMENT
_GROUNDTRUTH.fields_by_name['ego_vehicle'].message_type = metamoto_dot_types_dot_vehicle__pb2._VEHICLE
_GROUNDTRUTH.fields_by_name['vehicles'].message_type = metamoto_dot_types_dot_vehicle__pb2._VEHICLE
_GROUNDTRUTH.fields_by_name['pedestrians'].message_type = metamoto_dot_types_dot_pedestrian__pb2._PEDESTRIAN
_GROUNDTRUTH.fields_by_name['traffic_lights'].message_type = metamoto_dot_types_dot_traffic__light__pb2._TRAFFICLIGHT
_GROUNDTRUTH.fields_by_name['traffic_signs'].message_type = metamoto_dot_types_dot_traffic__sign__pb2._TRAFFICSIGN
_GROUNDTRUTH.fields_by_name['ego_vehicles'].message_type = metamoto_dot_types_dot_vehicle__pb2._VEHICLE
DESCRIPTOR.message_types_by_name['GroundTruth'] = _GROUNDTRUTH
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

GroundTruth = _reflection.GeneratedProtocolMessageType('GroundTruth', (_message.Message,), dict(
  DESCRIPTOR = _GROUNDTRUTH,
  __module__ = 'metamoto.messages.ground_truth_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.messages.GroundTruth)
  ))
_sym_db.RegisterMessage(GroundTruth)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
