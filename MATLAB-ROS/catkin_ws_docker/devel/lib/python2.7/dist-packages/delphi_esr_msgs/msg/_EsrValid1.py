# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_esr_msgs/EsrValid1.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class EsrValid1(genpy.Message):
  _md5sum = "41a700597be629966cda02aac94ad2e1"
  _type = "delphi_esr_msgs/EsrValid1"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

# ESR valid1
string      canmsg
uint8       lr_sn
float32     lr_range
float32     lr_range_rate
float32     lr_angle
int8        lr_power

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
  __slots__ = ['header','canmsg','lr_sn','lr_range','lr_range_rate','lr_angle','lr_power']
  _slot_types = ['std_msgs/Header','string','uint8','float32','float32','float32','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,canmsg,lr_sn,lr_range,lr_range_rate,lr_angle,lr_power

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EsrValid1, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.canmsg is None:
        self.canmsg = ''
      if self.lr_sn is None:
        self.lr_sn = 0
      if self.lr_range is None:
        self.lr_range = 0.
      if self.lr_range_rate is None:
        self.lr_range_rate = 0.
      if self.lr_angle is None:
        self.lr_angle = 0.
      if self.lr_power is None:
        self.lr_power = 0
    else:
      self.header = std_msgs.msg.Header()
      self.canmsg = ''
      self.lr_sn = 0
      self.lr_range = 0.
      self.lr_range_rate = 0.
      self.lr_angle = 0.
      self.lr_power = 0

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
      _x = self.canmsg
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_B3fb().pack(_x.lr_sn, _x.lr_range, _x.lr_range_rate, _x.lr_angle, _x.lr_power))
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.canmsg = str[start:end].decode('utf-8')
      else:
        self.canmsg = str[start:end]
      _x = self
      start = end
      end += 14
      (_x.lr_sn, _x.lr_range, _x.lr_range_rate, _x.lr_angle, _x.lr_power,) = _get_struct_B3fb().unpack(str[start:end])
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
      _x = self.canmsg
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_B3fb().pack(_x.lr_sn, _x.lr_range, _x.lr_range_rate, _x.lr_angle, _x.lr_power))
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
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.canmsg = str[start:end].decode('utf-8')
      else:
        self.canmsg = str[start:end]
      _x = self
      start = end
      end += 14
      (_x.lr_sn, _x.lr_range, _x.lr_range_rate, _x.lr_angle, _x.lr_power,) = _get_struct_B3fb().unpack(str[start:end])
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
_struct_B3fb = None
def _get_struct_B3fb():
    global _struct_B3fb
    if _struct_B3fb is None:
        _struct_B3fb = struct.Struct("<B3fb")
    return _struct_B3fb
