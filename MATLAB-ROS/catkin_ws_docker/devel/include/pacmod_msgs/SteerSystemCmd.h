// Generated by gencpp from file pacmod_msgs/SteerSystemCmd.msg
// DO NOT EDIT!


#ifndef PACMOD_MSGS_MESSAGE_STEERSYSTEMCMD_H
#define PACMOD_MSGS_MESSAGE_STEERSYSTEMCMD_H


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
struct SteerSystemCmd_
{
  typedef SteerSystemCmd_<ContainerAllocator> Type;

  SteerSystemCmd_()
    : header()
    , enable(false)
    , ignore_overrides(false)
    , clear_override(false)
    , clear_faults(false)
    , command(0.0)
    , rotation_rate(0.0)  {
    }
  SteerSystemCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , enable(false)
    , ignore_overrides(false)
    , clear_override(false)
    , clear_faults(false)
    , command(0.0)
    , rotation_rate(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _enable_type;
  _enable_type enable;

   typedef uint8_t _ignore_overrides_type;
  _ignore_overrides_type ignore_overrides;

   typedef uint8_t _clear_override_type;
  _clear_override_type clear_override;

   typedef uint8_t _clear_faults_type;
  _clear_faults_type clear_faults;

   typedef double _command_type;
  _command_type command;

   typedef double _rotation_rate_type;
  _rotation_rate_type rotation_rate;





  typedef boost::shared_ptr< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> const> ConstPtr;

}; // struct SteerSystemCmd_

typedef ::pacmod_msgs::SteerSystemCmd_<std::allocator<void> > SteerSystemCmd;

typedef boost::shared_ptr< ::pacmod_msgs::SteerSystemCmd > SteerSystemCmdPtr;
typedef boost::shared_ptr< ::pacmod_msgs::SteerSystemCmd const> SteerSystemCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cfa0df9428e1c56b79ca986e115663f7";
  }

  static const char* value(const ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcfa0df9428e1c56bULL;
  static const uint64_t static_value2 = 0x79ca986e115663f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pacmod_msgs/SteerSystemCmd";
  }

  static const char* value(const ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
bool enable\n\
bool ignore_overrides\n\
bool clear_override\n\
bool clear_faults\n\
\n\
float64 command\n\
float64 rotation_rate\n\
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

  static const char* value(const ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.enable);
      stream.next(m.ignore_overrides);
      stream.next(m.clear_override);
      stream.next(m.clear_faults);
      stream.next(m.command);
      stream.next(m.rotation_rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SteerSystemCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pacmod_msgs::SteerSystemCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
    s << indent << "ignore_overrides: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ignore_overrides);
    s << indent << "clear_override: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear_override);
    s << indent << "clear_faults: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear_faults);
    s << indent << "command: ";
    Printer<double>::stream(s, indent + "  ", v.command);
    s << indent << "rotation_rate: ";
    Printer<double>::stream(s, indent + "  ", v.rotation_rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PACMOD_MSGS_MESSAGE_STEERSYSTEMCMD_H
