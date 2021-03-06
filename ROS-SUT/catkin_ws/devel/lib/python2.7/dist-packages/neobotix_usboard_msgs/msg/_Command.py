# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from neobotix_usboard_msgs/Command.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class Command(genpy.Message):
  _md5sum = "aa2adac976b058480751c90ad9fb67d8"
  _type = "neobotix_usboard_msgs/Command"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Message file for Command

std_msgs/Header header

uint8     command                                 
uint64    command_data                            
uint8     set_num                                 
uint8     paraset_byte6                     
uint8     paraset_byte5                     
uint8     paraset_byte4                     
uint8     paraset_byte3                     
uint8     paraset_byte2                     
uint8     paraset_byte1                     
uint8     set_active_9to16                        
uint8     set_active_1to8                         

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
  __slots__ = ['header','command','command_data','set_num','paraset_byte6','paraset_byte5','paraset_byte4','paraset_byte3','paraset_byte2','paraset_byte1','set_active_9to16','set_active_1to8']
  _slot_types = ['std_msgs/Header','uint8','uint64','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,command,command_data,set_num,paraset_byte6,paraset_byte5,paraset_byte4,paraset_byte3,paraset_byte2,paraset_byte1,set_active_9to16,set_active_1to8

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Command, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.command is None:
        self.command = 0
      if self.command_data is None:
        self.command_data = 0
      if self.set_num is None:
        self.set_num = 0
      if self.paraset_byte6 is None:
        self.paraset_byte6 = 0
      if self.paraset_byte5 is None:
        self.paraset_byte5 = 0
      if self.paraset_byte4 is None:
        self.paraset_byte4 = 0
      if self.paraset_byte3 is None:
        self.paraset_byte3 = 0
      if self.paraset_byte2 is None:
        self.paraset_byte2 = 0
      if self.paraset_byte1 is None:
        self.paraset_byte1 = 0
      if self.set_active_9to16 is None:
        self.set_active_9to16 = 0
      if self.set_active_1to8 is None:
        self.set_active_1to8 = 0
    else:
      self.header = std_msgs.msg.Header()
      self.command = 0
      self.command_data = 0
      self.set_num = 0
      self.paraset_byte6 = 0
      self.paraset_byte5 = 0
      self.paraset_byte4 = 0
      self.paraset_byte3 = 0
      self.paraset_byte2 = 0
      self.paraset_byte1 = 0
      self.set_active_9to16 = 0
      self.set_active_1to8 = 0

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
      buff.write(_get_struct_BQ9B().pack(_x.command, _x.command_data, _x.set_num, _x.paraset_byte6, _x.paraset_byte5, _x.paraset_byte4, _x.paraset_byte3, _x.paraset_byte2, _x.paraset_byte1, _x.set_active_9to16, _x.set_active_1to8))
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
      end += 18
      (_x.command, _x.command_data, _x.set_num, _x.paraset_byte6, _x.paraset_byte5, _x.paraset_byte4, _x.paraset_byte3, _x.paraset_byte2, _x.paraset_byte1, _x.set_active_9to16, _x.set_active_1to8,) = _get_struct_BQ9B().unpack(str[start:end])
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
      buff.write(_get_struct_BQ9B().pack(_x.command, _x.command_data, _x.set_num, _x.paraset_byte6, _x.paraset_byte5, _x.paraset_byte4, _x.paraset_byte3, _x.paraset_byte2, _x.paraset_byte1, _x.set_active_9to16, _x.set_active_1to8))
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
      end += 18
      (_x.command, _x.command_data, _x.set_num, _x.paraset_byte6, _x.paraset_byte5, _x.paraset_byte4, _x.paraset_byte3, _x.paraset_byte2, _x.paraset_byte1, _x.set_active_9to16, _x.set_active_1to8,) = _get_struct_BQ9B().unpack(str[start:end])
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
_struct_BQ9B = None
def _get_struct_BQ9B():
    global _struct_BQ9B
    if _struct_BQ9B is None:
        _struct_BQ9B = struct.Struct("<BQ9B")
    return _struct_BQ9B
