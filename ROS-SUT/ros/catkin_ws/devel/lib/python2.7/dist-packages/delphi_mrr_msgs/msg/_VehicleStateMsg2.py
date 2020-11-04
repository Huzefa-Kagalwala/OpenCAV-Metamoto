# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_mrr_msgs/VehicleStateMsg2.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class VehicleStateMsg2(genpy.Message):
  _md5sum = "5063ce040d482c3323905bf32060059a"
  _type = "delphi_mrr_msgs/VehicleStateMsg2"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

bool    fsm_yaw_rate_valid
float32 fsm_yaw_rate
uint16  can_vehicle_index4fa
float32 fsm_vehicle_velocity
bool    can_steering_whl_angle_qf
uint16  can_steering_whl_angle

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
  __slots__ = ['header','fsm_yaw_rate_valid','fsm_yaw_rate','can_vehicle_index4fa','fsm_vehicle_velocity','can_steering_whl_angle_qf','can_steering_whl_angle']
  _slot_types = ['std_msgs/Header','bool','float32','uint16','float32','bool','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,fsm_yaw_rate_valid,fsm_yaw_rate,can_vehicle_index4fa,fsm_vehicle_velocity,can_steering_whl_angle_qf,can_steering_whl_angle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VehicleStateMsg2, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.fsm_yaw_rate_valid is None:
        self.fsm_yaw_rate_valid = False
      if self.fsm_yaw_rate is None:
        self.fsm_yaw_rate = 0.
      if self.can_vehicle_index4fa is None:
        self.can_vehicle_index4fa = 0
      if self.fsm_vehicle_velocity is None:
        self.fsm_vehicle_velocity = 0.
      if self.can_steering_whl_angle_qf is None:
        self.can_steering_whl_angle_qf = False
      if self.can_steering_whl_angle is None:
        self.can_steering_whl_angle = 0
    else:
      self.header = std_msgs.msg.Header()
      self.fsm_yaw_rate_valid = False
      self.fsm_yaw_rate = 0.
      self.can_vehicle_index4fa = 0
      self.fsm_vehicle_velocity = 0.
      self.can_steering_whl_angle_qf = False
      self.can_steering_whl_angle = 0

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
      buff.write(_get_struct_BfHfBH().pack(_x.fsm_yaw_rate_valid, _x.fsm_yaw_rate, _x.can_vehicle_index4fa, _x.fsm_vehicle_velocity, _x.can_steering_whl_angle_qf, _x.can_steering_whl_angle))
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
      end += 14
      (_x.fsm_yaw_rate_valid, _x.fsm_yaw_rate, _x.can_vehicle_index4fa, _x.fsm_vehicle_velocity, _x.can_steering_whl_angle_qf, _x.can_steering_whl_angle,) = _get_struct_BfHfBH().unpack(str[start:end])
      self.fsm_yaw_rate_valid = bool(self.fsm_yaw_rate_valid)
      self.can_steering_whl_angle_qf = bool(self.can_steering_whl_angle_qf)
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
      buff.write(_get_struct_BfHfBH().pack(_x.fsm_yaw_rate_valid, _x.fsm_yaw_rate, _x.can_vehicle_index4fa, _x.fsm_vehicle_velocity, _x.can_steering_whl_angle_qf, _x.can_steering_whl_angle))
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
      end += 14
      (_x.fsm_yaw_rate_valid, _x.fsm_yaw_rate, _x.can_vehicle_index4fa, _x.fsm_vehicle_velocity, _x.can_steering_whl_angle_qf, _x.can_steering_whl_angle,) = _get_struct_BfHfBH().unpack(str[start:end])
      self.fsm_yaw_rate_valid = bool(self.fsm_yaw_rate_valid)
      self.can_steering_whl_angle_qf = bool(self.can_steering_whl_angle_qf)
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
_struct_BfHfBH = None
def _get_struct_BfHfBH():
    global _struct_BfHfBH
    if _struct_BfHfBH is None:
        _struct_BfHfBH = struct.Struct("<BfHfBH")
    return _struct_BfHfBH