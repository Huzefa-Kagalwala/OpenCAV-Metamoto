# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/messages/lidar.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import laser_return_group_pb2 as metamoto_dot_types_dot_laser__return__group__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/messages/lidar.proto',
  package='metamoto.messages',
  syntax='proto3',
  serialized_options=_b('\252\002\021Metamoto.Messages'),
  serialized_pb=_b('\n\x1dmetamoto/messages/lidar.proto\x12\x11metamoto.messages\x1a\'metamoto/types/laser_return_group.proto\"h\n\x05Lidar\x12\x16\n\x0etime_increment\x18\x01 \x01(\x01\x12\x30\n\x06groups\x18\x02 \x03(\x0b\x32 .metamoto.types.LaserReturnGroup\x12\x15\n\rvelodyne_pcap\x18\x03 \x01(\x0c\x42\x14\xaa\x02\x11Metamoto.Messagesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_laser__return__group__pb2.DESCRIPTOR,])




_LIDAR = _descriptor.Descriptor(
  name='Lidar',
  full_name='metamoto.messages.Lidar',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time_increment', full_name='metamoto.messages.Lidar.time_increment', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='groups', full_name='metamoto.messages.Lidar.groups', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='velodyne_pcap', full_name='metamoto.messages.Lidar.velodyne_pcap', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
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
  serialized_start=93,
  serialized_end=197,
)

_LIDAR.fields_by_name['groups'].message_type = metamoto_dot_types_dot_laser__return__group__pb2._LASERRETURNGROUP
DESCRIPTOR.message_types_by_name['Lidar'] = _LIDAR
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Lidar = _reflection.GeneratedProtocolMessageType('Lidar', (_message.Message,), dict(
  DESCRIPTOR = _LIDAR,
  __module__ = 'metamoto.messages.lidar_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.messages.Lidar)
  ))
_sym_db.RegisterMessage(Lidar)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
