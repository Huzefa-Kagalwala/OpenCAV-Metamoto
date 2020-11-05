# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/geo_coordinates.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/geo_coordinates.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n$metamoto/types/geo_coordinates.proto\x12\x0emetamoto.types\"G\n\x0eGeoCoordinates\x12\x10\n\x08latitude\x18\x01 \x01(\x02\x12\x11\n\tlongitude\x18\x02 \x01(\x02\x12\x10\n\x08\x61ltitude\x18\x03 \x01(\x02\x42\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
)




_GEOCOORDINATES = _descriptor.Descriptor(
  name='GeoCoordinates',
  full_name='metamoto.types.GeoCoordinates',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='latitude', full_name='metamoto.types.GeoCoordinates.latitude', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='longitude', full_name='metamoto.types.GeoCoordinates.longitude', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='altitude', full_name='metamoto.types.GeoCoordinates.altitude', index=2,
      number=3, type=2, cpp_type=6, label=1,
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
  serialized_start=56,
  serialized_end=127,
)

DESCRIPTOR.message_types_by_name['GeoCoordinates'] = _GEOCOORDINATES
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

GeoCoordinates = _reflection.GeneratedProtocolMessageType('GeoCoordinates', (_message.Message,), dict(
  DESCRIPTOR = _GEOCOORDINATES,
  __module__ = 'metamoto.types.geo_coordinates_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.GeoCoordinates)
  ))
_sym_db.RegisterMessage(GeoCoordinates)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)