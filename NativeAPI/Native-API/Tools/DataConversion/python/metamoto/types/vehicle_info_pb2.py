# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/vehicle_info.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import vector3_pb2 as metamoto_dot_types_dot_vector3__pb2
from metamoto.types import vehicle_pb2 as metamoto_dot_types_dot_vehicle__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/vehicle_info.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n!metamoto/types/vehicle_info.proto\x12\x0emetamoto.types\x1a\x1cmetamoto/types/vector3.proto\x1a\x1cmetamoto/types/vehicle.proto\"\xed\x01\n\x0bVehicleInfo\x12\x17\n\x0fmax_steer_angle\x18\x01 \x01(\x02\x12\x12\n\nwheel_base\x18\x02 \x01(\x02\x12\x18\n\x10max_acceleration\x18\x03 \x01(\x02\x12\x11\n\tmax_brake\x18\x04 \x01(\x02\x12\x1d\n\x15\x63oasting_deceleration\x18\x05 \x01(\x02\x12+\n\ndimensions\x18\x06 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x0c\n\x04mass\x18\x07 \x01(\x02\x12*\n\x04type\x18\x08 \x01(\x0e\x32\x1c.metamoto.types.Vehicle.TypeB\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_vector3__pb2.DESCRIPTOR,metamoto_dot_types_dot_vehicle__pb2.DESCRIPTOR,])




_VEHICLEINFO = _descriptor.Descriptor(
  name='VehicleInfo',
  full_name='metamoto.types.VehicleInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='max_steer_angle', full_name='metamoto.types.VehicleInfo.max_steer_angle', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='wheel_base', full_name='metamoto.types.VehicleInfo.wheel_base', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='max_acceleration', full_name='metamoto.types.VehicleInfo.max_acceleration', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='max_brake', full_name='metamoto.types.VehicleInfo.max_brake', index=3,
      number=4, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='coasting_deceleration', full_name='metamoto.types.VehicleInfo.coasting_deceleration', index=4,
      number=5, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dimensions', full_name='metamoto.types.VehicleInfo.dimensions', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='mass', full_name='metamoto.types.VehicleInfo.mass', index=6,
      number=7, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='type', full_name='metamoto.types.VehicleInfo.type', index=7,
      number=8, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=114,
  serialized_end=351,
)

_VEHICLEINFO.fields_by_name['dimensions'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_VEHICLEINFO.fields_by_name['type'].enum_type = metamoto_dot_types_dot_vehicle__pb2._VEHICLE_TYPE
DESCRIPTOR.message_types_by_name['VehicleInfo'] = _VEHICLEINFO
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

VehicleInfo = _reflection.GeneratedProtocolMessageType('VehicleInfo', (_message.Message,), dict(
  DESCRIPTOR = _VEHICLEINFO,
  __module__ = 'metamoto.types.vehicle_info_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.VehicleInfo)
  ))
_sym_db.RegisterMessage(VehicleInfo)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
