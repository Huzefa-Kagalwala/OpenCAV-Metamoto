// Generated by gencpp from file delphi_esr_msgs/EsrValid2.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRVALID2_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRVALID2_H


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
struct EsrValid2_
{
  typedef EsrValid2_<ContainerAllocator> Type;

  EsrValid2_()
    : header()
    , canmsg()
    , mr_sn(0)
    , mr_range(0.0)
    , mr_range_rate(0.0)
    , mr_angle(0.0)
    , mr_power(0)  {
    }
  EsrValid2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , canmsg(_alloc)
    , mr_sn(0)
    , mr_range(0.0)
    , mr_range_rate(0.0)
    , mr_angle(0.0)
    , mr_power(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _canmsg_type;
  _canmsg_type canmsg;

   typedef uint8_t _mr_sn_type;
  _mr_sn_type mr_sn;

   typedef float _mr_range_type;
  _mr_range_type mr_range;

   typedef float _mr_range_rate_type;
  _mr_range_rate_type mr_range_rate;

   typedef float _mr_angle_type;
  _mr_angle_type mr_angle;

   typedef int8_t _mr_power_type;
  _mr_power_type mr_power;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> const> ConstPtr;

}; // struct EsrValid2_

typedef ::delphi_esr_msgs::EsrValid2_<std::allocator<void> > EsrValid2;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrValid2 > EsrValid2Ptr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrValid2 const> EsrValid2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d38bb2ae1a8306a633e6d233f392ac23";
  }

  static const char* value(const ::delphi_esr_msgs::EsrValid2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd38bb2ae1a8306a6ULL;
  static const uint64_t static_value2 = 0x33e6d233f392ac23ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrValid2";
  }

  static const char* value(const ::delphi_esr_msgs::EsrValid2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR valid2\n\
string      canmsg\n\
uint8       mr_sn\n\
float32     mr_range\n\
float32     mr_range_rate\n\
float32     mr_angle\n\
int8        mr_power\n\
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

  static const char* value(const ::delphi_esr_msgs::EsrValid2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.canmsg);
      stream.next(m.mr_sn);
      stream.next(m.mr_range);
      stream.next(m.mr_range_rate);
      stream.next(m.mr_angle);
      stream.next(m.mr_power);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrValid2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrValid2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrValid2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "canmsg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.canmsg);
    s << indent << "mr_sn: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mr_sn);
    s << indent << "mr_range: ";
    Printer<float>::stream(s, indent + "  ", v.mr_range);
    s << indent << "mr_range_rate: ";
    Printer<float>::stream(s, indent + "  ", v.mr_range_rate);
    s << indent << "mr_angle: ";
    Printer<float>::stream(s, indent + "  ", v.mr_angle);
    s << indent << "mr_power: ";
    Printer<int8_t>::stream(s, indent + "  ", v.mr_power);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRVALID2_H
