// Generated by gencpp from file delphi_esr_msgs/EsrStatus3.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS3_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS3_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace delphi_esr_msgs
{
template <class ContainerAllocator>
struct EsrStatus3_
{
  typedef EsrStatus3_<ContainerAllocator> Type;

  EsrStatus3_()
    : header()
    , canmsg()
    , hw_version(0)
    , interface_version(0)
    , sw_version_pld(0)
    , sw_version_host()
    , serial_num()  {
    }
  EsrStatus3_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , canmsg(_alloc)
    , hw_version(0)
    , interface_version(0)
    , sw_version_pld(0)
    , sw_version_host(_alloc)
    , serial_num(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _canmsg_type;
  _canmsg_type canmsg;

   typedef uint8_t _hw_version_type;
  _hw_version_type hw_version;

   typedef uint8_t _interface_version_type;
  _interface_version_type interface_version;

   typedef uint8_t _sw_version_pld_type;
  _sw_version_pld_type sw_version_pld;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sw_version_host_type;
  _sw_version_host_type sw_version_host;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _serial_num_type;
  _serial_num_type serial_num;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> const> ConstPtr;

}; // struct EsrStatus3_

typedef ::delphi_esr_msgs::EsrStatus3_<std::allocator<void> > EsrStatus3;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus3 > EsrStatus3Ptr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus3 const> EsrStatus3ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace delphi_esr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'delphi_esr_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_esr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "60e72509c2610c2d5c20ae20e41b7178";
  }

  static const char* value(const ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x60e72509c2610c2dULL;
  static const uint64_t static_value2 = 0x5c20ae20e41b7178ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrStatus3";
  }

  static const char* value(const ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR status3\n\
string      canmsg\n\
uint8       hw_version\n\
uint8       interface_version\n\
uint8       sw_version_pld\n\
string      sw_version_host\n\
string      serial_num\n\
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

  static const char* value(const ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.canmsg);
      stream.next(m.hw_version);
      stream.next(m.interface_version);
      stream.next(m.sw_version_pld);
      stream.next(m.sw_version_host);
      stream.next(m.serial_num);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrStatus3_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrStatus3_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "canmsg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.canmsg);
    s << indent << "hw_version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hw_version);
    s << indent << "interface_version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.interface_version);
    s << indent << "sw_version_pld: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sw_version_pld);
    s << indent << "sw_version_host: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sw_version_host);
    s << indent << "serial_num: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.serial_num);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS3_H
