// Generated by gencpp from file pacmod_msgs/SteeringPIDRpt1.msg
// DO NOT EDIT!


#ifndef PACMOD_MSGS_MESSAGE_STEERINGPIDRPT1_H
#define PACMOD_MSGS_MESSAGE_STEERINGPIDRPT1_H


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
struct SteeringPIDRpt1_
{
  typedef SteeringPIDRpt1_<ContainerAllocator> Type;

  SteeringPIDRpt1_()
    : header()
    , dt(0.0)
    , kp(0.0)
    , ki(0.0)
    , kd(0.0)  {
    }
  SteeringPIDRpt1_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , dt(0.0)
    , kp(0.0)
    , ki(0.0)
    , kd(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _dt_type;
  _dt_type dt;

   typedef double _kp_type;
  _kp_type kp;

   typedef double _ki_type;
  _ki_type ki;

   typedef double _kd_type;
  _kd_type kd;





  typedef boost::shared_ptr< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> const> ConstPtr;

}; // struct SteeringPIDRpt1_

typedef ::pacmod_msgs::SteeringPIDRpt1_<std::allocator<void> > SteeringPIDRpt1;

typedef boost::shared_ptr< ::pacmod_msgs::SteeringPIDRpt1 > SteeringPIDRpt1Ptr;
typedef boost::shared_ptr< ::pacmod_msgs::SteeringPIDRpt1 const> SteeringPIDRpt1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "249e50a60130616c86a15f47dc12d9b9";
  }

  static const char* value(const ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x249e50a60130616cULL;
  static const uint64_t static_value2 = 0x86a15f47dc12d9b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pacmod_msgs/SteeringPIDRpt1";
  }

  static const char* value(const ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
float64 dt         # time since last PID iteration\n\
float64 kp         # proportional gain term\n\
float64 ki         # integral gain term\n\
float64 kd         # differential gain term\n\
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

  static const char* value(const ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.dt);
      stream.next(m.kp);
      stream.next(m.ki);
      stream.next(m.kd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SteeringPIDRpt1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pacmod_msgs::SteeringPIDRpt1_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "dt: ";
    Printer<double>::stream(s, indent + "  ", v.dt);
    s << indent << "kp: ";
    Printer<double>::stream(s, indent + "  ", v.kp);
    s << indent << "ki: ";
    Printer<double>::stream(s, indent + "  ", v.ki);
    s << indent << "kd: ";
    Printer<double>::stream(s, indent + "  ", v.kd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PACMOD_MSGS_MESSAGE_STEERINGPIDRPT1_H
