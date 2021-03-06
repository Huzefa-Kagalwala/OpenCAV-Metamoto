# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/signal_configuration.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import scenario_pb2 as metamoto_dot_types_dot_scenario__pb2
from metamoto.types import roads_pb2 as metamoto_dot_types_dot_roads__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/signal_configuration.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n)metamoto/types/signal_configuration.proto\x12\x0emetamoto.types\x1a\x1dmetamoto/types/scenario.proto\x1a\x1ametamoto/types/roads.proto\"\xa6\x0c\n\x13SignalConfiguration\x12\x41\n\x07signals\x18\x01 \x03(\x0b\x32\x30.metamoto.types.SignalConfiguration.SignalsEntry\x1a\xef\n\n\x06Signal\x12S\n\rsignal_states\x18\x01 \x03(\x0b\x32<.metamoto.types.SignalConfiguration.Signal.SignalStatesEntry\x12\x13\n\x0b\x64\x65scription\x18\x02 \x01(\t\x12G\n\nbulb_types\x18\x03 \x03(\x0b\x32\x33.metamoto.types.SignalConfiguration.Signal.BulbType\x1a\xdd\x01\n\nConnection\x12;\n\tdirection\x18\x01 \x01(\x0e\x32(.metamoto.types.ConnectingRoad.Direction\x12I\n\x05state\x18\x02 \x01(\x0e\x32:.metamoto.types.SignalConfiguration.Signal.ConnectionState\x12G\n\x04type\x18\x03 \x01(\x0e\x32\x39.metamoto.types.SignalConfiguration.Signal.ConnectionType\x1a\x91\x01\n\tBulbState\x12I\n\x05state\x18\x01 \x01(\x0e\x32:.metamoto.types.SignalConfiguration.Signal.BulbState.State\"9\n\x05State\x12\x07\n\x03OFF\x10\x00\x12\x06\n\x02ON\x10\x01\x12\x0c\n\x08\x42LINKING\x10\x02\x12\x11\n\rSTATE_UNKNOWN\x10\x07\x1a\xa4\x01\n\x0bSignalState\x12J\n\x0b\x63onnections\x18\x01 \x03(\x0b\x32\x35.metamoto.types.SignalConfiguration.Signal.Connection\x12I\n\x0b\x62ulb_states\x18\x02 \x03(\x0b\x32\x34.metamoto.types.SignalConfiguration.Signal.BulbState\x1ak\n\x11SignalStatesEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\x45\n\x05value\x18\x02 \x01(\x0b\x32\x36.metamoto.types.SignalConfiguration.Signal.SignalState:\x02\x38\x01\x1a\xd3\x02\n\x08\x42ulbType\x12\x46\n\x04type\x18\x01 \x01(\x0e\x32\x38.metamoto.types.SignalConfiguration.Signal.BulbType.Type\x12H\n\x05\x63olor\x18\x02 \x01(\x0e\x32\x39.metamoto.types.SignalConfiguration.Signal.BulbType.Color\"h\n\x04Type\x12\x10\n\x0cTYPE_UNKNOWN\x10\x00\x12\x0e\n\nTYPE_OTHER\x10\x01\x12\n\n\x06NORMAL\x10\x02\x12\x08\n\x04LEFT\x10\x03\x12\t\n\x05RIGHT\x10\x04\x12\r\n\tSOFT_LEFT\x10\x05\x12\x0e\n\nSOFT_RIGHT\x10\x06\"K\n\x05\x43olor\x12\x11\n\rCOLOR_UNKNOWN\x10\x00\x12\x0f\n\x0b\x43OLOR_OTHER\x10\x01\x12\t\n\x05GREEN\x10\x02\x12\n\n\x06YELLOW\x10\x03\x12\x07\n\x03RED\x10\x04\"k\n\x0f\x43onnectionState\x12\x1c\n\x18\x43ONNECTION_STATE_UNKNOWN\x10\x00\x12\x1a\n\x16\x43ONNECTION_STATE_OTHER\x10\x01\x12\t\n\x05GREEN\x10\x02\x12\n\n\x06YELLOW\x10\x03\x12\x07\n\x03RED\x10\x04\"g\n\x0e\x43onnectionType\x12\x1b\n\x17\x43ONNECTION_TYPE_UNKNOWN\x10\x00\x12\x19\n\x15\x43ONNECTION_TYPE_OTHER\x10\x01\x12\r\n\tPROTECTED\x10\x02\x12\x0e\n\nPERMISSIVE\x10\x03\x1aZ\n\x0cSignalsEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\x39\n\x05value\x18\x02 \x01(\x0b\x32*.metamoto.types.SignalConfiguration.Signal:\x02\x38\x01\"\xcd\x01\n\x19IntersectionConfiguration\x12S\n\rintersections\x18\x01 \x03(\x0b\x32<.metamoto.types.IntersectionConfiguration.IntersectionsEntry\x1a[\n\x12IntersectionsEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\x34\n\x05value\x18\x02 \x01(\x0b\x32%.metamoto.types.Scenario.Intersection:\x02\x38\x01\x42\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_scenario__pb2.DESCRIPTOR,metamoto_dot_types_dot_roads__pb2.DESCRIPTOR,])



_SIGNALCONFIGURATION_SIGNAL_BULBSTATE_STATE = _descriptor.EnumDescriptor(
  name='State',
  full_name='metamoto.types.SignalConfiguration.Signal.BulbState.State',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OFF', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ON', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BLINKING', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STATE_UNKNOWN', index=3, number=7,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=714,
  serialized_end=771,
)
_sym_db.RegisterEnumDescriptor(_SIGNALCONFIGURATION_SIGNAL_BULBSTATE_STATE)

_SIGNALCONFIGURATION_SIGNAL_BULBTYPE_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='metamoto.types.SignalConfiguration.Signal.BulbType.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TYPE_UNKNOWN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TYPE_OTHER', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='NORMAL', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='LEFT', index=3, number=3,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RIGHT', index=4, number=4,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SOFT_LEFT', index=5, number=5,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SOFT_RIGHT', index=6, number=6,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1208,
  serialized_end=1312,
)
_sym_db.RegisterEnumDescriptor(_SIGNALCONFIGURATION_SIGNAL_BULBTYPE_TYPE)

_SIGNALCONFIGURATION_SIGNAL_BULBTYPE_COLOR = _descriptor.EnumDescriptor(
  name='Color',
  full_name='metamoto.types.SignalConfiguration.Signal.BulbType.Color',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='COLOR_UNKNOWN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='COLOR_OTHER', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='GREEN', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='YELLOW', index=3, number=3,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RED', index=4, number=4,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1314,
  serialized_end=1389,
)
_sym_db.RegisterEnumDescriptor(_SIGNALCONFIGURATION_SIGNAL_BULBTYPE_COLOR)

_SIGNALCONFIGURATION_SIGNAL_CONNECTIONSTATE = _descriptor.EnumDescriptor(
  name='ConnectionState',
  full_name='metamoto.types.SignalConfiguration.Signal.ConnectionState',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CONNECTION_STATE_UNKNOWN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CONNECTION_STATE_OTHER', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='GREEN', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='YELLOW', index=3, number=3,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RED', index=4, number=4,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1391,
  serialized_end=1498,
)
_sym_db.RegisterEnumDescriptor(_SIGNALCONFIGURATION_SIGNAL_CONNECTIONSTATE)

_SIGNALCONFIGURATION_SIGNAL_CONNECTIONTYPE = _descriptor.EnumDescriptor(
  name='ConnectionType',
  full_name='metamoto.types.SignalConfiguration.Signal.ConnectionType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='CONNECTION_TYPE_UNKNOWN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CONNECTION_TYPE_OTHER', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PROTECTED', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERMISSIVE', index=3, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1500,
  serialized_end=1603,
)
_sym_db.RegisterEnumDescriptor(_SIGNALCONFIGURATION_SIGNAL_CONNECTIONTYPE)


_SIGNALCONFIGURATION_SIGNAL_CONNECTION = _descriptor.Descriptor(
  name='Connection',
  full_name='metamoto.types.SignalConfiguration.Signal.Connection',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='direction', full_name='metamoto.types.SignalConfiguration.Signal.Connection.direction', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='state', full_name='metamoto.types.SignalConfiguration.Signal.Connection.state', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='type', full_name='metamoto.types.SignalConfiguration.Signal.Connection.type', index=2,
      number=3, type=14, cpp_type=8, label=1,
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
  serialized_start=402,
  serialized_end=623,
)

_SIGNALCONFIGURATION_SIGNAL_BULBSTATE = _descriptor.Descriptor(
  name='BulbState',
  full_name='metamoto.types.SignalConfiguration.Signal.BulbState',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='state', full_name='metamoto.types.SignalConfiguration.Signal.BulbState.state', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SIGNALCONFIGURATION_SIGNAL_BULBSTATE_STATE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=626,
  serialized_end=771,
)

_SIGNALCONFIGURATION_SIGNAL_SIGNALSTATE = _descriptor.Descriptor(
  name='SignalState',
  full_name='metamoto.types.SignalConfiguration.Signal.SignalState',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='connections', full_name='metamoto.types.SignalConfiguration.Signal.SignalState.connections', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='bulb_states', full_name='metamoto.types.SignalConfiguration.Signal.SignalState.bulb_states', index=1,
      number=2, type=11, cpp_type=10, label=3,
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
  serialized_start=774,
  serialized_end=938,
)

_SIGNALCONFIGURATION_SIGNAL_SIGNALSTATESENTRY = _descriptor.Descriptor(
  name='SignalStatesEntry',
  full_name='metamoto.types.SignalConfiguration.Signal.SignalStatesEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='metamoto.types.SignalConfiguration.Signal.SignalStatesEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='metamoto.types.SignalConfiguration.Signal.SignalStatesEntry.value', index=1,
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
  serialized_options=_b('8\001'),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=940,
  serialized_end=1047,
)

_SIGNALCONFIGURATION_SIGNAL_BULBTYPE = _descriptor.Descriptor(
  name='BulbType',
  full_name='metamoto.types.SignalConfiguration.Signal.BulbType',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='metamoto.types.SignalConfiguration.Signal.BulbType.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='color', full_name='metamoto.types.SignalConfiguration.Signal.BulbType.color', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _SIGNALCONFIGURATION_SIGNAL_BULBTYPE_TYPE,
    _SIGNALCONFIGURATION_SIGNAL_BULBTYPE_COLOR,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1050,
  serialized_end=1389,
)

_SIGNALCONFIGURATION_SIGNAL = _descriptor.Descriptor(
  name='Signal',
  full_name='metamoto.types.SignalConfiguration.Signal',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='signal_states', full_name='metamoto.types.SignalConfiguration.Signal.signal_states', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='description', full_name='metamoto.types.SignalConfiguration.Signal.description', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='bulb_types', full_name='metamoto.types.SignalConfiguration.Signal.bulb_types', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_SIGNALCONFIGURATION_SIGNAL_CONNECTION, _SIGNALCONFIGURATION_SIGNAL_BULBSTATE, _SIGNALCONFIGURATION_SIGNAL_SIGNALSTATE, _SIGNALCONFIGURATION_SIGNAL_SIGNALSTATESENTRY, _SIGNALCONFIGURATION_SIGNAL_BULBTYPE, ],
  enum_types=[
    _SIGNALCONFIGURATION_SIGNAL_CONNECTIONSTATE,
    _SIGNALCONFIGURATION_SIGNAL_CONNECTIONTYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=212,
  serialized_end=1603,
)

_SIGNALCONFIGURATION_SIGNALSENTRY = _descriptor.Descriptor(
  name='SignalsEntry',
  full_name='metamoto.types.SignalConfiguration.SignalsEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='metamoto.types.SignalConfiguration.SignalsEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='metamoto.types.SignalConfiguration.SignalsEntry.value', index=1,
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
  serialized_options=_b('8\001'),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1605,
  serialized_end=1695,
)

_SIGNALCONFIGURATION = _descriptor.Descriptor(
  name='SignalConfiguration',
  full_name='metamoto.types.SignalConfiguration',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='signals', full_name='metamoto.types.SignalConfiguration.signals', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_SIGNALCONFIGURATION_SIGNAL, _SIGNALCONFIGURATION_SIGNALSENTRY, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=121,
  serialized_end=1695,
)


_INTERSECTIONCONFIGURATION_INTERSECTIONSENTRY = _descriptor.Descriptor(
  name='IntersectionsEntry',
  full_name='metamoto.types.IntersectionConfiguration.IntersectionsEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='metamoto.types.IntersectionConfiguration.IntersectionsEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='metamoto.types.IntersectionConfiguration.IntersectionsEntry.value', index=1,
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
  serialized_options=_b('8\001'),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1812,
  serialized_end=1903,
)

_INTERSECTIONCONFIGURATION = _descriptor.Descriptor(
  name='IntersectionConfiguration',
  full_name='metamoto.types.IntersectionConfiguration',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='intersections', full_name='metamoto.types.IntersectionConfiguration.intersections', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_INTERSECTIONCONFIGURATION_INTERSECTIONSENTRY, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1698,
  serialized_end=1903,
)

_SIGNALCONFIGURATION_SIGNAL_CONNECTION.fields_by_name['direction'].enum_type = metamoto_dot_types_dot_roads__pb2._CONNECTINGROAD_DIRECTION
_SIGNALCONFIGURATION_SIGNAL_CONNECTION.fields_by_name['state'].enum_type = _SIGNALCONFIGURATION_SIGNAL_CONNECTIONSTATE
_SIGNALCONFIGURATION_SIGNAL_CONNECTION.fields_by_name['type'].enum_type = _SIGNALCONFIGURATION_SIGNAL_CONNECTIONTYPE
_SIGNALCONFIGURATION_SIGNAL_CONNECTION.containing_type = _SIGNALCONFIGURATION_SIGNAL
_SIGNALCONFIGURATION_SIGNAL_BULBSTATE.fields_by_name['state'].enum_type = _SIGNALCONFIGURATION_SIGNAL_BULBSTATE_STATE
_SIGNALCONFIGURATION_SIGNAL_BULBSTATE.containing_type = _SIGNALCONFIGURATION_SIGNAL
_SIGNALCONFIGURATION_SIGNAL_BULBSTATE_STATE.containing_type = _SIGNALCONFIGURATION_SIGNAL_BULBSTATE
_SIGNALCONFIGURATION_SIGNAL_SIGNALSTATE.fields_by_name['connections'].message_type = _SIGNALCONFIGURATION_SIGNAL_CONNECTION
_SIGNALCONFIGURATION_SIGNAL_SIGNALSTATE.fields_by_name['bulb_states'].message_type = _SIGNALCONFIGURATION_SIGNAL_BULBSTATE
_SIGNALCONFIGURATION_SIGNAL_SIGNALSTATE.containing_type = _SIGNALCONFIGURATION_SIGNAL
_SIGNALCONFIGURATION_SIGNAL_SIGNALSTATESENTRY.fields_by_name['value'].message_type = _SIGNALCONFIGURATION_SIGNAL_SIGNALSTATE
_SIGNALCONFIGURATION_SIGNAL_SIGNALSTATESENTRY.containing_type = _SIGNALCONFIGURATION_SIGNAL
_SIGNALCONFIGURATION_SIGNAL_BULBTYPE.fields_by_name['type'].enum_type = _SIGNALCONFIGURATION_SIGNAL_BULBTYPE_TYPE
_SIGNALCONFIGURATION_SIGNAL_BULBTYPE.fields_by_name['color'].enum_type = _SIGNALCONFIGURATION_SIGNAL_BULBTYPE_COLOR
_SIGNALCONFIGURATION_SIGNAL_BULBTYPE.containing_type = _SIGNALCONFIGURATION_SIGNAL
_SIGNALCONFIGURATION_SIGNAL_BULBTYPE_TYPE.containing_type = _SIGNALCONFIGURATION_SIGNAL_BULBTYPE
_SIGNALCONFIGURATION_SIGNAL_BULBTYPE_COLOR.containing_type = _SIGNALCONFIGURATION_SIGNAL_BULBTYPE
_SIGNALCONFIGURATION_SIGNAL.fields_by_name['signal_states'].message_type = _SIGNALCONFIGURATION_SIGNAL_SIGNALSTATESENTRY
_SIGNALCONFIGURATION_SIGNAL.fields_by_name['bulb_types'].message_type = _SIGNALCONFIGURATION_SIGNAL_BULBTYPE
_SIGNALCONFIGURATION_SIGNAL.containing_type = _SIGNALCONFIGURATION
_SIGNALCONFIGURATION_SIGNAL_CONNECTIONSTATE.containing_type = _SIGNALCONFIGURATION_SIGNAL
_SIGNALCONFIGURATION_SIGNAL_CONNECTIONTYPE.containing_type = _SIGNALCONFIGURATION_SIGNAL
_SIGNALCONFIGURATION_SIGNALSENTRY.fields_by_name['value'].message_type = _SIGNALCONFIGURATION_SIGNAL
_SIGNALCONFIGURATION_SIGNALSENTRY.containing_type = _SIGNALCONFIGURATION
_SIGNALCONFIGURATION.fields_by_name['signals'].message_type = _SIGNALCONFIGURATION_SIGNALSENTRY
_INTERSECTIONCONFIGURATION_INTERSECTIONSENTRY.fields_by_name['value'].message_type = metamoto_dot_types_dot_scenario__pb2._SCENARIO_INTERSECTION
_INTERSECTIONCONFIGURATION_INTERSECTIONSENTRY.containing_type = _INTERSECTIONCONFIGURATION
_INTERSECTIONCONFIGURATION.fields_by_name['intersections'].message_type = _INTERSECTIONCONFIGURATION_INTERSECTIONSENTRY
DESCRIPTOR.message_types_by_name['SignalConfiguration'] = _SIGNALCONFIGURATION
DESCRIPTOR.message_types_by_name['IntersectionConfiguration'] = _INTERSECTIONCONFIGURATION
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SignalConfiguration = _reflection.GeneratedProtocolMessageType('SignalConfiguration', (_message.Message,), dict(

  Signal = _reflection.GeneratedProtocolMessageType('Signal', (_message.Message,), dict(

    Connection = _reflection.GeneratedProtocolMessageType('Connection', (_message.Message,), dict(
      DESCRIPTOR = _SIGNALCONFIGURATION_SIGNAL_CONNECTION,
      __module__ = 'metamoto.types.signal_configuration_pb2'
      # @@protoc_insertion_point(class_scope:metamoto.types.SignalConfiguration.Signal.Connection)
      ))
    ,

    BulbState = _reflection.GeneratedProtocolMessageType('BulbState', (_message.Message,), dict(
      DESCRIPTOR = _SIGNALCONFIGURATION_SIGNAL_BULBSTATE,
      __module__ = 'metamoto.types.signal_configuration_pb2'
      # @@protoc_insertion_point(class_scope:metamoto.types.SignalConfiguration.Signal.BulbState)
      ))
    ,

    SignalState = _reflection.GeneratedProtocolMessageType('SignalState', (_message.Message,), dict(
      DESCRIPTOR = _SIGNALCONFIGURATION_SIGNAL_SIGNALSTATE,
      __module__ = 'metamoto.types.signal_configuration_pb2'
      # @@protoc_insertion_point(class_scope:metamoto.types.SignalConfiguration.Signal.SignalState)
      ))
    ,

    SignalStatesEntry = _reflection.GeneratedProtocolMessageType('SignalStatesEntry', (_message.Message,), dict(
      DESCRIPTOR = _SIGNALCONFIGURATION_SIGNAL_SIGNALSTATESENTRY,
      __module__ = 'metamoto.types.signal_configuration_pb2'
      # @@protoc_insertion_point(class_scope:metamoto.types.SignalConfiguration.Signal.SignalStatesEntry)
      ))
    ,

    BulbType = _reflection.GeneratedProtocolMessageType('BulbType', (_message.Message,), dict(
      DESCRIPTOR = _SIGNALCONFIGURATION_SIGNAL_BULBTYPE,
      __module__ = 'metamoto.types.signal_configuration_pb2'
      # @@protoc_insertion_point(class_scope:metamoto.types.SignalConfiguration.Signal.BulbType)
      ))
    ,
    DESCRIPTOR = _SIGNALCONFIGURATION_SIGNAL,
    __module__ = 'metamoto.types.signal_configuration_pb2'
    # @@protoc_insertion_point(class_scope:metamoto.types.SignalConfiguration.Signal)
    ))
  ,

  SignalsEntry = _reflection.GeneratedProtocolMessageType('SignalsEntry', (_message.Message,), dict(
    DESCRIPTOR = _SIGNALCONFIGURATION_SIGNALSENTRY,
    __module__ = 'metamoto.types.signal_configuration_pb2'
    # @@protoc_insertion_point(class_scope:metamoto.types.SignalConfiguration.SignalsEntry)
    ))
  ,
  DESCRIPTOR = _SIGNALCONFIGURATION,
  __module__ = 'metamoto.types.signal_configuration_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.SignalConfiguration)
  ))
_sym_db.RegisterMessage(SignalConfiguration)
_sym_db.RegisterMessage(SignalConfiguration.Signal)
_sym_db.RegisterMessage(SignalConfiguration.Signal.Connection)
_sym_db.RegisterMessage(SignalConfiguration.Signal.BulbState)
_sym_db.RegisterMessage(SignalConfiguration.Signal.SignalState)
_sym_db.RegisterMessage(SignalConfiguration.Signal.SignalStatesEntry)
_sym_db.RegisterMessage(SignalConfiguration.Signal.BulbType)
_sym_db.RegisterMessage(SignalConfiguration.SignalsEntry)

IntersectionConfiguration = _reflection.GeneratedProtocolMessageType('IntersectionConfiguration', (_message.Message,), dict(

  IntersectionsEntry = _reflection.GeneratedProtocolMessageType('IntersectionsEntry', (_message.Message,), dict(
    DESCRIPTOR = _INTERSECTIONCONFIGURATION_INTERSECTIONSENTRY,
    __module__ = 'metamoto.types.signal_configuration_pb2'
    # @@protoc_insertion_point(class_scope:metamoto.types.IntersectionConfiguration.IntersectionsEntry)
    ))
  ,
  DESCRIPTOR = _INTERSECTIONCONFIGURATION,
  __module__ = 'metamoto.types.signal_configuration_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.IntersectionConfiguration)
  ))
_sym_db.RegisterMessage(IntersectionConfiguration)
_sym_db.RegisterMessage(IntersectionConfiguration.IntersectionsEntry)


DESCRIPTOR._options = None
_SIGNALCONFIGURATION_SIGNAL_SIGNALSTATESENTRY._options = None
_SIGNALCONFIGURATION_SIGNALSENTRY._options = None
_INTERSECTIONCONFIGURATION_INTERSECTIONSENTRY._options = None
# @@protoc_insertion_point(module_scope)
