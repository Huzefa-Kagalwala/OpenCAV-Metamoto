# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_esr_msgs/EsrStatus9.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class EsrStatus9(genpy.Message):
  _md5sum = "5b168b544c1d619478bacb46ee366ea7"
  _type = "delphi_esr_msgs/EsrStatus9"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

# ESR status9
string      canmsg
uint16      avg_pwr_cwblkg
float32     side_slip_angle
uint8       serial_num3rd_byte
uint8       water_spray_target_id
float32     filtered_xohp_acc_cipv
uint8       path_id_acc2
uint8       path_id_acc3

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
  __slots__ = ['header','canmsg','avg_pwr_cwblkg','side_slip_angle','serial_num3rd_byte','water_spray_target_id','filtered_xohp_acc_cipv','path_id_acc2','path_id_acc3']
  _slot_types = ['std_msgs/Header','string','uint16','float32','uint8','uint8','float32','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,canmsg,avg_pwr_cwblkg,side_slip_angle,serial_num3rd_byte,water_spray_target_id,filtered_xohp_acc_cipv,path_id_acc2,path_id_acc3

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EsrStatus9, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.canmsg is None:
        self.canmsg = ''
      if self.avg_pwr_cwblkg is None:
        self.avg_pwr_cwblkg = 0
      if self.side_slip_angle is None:
        self.side_slip_angle = 0.
      if self.serial_num3rd_byte is None:
        self.serial_num3rd_byte = 0
      if self.water_spray_target_id is None:
        self.water_spray_target_id = 0
      if self.filtered_xohp_acc_cipv is None:
        self.filtered_xohp_acc_cipv = 0.
      if self.path_id_acc2 is None:
        self.path_id_acc2 = 0
      if self.path_id_acc3 is None:
        self.path_id_acc3 = 0
    else:
      self.header = std_msgs.msg.Header()
      self.canmsg = ''
      self.avg_pwr_cwblkg = 0
      self.side_slip_angle = 0.
      self.serial_num3rd_byte = 0
      self.water_spray_target_id = 0
      self.filtered_xohp_acc_cipv = 0.
      self.path_id_acc2 = 0
      self.path_id_acc3 = 0

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
      buff.write(_get_struct_Hf2Bf2B().pack(_x.avg_pwr_cwblkg, _x.side_slip_angle, _x.serial_num3rd_byte, _x.water_spray_target_id, _x.filtered_xohp_acc_cipv, _x.path_id_acc2, _x.path_id_acc3))
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
      (_x.avg_pwr_cwblkg, _x.side_slip_angle, _x.serial_num3rd_byte, _x.water_spray_target_id, _x.filtered_xohp_acc_cipv, _x.path_id_acc2, _x.path_id_acc3,) = _get_struct_Hf2Bf2B().unpack(str[start:end])
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
      buff.write(_get_struct_Hf2Bf2B().pack(_x.avg_pwr_cwblkg, _x.side_slip_angle, _x.serial_num3rd_byte, _x.water_spray_target_id, _x.filtered_xohp_acc_cipv, _x.path_id_acc2, _x.path_id_acc3))
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
      (_x.avg_pwr_cwblkg, _x.side_slip_angle, _x.serial_num3rd_byte, _x.water_spray_target_id, _x.filtered_xohp_acc_cipv, _x.path_id_acc2, _x.path_id_acc3,) = _get_struct_Hf2Bf2B().unpack(str[start:end])
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
_struct_Hf2Bf2B = None
def _get_struct_Hf2Bf2B():
    global _struct_Hf2Bf2B
    if _struct_Hf2Bf2B is None:
        _struct_Hf2Bf2B = struct.Struct("<Hf2Bf2B")
    return _struct_Hf2Bf2B
