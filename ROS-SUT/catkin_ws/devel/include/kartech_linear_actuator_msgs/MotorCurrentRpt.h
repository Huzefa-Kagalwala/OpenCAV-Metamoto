// Generated by gencpp from file kartech_linear_actuator_msgs/MotorCurrentRpt.msg
// DO NOT EDIT!


#ifndef KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_MOTORCURRENTRPT_H
#define KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_MOTORCURRENTRPT_H


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
struct MotorCurrentRpt_
{
  typedef MotorCurrentRpt_<ContainerAllocator> Type;

  MotorCurrentRpt_()
    : header()
    , motor_current(0)  {
    }
  MotorCurrentRpt_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , motor_current(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _motor_current_type;
  _motor_current_type motor_current;





  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> const> ConstPtr;

}; // struct MotorCurrentRpt_

typedef ::kartech_linear_actuator_msgs::MotorCurrentRpt_<std::allocator<void> > MotorCurrentRpt;

typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::MotorCurrentRpt > MotorCurrentRptPtr;
typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::MotorCurrentRpt const> MotorCurrentRptConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dee1ca7661def0cd0d6c1f63e8b5e45d";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdee1ca7661def0cdULL;
  static const uint64_t static_value2 = 0x0d6c1f63e8b5e45dULL;
};

template<class ContainerAllocator>
struct DataType< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kartech_linear_actuator_msgs/MotorCurrentRpt";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
uint16 motor_current    # The current motor current in mA.\n\
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

  static const char* value(const ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.motor_current);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorCurrentRpt_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kartech_linear_actuator_msgs::MotorCurrentRpt_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "motor_current: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.motor_current);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_MOTORCURRENTRPT_H