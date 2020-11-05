// Generated by gencpp from file delphi_esr_msgs/EsrStatus7.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS7_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS7_H


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
struct EsrStatus7_
{
  typedef EsrStatus7_<ContainerAllocator> Type;

  EsrStatus7_()
    : header()
    , canmsg()
    , active_fault0(0)
    , active_fault1(0)
    , active_fault2(0)
    , active_fault3(0)
    , active_fault4(0)
    , active_fault5(0)
    , active_fault6(0)
    , active_fault7(0)  {
    }
  EsrStatus7_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , canmsg(_alloc)
    , active_fault0(0)
    , active_fault1(0)
    , active_fault2(0)
    , active_fault3(0)
    , active_fault4(0)
    , active_fault5(0)
    , active_fault6(0)
    , active_fault7(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _canmsg_type;
  _canmsg_type canmsg;

   typedef uint8_t _active_fault0_type;
  _active_fault0_type active_fault0;

   typedef uint8_t _active_fault1_type;
  _active_fault1_type active_fault1;

   typedef uint8_t _active_fault2_type;
  _active_fault2_type active_fault2;

   typedef uint8_t _active_fault3_type;
  _active_fault3_type active_fault3;

   typedef uint8_t _active_fault4_type;
  _active_fault4_type active_fault4;

   typedef uint8_t _active_fault5_type;
  _active_fault5_type active_fault5;

   typedef uint8_t _active_fault6_type;
  _active_fault6_type active_fault6;

   typedef uint8_t _active_fault7_type;
  _active_fault7_type active_fault7;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> const> ConstPtr;

}; // struct EsrStatus7_

typedef ::delphi_esr_msgs::EsrStatus7_<std::allocator<void> > EsrStatus7;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus7 > EsrStatus7Ptr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus7 const> EsrStatus7ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b42bcace404e10fd5ee3631fdf186959";
  }

  static const char* value(const ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb42bcace404e10fdULL;
  static const uint64_t static_value2 = 0x5ee3631fdf186959ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrStatus7";
  }

  static const char* value(const ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR status7\n\
string      canmsg\n\
uint8       active_fault0\n\
uint8       active_fault1\n\
uint8       active_fault2\n\
uint8       active_fault3\n\
uint8       active_fault4\n\
uint8       active_fault5\n\
uint8       active_fault6\n\
uint8       active_fault7\n\
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

  static const char* value(const ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.canmsg);
      stream.next(m.active_fault0);
      stream.next(m.active_fault1);
      stream.next(m.active_fault2);
      stream.next(m.active_fault3);
      stream.next(m.active_fault4);
      stream.next(m.active_fault5);
      stream.next(m.active_fault6);
      stream.next(m.active_fault7);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrStatus7_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrStatus7_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "canmsg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.canmsg);
    s << indent << "active_fault0: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_fault0);
    s << indent << "active_fault1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_fault1);
    s << indent << "active_fault2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_fault2);
    s << indent << "active_fault3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_fault3);
    s << indent << "active_fault4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_fault4);
    s << indent << "active_fault5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_fault5);
    s << indent << "active_fault6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_fault6);
    s << indent << "active_fault7: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_fault7);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS7_H