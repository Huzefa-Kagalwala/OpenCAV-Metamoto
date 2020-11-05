# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_srr_msgs/SrrStatus2.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class SrrStatus2(genpy.Message):
  _md5sum = "2b05d1c3cfa8185e9616806113ff9b8c"
  _type = "delphi_srr_msgs/SrrStatus2"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Message file for srr_status2

std_msgs/Header header

uint8     can_tx_alignment_status
uint8     CAN_TX_ALIGNMENT_STATUS_UNKNOWN=0
uint8     CAN_TX_ALIGNMENT_STATUS_CONVERGED=1
uint8     CAN_TX_ALIGNMENT_STATUS_FAILED=2
uint8     CAN_TX_ALIGNMENT_STATUS_RESERVED=3

bool      can_tx_comm_error
bool      can_tx_steering_angle_sign
float32   can_tx_yaw_rate_bias
float32   can_tx_veh_spd_comp_factor
uint16    can_tx_sw_version_dsp
int16     can_tx_temperature                       # degc
bool      can_tx_range_perf_error
bool      can_tx_overheat_error
bool      can_tx_internal_error
bool      can_tx_xcvr_operational
uint16    can_tx_steering_angle                    # deg
uint8     can_tx_rolling_count_2


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
  CAN_TX_ALIGNMENT_STATUS_UNKNOWN = 0
  CAN_TX_ALIGNMENT_STATUS_CONVERGED = 1
  CAN_TX_ALIGNMENT_STATUS_FAILED = 2
  CAN_TX_ALIGNMENT_STATUS_RESERVED = 3

  __slots__ = ['header','can_tx_alignment_status','can_tx_comm_error','can_tx_steering_angle_sign','can_tx_yaw_rate_bias','can_tx_veh_spd_comp_factor','can_tx_sw_version_dsp','can_tx_temperature','can_tx_range_perf_error','can_tx_overheat_error','can_tx_internal_error','can_tx_xcvr_operational','can_tx_steering_angle','can_tx_rolling_count_2']
  _slot_types = ['std_msgs/Header','uint8','bool','bool','float32','float32','uint16','int16','bool','bool','bool','bool','uint16','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,can_tx_alignment_status,can_tx_comm_error,can_tx_steering_angle_sign,can_tx_yaw_rate_bias,can_tx_veh_spd_comp_factor,can_tx_sw_version_dsp,can_tx_temperature,can_tx_range_perf_error,can_tx_overheat_error,can_tx_internal_error,can_tx_xcvr_operational,can_tx_steering_angle,can_tx_rolling_count_2

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SrrStatus2, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.can_tx_alignment_status is None:
        self.can_tx_alignment_status = 0
      if self.can_tx_comm_error is None:
        self.can_tx_comm_error = False
      if self.can_tx_steering_angle_sign is None:
        self.can_tx_steering_angle_sign = False
      if self.can_tx_yaw_rate_bias is None:
        self.can_tx_yaw_rate_bias = 0.
      if self.can_tx_veh_spd_comp_factor is None:
        self.can_tx_veh_spd_comp_factor = 0.
      if self.can_tx_sw_version_dsp is None:
        self.can_tx_sw_version_dsp = 0
      if self.can_tx_temperature is None:
        self.can_tx_temperature = 0
      if self.can_tx_range_perf_error is None:
        self.can_tx_range_perf_error = False
      if self.can_tx_overheat_error is None:
        self.can_tx_overheat_error = False
      if self.can_tx_internal_error is None:
        self.can_tx_internal_error = False
      if self.can_tx_xcvr_operational is None:
        self.can_tx_xcvr_operational = False
      if self.can_tx_steering_angle is None:
        self.can_tx_steering_angle = 0
      if self.can_tx_rolling_count_2 is None:
        self.can_tx_rolling_count_2 = 0
    else:
      self.header = std_msgs.msg.Header()
      self.can_tx_alignment_status = 0
      self.can_tx_comm_error = False
      self.can_tx_steering_angle_sign = False
      self.can_tx_yaw_rate_bias = 0.
      self.can_tx_veh_spd_comp_factor = 0.
      self.can_tx_sw_version_dsp = 0
      self.can_tx_temperature = 0
      self.can_tx_range_perf_error = False
      self.can_tx_overheat_error = False
      self.can_tx_internal_error = False
      self.can_tx_xcvr_operational = False
      self.can_tx_steering_angle = 0
      self.can_tx_rolling_count_2 = 0

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
      buff.write(_get_struct_3B2fHh4BHB().pack(_x.can_tx_alignment_status, _x.can_tx_comm_error, _x.can_tx_steering_angle_sign, _x.can_tx_yaw_rate_bias, _x.can_tx_veh_spd_comp_factor, _x.can_tx_sw_version_dsp, _x.can_tx_temperature, _x.can_tx_range_perf_error, _x.can_tx_overheat_error, _x.can_tx_internal_error, _x.can_tx_xcvr_operational, _x.can_tx_steering_angle, _x.can_tx_rolling_count_2))
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
      end += 22
      (_x.can_tx_alignment_status, _x.can_tx_comm_error, _x.can_tx_steering_angle_sign, _x.can_tx_yaw_rate_bias, _x.can_tx_veh_spd_comp_factor, _x.can_tx_sw_version_dsp, _x.can_tx_temperature, _x.can_tx_range_perf_error, _x.can_tx_overheat_error, _x.can_tx_internal_error, _x.can_tx_xcvr_operational, _x.can_tx_steering_angle, _x.can_tx_rolling_count_2,) = _get_struct_3B2fHh4BHB().unpack(str[start:end])
      self.can_tx_comm_error = bool(self.can_tx_comm_error)
      self.can_tx_steering_angle_sign = bool(self.can_tx_steering_angle_sign)
      self.can_tx_range_perf_error = bool(self.can_tx_range_perf_error)
      self.can_tx_overheat_error = bool(self.can_tx_overheat_error)
      self.can_tx_internal_error = bool(self.can_tx_internal_error)
      self.can_tx_xcvr_operational = bool(self.can_tx_xcvr_operational)
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
      buff.write(_get_struct_3B2fHh4BHB().pack(_x.can_tx_alignment_status, _x.can_tx_comm_error, _x.can_tx_steering_angle_sign, _x.can_tx_yaw_rate_bias, _x.can_tx_veh_spd_comp_factor, _x.can_tx_sw_version_dsp, _x.can_tx_temperature, _x.can_tx_range_perf_error, _x.can_tx_overheat_error, _x.can_tx_internal_error, _x.can_tx_xcvr_operational, _x.can_tx_steering_angle, _x.can_tx_rolling_count_2))
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
      end += 22
      (_x.can_tx_alignment_status, _x.can_tx_comm_error, _x.can_tx_steering_angle_sign, _x.can_tx_yaw_rate_bias, _x.can_tx_veh_spd_comp_factor, _x.can_tx_sw_version_dsp, _x.can_tx_temperature, _x.can_tx_range_perf_error, _x.can_tx_overheat_error, _x.can_tx_internal_error, _x.can_tx_xcvr_operational, _x.can_tx_steering_angle, _x.can_tx_rolling_count_2,) = _get_struct_3B2fHh4BHB().unpack(str[start:end])
      self.can_tx_comm_error = bool(self.can_tx_comm_error)
      self.can_tx_steering_angle_sign = bool(self.can_tx_steering_angle_sign)
      self.can_tx_range_perf_error = bool(self.can_tx_range_perf_error)
      self.can_tx_overheat_error = bool(self.can_tx_overheat_error)
      self.can_tx_internal_error = bool(self.can_tx_internal_error)
      self.can_tx_xcvr_operational = bool(self.can_tx_xcvr_operational)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B2fHh4BHB = None
def _get_struct_3B2fHh4BHB():
    global _struct_3B2fHh4BHB
    if _struct_3B2fHh4BHB is None:
        _struct_3B2fHh4BHB = struct.Struct("<3B2fHh4BHB")
    return _struct_3B2fHh4BHB
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
