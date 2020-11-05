# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/messages/imu.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import vector3_pb2 as metamoto_dot_types_dot_vector3__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/messages/imu.proto',
  package='metamoto.messages',
  syntax='proto3',
  serialized_options=_b('\252\002\021Metamoto.Messages'),
  serialized_pb=_b('\n\x1bmetamoto/messages/imu.proto\x12\x11metamoto.messages\x1a\x1cmetamoto/types/vector3.proto\"n\n\x03IMU\x12\x31\n\x10\x61ngular_velocity\x18\x01 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x34\n\x13linear_acceleration\x18\x02 \x01(\x0b\x32\x17.metamoto.types.Vector3B\x14\xaa\x02\x11Metamoto.Messagesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_vector3__pb2.DESCRIPTOR,])




_IMU = _descriptor.Descriptor(
  name='IMU',
  full_name='metamoto.messages.IMU',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='angular_velocity', full_name='metamoto.messages.IMU.angular_velocity', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='linear_acceleration', full_name='metamoto.messages.IMU.linear_acceleration', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=80,
  serialized_end=190,
)

_IMU.fields_by_name['angular_velocity'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_IMU.fields_by_name['linear_acceleration'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
DESCRIPTOR.message_types_by_name['IMU'] = _IMU
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

IMU = _reflection.GeneratedProtocolMessageType('IMU', (_message.Message,), dict(
  DESCRIPTOR = _IMU,
  __module__ = 'metamoto.messages.imu_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.messages.IMU)
  ))
_sym_db.RegisterMessage(IMU)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)