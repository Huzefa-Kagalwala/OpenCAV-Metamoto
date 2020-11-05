# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/scene.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/scene.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n\x1ametamoto/types/scene.proto\x12\x0emetamoto.types\"\x8c\x02\n\x0bSceneImport\x12\n\n\x02id\x18\x01 \x01(\x05\x12\x32\n\x06status\x18\x02 \x01(\x0e\x32\".metamoto.types.SceneImport.Status\x12\x16\n\x0estatus_message\x18\x03 \x01(\t\x12\x12\n\nstart_time\x18\x04 \x01(\t\x12\x10\n\x08\x65nd_time\x18\x05 \x01(\t\x12\x12\n\nstarted_by\x18\x06 \x01(\t\x12\x10\n\x08progress\x18\x07 \x01(\x02\"Y\n\x06Status\x12\x0b\n\x07UNKNOWN\x10\x00\x12\n\n\x06QUEUED\x10\x01\x12\x0c\n\x08\x42UILDING\x10\x02\x12\r\n\tSUCCEEDED\x10\x03\x12\n\n\x06\x46\x41ILED\x10\x04\x12\r\n\tCANCELLED\x10\x05\"\x89\x01\n\x05Scene\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x14\n\x0c\x64isplay_name\x18\x03 \x01(\t\x12\x13\n\x0b\x64\x65scription\x18\x04 \x01(\t\x12\r\n\x05ready\x18\x05 \x01(\x08\x12,\n\x07imports\x18\x06 \x03(\x0b\x32\x1b.metamoto.types.SceneImportB\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
)



_SCENEIMPORT_STATUS = _descriptor.EnumDescriptor(
  name='Status',
  full_name='metamoto.types.SceneImport.Status',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='QUEUED', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BUILDING', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SUCCEEDED', index=3, number=3,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FAILED', index=4, number=4,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CANCELLED', index=5, number=5,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=226,
  serialized_end=315,
)
_sym_db.RegisterEnumDescriptor(_SCENEIMPORT_STATUS)


_SCENEIMPORT = _descriptor.Descriptor(
  name='SceneImport',
  full_name='metamoto.types.SceneImport',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='metamoto.types.SceneImport.id', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='status', full_name='metamoto.types.SceneImport.status', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='status_message', full_name='metamoto.types.SceneImport.status_message', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='start_time', full_name='metamoto.types.SceneImport.start_time', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='end_time', full_name='metamoto.types.SceneImport.end_time', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='started_by', full_name='metamoto.types.SceneImport.started_by', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='progress', full_name='metamoto.types.SceneImport.progress', index=6,
      number=7, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SCENEIMPORT_STATUS,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=47,
  serialized_end=315,
)


_SCENE = _descriptor.Descriptor(
  name='Scene',
  full_name='metamoto.types.Scene',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='metamoto.types.Scene.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='metamoto.types.Scene.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='display_name', full_name='metamoto.types.Scene.display_name', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='description', full_name='metamoto.types.Scene.description', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ready', full_name='metamoto.types.Scene.ready', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='imports', full_name='metamoto.types.Scene.imports', index=5,
      number=6, type=11, cpp_type=10, label=3,
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
  serialized_start=318,
  serialized_end=455,
)

_SCENEIMPORT.fields_by_name['status'].enum_type = _SCENEIMPORT_STATUS
_SCENEIMPORT_STATUS.containing_type = _SCENEIMPORT
_SCENE.fields_by_name['imports'].message_type = _SCENEIMPORT
DESCRIPTOR.message_types_by_name['SceneImport'] = _SCENEIMPORT
DESCRIPTOR.message_types_by_name['Scene'] = _SCENE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SceneImport = _reflection.GeneratedProtocolMessageType('SceneImport', (_message.Message,), dict(
  DESCRIPTOR = _SCENEIMPORT,
  __module__ = 'metamoto.types.scene_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.SceneImport)
  ))
_sym_db.RegisterMessage(SceneImport)

Scene = _reflection.GeneratedProtocolMessageType('Scene', (_message.Message,), dict(
  DESCRIPTOR = _SCENE,
  __module__ = 'metamoto.types.scene_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.Scene)
  ))
_sym_db.RegisterMessage(Scene)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
