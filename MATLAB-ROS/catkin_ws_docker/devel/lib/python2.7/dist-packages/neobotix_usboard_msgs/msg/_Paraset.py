# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from neobotix_usboard_msgs/Paraset.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class Paraset(genpy.Message):
  _md5sum = "88e510d038a634b40698407f2e433138"
  _type = "neobotix_usboard_msgs/Paraset"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Message file for Paramset

std_msgs/Header header

uint8      command                                 
uint8      set_num                                 
uint8      paraset_byte54                    
uint8      paraset_byte53                    
uint8      paraset_byte52                    
uint8      paraset_byte51                    
uint8      paraset_byte50                    
uint8      paraset_byte49                    
uint8      paraset_byte48                    
uint8      paraset_byte47                    
uint8      paraset_byte46                    
uint8      paraset_byte45                    
uint8      paraset_byte44                    
uint8      paraset_byte43                    
uint8      paraset_byte42                    
uint8      paraset_byte41                    
uint8      paraset_byte40                    
uint8      paraset_byte39                    
uint8      paraset_byte38                    
uint8      paraset_byte37                    
uint8      paraset_byte36                    
uint8      paraset_byte35                    
uint8      paraset_byte34                    
uint8      paraset_byte33                    
uint8      paraset_byte32                    
uint8      paraset_byte31                    
uint8      paraset_byte30                    
uint8      paraset_byte29                    
uint8      paraset_byte28                    
uint8      paraset_byte27                    
uint8      paraset_byte26                    
uint8      paraset_byte25                    
uint8      paraset_byte24                    
uint8      paraset_byte23                    
uint8      paraset_byte22                    
uint8      paraset_byte21                    
uint8      paraset_byte20                    
uint8      paraset_byte19                    
uint8      paraset_byte18                    
uint8      paraset_byte17                    
uint8      paraset_byte16                    
uint8      paraset_byte15                    
uint8      paraset_byte14                    
uint8      paraset_byte13                    
uint8      paraset_byte12                    
uint8      paraset_byte11                    
uint8      paraset_byte10                    
uint8      paraset_byte9                     
uint8      paraset_byte8                     
uint8      paraset_byte7                     
uint8      paraset_byte6                     
uint8      paraset_byte5                     
uint8      paraset_byte4                     
uint8      paraset_byte3                     
uint8      paraset_byte2                     
uint8      paraset_byte1                     

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
  __slots__ = ['header','command','set_num','paraset_byte54','paraset_byte53','paraset_byte52','paraset_byte51','paraset_byte50','paraset_byte49','paraset_byte48','paraset_byte47','paraset_byte46','paraset_byte45','paraset_byte44','paraset_byte43','paraset_byte42','paraset_byte41','paraset_byte40','paraset_byte39','paraset_byte38','paraset_byte37','paraset_byte36','paraset_byte35','paraset_byte34','paraset_byte33','paraset_byte32','paraset_byte31','paraset_byte30','paraset_byte29','paraset_byte28','paraset_byte27','paraset_byte26','paraset_byte25','paraset_byte24','paraset_byte23','paraset_byte22','paraset_byte21','paraset_byte20','paraset_byte19','paraset_byte18','paraset_byte17','paraset_byte16','paraset_byte15','paraset_byte14','paraset_byte13','paraset_byte12','paraset_byte11','paraset_byte10','paraset_byte9','paraset_byte8','paraset_byte7','paraset_byte6','paraset_byte5','paraset_byte4','paraset_byte3','paraset_byte2','paraset_byte1']
  _slot_types = ['std_msgs/Header','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,command,set_num,paraset_byte54,paraset_byte53,paraset_byte52,paraset_byte51,paraset_byte50,paraset_byte49,paraset_byte48,paraset_byte47,paraset_byte46,paraset_byte45,paraset_byte44,paraset_byte43,paraset_byte42,paraset_byte41,paraset_byte40,paraset_byte39,paraset_byte38,paraset_byte37,paraset_byte36,paraset_byte35,paraset_byte34,paraset_byte33,paraset_byte32,paraset_byte31,paraset_byte30,paraset_byte29,paraset_byte28,paraset_byte27,paraset_byte26,paraset_byte25,paraset_byte24,paraset_byte23,paraset_byte22,paraset_byte21,paraset_byte20,paraset_byte19,paraset_byte18,paraset_byte17,paraset_byte16,paraset_byte15,paraset_byte14,paraset_byte13,paraset_byte12,paraset_byte11,paraset_byte10,paraset_byte9,paraset_byte8,paraset_byte7,paraset_byte6,paraset_byte5,paraset_byte4,paraset_byte3,paraset_byte2,paraset_byte1

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Paraset, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.command is None:
        self.command = 0
      if self.set_num is None:
        self.set_num = 0
      if self.paraset_byte54 is None:
        self.paraset_byte54 = 0
      if self.paraset_byte53 is None:
        self.paraset_byte53 = 0
      if self.paraset_byte52 is None:
        self.paraset_byte52 = 0
      if self.paraset_byte51 is None:
        self.paraset_byte51 = 0
      if self.paraset_byte50 is None:
        self.paraset_byte50 = 0
      if self.paraset_byte49 is None:
        self.paraset_byte49 = 0
      if self.paraset_byte48 is None:
        self.paraset_byte48 = 0
      if self.paraset_byte47 is None:
        self.paraset_byte47 = 0
      if self.paraset_byte46 is None:
        self.paraset_byte46 = 0
      if self.paraset_byte45 is None:
        self.paraset_byte45 = 0
      if self.paraset_byte44 is None:
        self.paraset_byte44 = 0
      if self.paraset_byte43 is None:
        self.paraset_byte43 = 0
      if self.paraset_byte42 is None:
        self.paraset_byte42 = 0
      if self.paraset_byte41 is None:
        self.paraset_byte41 = 0
      if self.paraset_byte40 is None:
        self.paraset_byte40 = 0
      if self.paraset_byte39 is None:
        self.paraset_byte39 = 0
      if self.paraset_byte38 is None:
        self.paraset_byte38 = 0
      if self.paraset_byte37 is None:
        self.paraset_byte37 = 0
      if self.paraset_byte36 is None:
        self.paraset_byte36 = 0
      if self.paraset_byte35 is None:
        self.paraset_byte35 = 0
      if self.paraset_byte34 is None:
        self.paraset_byte34 = 0
      if self.paraset_byte33 is None:
        self.paraset_byte33 = 0
      if self.paraset_byte32 is None:
        self.paraset_byte32 = 0
      if self.paraset_byte31 is None:
        self.paraset_byte31 = 0
      if self.paraset_byte30 is None:
        self.paraset_byte30 = 0
      if self.paraset_byte29 is None:
        self.paraset_byte29 = 0
      if self.paraset_byte28 is None:
        self.paraset_byte28 = 0
      if self.paraset_byte27 is None:
        self.paraset_byte27 = 0
      if self.paraset_byte26 is None:
        self.paraset_byte26 = 0
      if self.paraset_byte25 is None:
        self.paraset_byte25 = 0
      if self.paraset_byte24 is None:
        self.paraset_byte24 = 0
      if self.paraset_byte23 is None:
        self.paraset_byte23 = 0
      if self.paraset_byte22 is None:
        self.paraset_byte22 = 0
      if self.paraset_byte21 is None:
        self.paraset_byte21 = 0
      if self.paraset_byte20 is None:
        self.paraset_byte20 = 0
      if self.paraset_byte19 is None:
        self.paraset_byte19 = 0
      if self.paraset_byte18 is None:
        self.paraset_byte18 = 0
      if self.paraset_byte17 is None:
        self.paraset_byte17 = 0
      if self.paraset_byte16 is None:
        self.paraset_byte16 = 0
      if self.paraset_byte15 is None:
        self.paraset_byte15 = 0
      if self.paraset_byte14 is None:
        self.paraset_byte14 = 0
      if self.paraset_byte13 is None:
        self.paraset_byte13 = 0
      if self.paraset_byte12 is None:
        self.paraset_byte12 = 0
      if self.paraset_byte11 is None:
        self.paraset_byte11 = 0
      if self.paraset_byte10 is None:
        self.paraset_byte10 = 0
      if self.paraset_byte9 is None:
        self.paraset_byte9 = 0
      if self.paraset_byte8 is None:
        self.paraset_byte8 = 0
      if self.paraset_byte7 is None:
        self.paraset_byte7 = 0
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
    else:
      self.header = std_msgs.msg.Header()
      self.command = 0
      self.set_num = 0
      self.paraset_byte54 = 0
      self.paraset_byte53 = 0
      self.paraset_byte52 = 0
      self.paraset_byte51 = 0
      self.paraset_byte50 = 0
      self.paraset_byte49 = 0
      self.paraset_byte48 = 0
      self.paraset_byte47 = 0
      self.paraset_byte46 = 0
      self.paraset_byte45 = 0
      self.paraset_byte44 = 0
      self.paraset_byte43 = 0
      self.paraset_byte42 = 0
      self.paraset_byte41 = 0
      self.paraset_byte40 = 0
      self.paraset_byte39 = 0
      self.paraset_byte38 = 0
      self.paraset_byte37 = 0
      self.paraset_byte36 = 0
      self.paraset_byte35 = 0
      self.paraset_byte34 = 0
      self.paraset_byte33 = 0
      self.paraset_byte32 = 0
      self.paraset_byte31 = 0
      self.paraset_byte30 = 0
      self.paraset_byte29 = 0
      self.paraset_byte28 = 0
      self.paraset_byte27 = 0
      self.paraset_byte26 = 0
      self.paraset_byte25 = 0
      self.paraset_byte24 = 0
      self.paraset_byte23 = 0
      self.paraset_byte22 = 0
      self.paraset_byte21 = 0
      self.paraset_byte20 = 0
      self.paraset_byte19 = 0
      self.paraset_byte18 = 0
      self.paraset_byte17 = 0
      self.paraset_byte16 = 0
      self.paraset_byte15 = 0
      self.paraset_byte14 = 0
      self.paraset_byte13 = 0
      self.paraset_byte12 = 0
      self.paraset_byte11 = 0
      self.paraset_byte10 = 0
      self.paraset_byte9 = 0
      self.paraset_byte8 = 0
      self.paraset_byte7 = 0
      self.paraset_byte6 = 0
      self.paraset_byte5 = 0
      self.paraset_byte4 = 0
      self.paraset_byte3 = 0
      self.paraset_byte2 = 0
      self.paraset_byte1 = 0

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
      buff.write(_get_struct_56B().pack(_x.command, _x.set_num, _x.paraset_byte54, _x.paraset_byte53, _x.paraset_byte52, _x.paraset_byte51, _x.paraset_byte50, _x.paraset_byte49, _x.paraset_byte48, _x.paraset_byte47, _x.paraset_byte46, _x.paraset_byte45, _x.paraset_byte44, _x.paraset_byte43, _x.paraset_byte42, _x.paraset_byte41, _x.paraset_byte40, _x.paraset_byte39, _x.paraset_byte38, _x.paraset_byte37, _x.paraset_byte36, _x.paraset_byte35, _x.paraset_byte34, _x.paraset_byte33, _x.paraset_byte32, _x.paraset_byte31, _x.paraset_byte30, _x.paraset_byte29, _x.paraset_byte28, _x.paraset_byte27, _x.paraset_byte26, _x.paraset_byte25, _x.paraset_byte24, _x.paraset_byte23, _x.paraset_byte22, _x.paraset_byte21, _x.paraset_byte20, _x.paraset_byte19, _x.paraset_byte18, _x.paraset_byte17, _x.paraset_byte16, _x.paraset_byte15, _x.paraset_byte14, _x.paraset_byte13, _x.paraset_byte12, _x.paraset_byte11, _x.paraset_byte10, _x.paraset_byte9, _x.paraset_byte8, _x.paraset_byte7, _x.paraset_byte6, _x.paraset_byte5, _x.paraset_byte4, _x.paraset_byte3, _x.paraset_byte2, _x.paraset_byte1))
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
      end += 56
      (_x.command, _x.set_num, _x.paraset_byte54, _x.paraset_byte53, _x.paraset_byte52, _x.paraset_byte51, _x.paraset_byte50, _x.paraset_byte49, _x.paraset_byte48, _x.paraset_byte47, _x.paraset_byte46, _x.paraset_byte45, _x.paraset_byte44, _x.paraset_byte43, _x.paraset_byte42, _x.paraset_byte41, _x.paraset_byte40, _x.paraset_byte39, _x.paraset_byte38, _x.paraset_byte37, _x.paraset_byte36, _x.paraset_byte35, _x.paraset_byte34, _x.paraset_byte33, _x.paraset_byte32, _x.paraset_byte31, _x.paraset_byte30, _x.paraset_byte29, _x.paraset_byte28, _x.paraset_byte27, _x.paraset_byte26, _x.paraset_byte25, _x.paraset_byte24, _x.paraset_byte23, _x.paraset_byte22, _x.paraset_byte21, _x.paraset_byte20, _x.paraset_byte19, _x.paraset_byte18, _x.paraset_byte17, _x.paraset_byte16, _x.paraset_byte15, _x.paraset_byte14, _x.paraset_byte13, _x.paraset_byte12, _x.paraset_byte11, _x.paraset_byte10, _x.paraset_byte9, _x.paraset_byte8, _x.paraset_byte7, _x.paraset_byte6, _x.paraset_byte5, _x.paraset_byte4, _x.paraset_byte3, _x.paraset_byte2, _x.paraset_byte1,) = _get_struct_56B().unpack(str[start:end])
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
      buff.write(_get_struct_56B().pack(_x.command, _x.set_num, _x.paraset_byte54, _x.paraset_byte53, _x.paraset_byte52, _x.paraset_byte51, _x.paraset_byte50, _x.paraset_byte49, _x.paraset_byte48, _x.paraset_byte47, _x.paraset_byte46, _x.paraset_byte45, _x.paraset_byte44, _x.paraset_byte43, _x.paraset_byte42, _x.paraset_byte41, _x.paraset_byte40, _x.paraset_byte39, _x.paraset_byte38, _x.paraset_byte37, _x.paraset_byte36, _x.paraset_byte35, _x.paraset_byte34, _x.paraset_byte33, _x.paraset_byte32, _x.paraset_byte31, _x.paraset_byte30, _x.paraset_byte29, _x.paraset_byte28, _x.paraset_byte27, _x.paraset_byte26, _x.paraset_byte25, _x.paraset_byte24, _x.paraset_byte23, _x.paraset_byte22, _x.paraset_byte21, _x.paraset_byte20, _x.paraset_byte19, _x.paraset_byte18, _x.paraset_byte17, _x.paraset_byte16, _x.paraset_byte15, _x.paraset_byte14, _x.paraset_byte13, _x.paraset_byte12, _x.paraset_byte11, _x.paraset_byte10, _x.paraset_byte9, _x.paraset_byte8, _x.paraset_byte7, _x.paraset_byte6, _x.paraset_byte5, _x.paraset_byte4, _x.paraset_byte3, _x.paraset_byte2, _x.paraset_byte1))
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
      end += 56
      (_x.command, _x.set_num, _x.paraset_byte54, _x.paraset_byte53, _x.paraset_byte52, _x.paraset_byte51, _x.paraset_byte50, _x.paraset_byte49, _x.paraset_byte48, _x.paraset_byte47, _x.paraset_byte46, _x.paraset_byte45, _x.paraset_byte44, _x.paraset_byte43, _x.paraset_byte42, _x.paraset_byte41, _x.paraset_byte40, _x.paraset_byte39, _x.paraset_byte38, _x.paraset_byte37, _x.paraset_byte36, _x.paraset_byte35, _x.paraset_byte34, _x.paraset_byte33, _x.paraset_byte32, _x.paraset_byte31, _x.paraset_byte30, _x.paraset_byte29, _x.paraset_byte28, _x.paraset_byte27, _x.paraset_byte26, _x.paraset_byte25, _x.paraset_byte24, _x.paraset_byte23, _x.paraset_byte22, _x.paraset_byte21, _x.paraset_byte20, _x.paraset_byte19, _x.paraset_byte18, _x.paraset_byte17, _x.paraset_byte16, _x.paraset_byte15, _x.paraset_byte14, _x.paraset_byte13, _x.paraset_byte12, _x.paraset_byte11, _x.paraset_byte10, _x.paraset_byte9, _x.paraset_byte8, _x.paraset_byte7, _x.paraset_byte6, _x.paraset_byte5, _x.paraset_byte4, _x.paraset_byte3, _x.paraset_byte2, _x.paraset_byte1,) = _get_struct_56B().unpack(str[start:end])
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
_struct_56B = None
def _get_struct_56B():
    global _struct_56B
    if _struct_56B is None:
        _struct_56B = struct.Struct("<56B")
    return _struct_56B