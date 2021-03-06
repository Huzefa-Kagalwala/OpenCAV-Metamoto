// Generated by gencpp from file kartech_linear_actuator_msgs/SoftwareRevisionRpt.msg
// DO NOT EDIT!


#ifndef KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_SOFTWAREREVISIONRPT_H
#define KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_SOFTWAREREVISIONRPT_H


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
struct SoftwareRevisionRpt_
{
  typedef SoftwareRevisionRpt_<ContainerAllocator> Type;

  SoftwareRevisionRpt_()
    : header()
    , software_version_0(0)
    , software_version_1(0)
    , software_version_2(0)
    , software_day(0)
    , software_month_year(0)  {
    }
  SoftwareRevisionRpt_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , software_version_0(0)
    , software_version_1(0)
    , software_version_2(0)
    , software_day(0)
    , software_month_year(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _software_version_0_type;
  _software_version_0_type software_version_0;

   typedef uint8_t _software_version_1_type;
  _software_version_1_type software_version_1;

   typedef uint8_t _software_version_2_type;
  _software_version_2_type software_version_2;

   typedef uint8_t _software_day_type;
  _software_day_type software_day;

   typedef uint16_t _software_month_year_type;
  _software_month_year_type software_month_year;





  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> const> ConstPtr;

}; // struct SoftwareRevisionRpt_

typedef ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<std::allocator<void> > SoftwareRevisionRpt;

typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt > SoftwareRevisionRptPtr;
typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt const> SoftwareRevisionRptConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b4e8937bac2714ef707d040a16f320a";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b4e8937bac2714eULL;
  static const uint64_t static_value2 = 0xf707d040a16f320aULL;
};

template<class ContainerAllocator>
struct DataType< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kartech_linear_actuator_msgs/SoftwareRevisionRpt";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
uint8 software_version_0\n\
uint8 software_version_1\n\
uint8 software_version_2\n\
uint8 software_day\n\
uint16 software_month_year\n\
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

  static const char* value(const ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.software_version_0);
      stream.next(m.software_version_1);
      stream.next(m.software_version_2);
      stream.next(m.software_day);
      stream.next(m.software_month_year);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SoftwareRevisionRpt_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kartech_linear_actuator_msgs::SoftwareRevisionRpt_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "software_version_0: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.software_version_0);
    s << indent << "software_version_1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.software_version_1);
    s << indent << "software_version_2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.software_version_2);
    s << indent << "software_day: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.software_day);
    s << indent << "software_month_year: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.software_month_year);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_SOFTWAREREVISIONRPT_H
