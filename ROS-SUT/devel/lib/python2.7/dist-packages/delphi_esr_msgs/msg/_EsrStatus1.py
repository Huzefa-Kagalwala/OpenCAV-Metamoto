# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_esr_msgs/EsrStatus1.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class EsrStatus1(genpy.Message):
  _md5sum = "8f96a58d642c579a639b0c54f121d1ed"
  _type = "delphi_esr_msgs/EsrStatus1"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

# ESR status1
string      canmsg
uint8       time_stamp
uint8       rolling_count
bool        comm_error
int16       curvature
uint16      scan_id
float32     yaw_rate
float32     vehicle_speed_calc


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
  __slots__ = ['header','canmsg','time_stamp','rolling_count','comm_error','curvature','scan_id','yaw_rate','vehicle_speed_calc']
  _slot_types = ['std_msgs/Header','string','uint8','uint8','bool','int16','uint16','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,canmsg,time_stamp,rolling_count,comm_error,curvature,scan_id,yaw_rate,vehicle_speed_calc

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EsrStatus1, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.canmsg is None:
        self.canmsg = ''
      if self.time_stamp is None:
        self.time_stamp = 0
      if self.rolling_count is None:
        self.rolling_count = 0
      if self.comm_error is None:
        self.comm_error = False
      if self.curvature is None:
        self.curvature = 0
      if self.scan_id is None:
        self.scan_id = 0
      if self.yaw_rate is None:
        self.yaw_rate = 0.
      if self.vehicle_speed_calc is None:
        self.vehicle_speed_calc = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.canmsg = ''
      self.time_stamp = 0
      self.rolling_count = 0
      self.comm_error = False
      self.curvature = 0
      self.scan_id = 0
      self.yaw_rate = 0.
      self.vehicle_speed_calc = 0.

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
      buff.write(_get_struct_3BhH2f().pack(_x.time_stamp, _x.rolling_count, _x.comm_error, _x.curvature, _x.scan_id, _x.yaw_rate, _x.vehicle_speed_calc))
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
      end += 15
      (_x.time_stamp, _x.rolling_count, _x.comm_error, _x.curvature, _x.scan_id, _x.yaw_rate, _x.vehicle_speed_calc,) = _get_struct_3BhH2f().unpack(str[start:end])
      self.comm_error = bool(self.comm_error)
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
      buff.write(_get_struct_3BhH2f().pack(_x.time_stamp, _x.rolling_count, _x.comm_error, _x.curvature, _x.scan_id, _x.yaw_rate, _x.vehicle_speed_calc))
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
      end += 15
      (_x.time_stamp, _x.rolling_count, _x.comm_error, _x.curvature, _x.scan_id, _x.yaw_rate, _x.vehicle_speed_calc,) = _get_struct_3BhH2f().unpack(str[start:end])
      self.comm_error = bool(self.comm_error)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3BhH2f = None
def _get_struct_3BhH2f():
    global _struct_3BhH2f
    if _struct_3BhH2f is None:
        _struct_3BhH2f = struct.Struct("<3BhH2f")
    return _struct_3BhH2f
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
