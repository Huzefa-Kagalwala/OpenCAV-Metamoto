# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_esr_msgs/EsrStatus2.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class EsrStatus2(genpy.Message):
  _md5sum = "de9d4dcad18be0f8d7fd839abd77cb7c"
  _type = "delphi_esr_msgs/EsrStatus2"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

# ESR status2
string      canmsg
uint8       rolling_count2
uint8       max_track_ack
bool        overheat_error
bool        range_perf_error
bool        internal_error
bool        xcvr_operational
bool        raw_data_mode
uint16      steer_angle_ack
int8        temperature
float32     spd_comp_factor
uint8       grouping_mode
float32     yaw_rate_bias
string      sw_version_dsp

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
  __slots__ = ['header','canmsg','rolling_count2','max_track_ack','overheat_error','range_perf_error','internal_error','xcvr_operational','raw_data_mode','steer_angle_ack','temperature','spd_comp_factor','grouping_mode','yaw_rate_bias','sw_version_dsp']
  _slot_types = ['std_msgs/Header','string','uint8','uint8','bool','bool','bool','bool','bool','uint16','int8','float32','uint8','float32','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,canmsg,rolling_count2,max_track_ack,overheat_error,range_perf_error,internal_error,xcvr_operational,raw_data_mode,steer_angle_ack,temperature,spd_comp_factor,grouping_mode,yaw_rate_bias,sw_version_dsp

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EsrStatus2, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.canmsg is None:
        self.canmsg = ''
      if self.rolling_count2 is None:
        self.rolling_count2 = 0
      if self.max_track_ack is None:
        self.max_track_ack = 0
      if self.overheat_error is None:
        self.overheat_error = False
      if self.range_perf_error is None:
        self.range_perf_error = False
      if self.internal_error is None:
        self.internal_error = False
      if self.xcvr_operational is None:
        self.xcvr_operational = False
      if self.raw_data_mode is None:
        self.raw_data_mode = False
      if self.steer_angle_ack is None:
        self.steer_angle_ack = 0
      if self.temperature is None:
        self.temperature = 0
      if self.spd_comp_factor is None:
        self.spd_comp_factor = 0.
      if self.grouping_mode is None:
        self.grouping_mode = 0
      if self.yaw_rate_bias is None:
        self.yaw_rate_bias = 0.
      if self.sw_version_dsp is None:
        self.sw_version_dsp = ''
    else:
      self.header = std_msgs.msg.Header()
      self.canmsg = ''
      self.rolling_count2 = 0
      self.max_track_ack = 0
      self.overheat_error = False
      self.range_perf_error = False
      self.internal_error = False
      self.xcvr_operational = False
      self.raw_data_mode = False
      self.steer_angle_ack = 0
      self.temperature = 0
      self.spd_comp_factor = 0.
      self.grouping_mode = 0
      self.yaw_rate_bias = 0.
      self.sw_version_dsp = ''

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
      buff.write(_get_struct_7BHbfBf().pack(_x.rolling_count2, _x.max_track_ack, _x.overheat_error, _x.range_perf_error, _x.internal_error, _x.xcvr_operational, _x.raw_data_mode, _x.steer_angle_ack, _x.temperature, _x.spd_comp_factor, _x.grouping_mode, _x.yaw_rate_bias))
      _x = self.sw_version_dsp
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
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
      end += 19
      (_x.rolling_count2, _x.max_track_ack, _x.overheat_error, _x.range_perf_error, _x.internal_error, _x.xcvr_operational, _x.raw_data_mode, _x.steer_angle_ack, _x.temperature, _x.spd_comp_factor, _x.grouping_mode, _x.yaw_rate_bias,) = _get_struct_7BHbfBf().unpack(str[start:end])
      self.overheat_error = bool(self.overheat_error)
      self.range_perf_error = bool(self.range_perf_error)
      self.internal_error = bool(self.internal_error)
      self.xcvr_operational = bool(self.xcvr_operational)
      self.raw_data_mode = bool(self.raw_data_mode)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sw_version_dsp = str[start:end].decode('utf-8')
      else:
        self.sw_version_dsp = str[start:end]
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
      buff.write(_get_struct_7BHbfBf().pack(_x.rolling_count2, _x.max_track_ack, _x.overheat_error, _x.range_perf_error, _x.internal_error, _x.xcvr_operational, _x.raw_data_mode, _x.steer_angle_ack, _x.temperature, _x.spd_comp_factor, _x.grouping_mode, _x.yaw_rate_bias))
      _x = self.sw_version_dsp
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
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
      end += 19
      (_x.rolling_count2, _x.max_track_ack, _x.overheat_error, _x.range_perf_error, _x.internal_error, _x.xcvr_operational, _x.raw_data_mode, _x.steer_angle_ack, _x.temperature, _x.spd_comp_factor, _x.grouping_mode, _x.yaw_rate_bias,) = _get_struct_7BHbfBf().unpack(str[start:end])
      self.overheat_error = bool(self.overheat_error)
      self.range_perf_error = bool(self.range_perf_error)
      self.internal_error = bool(self.internal_error)
      self.xcvr_operational = bool(self.xcvr_operational)
      self.raw_data_mode = bool(self.raw_data_mode)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sw_version_dsp = str[start:end].decode('utf-8')
      else:
        self.sw_version_dsp = str[start:end]
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
_struct_7BHbfBf = None
def _get_struct_7BHbfBf():
    global _struct_7BHbfBf
    if _struct_7BHbfBf is None:
        _struct_7BHbfBf = struct.Struct("<7BHbfBf")
    return _struct_7BHbfBf