// Generated by gencpp from file kartech_linear_actuator_msgs/ConfigureOutputsKpKiCmd.msg
// DO NOT EDIT!


#ifndef KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_CONFIGUREOUTPUTSKPKICMD_H
#define KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_CONFIGUREOUTPUTSKPKICMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace kartech_linear_actuator_msgs
{
template <class ContainerAllocator>
struct ConfigureOutputsKpKiCmd_
{
  typedef ConfigureOutputsKpKiCmd_<ContainerAllocator> Type;

  ConfigureOutputsKpKiCmd_()
    : header()
    , confirm(false)
    , kp(0)
    , ki(0)  {
    }
  ConfigureOutputsKpKiCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , confirm(false)
    , kp(0)
    , ki(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _confirm_type;
  _confirm_type confirm;

   typedef uint16_t _kp_type;
  _kp_type kp;

   typedef uint16_t _ki_type;
  _ki_type ki;





  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigureOutputsKpKiCmd_

typedef ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<std::allocator<void> > ConfigureOutputsKpKiCmd;

typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd > ConfigureOutputsKpKiCmdPtr;
typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd const> ConfigureOutputsKpKiCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kartech_linear_actuator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'kartech_linear_actuator_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2776941ac111d4c1261066496047ed8d";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2776941ac111d4c1ULL;
  static const uint64_t static_value2 = 0x261066496047ed8dULL;
};

template<class ContainerAllocator>
struct DataType< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kartech_linear_actuator_msgs/ConfigureOutputsKpKiCmd";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
bool confirm\n\
uint16 kp  # The proportial term of the closed-loop control. Default is 1000.\n\
uint16 ki  # The integral term of the closed-loop control. Default is 1000.\n\
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

  static const char* value(const ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.confirm);
      stream.next(m.kp);
      stream.next(m.ki);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigureOutputsKpKiCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kartech_linear_actuator_msgs::ConfigureOutputsKpKiCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "confirm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.confirm);
    s << indent << "kp: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.kp);
    s << indent << "ki: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ki);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_CONFIGUREOUTPUTSKPKICMD_H
