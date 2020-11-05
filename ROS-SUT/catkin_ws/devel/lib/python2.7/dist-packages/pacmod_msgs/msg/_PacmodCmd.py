# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pacmod_msgs/PacmodCmd.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class PacmodCmd(genpy.Message):
  _md5sum = "5651e3d1d38e01689421d6d8a4e924f6"
  _type = "pacmod_msgs/PacmodCmd"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

float64 f64_cmd
uint16 ui16_cmd
bool enable
bool clear
bool ignore

uint16 TURN_RIGHT = 0
uint16 TURN_NONE = 1
uint16 TURN_LEFT = 2
uint16 TURN_HAZARDS = 3

uint16 SHIFT_PARK = 0
uint16 SHIFT_REVERSE = 1
uint16 SHIFT_NEUTRAL = 2
uint16 SHIFT_FORWARD = 3
uint16 SHIFT_HIGH = 3 # For Polaris Ranger
uint16 SHIFT_LOW = 4

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
  # Pseudo-constants
  TURN_RIGHT = 0
  TURN_NONE = 1
  TURN_LEFT = 2
  TURN_HAZARDS = 3
  SHIFT_PARK = 0
  SHIFT_REVERSE = 1
  SHIFT_NEUTRAL = 2
  SHIFT_FORWARD = 3
  SHIFT_HIGH = 3
  SHIFT_LOW = 4

  __slots__ = ['header','f64_cmd','ui16_cmd','enable','clear','ignore']
  _slot_types = ['std_msgs/Header','float64','uint16','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,f64_cmd,ui16_cmd,enable,clear,ignore

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PacmodCmd, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.f64_cmd is None:
        self.f64_cmd = 0.
      if self.ui16_cmd is None:
        self.ui16_cmd = 0
      if self.enable is None:
        self.enable = False
      if self.clear is None:
        self.clear = False
      if self.ignore is None:
        self.ignore = False
    else:
      self.header = std_msgs.msg.Header()
      self.f64_cmd = 0.
      self.ui16_cmd = 0
      self.enable = False
      self.clear = False
      self.ignore = False

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
      buff.write(_get_struct_dH3B().pack(_x.f64_cmd, _x.ui16_cmd, _x.enable, _x.clear, _x.ignore))
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
      end += 13
      (_x.f64_cmd, _x.ui16_cmd, _x.enable, _x.clear, _x.ignore,) = _get_struct_dH3B().unpack(str[start:end])
      self.enable = bool(self.enable)
      self.clear = bool(self.clear)
      self.ignore = bool(self.ignore)
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
      buff.write(_get_struct_dH3B().pack(_x.f64_cmd, _x.ui16_cmd, _x.enable, _x.clear, _x.ignore))
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
      end += 13
      (_x.f64_cmd, _x.ui16_cmd, _x.enable, _x.clear, _x.ignore,) = _get_struct_dH3B().unpack(str[start:end])
      self.enable = bool(self.enable)
      self.clear = bool(self.clear)
      self.ignore = bool(self.ignore)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_dH3B = None
def _get_struct_dH3B():
    global _struct_dH3B
    if _struct_dH3B is None:
        _struct_dH3B = struct.Struct("<dH3B")
    return _struct_dH3B
