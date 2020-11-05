# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/waypoint.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import wrappers_pb2 as google_dot_protobuf_dot_wrappers__pb2
from metamoto.types import roads_pb2 as metamoto_dot_types_dot_roads__pb2
from metamoto.types import pose_pb2 as metamoto_dot_types_dot_pose__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/waypoint.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n\x1dmetamoto/types/waypoint.proto\x12\x0emetamoto.types\x1a\x1egoogle/protobuf/wrappers.proto\x1a\x1ametamoto/types/roads.proto\x1a\x19metamoto/types/pose.proto\"\xef\x01\n\x08Waypoint\x12+\n\x0bworld_point\x18\x01 \x01(\x0b\x32\x14.metamoto.types.PoseH\x00\x12/\n\nroad_point\x18\x02 \x01(\x0b\x32\x19.metamoto.types.RoadPointH\x00\x12\x31\n\x0ctarget_speed\x18\x03 \x01(\x0b\x32\x1b.google.protobuf.FloatValue\x12\x14\n\x0cpure_pursuit\x18\x04 \x01(\x08\x12\x11\n\tidle_time\x18\x05 \x01(\x02\x12\x1a\n\x12relative_object_id\x18\x06 \x01(\tB\r\n\x0bpoint_oneofB\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_wrappers__pb2.DESCRIPTOR,metamoto_dot_types_dot_roads__pb2.DESCRIPTOR,metamoto_dot_types_dot_pose__pb2.DESCRIPTOR,])




_WAYPOINT = _descriptor.Descriptor(
  name='Waypoint',
  full_name='metamoto.types.Waypoint',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='world_point', full_name='metamoto.types.Waypoint.world_point', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='road_point', full_name='metamoto.types.Waypoint.road_point', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='target_speed', full_name='metamoto.types.Waypoint.target_speed', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='pure_pursuit', full_name='metamoto.types.Waypoint.pure_pursuit', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='idle_time', full_name='metamoto.types.Waypoint.idle_time', index=4,
      number=5, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='relative_object_id', full_name='metamoto.types.Waypoint.relative_object_id', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
    _descriptor.OneofDescriptor(
      name='point_oneof', full_name='metamoto.types.Waypoint.point_oneof',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=137,
  serialized_end=376,
)

_WAYPOINT.fields_by_name['world_point'].message_type = metamoto_dot_types_dot_pose__pb2._POSE
_WAYPOINT.fields_by_name['road_point'].message_type = metamoto_dot_types_dot_roads__pb2._ROADPOINT
_WAYPOINT.fields_by_name['target_speed'].message_type = google_dot_protobuf_dot_wrappers__pb2._FLOATVALUE
_WAYPOINT.oneofs_by_name['point_oneof'].fields.append(
  _WAYPOINT.fields_by_name['world_point'])
_WAYPOINT.fields_by_name['world_point'].containing_oneof = _WAYPOINT.oneofs_by_name['point_oneof']
_WAYPOINT.oneofs_by_name['point_oneof'].fields.append(
  _WAYPOINT.fields_by_name['road_point'])
_WAYPOINT.fields_by_name['road_point'].containing_oneof = _WAYPOINT.oneofs_by_name['point_oneof']
DESCRIPTOR.message_types_by_name['Waypoint'] = _WAYPOINT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Waypoint = _reflection.GeneratedProtocolMessageType('Waypoint', (_message.Message,), dict(
  DESCRIPTOR = _WAYPOINT,
  __module__ = 'metamoto.types.waypoint_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.Waypoint)
  ))
_sym_db.RegisterMessage(Waypoint)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)