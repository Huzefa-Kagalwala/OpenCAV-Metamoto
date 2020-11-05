# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kartech_linear_actuator_msgs/EnhancedPositionRpt.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class EnhancedPositionRpt(genpy.Message):
  _md5sum = "b5d14804230789155d91f65364c956fd"
  _type = "kartech_linear_actuator_msgs/EnhancedPositionRpt"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header
float64 shaft_extension     # The current shaft position in 0.001" increments.
bool motor_overload_error
bool clutch_overload_error
bool motor_open_load_error
bool clutch_open_load_error
bool position_reach_error
bool hardware_warning_1_error
bool hardware_warning_2_error
uint16 motor_current        # The current motor current in mA.

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
  __slots__ = ['header','shaft_extension','motor_overload_error','clutch_overload_error','motor_open_load_error','clutch_open_load_error','position_reach_error','hardware_warning_1_error','hardware_warning_2_error','motor_current']
  _slot_types = ['std_msgs/Header','float64','bool','bool','bool','bool','bool','bool','bool','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,shaft_extension,motor_overload_error,clutch_overload_error,motor_open_load_error,clutch_open_load_error,position_reach_error,hardware_warning_1_error,hardware_warning_2_error,motor_current

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EnhancedPositionRpt, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.shaft_extension is None:
        self.shaft_extension = 0.
      if self.motor_overload_error is None:
        self.motor_overload_error = False
      if self.clutch_overload_error is None:
        self.clutch_overload_error = False
      if self.motor_open_load_error is None:
        self.motor_open_load_error = False
      if self.clutch_open_load_error is None:
        self.clutch_open_load_error = False
      if self.position_reach_error is None:
        self.position_reach_error = False
      if self.hardware_warning_1_error is None:
        self.hardware_warning_1_error = False
      if self.hardware_warning_2_error is None:
        self.hardware_warning_2_error = False
      if self.motor_current is None:
        self.motor_current = 0
    else:
      self.header = std_msgs.msg.Header()
      self.shaft_extension = 0.
      self.motor_overload_error = False
      self.clutch_overload_error = False
      self.motor_open_load_error = False
      self.clutch_open_load_error = False
      self.position_reach_error = False
      self.hardware_warning_1_error = False
      self.hardware_warning_2_error = False
      self.motor_current = 0

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
      buff.write(_get_struct_d7BH().pack(_x.shaft_extension, _x.motor_overload_error, _x.clutch_overload_error, _x.motor_open_load_error, _x.clutch_open_load_error, _x.position_reach_error, _x.hardware_warning_1_error, _x.hardware_warning_2_error, _x.motor_current))
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
      end += 17
      (_x.shaft_extension, _x.motor_overload_error, _x.clutch_overload_error, _x.motor_open_load_error, _x.clutch_open_load_error, _x.position_reach_error, _x.hardware_warning_1_error, _x.hardware_warning_2_error, _x.motor_current,) = _get_struct_d7BH().unpack(str[start:end])
      self.motor_overload_error = bool(self.motor_overload_error)
      self.clutch_overload_error = bool(self.clutch_overload_error)
      self.motor_open_load_error = bool(self.motor_open_load_error)
      self.clutch_open_load_error = bool(self.clutch_open_load_error)
      self.position_reach_error = bool(self.position_reach_error)
      self.hardware_warning_1_error = bool(self.hardware_warning_1_error)
      self.hardware_warning_2_error = bool(self.hardware_warning_2_error)
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
      buff.write(_get_struct_d7BH().pack(_x.shaft_extension, _x.motor_overload_error, _x.clutch_overload_error, _x.motor_open_load_error, _x.clutch_open_load_error, _x.position_reach_error, _x.hardware_warning_1_error, _x.hardware_warning_2_error, _x.motor_current))
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
      end += 17
      (_x.shaft_extension, _x.motor_overload_error, _x.clutch_overload_error, _x.motor_open_load_error, _x.clutch_open_load_error, _x.position_reach_error, _x.hardware_warning_1_error, _x.hardware_warning_2_error, _x.motor_current,) = _get_struct_d7BH().unpack(str[start:end])
      self.motor_overload_error = bool(self.motor_overload_error)
      self.clutch_overload_error = bool(self.clutch_overload_error)
      self.motor_open_load_error = bool(self.motor_open_load_error)
      self.clutch_open_load_error = bool(self.clutch_open_load_error)
      self.position_reach_error = bool(self.position_reach_error)
      self.hardware_warning_1_error = bool(self.hardware_warning_1_error)
      self.hardware_warning_2_error = bool(self.hardware_warning_2_error)
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
_struct_d7BH = None
def _get_struct_d7BH():
    global _struct_d7BH
    if _struct_d7BH is None:
        _struct_d7BH = struct.Struct("<d7BH")
    return _struct_d7BH
