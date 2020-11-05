// Generated by gencpp from file pacmod_msgs/MotorRpt2.msg
// DO NOT EDIT!


#ifndef PACMOD_MSGS_MESSAGE_MOTORRPT2_H
#define PACMOD_MSGS_MESSAGE_MOTORRPT2_H


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
struct MotorRpt2_
{
  typedef MotorRpt2_<ContainerAllocator> Type;

  MotorRpt2_()
    : header()
    , encoder_temp(0.0)
    , motor_temp(0.0)
    , angular_velocity(0.0)  {
    }
  MotorRpt2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , encoder_temp(0.0)
    , motor_temp(0.0)
    , angular_velocity(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _encoder_temp_type;
  _encoder_temp_type encoder_temp;

   typedef double _motor_temp_type;
  _motor_temp_type motor_temp;

   typedef double _angular_velocity_type;
  _angular_velocity_type angular_velocity;





  typedef boost::shared_ptr< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> const> ConstPtr;

}; // struct MotorRpt2_

typedef ::pacmod_msgs::MotorRpt2_<std::allocator<void> > MotorRpt2;

typedef boost::shared_ptr< ::pacmod_msgs::MotorRpt2 > MotorRpt2Ptr;
typedef boost::shared_ptr< ::pacmod_msgs::MotorRpt2 const> MotorRpt2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pacmod_msgs::MotorRpt2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d757953b36f8ffe8db6389da9ff787a1";
  }

  static const char* value(const ::pacmod_msgs::MotorRpt2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd757953b36f8ffe8ULL;
  static const uint64_t static_value2 = 0xdb6389da9ff787a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pacmod_msgs/MotorRpt2";
  }

  static const char* value(const ::pacmod_msgs::MotorRpt2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
float64 encoder_temp        # Encoder temperature in degrees Celsius\n\
float64 motor_temp          # Internal motor temperature in degrees Celsius\n\
float64 angular_velocity    # Angular velocity of the motor shaft (z axis) in Radians/second\n\
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

  static const char* value(const ::pacmod_msgs::MotorRpt2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.encoder_temp);
      stream.next(m.motor_temp);
      stream.next(m.angular_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorRpt2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pacmod_msgs::MotorRpt2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pacmod_msgs::MotorRpt2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "encoder_temp: ";
    Printer<double>::stream(s, indent + "  ", v.encoder_temp);
    s << indent << "motor_temp: ";
    Printer<double>::stream(s, indent + "  ", v.motor_temp);
    s << indent << "angular_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.angular_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PACMOD_MSGS_MESSAGE_MOTORRPT2_H