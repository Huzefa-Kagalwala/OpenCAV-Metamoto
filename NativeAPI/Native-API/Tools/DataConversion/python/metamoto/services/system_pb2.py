# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: metamoto/services/system.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='metamoto/services/system.proto',
  package='metamoto.services',
  syntax='proto3',
  serialized_options=_b('\252\002\021Metamoto.Services'),
  serialized_pb=_b('\n\x1emetamoto/services/system.proto\x12\x11metamoto.services\"\x1d\n\x1bSystemGetResultsSizeRequest\"1\n\x19SystemGetResultsSizeReply\x12\x14\n\x0cresults_size\x18\x01 \x01(\x03\x32z\n\x06System\x12p\n\x0eGetResultsSize\x12..metamoto.services.SystemGetResultsSizeRequest\x1a,.metamoto.services.SystemGetResultsSizeReply\"\x00\x42\x14\xaa\x02\x11Metamoto.Servicesb\x06proto3')
)




_SYSTEMGETRESULTSSIZEREQUEST = _descriptor.Descriptor(
  name='SystemGetResultsSizeRequest',
  full_name='metamoto.services.SystemGetResultsSizeRequest',
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
  serialized_start=53,
  serialized_end=82,
)


_SYSTEMGETRESULTSSIZEREPLY = _descriptor.Descriptor(
  name='SystemGetResultsSizeReply',
  full_name='metamoto.services.SystemGetResultsSizeReply',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='results_size', full_name='metamoto.services.SystemGetResultsSizeReply.results_size', index=0,
      number=1, type=3, cpp_type=2, label=1,
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
  serialized_start=84,
  serialized_end=133,
)

DESCRIPTOR.message_types_by_name['SystemGetResultsSizeRequest'] = _SYSTEMGETRESULTSSIZEREQUEST
DESCRIPTOR.message_types_by_name['SystemGetResultsSizeReply'] = _SYSTEMGETRESULTSSIZEREPLY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SystemGetResultsSizeRequest = _reflection.GeneratedProtocolMessageType('SystemGetResultsSizeRequest', (_message.Message,), dict(
  DESCRIPTOR = _SYSTEMGETRESULTSSIZEREQUEST,
  __module__ = 'metamoto.services.system_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.SystemGetResultsSizeRequest)
  ))
_sym_db.RegisterMessage(SystemGetResultsSizeRequest)

SystemGetResultsSizeReply = _reflection.GeneratedProtocolMessageType('SystemGetResultsSizeReply', (_message.Message,), dict(
  DESCRIPTOR = _SYSTEMGETRESULTSSIZEREPLY,
  __module__ = 'metamoto.services.system_pb2'
  # @@protoc_insertion_point(class_scope:metamoto.services.SystemGetResultsSizeReply)
  ))
_sym_db.RegisterMessage(SystemGetResultsSizeReply)


DESCRIPTOR._options = None

_SYSTEM = _descriptor.ServiceDescriptor(
  name='System',
  full_name='metamoto.services.System',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=135,
  serialized_end=257,
  methods=[
  _descriptor.MethodDescriptor(
    name='GetResultsSize',
    full_name='metamoto.services.System.GetResultsSize',
    index=0,
    containing_service=None,
    input_type=_SYSTEMGETRESULTSSIZEREQUEST,
    output_type=_SYSTEMGETRESULTSSIZEREPLY,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_SYSTEM)

DESCRIPTOR.services_by_name['System'] = _SYSTEM

# @@protoc_insertion_point(module_scope)
