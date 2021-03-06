# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/messages/localizer.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import quaternion_pb2 as metamoto_dot_types_dot_quaternion__pb2
from metamoto.types import vector3_pb2 as metamoto_dot_types_dot_vector3__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/messages/localizer.proto',
  package='metamoto.messages',
  syntax='proto3',
  serialized_options=_b('\252\002\021Metamoto.Messages'),
  serialized_pb=_b('\n!metamoto/messages/localizer.proto\x12\x11metamoto.messages\x1a\x1fmetamoto/types/quaternion.proto\x1a\x1cmetamoto/types/vector3.proto\"\xb7\x02\n\tLocalizer\x12)\n\x08position\x18\x01 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12/\n\x0borientation\x18\x02 \x01(\x0b\x32\x1a.metamoto.types.Quaternion\x12\x30\n\x0flinear_velocity\x18\x03 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x34\n\x13linear_acceleration\x18\x04 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x31\n\x10\x61ngular_velocity\x18\x05 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x33\n\x0buncertainty\x18\x06 \x01(\x0b\x32\x1e.metamoto.messages.Uncertainty\"\xd1\x02\n\x0bUncertainty\x12\x31\n\x10position_std_dev\x18\x01 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x39\n\x18orientation_axis_std_dev\x18\x02 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12!\n\x19orientation_angle_std_dev\x18\x03 \x01(\x02\x12\x38\n\x17linear_velocity_std_dev\x18\x04 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12<\n\x1blinear_acceleration_std_dev\x18\x05 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x39\n\x18\x61ngular_velocity_std_dev\x18\x06 \x01(\x0b\x32\x17.metamoto.types.Vector3B\x14\xaa\x02\x11Metamoto.Messagesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_quaternion__pb2.DESCRIPTOR,metamoto_dot_types_dot_vector3__pb2.DESCRIPTOR,])




_LOCALIZER = _descriptor.Descriptor(
  name='Localizer',
  full_name='metamoto.messages.Localizer',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='position', full_name='metamoto.messages.Localizer.position', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='orientation', full_name='metamoto.messages.Localizer.orientation', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='linear_velocity', full_name='metamoto.messages.Localizer.linear_velocity', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='linear_acceleration', full_name='metamoto.messages.Localizer.linear_acceleration', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='angular_velocity', full_name='metamoto.messages.Localizer.angular_velocity', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='uncertainty', full_name='metamoto.messages.Localizer.uncertainty', index=5,
      number=6, type=11, cpp_type=10, label=1,
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
  serialized_start=120,
  serialized_end=431,
)


_UNCERTAINTY = _descriptor.Descriptor(
  name='Uncertainty',
  full_name='metamoto.messages.Uncertainty',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='position_std_dev', full_name='metamoto.messages.Uncertainty.position_std_dev', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='orientation_axis_std_dev', full_name='metamoto.messages.Uncertainty.orientation_axis_std_dev', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='orientation_angle_std_dev', full_name='metamoto.messages.Uncertainty.orientation_angle_std_dev', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='linear_velocity_std_dev', full_name='metamoto.messages.Uncertainty.linear_velocity_std_dev', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='linear_acceleration_std_dev', full_name='metamoto.messages.Uncertainty.linear_acceleration_std_dev', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='angular_velocity_std_dev', full_name='metamoto.messages.Uncertainty.angular_velocity_std_dev', index=5,
      number=6, type=11, cpp_type=10, label=1,
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
  serialized_start=434,
  serialized_end=771,
)

_LOCALIZER.fields_by_name['position'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_LOCALIZER.fields_by_name['orientation'].message_type = metamoto_dot_types_dot_quaternion__pb2._QUATERNION
_LOCALIZER.fields_by_name['linear_velocity'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_LOCALIZER.fields_by_name['linear_acceleration'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_LOCALIZER.fields_by_name['angular_velocity'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_LOCALIZER.fields_by_name['uncertainty'].message_type = _UNCERTAINTY
_UNCERTAINTY.fields_by_name['position_std_dev'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_UNCERTAINTY.fields_by_name['orientation_axis_std_dev'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_UNCERTAINTY.fields_by_name['linear_velocity_std_dev'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_UNCERTAINTY.fields_by_name['linear_acceleration_std_dev'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_UNCERTAINTY.fields_by_name['angular_velocity_std_dev'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
DESCRIPTOR.message_types_by_name['Localizer'] = _LOCALIZER
DESCRIPTOR.message_types_by_name['Uncertainty'] = _UNCERTAINTY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Localizer = _reflection.GeneratedProtocolMessageType('Localizer', (_message.Message,), dict(
  DESCRIPTOR = _LOCALIZER,
  __module__ = 'metamoto.messages.localizer_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.messages.Localizer)
  ))
_sym_db.RegisterMessage(Localizer)

Uncertainty = _reflection.GeneratedProtocolMessageType('Uncertainty', (_message.Message,), dict(
  DESCRIPTOR = _UNCERTAINTY,
  __module__ = 'metamoto.messages.localizer_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.messages.Uncertainty)
  ))
_sym_db.RegisterMessage(Uncertainty)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
