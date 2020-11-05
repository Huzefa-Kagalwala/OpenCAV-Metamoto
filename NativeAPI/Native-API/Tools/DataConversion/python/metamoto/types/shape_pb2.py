# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/shape.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/shape.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n\x1ametamoto/types/shape.proto\x12\x0emetamoto.types\"z\n\x05Shape\x12(\n\x04type\x18\x01 \x01(\x0e\x32\x1a.metamoto.types.Shape.Type\x12\x12\n\ndimensions\x18\x02 \x03(\x02\"3\n\x04Type\x12\x07\n\x03\x42OX\x10\x00\x12\n\n\x06SPHERE\x10\x01\x12\x0c\n\x08\x43YLINDER\x10\x02\x12\x08\n\x04\x43ONE\x10\x03\x42\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
)



_SHAPE_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='metamoto.types.Shape.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='BOX', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SPHERE', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CYLINDER', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CONE', index=3, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=117,
  serialized_end=168,
)
_sym_db.RegisterEnumDescriptor(_SHAPE_TYPE)


_SHAPE = _descriptor.Descriptor(
  name='Shape',
  full_name='metamoto.types.Shape',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='metamoto.types.Shape.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dimensions', full_name='metamoto.types.Shape.dimensions', index=1,
      number=2, type=2, cpp_type=6, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SHAPE_TYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=46,
  serialized_end=168,
)

_SHAPE.fields_by_name['type'].enum_type = _SHAPE_TYPE
_SHAPE_TYPE.containing_type = _SHAPE
DESCRIPTOR.message_types_by_name['Shape'] = _SHAPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Shape = _reflection.GeneratedProtocolMessageType('Shape', (_message.Message,), dict(
  DESCRIPTOR = _SHAPE,
  __module__ = 'metamoto.types.shape_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.Shape)
  ))
_sym_db.RegisterMessage(Shape)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)