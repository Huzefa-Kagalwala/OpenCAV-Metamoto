# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/services/cosimulation.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.messages import ground_truth_pb2 as metamoto_dot_messages_dot_ground__truth__pb2
from metamoto.messages import data_bus_message_pb2 as metamoto_dot_messages_dot_data__bus__message__pb2
from metamoto.types import ego_vehicle_pb2 as metamoto_dot_types_dot_ego__vehicle__pb2
from metamoto.types import enumerations_pb2 as metamoto_dot_types_dot_enumerations__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/services/cosimulation.proto',
  package='metamoto.services',
  syntax='proto3',
  serialized_options=_b('\252\002\021Metamoto.Services'),
  serialized_pb=_b('\n$metamoto/services/cosimulation.proto\x12\x11metamoto.services\x1a$metamoto/messages/ground_truth.proto\x1a(metamoto/messages/data_bus_message.proto\x1a metamoto/types/ego_vehicle.proto\x1a!metamoto/types/enumerations.proto\"U\n\x1d\x43osimulationInitializeRequest\x12\x34\n\x0cground_truth\x18\x01 \x01(\x0b\x32\x1e.metamoto.messages.GroundTruth\"O\n\x1b\x43osimulationInitializeReply\x12\x30\n\x0c\x65go_vehicles\x18\x02 \x03(\x0b\x32\x1a.metamoto.types.EgoVehicle\"_\n\x19\x43osimulationUpdateRequest\x12\x0c\n\x04time\x18\x01 \x01(\x01\x12\x34\n\x0cground_truth\x18\x02 \x01(\x0b\x32\x1e.metamoto.messages.GroundTruth\"\x19\n\x17\x43osimulationUpdateReply\"@\n\x17\x43osimulationReadRequest\x12\x16\n\x0e\x65go_vehicle_id\x18\x01 \x01(\t\x12\r\n\x05topic\x18\x02 \x01(\t\"K\n\x15\x43osimulationReadReply\x12\x32\n\x07message\x18\x01 \x01(\x0b\x32!.metamoto.messages.DataBusMessage\"W\n\x18\x43osimulationCloseRequest\x12&\n\x06\x61\x63tion\x18\x01 \x01(\x0e\x32\x16.metamoto.types.Action\x12\x13\n\x0b\x64\x65scription\x18\x02 \x01(\t\"\x18\n\x16\x43osimulationCloseReply2\xa9\x03\n\x0c\x43osimulation\x12p\n\nInitialize\x12\x30.metamoto.services.CosimulationInitializeRequest\x1a..metamoto.services.CosimulationInitializeReply\"\x00\x12\x64\n\x06Update\x12,.metamoto.services.CosimulationUpdateRequest\x1a*.metamoto.services.CosimulationUpdateReply\"\x00\x12^\n\x04Read\x12*.metamoto.services.CosimulationReadRequest\x1a(.metamoto.services.CosimulationReadReply\"\x00\x12\x61\n\x05\x43lose\x12+.metamoto.services.CosimulationCloseRequest\x1a).metamoto.services.CosimulationCloseReply\"\x00\x42\x14\xaa\x02\x11Metamoto.Servicesb\x06proto3')
  ,
  dependencies=[metamoto_dot_messages_dot_ground__truth__pb2.DESCRIPTOR,metamoto_dot_messages_dot_data__bus__message__pb2.DESCRIPTOR,metamoto_dot_types_dot_ego__vehicle__pb2.DESCRIPTOR,metamoto_dot_types_dot_enumerations__pb2.DESCRIPTOR,])




_COSIMULATIONINITIALIZEREQUEST = _descriptor.Descriptor(
  name='CosimulationInitializeRequest',
  full_name='metamoto.services.CosimulationInitializeRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ground_truth', full_name='metamoto.services.CosimulationInitializeRequest.ground_truth', index=0,
      number=1, type=11, cpp_type=10, label=1,
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
  serialized_start=208,
  serialized_end=293,
)


_COSIMULATIONINITIALIZEREPLY = _descriptor.Descriptor(
  name='CosimulationInitializeReply',
  full_name='metamoto.services.CosimulationInitializeReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ego_vehicles', full_name='metamoto.services.CosimulationInitializeReply.ego_vehicles', index=0,
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
  serialized_start=295,
  serialized_end=374,
)


_COSIMULATIONUPDATEREQUEST = _descriptor.Descriptor(
  name='CosimulationUpdateRequest',
  full_name='metamoto.services.CosimulationUpdateRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time', full_name='metamoto.services.CosimulationUpdateRequest.time', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ground_truth', full_name='metamoto.services.CosimulationUpdateRequest.ground_truth', index=1,
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
  serialized_start=376,
  serialized_end=471,
)


_COSIMULATIONUPDATEREPLY = _descriptor.Descriptor(
  name='CosimulationUpdateReply',
  full_name='metamoto.services.CosimulationUpdateReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
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
  serialized_start=473,
  serialized_end=498,
)


_COSIMULATIONREADREQUEST = _descriptor.Descriptor(
  name='CosimulationReadRequest',
  full_name='metamoto.services.CosimulationReadRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='ego_vehicle_id', full_name='metamoto.services.CosimulationReadRequest.ego_vehicle_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='topic', full_name='metamoto.services.CosimulationReadRequest.topic', index=1,
      number=2, type=9, cpp_type=9, label=1,
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
  ],
  serialized_start=500,
  serialized_end=564,
)


_COSIMULATIONREADREPLY = _descriptor.Descriptor(
  name='CosimulationReadReply',
  full_name='metamoto.services.CosimulationReadReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='message', full_name='metamoto.services.CosimulationReadReply.message', index=0,
      number=1, type=11, cpp_type=10, label=1,
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
  serialized_start=566,
  serialized_end=641,
)


_COSIMULATIONCLOSEREQUEST = _descriptor.Descriptor(
  name='CosimulationCloseRequest',
  full_name='metamoto.services.CosimulationCloseRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='action', full_name='metamoto.services.CosimulationCloseRequest.action', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='description', full_name='metamoto.services.CosimulationCloseRequest.description', index=1,
      number=2, type=9, cpp_type=9, label=1,
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
  ],
  serialized_start=643,
  serialized_end=730,
)


_COSIMULATIONCLOSEREPLY = _descriptor.Descriptor(
  name='CosimulationCloseReply',
  full_name='metamoto.services.CosimulationCloseReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
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
  serialized_start=732,
  serialized_end=756,
)

_COSIMULATIONINITIALIZEREQUEST.fields_by_name['ground_truth'].message_type = metamoto_dot_messages_dot_ground__truth__pb2._GROUNDTRUTH
_COSIMULATIONINITIALIZEREPLY.fields_by_name['ego_vehicles'].message_type = metamoto_dot_types_dot_ego__vehicle__pb2._EGOVEHICLE
_COSIMULATIONUPDATEREQUEST.fields_by_name['ground_truth'].message_type = metamoto_dot_messages_dot_ground__truth__pb2._GROUNDTRUTH
_COSIMULATIONREADREPLY.fields_by_name['message'].message_type = metamoto_dot_messages_dot_data__bus__message__pb2._DATABUSMESSAGE
_COSIMULATIONCLOSEREQUEST.fields_by_name['action'].enum_type = metamoto_dot_types_dot_enumerations__pb2._ACTION
DESCRIPTOR.message_types_by_name['CosimulationInitializeRequest'] = _COSIMULATIONINITIALIZEREQUEST
DESCRIPTOR.message_types_by_name['CosimulationInitializeReply'] = _COSIMULATIONINITIALIZEREPLY
DESCRIPTOR.message_types_by_name['CosimulationUpdateRequest'] = _COSIMULATIONUPDATEREQUEST
DESCRIPTOR.message_types_by_name['CosimulationUpdateReply'] = _COSIMULATIONUPDATEREPLY
DESCRIPTOR.message_types_by_name['CosimulationReadRequest'] = _COSIMULATIONREADREQUEST
DESCRIPTOR.message_types_by_name['CosimulationReadReply'] = _COSIMULATIONREADREPLY
DESCRIPTOR.message_types_by_name['CosimulationCloseRequest'] = _COSIMULATIONCLOSEREQUEST
DESCRIPTOR.message_types_by_name['CosimulationCloseReply'] = _COSIMULATIONCLOSEREPLY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

CosimulationInitializeRequest = _reflection.GeneratedProtocolMessageType('CosimulationInitializeRequest', (_message.Message,), dict(
  DESCRIPTOR = _COSIMULATIONINITIALIZEREQUEST,
  __module__ = 'metamoto.services.cosimulation_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.CosimulationInitializeRequest)
  ))
_sym_db.RegisterMessage(CosimulationInitializeRequest)

CosimulationInitializeReply = _reflection.GeneratedProtocolMessageType('CosimulationInitializeReply', (_message.Message,), dict(
  DESCRIPTOR = _COSIMULATIONINITIALIZEREPLY,
  __module__ = 'metamoto.services.cosimulation_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.CosimulationInitializeReply)
  ))
_sym_db.RegisterMessage(CosimulationInitializeReply)

CosimulationUpdateRequest = _reflection.GeneratedProtocolMessageType('CosimulationUpdateRequest', (_message.Message,), dict(
  DESCRIPTOR = _COSIMULATIONUPDATEREQUEST,
  __module__ = 'metamoto.services.cosimulation_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.CosimulationUpdateRequest)
  ))
_sym_db.RegisterMessage(CosimulationUpdateRequest)

CosimulationUpdateReply = _reflection.GeneratedProtocolMessageType('CosimulationUpdateReply', (_message.Message,), dict(
  DESCRIPTOR = _COSIMULATIONUPDATEREPLY,
  __module__ = 'metamoto.services.cosimulation_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.CosimulationUpdateReply)
  ))
_sym_db.RegisterMessage(CosimulationUpdateReply)

CosimulationReadRequest = _reflection.GeneratedProtocolMessageType('CosimulationReadRequest', (_message.Message,), dict(
  DESCRIPTOR = _COSIMULATIONREADREQUEST,
  __module__ = 'metamoto.services.cosimulation_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.CosimulationReadRequest)
  ))
_sym_db.RegisterMessage(CosimulationReadRequest)

CosimulationReadReply = _reflection.GeneratedProtocolMessageType('CosimulationReadReply', (_message.Message,), dict(
  DESCRIPTOR = _COSIMULATIONREADREPLY,
  __module__ = 'metamoto.services.cosimulation_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.CosimulationReadReply)
  ))
_sym_db.RegisterMessage(CosimulationReadReply)

CosimulationCloseRequest = _reflection.GeneratedProtocolMessageType('CosimulationCloseRequest', (_message.Message,), dict(
  DESCRIPTOR = _COSIMULATIONCLOSEREQUEST,
  __module__ = 'metamoto.services.cosimulation_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.CosimulationCloseRequest)
  ))
_sym_db.RegisterMessage(CosimulationCloseRequest)

CosimulationCloseReply = _reflection.GeneratedProtocolMessageType('CosimulationCloseReply', (_message.Message,), dict(
  DESCRIPTOR = _COSIMULATIONCLOSEREPLY,
  __module__ = 'metamoto.services.cosimulation_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.CosimulationCloseReply)
  ))
_sym_db.RegisterMessage(CosimulationCloseReply)


DESCRIPTOR._options = None

_COSIMULATION = _descriptor.ServiceDescriptor(
  name='Cosimulation',
  full_name='metamoto.services.Cosimulation',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=759,
  serialized_end=1184,
  methods=[
  _descriptor.MethodDescriptor(
    name='Initialize',
    full_name='metamoto.services.Cosimulation.Initialize',
    index=0,
    containing_service=None,
    input_type=_COSIMULATIONINITIALIZEREQUEST,
    output_type=_COSIMULATIONINITIALIZEREPLY,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Update',
    full_name='metamoto.services.Cosimulation.Update',
    index=1,
    containing_service=None,
    input_type=_COSIMULATIONUPDATEREQUEST,
    output_type=_COSIMULATIONUPDATEREPLY,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Read',
    full_name='metamoto.services.Cosimulation.Read',
    index=2,
    containing_service=None,
    input_type=_COSIMULATIONREADREQUEST,
    output_type=_COSIMULATIONREADREPLY,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Close',
    full_name='metamoto.services.Cosimulation.Close',
    index=3,
    containing_service=None,
    input_type=_COSIMULATIONCLOSEREQUEST,
    output_type=_COSIMULATIONCLOSEREPLY,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_COSIMULATION)

DESCRIPTOR.services_by_name['Cosimulation'] = _COSIMULATION

# @@protoc_insertion_point(module_scope)
