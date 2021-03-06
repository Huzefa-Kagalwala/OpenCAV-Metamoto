# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/test_suite.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/test_suite.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n\x1fmetamoto/types/test_suite.proto\x12\x0emetamoto.types\"\x8f\x02\n\tTestSuite\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x38\n\x08schedule\x18\x03 \x01(\x0e\x32&.metamoto.types.TestSuite.ScheduleType\x12\x12\n\nstart_time\x18\x04 \x01(\t\x12\x15\n\rnext_run_time\x18\x05 \x01(\t\x12\x17\n\x0ftest_vector_ids\x18\x06 \x03(\t\x12\x10\n\x08priority\x18\x07 \x01(\x05\"X\n\x0cScheduleType\x12\x0b\n\x07UNKNOWN\x10\x00\x12\t\n\x05OTHER\x10\x01\x12\x0c\n\x08RUN_ONCE\x10\x02\x12\t\n\x05\x44\x41ILY\x10\x03\x12\n\n\x06WEEKLY\x10\x04\x12\x0b\n\x07\x44ISABLE\x10\x05\x42\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
)



_TESTSUITE_SCHEDULETYPE = _descriptor.EnumDescriptor(
  name='ScheduleType',
  full_name='metamoto.types.TestSuite.ScheduleType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='OTHER', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RUN_ONCE', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DAILY', index=3, number=3,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='WEEKLY', index=4, number=4,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DISABLE', index=5, number=5,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=235,
  serialized_end=323,
)
_sym_db.RegisterEnumDescriptor(_TESTSUITE_SCHEDULETYPE)


_TESTSUITE = _descriptor.Descriptor(
  name='TestSuite',
  full_name='metamoto.types.TestSuite',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='metamoto.types.TestSuite.id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='metamoto.types.TestSuite.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='schedule', full_name='metamoto.types.TestSuite.schedule', index=2,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='start_time', full_name='metamoto.types.TestSuite.start_time', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='next_run_time', full_name='metamoto.types.TestSuite.next_run_time', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_vector_ids', full_name='metamoto.types.TestSuite.test_vector_ids', index=5,
      number=6, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='priority', full_name='metamoto.types.TestSuite.priority', index=6,
      number=7, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _TESTSUITE_SCHEDULETYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=52,
  serialized_end=323,
)

_TESTSUITE.fields_by_name['schedule'].enum_type = _TESTSUITE_SCHEDULETYPE
_TESTSUITE_SCHEDULETYPE.containing_type = _TESTSUITE
DESCRIPTOR.message_types_by_name['TestSuite'] = _TESTSUITE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TestSuite = _reflection.GeneratedProtocolMessageType('TestSuite', (_message.Message,), dict(
  DESCRIPTOR = _TESTSUITE,
  __module__ = 'metamoto.types.test_suite_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.TestSuite)
  ))
_sym_db.RegisterMessage(TestSuite)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
