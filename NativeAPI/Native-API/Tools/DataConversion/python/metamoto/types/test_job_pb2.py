# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/types/test_job.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from metamoto.types import range_pb2 as metamoto_dot_types_dot_range__pb2
from metamoto.types import test_result_pb2 as metamoto_dot_types_dot_test__result__pb2
from metamoto.types import test_vector_pb2 as metamoto_dot_types_dot_test__vector__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/types/test_job.proto',
  package='metamoto.types',
  syntax='proto3',
  serialized_options=_b('\252\002\016Metamoto.Types'),
  serialized_pb=_b('\n\x1dmetamoto/types/test_job.proto\x12\x0emetamoto.types\x1a\x1ametamoto/types/range.proto\x1a metamoto/types/test_result.proto\x1a metamoto/types/test_vector.proto\"\xaa\x05\n\x07TestJob\x12\x0e\n\x06job_id\x18\x01 \x01(\t\x12\x13\n\x0bsut_job_ids\x18\x02 \x03(\t\x12\x13\n\x0btest_run_id\x18\x03 \x01(\t\x12\x14\n\x0ctest_case_id\x18\x04 \x01(\t\x12\x16\n\x0etest_case_name\x18\x05 \x01(\t\x12\x16\n\x0etest_vector_id\x18\x06 \x01(\t\x12\x18\n\x10test_vector_name\x18\x07 \x01(\t\x12\x41\n\x14test_vector_strategy\x18\x08 \x01(\x0e\x32#.metamoto.types.TestVector.Strategy\x12\x12\n\nstart_time\x18\t \x01(\t\x12\x10\n\x08\x65nd_time\x18\n \x01(\t\x12\x14\n\x0c\x63ompute_time\x18\x0b \x01(\x02\x12\x31\n\x06status\x18\x0c \x01(\x0e\x32!.metamoto.types.TestResult.Status\x12\x13\n\x0bresult_text\x18\r \x01(\t\x12\x10\n\x08progress\x18\x0e \x01(\x02\x12\x1a\n\x12\x64uration_objective\x18\x0f \x01(\x02\x12\x19\n\x11last_job_duration\x18\x10 \x01(\x02\x12\x10\n\x08log_file\x18\x11 \x01(\t\x12\x14\n\x0cresults_file\x18\x12 \x01(\t\x12\x12\n\ndisk_usage\x18\x13 \x01(\x02\x12\x18\n\x10last_update_time\x18\x14 \x01(\t\x12\x14\n\x0csut_log_file\x18\x15 \x01(\t\x12;\n\nparameters\x18\x64 \x03(\x0b\x32\'.metamoto.types.TestJob.ParametersEntry\x1aL\n\x0fParametersEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12(\n\x05value\x18\x02 \x01(\x0b\x32\x19.metamoto.types.Parameter:\x02\x38\x01\x42\x11\xaa\x02\x0eMetamoto.Typesb\x06proto3')
  ,
  dependencies=[metamoto_dot_types_dot_range__pb2.DESCRIPTOR,metamoto_dot_types_dot_test__result__pb2.DESCRIPTOR,metamoto_dot_types_dot_test__vector__pb2.DESCRIPTOR,])




_TESTJOB_PARAMETERSENTRY = _descriptor.Descriptor(
  name='ParametersEntry',
  full_name='metamoto.types.TestJob.ParametersEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='metamoto.types.TestJob.ParametersEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='metamoto.types.TestJob.ParametersEntry.value', index=1,
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
  serialized_start=752,
  serialized_end=828,
)

_TESTJOB = _descriptor.Descriptor(
  name='TestJob',
  full_name='metamoto.types.TestJob',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='job_id', full_name='metamoto.types.TestJob.job_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sut_job_ids', full_name='metamoto.types.TestJob.sut_job_ids', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_run_id', full_name='metamoto.types.TestJob.test_run_id', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_case_id', full_name='metamoto.types.TestJob.test_case_id', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_case_name', full_name='metamoto.types.TestJob.test_case_name', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_vector_id', full_name='metamoto.types.TestJob.test_vector_id', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_vector_name', full_name='metamoto.types.TestJob.test_vector_name', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='test_vector_strategy', full_name='metamoto.types.TestJob.test_vector_strategy', index=7,
      number=8, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='start_time', full_name='metamoto.types.TestJob.start_time', index=8,
      number=9, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='end_time', full_name='metamoto.types.TestJob.end_time', index=9,
      number=10, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='compute_time', full_name='metamoto.types.TestJob.compute_time', index=10,
      number=11, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='status', full_name='metamoto.types.TestJob.status', index=11,
      number=12, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='result_text', full_name='metamoto.types.TestJob.result_text', index=12,
      number=13, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='progress', full_name='metamoto.types.TestJob.progress', index=13,
      number=14, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='duration_objective', full_name='metamoto.types.TestJob.duration_objective', index=14,
      number=15, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='last_job_duration', full_name='metamoto.types.TestJob.last_job_duration', index=15,
      number=16, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='log_file', full_name='metamoto.types.TestJob.log_file', index=16,
      number=17, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='results_file', full_name='metamoto.types.TestJob.results_file', index=17,
      number=18, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='disk_usage', full_name='metamoto.types.TestJob.disk_usage', index=18,
      number=19, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='last_update_time', full_name='metamoto.types.TestJob.last_update_time', index=19,
      number=20, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sut_log_file', full_name='metamoto.types.TestJob.sut_log_file', index=20,
      number=21, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='parameters', full_name='metamoto.types.TestJob.parameters', index=21,
      number=100, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_TESTJOB_PARAMETERSENTRY, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=146,
  serialized_end=828,
)

_TESTJOB_PARAMETERSENTRY.fields_by_name['value'].message_type = metamoto_dot_types_dot_range__pb2._PARAMETER
_TESTJOB_PARAMETERSENTRY.containing_type = _TESTJOB
_TESTJOB.fields_by_name['test_vector_strategy'].enum_type = metamoto_dot_types_dot_test__vector__pb2._TESTVECTOR_STRATEGY
_TESTJOB.fields_by_name['status'].enum_type = metamoto_dot_types_dot_test__result__pb2._TESTRESULT_STATUS
_TESTJOB.fields_by_name['parameters'].message_type = _TESTJOB_PARAMETERSENTRY
DESCRIPTOR.message_types_by_name['TestJob'] = _TESTJOB
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

TestJob = _reflection.GeneratedProtocolMessageType('TestJob', (_message.Message,), dict(

  ParametersEntry = _reflection.GeneratedProtocolMessageType('ParametersEntry', (_message.Message,), dict(
    DESCRIPTOR = _TESTJOB_PARAMETERSENTRY,
    __module__ = 'metamoto.types.test_job_pb2'
    # @@protoc_insertion_point(class_scope:metamoto.types.TestJob.ParametersEntry)
    ))
  ,
  DESCRIPTOR = _TESTJOB,
  __module__ = 'metamoto.types.test_job_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.types.TestJob)
  ))
_sym_db.RegisterMessage(TestJob)
_sym_db.RegisterMessage(TestJob.ParametersEntry)


DESCRIPTOR._options = None
_TESTJOB_PARAMETERSENTRY._options = None
# @@protoc_insertion_point(module_scope)