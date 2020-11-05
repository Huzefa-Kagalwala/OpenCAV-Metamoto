# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_mrr_msgs/MrrControlMsgFR.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class MrrControlMsgFR(genpy.Message):
  _md5sum = "dba2c9fc1e4b47706ab1d6d7c85d6d53"
  _type = "delphi_mrr_msgs/MrrControlMsgFR"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

uint8     can_sensitivity_profile_select
uint16    can_stop_frequency_frml
uint16    can_stop_frequency_frll
float32   can_prp_factor_frml
float32   can_prp_factor_frll
uint8     can_desired_sweep_bw_frml
uint8     can_desired_sweep_bw_frll

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
  __slots__ = ['header','can_sensitivity_profile_select','can_stop_frequency_frml','can_stop_frequency_frll','can_prp_factor_frml','can_prp_factor_frll','can_desired_sweep_bw_frml','can_desired_sweep_bw_frll']
  _slot_types = ['std_msgs/Header','uint8','uint16','uint16','float32','float32','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,can_sensitivity_profile_select,can_stop_frequency_frml,can_stop_frequency_frll,can_prp_factor_frml,can_prp_factor_frll,can_desired_sweep_bw_frml,can_desired_sweep_bw_frll

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MrrControlMsgFR, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.can_sensitivity_profile_select is None:
        self.can_sensitivity_profile_select = 0
      if self.can_stop_frequency_frml is None:
        self.can_stop_frequency_frml = 0
      if self.can_stop_frequency_frll is None:
        self.can_stop_frequency_frll = 0
      if self.can_prp_factor_frml is None:
        self.can_prp_factor_frml = 0.
      if self.can_prp_factor_frll is None:
        self.can_prp_factor_frll = 0.
      if self.can_desired_sweep_bw_frml is None:
        self.can_desired_sweep_bw_frml = 0
      if self.can_desired_sweep_bw_frll is None:
        self.can_desired_sweep_bw_frll = 0
    else:
      self.header = std_msgs.msg.Header()
      self.can_sensitivity_profile_select = 0
      self.can_stop_frequency_frml = 0
      self.can_stop_frequency_frll = 0
      self.can_prp_factor_frml = 0.
      self.can_prp_factor_frll = 0.
      self.can_desired_sweep_bw_frml = 0
      self.can_desired_sweep_bw_frll = 0

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
      buff.write(_get_struct_B2H2f2B().pack(_x.can_sensitivity_profile_select, _x.can_stop_frequency_frml, _x.can_stop_frequency_frll, _x.can_prp_factor_frml, _x.can_prp_factor_frll, _x.can_desired_sweep_bw_frml, _x.can_desired_sweep_bw_frll))
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
      end += 15
      (_x.can_sensitivity_profile_select, _x.can_stop_frequency_frml, _x.can_stop_frequency_frll, _x.can_prp_factor_frml, _x.can_prp_factor_frll, _x.can_desired_sweep_bw_frml, _x.can_desired_sweep_bw_frll,) = _get_struct_B2H2f2B().unpack(str[start:end])
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
      buff.write(_get_struct_B2H2f2B().pack(_x.can_sensitivity_profile_select, _x.can_stop_frequency_frml, _x.can_stop_frequency_frll, _x.can_prp_factor_frml, _x.can_prp_factor_frll, _x.can_desired_sweep_bw_frml, _x.can_desired_sweep_bw_frll))
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
      end += 15
      (_x.can_sensitivity_profile_select, _x.can_stop_frequency_frml, _x.can_stop_frequency_frll, _x.can_prp_factor_frml, _x.can_prp_factor_frll, _x.can_desired_sweep_bw_frml, _x.can_desired_sweep_bw_frll,) = _get_struct_B2H2f2B().unpack(str[start:end])
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
_struct_B2H2f2B = None
def _get_struct_B2H2f2B():
    global _struct_B2H2f2B
    if _struct_B2H2f2B is None:
        _struct_B2H2f2B = struct.Struct("<B2H2f2B")
    return _struct_B2H2f2B
