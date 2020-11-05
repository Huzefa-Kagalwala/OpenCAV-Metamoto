# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pacmod_msgs/SteerSystemCmd.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class SteerSystemCmd(genpy.Message):
  _md5sum = "cfa0df9428e1c56b79ca986e115663f7"
  _type = "pacmod_msgs/SteerSystemCmd"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

bool enable
bool ignore_overrides
bool clear_override
bool clear_faults

float64 command
float64 rotation_rate

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','enable','ignore_overrides','clear_override','clear_faults','command','rotation_rate']
  _slot_types = ['std_msgs/Header','bool','bool','bool','bool','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,enable,ignore_overrides,clear_override,clear_faults,command,rotation_rate

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SteerSystemCmd, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.enable is None:
        self.enable = False
      if self.ignore_overrides is None:
        self.ignore_overrides = False
      if self.clear_override is None:
        self.clear_override = False
      if self.clear_faults is None:
        self.clear_faults = False
      if self.command is None:
        self.command = 0.
      if self.rotation_rate is None:
        self.rotation_rate = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.enable = False
      self.ignore_overrides = False
      self.clear_override = False
      self.clear_faults = False
      self.command = 0.
      self.rotation_rate = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4B2d().pack(_x.enable, _x.ignore_overrides, _x.clear_override, _x.clear_faults, _x.command, _x.rotation_rate))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 20
      (_x.enable, _x.ignore_overrides, _x.clear_override, _x.clear_faults, _x.command, _x.rotation_rate,) = _get_struct_4B2d().unpack(str[start:end])
      self.enable = bool(self.enable)
      self.ignore_overrides = bool(self.ignore_overrides)
      self.clear_override = bool(self.clear_override)
      self.clear_faults = bool(self.clear_faults)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_4B2d().pack(_x.enable, _x.ignore_overrides, _x.clear_override, _x.clear_faults, _x.command, _x.rotation_rate))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 20
      (_x.enable, _x.ignore_overrides, _x.clear_override, _x.clear_faults, _x.command, _x.rotation_rate,) = _get_struct_4B2d().unpack(str[start:end])
      self.enable = bool(self.enable)
      self.ignore_overrides = bool(self.ignore_overrides)
      self.clear_override = bool(self.clear_override)
      self.clear_faults = bool(self.clear_faults)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4B2d = None
def _get_struct_4B2d():
    global _struct_4B2d
    if _struct_4B2d is None:
        _struct_4B2d = struct.Struct("<4B2d")
    return _struct_4B2d
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
