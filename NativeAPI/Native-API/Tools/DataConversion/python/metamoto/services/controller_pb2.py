# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/services/controller.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import struct_pb2 as google_dot_protobuf_dot_struct__pb2
from metamoto.types import result_metadata_pb2 as metamoto_dot_types_dot_result__metadata__pb2
from metamoto.types import scenario_pb2 as metamoto_dot_types_dot_scenario__pb2
from metamoto.types import service_description_pb2 as metamoto_dot_types_dot_service__description__pb2
from metamoto.types import test_case_pb2 as metamoto_dot_types_dot_test__case__pb2
from metamoto.types import vehicle_info_pb2 as metamoto_dot_types_dot_vehicle__info__pb2
from metamoto.types import waypoint_pb2 as metamoto_dot_types_dot_waypoint__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/services/controller.proto',
  package='metamoto.services',
  syntax='proto3',
  serialized_options=_b('\252\002\021Metamoto.Services'),
  serialized_pb=_b('\n\"metamoto/services/controller.proto\x12\x11metamoto.services\x1a\x1cgoogle/protobuf/struct.proto\x1a$metamoto/types/result_metadata.proto\x1a\x1dmetamoto/types/scenario.proto\x1a(metamoto/types/service_description.proto\x1a\x1emetamoto/types/test_case.proto\x1a!metamoto/types/vehicle_info.proto\x1a\x1dmetamoto/types/waypoint.proto\"\xa8\x01\n\x16\x43ontrollerSetupRequest\x12+\n\nparameters\x18\x01 \x01(\x0b\x32\x17.google.protobuf.Struct\x12\x34\n\x08services\x18\x02 \x03(\x0b\x32\".metamoto.types.ServiceDescription\x12+\n\ttest_case\x18\x03 \x01(\x0b\x32\x18.metamoto.types.TestCase\"\x16\n\x14\x43ontrollerSetupReply\"\xe3\x02\n\x1b\x43ontrollerInitializeRequest\x12+\n\nparameters\x18\x01 \x01(\x0b\x32\x17.google.protobuf.Struct\x12\x16\n\x0epublish_topics\x18\x02 \x03(\t\x12\x19\n\x11results_directory\x18\x03 \x01(\t\x12\x34\n\x08services\x18\x04 \x03(\x0b\x32\".metamoto.types.ServiceDescription\x12\x32\n\x10\x65go_vehicle_path\x18\x05 \x03(\x0b\x32\x18.metamoto.types.Waypoint\x12\x35\n\x10\x65go_vehicle_info\x18\x06 \x01(\x0b\x32\x1b.metamoto.types.VehicleInfo\x12\x16\n\x0e\x65go_vehicle_id\x18\x07 \x01(\t\x12+\n\ttest_case\x18\x08 \x01(\x0b\x32\x18.metamoto.types.TestCase\"g\n\x19\x43ontrollerInitializeReply\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x0f\n\x07version\x18\x02 \x01(\t\x12\x13\n\x0bupdate_rate\x18\x03 \x01(\x01\x12\x16\n\x0eupdate_timeout\x18\x04 \x01(\r\"}\n\x17\x43ontrollerUpdateRequest\x12\x0c\n\x04time\x18\x01 \x01(\x01\x12\x16\n\x0elast_step_time\x18\x02 \x01(\x01\x12\x16\n\x0enext_step_time\x18\x03 \x01(\x01\x12$\n\x05\x65vent\x18\x04 \x01(\x0b\x32\x15.metamoto.types.Event\"1\n\x15\x43ontrollerUpdateReply\x12\x18\n\x10next_update_time\x18\x01 \x01(\x01\"\x18\n\x16\x43ontrollerCloseRequest\"G\n\x14\x43ontrollerCloseReply\x12/\n\x07results\x18\x01 \x03(\x0b\x32\x1e.metamoto.types.ResultMetadata2\x9a\x03\n\nController\x12]\n\x05Setup\x12).metamoto.services.ControllerSetupRequest\x1a\'.metamoto.services.ControllerSetupReply\"\x00\x12l\n\nInitialize\x12..metamoto.services.ControllerInitializeRequest\x1a,.metamoto.services.ControllerInitializeReply\"\x00\x12`\n\x06Update\x12*.metamoto.services.ControllerUpdateRequest\x1a(.metamoto.services.ControllerUpdateReply\"\x00\x12]\n\x05\x43lose\x12).metamoto.services.ControllerCloseRequest\x1a\'.metamoto.services.ControllerCloseReply\"\x00\x42\x14\xaa\x02\x11Metamoto.Servicesb\x06proto3')
  ,
  dependencies=[google_dot_protobuf_dot_struct__pb2.DESCRIPTOR,metamoto_dot_types_dot_result__metadata__pb2.DESCRIPTOR,metamoto_dot_types_dot_scenario__pb2.DESCRIPTOR,metamoto_dot_types_dot_service__description__pb2.DESCRIPTOR,metamoto_dot_types_dot_test__case__pb2.DESCRIPTOR,metamoto_dot_types_dot_vehicle__info__pb2.DESCRIPTOR,metamoto_dot_types_dot_waypoint__pb2.DESCRIPTOR,])




_CONTROLLERSETUPREQUEST = _descriptor.Descriptor(
  name='ControllerSetupRequest',
  full_name='metamoto.services.ControllerSetupRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='parameters', full_name='metamoto.services.ControllerSetupRequest.parameters', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='services', full_name='metamoto.services.ControllerSetupRequest.services', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_case', full_name='metamoto.services.ControllerSetupRequest.test_case', index=2,
      number=3, type=11, cpp_type=10, label=1,
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
  serialized_start=297,
  serialized_end=465,
)


_CONTROLLERSETUPREPLY = _descriptor.Descriptor(
  name='ControllerSetupReply',
  full_name='metamoto.services.ControllerSetupReply',
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
  serialized_start=467,
  serialized_end=489,
)


_CONTROLLERINITIALIZEREQUEST = _descriptor.Descriptor(
  name='ControllerInitializeRequest',
  full_name='metamoto.services.ControllerInitializeRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='parameters', full_name='metamoto.services.ControllerInitializeRequest.parameters', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='publish_topics', full_name='metamoto.services.ControllerInitializeRequest.publish_topics', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='results_directory', full_name='metamoto.services.ControllerInitializeRequest.results_directory', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='services', full_name='metamoto.services.ControllerInitializeRequest.services', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ego_vehicle_path', full_name='metamoto.services.ControllerInitializeRequest.ego_vehicle_path', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ego_vehicle_info', full_name='metamoto.services.ControllerInitializeRequest.ego_vehicle_info', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ego_vehicle_id', full_name='metamoto.services.ControllerInitializeRequest.ego_vehicle_id', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_case', full_name='metamoto.services.ControllerInitializeRequest.test_case', index=7,
      number=8, type=11, cpp_type=10, label=1,
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
  serialized_start=492,
  serialized_end=847,
)


_CONTROLLERINITIALIZEREPLY = _descriptor.Descriptor(
  name='ControllerInitializeReply',
  full_name='metamoto.services.ControllerInitializeReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='metamoto.services.ControllerInitializeReply.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='version', full_name='metamoto.services.ControllerInitializeReply.version', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='update_rate', full_name='metamoto.services.ControllerInitializeReply.update_rate', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='update_timeout', full_name='metamoto.services.ControllerInitializeReply.update_timeout', index=3,
      number=4, type=13, cpp_type=3, label=1,
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
  serialized_start=849,
  serialized_end=952,
)


_CONTROLLERUPDATEREQUEST = _descriptor.Descriptor(
  name='ControllerUpdateRequest',
  full_name='metamoto.services.ControllerUpdateRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time', full_name='metamoto.services.ControllerUpdateRequest.time', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='last_step_time', full_name='metamoto.services.ControllerUpdateRequest.last_step_time', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='next_step_time', full_name='metamoto.services.ControllerUpdateRequest.next_step_time', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='event', full_name='metamoto.services.ControllerUpdateRequest.event', index=3,
      number=4, type=11, cpp_type=10, label=1,
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
  serialized_start=954,
  serialized_end=1079,
)


_CONTROLLERUPDATEREPLY = _descriptor.Descriptor(
  name='ControllerUpdateReply',
  full_name='metamoto.services.ControllerUpdateReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='next_update_time', full_name='metamoto.services.ControllerUpdateReply.next_update_time', index=0,
      number=1, type=1, cpp_type=5, label=1,
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
  serialized_start=1081,
  serialized_end=1130,
)


_CONTROLLERCLOSEREQUEST = _descriptor.Descriptor(
  name='ControllerCloseRequest',
  full_name='metamoto.services.ControllerCloseRequest',
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
  serialized_start=1132,
  serialized_end=1156,
)


_CONTROLLERCLOSEREPLY = _descriptor.Descriptor(
  name='ControllerCloseReply',
  full_name='metamoto.services.ControllerCloseReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='results', full_name='metamoto.services.ControllerCloseReply.results', index=0,
      number=1, type=11, cpp_type=10, label=3,
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
  serialized_start=1158,
  serialized_end=1229,
)

_CONTROLLERSETUPREQUEST.fields_by_name['parameters'].message_type = google_dot_protobuf_dot_struct__pb2._STRUCT
_CONTROLLERSETUPREQUEST.fields_by_name['services'].message_type = metamoto_dot_types_dot_service__description__pb2._SERVICEDESCRIPTION
_CONTROLLERSETUPREQUEST.fields_by_name['test_case'].message_type = metamoto_dot_types_dot_test__case__pb2._TESTCASE
_CONTROLLERINITIALIZEREQUEST.fields_by_name['parameters'].message_type = google_dot_protobuf_dot_struct__pb2._STRUCT
_CONTROLLERINITIALIZEREQUEST.fields_by_name['services'].message_type = metamoto_dot_types_dot_service__description__pb2._SERVICEDESCRIPTION
_CONTROLLERINITIALIZEREQUEST.fields_by_name['ego_vehicle_path'].message_type = metamoto_dot_types_dot_waypoint__pb2._WAYPOINT
_CONTROLLERINITIALIZEREQUEST.fields_by_name['ego_vehicle_info'].message_type = metamoto_dot_types_dot_vehicle__info__pb2._VEHICLEINFO
_CONTROLLERINITIALIZEREQUEST.fields_by_name['test_case'].message_type = metamoto_dot_types_dot_test__case__pb2._TESTCASE
_CONTROLLERUPDATEREQUEST.fields_by_name['event'].message_type = metamoto_dot_types_dot_scenario__pb2._EVENT
_CONTROLLERCLOSEREPLY.fields_by_name['results'].message_type = metamoto_dot_types_dot_result__metadata__pb2._RESULTMETADATA
DESCRIPTOR.message_types_by_name['ControllerSetupRequest'] = _CONTROLLERSETUPREQUEST
DESCRIPTOR.message_types_by_name['ControllerSetupReply'] = _CONTROLLERSETUPREPLY
DESCRIPTOR.message_types_by_name['ControllerInitializeRequest'] = _CONTROLLERINITIALIZEREQUEST
DESCRIPTOR.message_types_by_name['ControllerInitializeReply'] = _CONTROLLERINITIALIZEREPLY
DESCRIPTOR.message_types_by_name['ControllerUpdateRequest'] = _CONTROLLERUPDATEREQUEST
DESCRIPTOR.message_types_by_name['ControllerUpdateReply'] = _CONTROLLERUPDATEREPLY
DESCRIPTOR.message_types_by_name['ControllerCloseRequest'] = _CONTROLLERCLOSEREQUEST
DESCRIPTOR.message_types_by_name['ControllerCloseReply'] = _CONTROLLERCLOSEREPLY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ControllerSetupRequest = _reflection.GeneratedProtocolMessageType('ControllerSetupRequest', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERSETUPREQUEST,
  __module__ = 'metamoto.services.controller_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.ControllerSetupRequest)
  ))
_sym_db.RegisterMessage(ControllerSetupRequest)

ControllerSetupReply = _reflection.GeneratedProtocolMessageType('ControllerSetupReply', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERSETUPREPLY,
  __module__ = 'metamoto.services.controller_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.ControllerSetupReply)
  ))
_sym_db.RegisterMessage(ControllerSetupReply)

ControllerInitializeRequest = _reflection.GeneratedProtocolMessageType('ControllerInitializeRequest', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERINITIALIZEREQUEST,
  __module__ = 'metamoto.services.controller_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.ControllerInitializeRequest)
  ))
_sym_db.RegisterMessage(ControllerInitializeRequest)

ControllerInitializeReply = _reflection.GeneratedProtocolMessageType('ControllerInitializeReply', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERINITIALIZEREPLY,
  __module__ = 'metamoto.services.controller_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.ControllerInitializeReply)
  ))
_sym_db.RegisterMessage(ControllerInitializeReply)

ControllerUpdateRequest = _reflection.GeneratedProtocolMessageType('ControllerUpdateRequest', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERUPDATEREQUEST,
  __module__ = 'metamoto.services.controller_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.ControllerUpdateRequest)
  ))
_sym_db.RegisterMessage(ControllerUpdateRequest)

ControllerUpdateReply = _reflection.GeneratedProtocolMessageType('ControllerUpdateReply', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERUPDATEREPLY,
  __module__ = 'metamoto.services.controller_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.ControllerUpdateReply)
  ))
_sym_db.RegisterMessage(ControllerUpdateReply)

ControllerCloseRequest = _reflection.GeneratedProtocolMessageType('ControllerCloseRequest', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERCLOSEREQUEST,
  __module__ = 'metamoto.services.controller_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.ControllerCloseRequest)
  ))
_sym_db.RegisterMessage(ControllerCloseRequest)

ControllerCloseReply = _reflection.GeneratedProtocolMessageType('ControllerCloseReply', (_message.Message,), dict(
  DESCRIPTOR = _CONTROLLERCLOSEREPLY,
  __module__ = 'metamoto.services.controller_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.ControllerCloseReply)
  ))
_sym_db.RegisterMessage(ControllerCloseReply)


DESCRIPTOR._options = None

_CONTROLLER = _descriptor.ServiceDescriptor(
  name='Controller',
  full_name='metamoto.services.Controller',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=1232,
  serialized_end=1642,
  methods=[
  _descriptor.MethodDescriptor(
    name='Setup',
    full_name='metamoto.services.Controller.Setup',
    index=0,
    containing_service=None,
    input_type=_CONTROLLERSETUPREQUEST,
    output_type=_CONTROLLERSETUPREPLY,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Initialize',
    full_name='metamoto.services.Controller.Initialize',
    index=1,
    containing_service=None,
    input_type=_CONTROLLERINITIALIZEREQUEST,
    output_type=_CONTROLLERINITIALIZEREPLY,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Update',
    full_name='metamoto.services.Controller.Update',
    index=2,
    containing_service=None,
    input_type=_CONTROLLERUPDATEREQUEST,
    output_type=_CONTROLLERUPDATEREPLY,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Close',
    full_name='metamoto.services.Controller.Close',
    index=3,
    containing_service=None,
    input_type=_CONTROLLERCLOSEREQUEST,
    output_type=_CONTROLLERCLOSEREPLY,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_CONTROLLER)

DESCRIPTOR.services_by_name['Controller'] = _CONTROLLER

# @@protoc_insertion_point(module_scope)