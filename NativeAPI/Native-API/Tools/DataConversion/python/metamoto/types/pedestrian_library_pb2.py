# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/pedestrian_library.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import pedestrian_pb2 as metamoto_dot_types_dot_pedestrian__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/pedestrian_library.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n\'metamoto/types/pedestrian_library.proto\x12\x0emetamoto.types\x1a\x1fmetamoto/types/pedestrian.proto\"\xe7\x01\n\x11PedestrianLibrary\x12I\n\x0bpedestrians\x18\x01 \x03(\x0b\x32\x34.metamoto.types.PedestrianLibrary.PedestrianTemplate\x1a\x86\x01\n\x12PedestrianTemplate\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x13\n\x0bother_names\x18\x02 \x03(\t\x12\x0e\n\x06prefab\x18\x03 \x01(\t\x12-\n\x04type\x18\x04 \x01(\x0e\x32\x1f.metamoto.types.Pedestrian.Type\x12\x0e\n\x06weight\x18\x05 \x01(\x02\x42\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_pedestrian__pb2.DESCRIPTOR,])




_PEDESTRIANLIBRARY_PEDESTRIANTEMPLATE = _descriptor.Descriptor(
  name='PedestrianTemplate',
  full_name='metamoto.types.PedestrianLibrary.PedestrianTemplate',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='metamoto.types.PedestrianLibrary.PedestrianTemplate.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='other_names', full_name='metamoto.types.PedestrianLibrary.PedestrianTemplate.other_names', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='prefab', full_name='metamoto.types.PedestrianLibrary.PedestrianTemplate.prefab', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='type', full_name='metamoto.types.PedestrianLibrary.PedestrianTemplate.type', index=3,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='weight', full_name='metamoto.types.PedestrianLibrary.PedestrianTemplate.weight', index=4,
      number=5, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
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
  serialized_start=190,
  serialized_end=324,
)

_PEDESTRIANLIBRARY = _descriptor.Descriptor(
  name='PedestrianLibrary',
  full_name='metamoto.types.PedestrianLibrary',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='pedestrians', full_name='metamoto.types.PedestrianLibrary.pedestrians', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_PEDESTRIANLIBRARY_PEDESTRIANTEMPLATE, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=93,
  serialized_end=324,
)

_PEDESTRIANLIBRARY_PEDESTRIANTEMPLATE.fields_by_name['type'].enum_type = metamoto_dot_types_dot_pedestrian__pb2._PEDESTRIAN_TYPE
_PEDESTRIANLIBRARY_PEDESTRIANTEMPLATE.containing_type = _PEDESTRIANLIBRARY
_PEDESTRIANLIBRARY.fields_by_name['pedestrians'].message_type = _PEDESTRIANLIBRARY_PEDESTRIANTEMPLATE
DESCRIPTOR.message_types_by_name['PedestrianLibrary'] = _PEDESTRIANLIBRARY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PedestrianLibrary = _reflection.GeneratedProtocolMessageType('PedestrianLibrary', (_message.Message,), dict(

  PedestrianTemplate = _reflection.GeneratedProtocolMessageType('PedestrianTemplate', (_message.Message,), dict(
    DESCRIPTOR = _PEDESTRIANLIBRARY_PEDESTRIANTEMPLATE,
    __module__ = 'metamoto.types.pedestrian_library_pb2'
    # @@protoc_insertion_point(class_scope:metamoto.types.PedestrianLibrary.PedestrianTemplate)
    ))
  ,
  DESCRIPTOR = _PEDESTRIANLIBRARY,
  __module__ = 'metamoto.types.pedestrian_library_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.PedestrianLibrary)
  ))
_sym_db.RegisterMessage(PedestrianLibrary)
_sym_db.RegisterMessage(PedestrianLibrary.PedestrianTemplate)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
