// Generated by gencpp from file pacmod_msgs/PacmodCmd.msg
// DO NOT EDIT!


#ifndef PACMOD_MSGS_MESSAGE_PACMODCMD_H
#define PACMOD_MSGS_MESSAGE_PACMODCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pacmod_msgs
{
template <class ContainerAllocator>
struct PacmodCmd_
{
  typedef PacmodCmd_<ContainerAllocator> Type;

  PacmodCmd_()
    : header()
    , f64_cmd(0.0)
    , ui16_cmd(0)
    , enable(false)
    , clear(false)
    , ignore(false)  {
    }
  PacmodCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , f64_cmd(0.0)
    , ui16_cmd(0)
    , enable(false)
    , clear(false)
    , ignore(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _f64_cmd_type;
  _f64_cmd_type f64_cmd;

   typedef uint16_t _ui16_cmd_type;
  _ui16_cmd_type ui16_cmd;

   typedef uint8_t _enable_type;
  _enable_type enable;

   typedef uint8_t _clear_type;
  _clear_type clear;

   typedef uint8_t _ignore_type;
  _ignore_type ignore;



  enum {
    TURN_RIGHT = 0u,
    TURN_NONE = 1u,
    TURN_LEFT = 2u,
    TURN_HAZARDS = 3u,
    SHIFT_PARK = 0u,
    SHIFT_REVERSE = 1u,
    SHIFT_NEUTRAL = 2u,
    SHIFT_FORWARD = 3u,
    SHIFT_HIGH = 3u,
    SHIFT_LOW = 4u,
  };


  typedef boost::shared_ptr< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> const> ConstPtr;

}; // struct PacmodCmd_

typedef ::pacmod_msgs::PacmodCmd_<std::allocator<void> > PacmodCmd;

typedef boost::shared_ptr< ::pacmod_msgs::PacmodCmd > PacmodCmdPtr;
typedef boost::shared_ptr< ::pacmod_msgs::PacmodCmd const> PacmodCmdConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pacmod_msgs::PacmodCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pacmod_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pacmod_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/pacmod_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5651e3d1d38e01689421d6d8a4e924f6";
  }

  static const char* value(const ::pacmod_msgs::PacmodCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5651e3d1d38e0168ULL;
  static const uint64_t static_value2 = 0x9421d6d8a4e924f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pacmod_msgs/PacmodCmd";
  }

  static const char* value(const ::pacmod_msgs::PacmodCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
float64 f64_cmd\n\
uint16 ui16_cmd\n\
bool enable\n\
bool clear\n\
bool ignore\n\
\n\
uint16 TURN_RIGHT = 0\n\
uint16 TURN_NONE = 1\n\
uint16 TURN_LEFT = 2\n\
uint16 TURN_HAZARDS = 3\n\
\n\
uint16 SHIFT_PARK = 0\n\
uint16 SHIFT_REVERSE = 1\n\
uint16 SHIFT_NEUTRAL = 2\n\
uint16 SHIFT_FORWARD = 3\n\
uint16 SHIFT_HIGH = 3 # For Polaris Ranger\n\
uint16 SHIFT_LOW = 4\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::pacmod_msgs::PacmodCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.f64_cmd);
      stream.next(m.ui16_cmd);
      stream.next(m.enable);
      stream.next(m.clear);
      stream.next(m.ignore);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PacmodCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pacmod_msgs::PacmodCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pacmod_msgs::PacmodCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "f64_cmd: ";
    Printer<double>::stream(s, indent + "  ", v.f64_cmd);
    s << indent << "ui16_cmd: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ui16_cmd);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
    s << indent << "clear: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear);
    s << indent << "ignore: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ignore);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PACMOD_MSGS_MESSAGE_PACMODCMD_H
