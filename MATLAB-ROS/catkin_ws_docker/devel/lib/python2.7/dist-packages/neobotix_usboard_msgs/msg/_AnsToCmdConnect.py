# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from neobotix_usboard_msgs/AnsToCmdConnect.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class AnsToCmdConnect(genpy.Message):
  _md5sum = "d1ef60b13020f0e599d4fbb33f17b3f1"
  _type = "neobotix_usboard_msgs/AnsToCmdConnect"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Message file for AnsToCmdConnect

std_msgs/Header header

uint8     command                                 
uint8     cmd_connect_ans_d7                      
uint8     cmd_connect_ans_d6                      
uint8     cmd_connect_ans_d5                      
uint8     cmd_connect_ans_d4                      
uint8     cmd_connect_ans_d3                      
uint8     cmd_connect_ans_d2                      
uint8     cmd_connect_ans_d1                      

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
  __slots__ = ['header','command','cmd_connect_ans_d7','cmd_connect_ans_d6','cmd_connect_ans_d5','cmd_connect_ans_d4','cmd_connect_ans_d3','cmd_connect_ans_d2','cmd_connect_ans_d1']
  _slot_types = ['std_msgs/Header','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,command,cmd_connect_ans_d7,cmd_connect_ans_d6,cmd_connect_ans_d5,cmd_connect_ans_d4,cmd_connect_ans_d3,cmd_connect_ans_d2,cmd_connect_ans_d1

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AnsToCmdConnect, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.command is None:
        self.command = 0
      if self.cmd_connect_ans_d7 is None:
        self.cmd_connect_ans_d7 = 0
      if self.cmd_connect_ans_d6 is None:
        self.cmd_connect_ans_d6 = 0
      if self.cmd_connect_ans_d5 is None:
        self.cmd_connect_ans_d5 = 0
      if self.cmd_connect_ans_d4 is None:
        self.cmd_connect_ans_d4 = 0
      if self.cmd_connect_ans_d3 is None:
        self.cmd_connect_ans_d3 = 0
      if self.cmd_connect_ans_d2 is None:
        self.cmd_connect_ans_d2 = 0
      if self.cmd_connect_ans_d1 is None:
        self.cmd_connect_ans_d1 = 0
    else:
      self.header = std_msgs.msg.Header()
      self.command = 0
      self.cmd_connect_ans_d7 = 0
      self.cmd_connect_ans_d6 = 0
      self.cmd_connect_ans_d5 = 0
      self.cmd_connect_ans_d4 = 0
      self.cmd_connect_ans_d3 = 0
      self.cmd_connect_ans_d2 = 0
      self.cmd_connect_ans_d1 = 0

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
      buff.write(_get_struct_8B().pack(_x.command, _x.cmd_connect_ans_d7, _x.cmd_connect_ans_d6, _x.cmd_connect_ans_d5, _x.cmd_connect_ans_d4, _x.cmd_connect_ans_d3, _x.cmd_connect_ans_d2, _x.cmd_connect_ans_d1))
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
      end += 8
      (_x.command, _x.cmd_connect_ans_d7, _x.cmd_connect_ans_d6, _x.cmd_connect_ans_d5, _x.cmd_connect_ans_d4, _x.cmd_connect_ans_d3, _x.cmd_connect_ans_d2, _x.cmd_connect_ans_d1,) = _get_struct_8B().unpack(str[start:end])
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
      buff.write(_get_struct_8B().pack(_x.command, _x.cmd_connect_ans_d7, _x.cmd_connect_ans_d6, _x.cmd_connect_ans_d5, _x.cmd_connect_ans_d4, _x.cmd_connect_ans_d3, _x.cmd_connect_ans_d2, _x.cmd_connect_ans_d1))
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
      end += 8
      (_x.command, _x.cmd_connect_ans_d7, _x.cmd_connect_ans_d6, _x.cmd_connect_ans_d5, _x.cmd_connect_ans_d4, _x.cmd_connect_ans_d3, _x.cmd_connect_ans_d2, _x.cmd_connect_ans_d1,) = _get_struct_8B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8B = None
def _get_struct_8B():
    global _struct_8B
    if _struct_8B is None:
        _struct_8B = struct.Struct("<8B")
    return _struct_8B
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
