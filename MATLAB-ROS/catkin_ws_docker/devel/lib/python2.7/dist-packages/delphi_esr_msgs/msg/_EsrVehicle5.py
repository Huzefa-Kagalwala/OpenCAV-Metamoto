# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_esr_msgs/EsrVehicle5.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class EsrVehicle5(genpy.Message):
  _md5sum = "e4135fc6914a28e2c947a8270cd84b22"
  _type = "delphi_esr_msgs/EsrVehicle5"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

# ESR vehicle5
int8        oversteer_understeer
bool        yaw_rate_bias_shift
float32     beamwidth_vert
float32     funnel_offset_left
float32     funnel_offset_right
float32     cw_blockage_threshold
uint16      distance_rear_axle
uint16      wheel_base
float32     steering_gear_ratio       

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
  __slots__ = ['header','oversteer_understeer','yaw_rate_bias_shift','beamwidth_vert','funnel_offset_left','funnel_offset_right','cw_blockage_threshold','distance_rear_axle','wheel_base','steering_gear_ratio']
  _slot_types = ['std_msgs/Header','int8','bool','float32','float32','float32','float32','uint16','uint16','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,oversteer_understeer,yaw_rate_bias_shift,beamwidth_vert,funnel_offset_left,funnel_offset_right,cw_blockage_threshold,distance_rear_axle,wheel_base,steering_gear_ratio

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EsrVehicle5, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.oversteer_understeer is None:
        self.oversteer_understeer = 0
      if self.yaw_rate_bias_shift is None:
        self.yaw_rate_bias_shift = False
      if self.beamwidth_vert is None:
        self.beamwidth_vert = 0.
      if self.funnel_offset_left is None:
        self.funnel_offset_left = 0.
      if self.funnel_offset_right is None:
        self.funnel_offset_right = 0.
      if self.cw_blockage_threshold is None:
        self.cw_blockage_threshold = 0.
      if self.distance_rear_axle is None:
        self.distance_rear_axle = 0
      if self.wheel_base is None:
        self.wheel_base = 0
      if self.steering_gear_ratio is None:
        self.steering_gear_ratio = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.oversteer_understeer = 0
      self.yaw_rate_bias_shift = False
      self.beamwidth_vert = 0.
      self.funnel_offset_left = 0.
      self.funnel_offset_right = 0.
      self.cw_blockage_threshold = 0.
      self.distance_rear_axle = 0
      self.wheel_base = 0
      self.steering_gear_ratio = 0.

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
      buff.write(_get_struct_bB4f2Hf().pack(_x.oversteer_understeer, _x.yaw_rate_bias_shift, _x.beamwidth_vert, _x.funnel_offset_left, _x.funnel_offset_right, _x.cw_blockage_threshold, _x.distance_rear_axle, _x.wheel_base, _x.steering_gear_ratio))
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
      end += 26
      (_x.oversteer_understeer, _x.yaw_rate_bias_shift, _x.beamwidth_vert, _x.funnel_offset_left, _x.funnel_offset_right, _x.cw_blockage_threshold, _x.distance_rear_axle, _x.wheel_base, _x.steering_gear_ratio,) = _get_struct_bB4f2Hf().unpack(str[start:end])
      self.yaw_rate_bias_shift = bool(self.yaw_rate_bias_shift)
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
      buff.write(_get_struct_bB4f2Hf().pack(_x.oversteer_understeer, _x.yaw_rate_bias_shift, _x.beamwidth_vert, _x.funnel_offset_left, _x.funnel_offset_right, _x.cw_blockage_threshold, _x.distance_rear_axle, _x.wheel_base, _x.steering_gear_ratio))
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
      end += 26
      (_x.oversteer_understeer, _x.yaw_rate_bias_shift, _x.beamwidth_vert, _x.funnel_offset_left, _x.funnel_offset_right, _x.cw_blockage_threshold, _x.distance_rear_axle, _x.wheel_base, _x.steering_gear_ratio,) = _get_struct_bB4f2Hf().unpack(str[start:end])
      self.yaw_rate_bias_shift = bool(self.yaw_rate_bias_shift)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_bB4f2Hf = None
def _get_struct_bB4f2Hf():
    global _struct_bB4f2Hf
    if _struct_bB4f2Hf is None:
        _struct_bB4f2Hf = struct.Struct("<bB4f2Hf")
    return _struct_bB4f2Hf
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
