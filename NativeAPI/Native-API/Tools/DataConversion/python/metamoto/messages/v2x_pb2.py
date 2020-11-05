# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/messages/v2x.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import vehicle_pb2 as metamoto_dot_types_dot_vehicle__pb2
from metamoto.types import vector3_pb2 as metamoto_dot_types_dot_vector3__pb2
from metamoto.types import geo_coordinates_pb2 as metamoto_dot_types_dot_geo__coordinates__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/messages/v2x.proto',
  package='metamoto.messages',
  syntax='proto3',
  serialized_options=_b('\252\002\021Metamoto.Messages'),
  serialized_pb=_b('\n\x1bmetamoto/messages/v2x.proto\x12\x11metamoto.messages\x1a\x1cmetamoto/types/vehicle.proto\x1a\x1cmetamoto/types/vector3.proto\x1a$metamoto/types/geo_coordinates.proto\"\xc3\x0b\n\x03V2X\x12\x33\n\nbsm_part_1\x18\x01 \x03(\x0b\x32\x1f.metamoto.messages.V2X.BsmPart1\x1a\xe3\x03\n\x08\x42smPart1\x12\x11\n\tobject_id\x18\x01 \x01(\x05\x12\x12\n\ntime_stamp\x18\x02 \x01(\x01\x12\x30\n\x08position\x18\x03 \x01(\x0b\x32\x1e.metamoto.types.GeoCoordinates\x12;\n\x08\x61\x63\x63uracy\x18\x04 \x01(\x0b\x32).metamoto.messages.V2X.PositionalAccuracy\x12@\n\x12transmission_state\x18\x05 \x01(\x0e\x32$.metamoto.types.Vehicle.GearSelector\x12\x30\n\x0flinear_velocity\x18\x06 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x1c\n\x14steering_wheel_angle\x18\x07 \x01(\x02\x12\x34\n\x13linear_acceleration\x18\x08 \x01(\x0b\x32\x17.metamoto.types.Vector3\x12\x10\n\x08yaw_rate\x18\t \x01(\x02\x12\x38\n\x06\x62rakes\x18\n \x01(\x0b\x32(.metamoto.messages.V2X.BrakeSystemStatus\x12-\n\x0cvehicle_size\x18\x0b \x01(\x0b\x32\x17.metamoto.types.Vector3\x1aQ\n\x12PositionalAccuracy\x12\x12\n\nsemi_major\x18\x01 \x01(\x02\x12\x12\n\nsemi_minor\x18\x02 \x01(\x02\x12\x13\n\x0borientation\x18\x03 \x01(\x02\x1a\xcd\x06\n\x11\x42rakeSystemStatus\x12Q\n\x0cwheel_brakes\x18\x01 \x01(\x0b\x32;.metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus\x12O\n\x08traction\x18\x02 \x01(\x0e\x32=.metamoto.messages.V2X.BrakeSystemStatus.TractionControlState\x12I\n\x03\x61\x62s\x18\x03 \x01(\x0e\x32<.metamoto.messages.V2X.BrakeSystemStatus.AntiLockBrakeStatus\x12L\n\x03scs\x18\x04 \x01(\x0e\x32?.metamoto.messages.V2X.BrakeSystemStatus.StabilityControlStatus\x12O\n\x0b\x62rake_boost\x18\x05 \x01(\x0e\x32:.metamoto.messages.V2X.BrakeSystemStatus.BrakeBoostApplied\x1a\x64\n\x12\x42rakeAppliedStatus\x12\x12\n\nleft_front\x18\x01 \x01(\x08\x12\x11\n\tleft_rear\x18\x02 \x01(\x08\x12\x13\n\x0bright_front\x18\x03 \x01(\x08\x12\x12\n\nright_rear\x18\x04 \x01(\x08\"i\n\x14TractionControlState\x12\x18\n\x14TRACTION_UNAVAILABLE\x10\x00\x12\x10\n\x0cTRACTION_OFF\x10\x01\x12\x0f\n\x0bTRACTION_ON\x10\x02\x12\x14\n\x10TRACTION_ENGAGED\x10\x03\"T\n\x13\x41ntiLockBrakeStatus\x12\x13\n\x0f\x41\x42S_UNAVAILABLE\x10\x00\x12\x0b\n\x07\x41\x42S_OFF\x10\x01\x12\n\n\x06\x41\x42S_ON\x10\x02\x12\x0f\n\x0b\x41\x42S_ENGAGED\x10\x03\"C\n\x16StabilityControlStatus\x12\x12\n\x0eSC_UNAVAILABLE\x10\x00\x12\n\n\x06SC_OFF\x10\x01\x12\t\n\x05SC_ON\x10\x02\">\n\x11\x42rakeBoostApplied\x12\x12\n\x0e\x42\x42_UNAVAILABLE\x10\x00\x12\n\n\x06\x42\x42_OFF\x10\x01\x12\t\n\x05\x42\x42_ON\x10\x02\x42\x14\xaa\x02\x11Metamoto.Messagesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_vehicle__pb2.DESCRIPTOR,metamoto_dot_types_dot_vector3__pb2.DESCRIPTOR,metamoto_dot_types_dot_geo__coordinates__pb2.DESCRIPTOR,])



_V2X_BRAKESYSTEMSTATUS_TRACTIONCONTROLSTATE = _descriptor.EnumDescriptor(
  name='TractionControlState',
  full_name='metamoto.messages.V2X.BrakeSystemStatus.TractionControlState',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TRACTION_UNAVAILABLE', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TRACTION_OFF', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TRACTION_ON', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TRACTION_ENGAGED', index=3, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1300,
  serialized_end=1405,
)
_sym_db.RegisterEnumDescriptor(_V2X_BRAKESYSTEMSTATUS_TRACTIONCONTROLSTATE)

_V2X_BRAKESYSTEMSTATUS_ANTILOCKBRAKESTATUS = _descriptor.EnumDescriptor(
  name='AntiLockBrakeStatus',
  full_name='metamoto.messages.V2X.BrakeSystemStatus.AntiLockBrakeStatus',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='ABS_UNAVAILABLE', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ABS_OFF', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ABS_ON', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ABS_ENGAGED', index=3, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1407,
  serialized_end=1491,
)
_sym_db.RegisterEnumDescriptor(_V2X_BRAKESYSTEMSTATUS_ANTILOCKBRAKESTATUS)

_V2X_BRAKESYSTEMSTATUS_STABILITYCONTROLSTATUS = _descriptor.EnumDescriptor(
  name='StabilityControlStatus',
  full_name='metamoto.messages.V2X.BrakeSystemStatus.StabilityControlStatus',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='SC_UNAVAILABLE', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SC_OFF', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SC_ON', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1493,
  serialized_end=1560,
)
_sym_db.RegisterEnumDescriptor(_V2X_BRAKESYSTEMSTATUS_STABILITYCONTROLSTATUS)

_V2X_BRAKESYSTEMSTATUS_BRAKEBOOSTAPPLIED = _descriptor.EnumDescriptor(
  name='BrakeBoostApplied',
  full_name='metamoto.messages.V2X.BrakeSystemStatus.BrakeBoostApplied',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='BB_UNAVAILABLE', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BB_OFF', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BB_ON', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1562,
  serialized_end=1624,
)
_sym_db.RegisterEnumDescriptor(_V2X_BRAKESYSTEMSTATUS_BRAKEBOOSTAPPLIED)


_V2X_BSMPART1 = _descriptor.Descriptor(
  name='BsmPart1',
  full_name='metamoto.messages.V2X.BsmPart1',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='object_id', full_name='metamoto.messages.V2X.BsmPart1.object_id', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='time_stamp', full_name='metamoto.messages.V2X.BsmPart1.time_stamp', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='position', full_name='metamoto.messages.V2X.BsmPart1.position', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='accuracy', full_name='metamoto.messages.V2X.BsmPart1.accuracy', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='transmission_state', full_name='metamoto.messages.V2X.BsmPart1.transmission_state', index=4,
      number=5, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='linear_velocity', full_name='metamoto.messages.V2X.BsmPart1.linear_velocity', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='steering_wheel_angle', full_name='metamoto.messages.V2X.BsmPart1.steering_wheel_angle', index=6,
      number=7, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='linear_acceleration', full_name='metamoto.messages.V2X.BsmPart1.linear_acceleration', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='yaw_rate', full_name='metamoto.messages.V2X.BsmPart1.yaw_rate', index=8,
      number=9, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='brakes', full_name='metamoto.messages.V2X.BsmPart1.brakes', index=9,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='vehicle_size', full_name='metamoto.messages.V2X.BsmPart1.vehicle_size', index=10,
      number=11, type=11, cpp_type=10, label=1,
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
  serialized_start=210,
  serialized_end=693,
)

_V2X_POSITIONALACCURACY = _descriptor.Descriptor(
  name='PositionalAccuracy',
  full_name='metamoto.messages.V2X.PositionalAccuracy',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='semi_major', full_name='metamoto.messages.V2X.PositionalAccuracy.semi_major', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='semi_minor', full_name='metamoto.messages.V2X.PositionalAccuracy.semi_minor', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='orientation', full_name='metamoto.messages.V2X.PositionalAccuracy.orientation', index=2,
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
  serialized_start=695,
  serialized_end=776,
)

_V2X_BRAKESYSTEMSTATUS_BRAKEAPPLIEDSTATUS = _descriptor.Descriptor(
  name='BrakeAppliedStatus',
  full_name='metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='left_front', full_name='metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus.left_front', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='left_rear', full_name='metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus.left_rear', index=1,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='right_front', full_name='metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus.right_front', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='right_rear', full_name='metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus.right_rear', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=1198,
  serialized_end=1298,
)

_V2X_BRAKESYSTEMSTATUS = _descriptor.Descriptor(
  name='BrakeSystemStatus',
  full_name='metamoto.messages.V2X.BrakeSystemStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='wheel_brakes', full_name='metamoto.messages.V2X.BrakeSystemStatus.wheel_brakes', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='traction', full_name='metamoto.messages.V2X.BrakeSystemStatus.traction', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='abs', full_name='metamoto.messages.V2X.BrakeSystemStatus.abs', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='scs', full_name='metamoto.messages.V2X.BrakeSystemStatus.scs', index=3,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='brake_boost', full_name='metamoto.messages.V2X.BrakeSystemStatus.brake_boost', index=4,
      number=5, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_V2X_BRAKESYSTEMSTATUS_BRAKEAPPLIEDSTATUS, ],
  enum_types=[
    _V2X_BRAKESYSTEMSTATUS_TRACTIONCONTROLSTATE,
    _V2X_BRAKESYSTEMSTATUS_ANTILOCKBRAKESTATUS,
    _V2X_BRAKESYSTEMSTATUS_STABILITYCONTROLSTATUS,
    _V2X_BRAKESYSTEMSTATUS_BRAKEBOOSTAPPLIED,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=779,
  serialized_end=1624,
)

_V2X = _descriptor.Descriptor(
  name='V2X',
  full_name='metamoto.messages.V2X',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='bsm_part_1', full_name='metamoto.messages.V2X.bsm_part_1', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_V2X_BSMPART1, _V2X_POSITIONALACCURACY, _V2X_BRAKESYSTEMSTATUS, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=149,
  serialized_end=1624,
)

_V2X_BSMPART1.fields_by_name['position'].message_type = metamoto_dot_types_dot_geo__coordinates__pb2._GEOCOORDINATES
_V2X_BSMPART1.fields_by_name['accuracy'].message_type = _V2X_POSITIONALACCURACY
_V2X_BSMPART1.fields_by_name['transmission_state'].enum_type = metamoto_dot_types_dot_vehicle__pb2._VEHICLE_GEARSELECTOR
_V2X_BSMPART1.fields_by_name['linear_velocity'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_V2X_BSMPART1.fields_by_name['linear_acceleration'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_V2X_BSMPART1.fields_by_name['brakes'].message_type = _V2X_BRAKESYSTEMSTATUS
_V2X_BSMPART1.fields_by_name['vehicle_size'].message_type = metamoto_dot_types_dot_vector3__pb2._VECTOR3
_V2X_BSMPART1.containing_type = _V2X
_V2X_POSITIONALACCURACY.containing_type = _V2X
_V2X_BRAKESYSTEMSTATUS_BRAKEAPPLIEDSTATUS.containing_type = _V2X_BRAKESYSTEMSTATUS
_V2X_BRAKESYSTEMSTATUS.fields_by_name['wheel_brakes'].message_type = _V2X_BRAKESYSTEMSTATUS_BRAKEAPPLIEDSTATUS
_V2X_BRAKESYSTEMSTATUS.fields_by_name['traction'].enum_type = _V2X_BRAKESYSTEMSTATUS_TRACTIONCONTROLSTATE
_V2X_BRAKESYSTEMSTATUS.fields_by_name['abs'].enum_type = _V2X_BRAKESYSTEMSTATUS_ANTILOCKBRAKESTATUS
_V2X_BRAKESYSTEMSTATUS.fields_by_name['scs'].enum_type = _V2X_BRAKESYSTEMSTATUS_STABILITYCONTROLSTATUS
_V2X_BRAKESYSTEMSTATUS.fields_by_name['brake_boost'].enum_type = _V2X_BRAKESYSTEMSTATUS_BRAKEBOOSTAPPLIED
_V2X_BRAKESYSTEMSTATUS.containing_type = _V2X
_V2X_BRAKESYSTEMSTATUS_TRACTIONCONTROLSTATE.containing_type = _V2X_BRAKESYSTEMSTATUS
_V2X_BRAKESYSTEMSTATUS_ANTILOCKBRAKESTATUS.containing_type = _V2X_BRAKESYSTEMSTATUS
_V2X_BRAKESYSTEMSTATUS_STABILITYCONTROLSTATUS.containing_type = _V2X_BRAKESYSTEMSTATUS
_V2X_BRAKESYSTEMSTATUS_BRAKEBOOSTAPPLIED.containing_type = _V2X_BRAKESYSTEMSTATUS
_V2X.fields_by_name['bsm_part_1'].message_type = _V2X_BSMPART1
DESCRIPTOR.message_types_by_name['V2X'] = _V2X
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

V2X = _reflection.GeneratedProtocolMessageType('V2X', (_message.Message,), dict(

  BsmPart1 = _reflection.GeneratedProtocolMessageType('BsmPart1', (_message.Message,), dict(
    DESCRIPTOR = _V2X_BSMPART1,
    __module__ = 'metamoto.messages.v2x_pb2'
    # @@protoc_insertion_point(class_scope:metamoto.messages.V2X.BsmPart1)
    ))
  ,

  PositionalAccuracy = _reflection.GeneratedProtocolMessageType('PositionalAccuracy', (_message.Message,), dict(
    DESCRIPTOR = _V2X_POSITIONALACCURACY,
    __module__ = 'metamoto.messages.v2x_pb2'
    # @@protoc_insertion_point(class_scope:metamoto.messages.V2X.PositionalAccuracy)
    ))
  ,

  BrakeSystemStatus = _reflection.GeneratedProtocolMessageType('BrakeSystemStatus', (_message.Message,), dict(

    BrakeAppliedStatus = _reflection.GeneratedProtocolMessageType('BrakeAppliedStatus', (_message.Message,), dict(
      DESCRIPTOR = _V2X_BRAKESYSTEMSTATUS_BRAKEAPPLIEDSTATUS,
      __module__ = 'metamoto.messages.v2x_pb2'
      # @@protoc_insertion_point(class_scope:metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus)
      ))
    ,
    DESCRIPTOR = _V2X_BRAKESYSTEMSTATUS,
    __module__ = 'metamoto.messages.v2x_pb2'
    # @@protoc_insertion_point(class_scope:metamoto.messages.V2X.BrakeSystemStatus)
    ))
  ,
  DESCRIPTOR = _V2X,
  __module__ = 'metamoto.messages.v2x_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.messages.V2X)
  ))
_sym_db.RegisterMessage(V2X)
_sym_db.RegisterMessage(V2X.BsmPart1)
_sym_db.RegisterMessage(V2X.PositionalAccuracy)
_sym_db.RegisterMessage(V2X.BrakeSystemStatus)
_sym_db.RegisterMessage(V2X.BrakeSystemStatus.BrakeAppliedStatus)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)