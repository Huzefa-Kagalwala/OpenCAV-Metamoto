# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/test_case.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import ego_vehicle_pb2 as metamoto_dot_types_dot_ego__vehicle__pb2
from metamoto.types import scenario_pb2 as metamoto_dot_types_dot_scenario__pb2
from metamoto.types import test_job_pb2 as metamoto_dot_types_dot_test__job__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/test_case.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n\x1emetamoto/types/test_case.proto\x12\x0emetamoto.types\x1a metamoto/types/ego_vehicle.proto\x1a\x1dmetamoto/types/scenario.proto\x1a\x1dmetamoto/types/test_job.proto\"\xc5\x01\n\x08TestCase\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12*\n\x08scenario\x18\x03 \x01(\x0b\x32\x18.metamoto.types.Scenario\x12/\n\x0b\x65go_vehicle\x18\x04 \x01(\x0b\x32\x1a.metamoto.types.EgoVehicle\x12(\n\x07history\x18\x05 \x03(\x0b\x32\x17.metamoto.types.TestJob\x12\x18\n\x10test_manager_url\x18\x06 \x01(\tB\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_ego__vehicle__pb2.DESCRIPTOR,metamoto_dot_types_dot_scenario__pb2.DESCRIPTOR,metamoto_dot_types_dot_test__job__pb2.DESCRIPTOR,])




_TESTCASE = _descriptor.Descriptor(
  name='TestCase',
  full_name='metamoto.types.TestCase',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='metamoto.types.TestCase.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='metamoto.types.TestCase.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='scenario', full_name='metamoto.types.TestCase.scenario', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='ego_vehicle', full_name='metamoto.types.TestCase.ego_vehicle', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='history', full_name='metamoto.types.TestCase.history', index=4,
      number=5, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_manager_url', full_name='metamoto.types.TestCase.test_manager_url', index=5,
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
  ],
  serialized_start=147,
  serialized_end=344,
)

_TESTCASE.fields_by_name['scenario'].message_type = metamoto_dot_types_dot_scenario__pb2._SCENARIO
_TESTCASE.fields_by_name['ego_vehicle'].message_type = metamoto_dot_types_dot_ego__vehicle__pb2._EGOVEHICLE
_TESTCASE.fields_by_name['history'].message_type = metamoto_dot_types_dot_test__job__pb2._TESTJOB
DESCRIPTOR.message_types_by_name['TestCase'] = _TESTCASE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TestCase = _reflection.GeneratedProtocolMessageType('TestCase', (_message.Message,), dict(
  DESCRIPTOR = _TESTCASE,
  __module__ = 'metamoto.types.test_case_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.TestCase)
  ))
_sym_db.RegisterMessage(TestCase)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
