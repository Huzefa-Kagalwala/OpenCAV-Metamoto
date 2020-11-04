// Generated by gencpp from file delphi_esr_msgs/EsrStatus2.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS2_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS2_H


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
struct EsrStatus2_
{
  typedef EsrStatus2_<ContainerAllocator> Type;

  EsrStatus2_()
    : header()
    , canmsg()
    , rolling_count2(0)
    , max_track_ack(0)
    , overheat_error(false)
    , range_perf_error(false)
    , internal_error(false)
    , xcvr_operational(false)
    , raw_data_mode(false)
    , steer_angle_ack(0)
    , temperature(0)
    , spd_comp_factor(0.0)
    , grouping_mode(0)
    , yaw_rate_bias(0.0)
    , sw_version_dsp()  {
    }
  EsrStatus2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , canmsg(_alloc)
    , rolling_count2(0)
    , max_track_ack(0)
    , overheat_error(false)
    , range_perf_error(false)
    , internal_error(false)
    , xcvr_operational(false)
    , raw_data_mode(false)
    , steer_angle_ack(0)
    , temperature(0)
    , spd_comp_factor(0.0)
    , grouping_mode(0)
    , yaw_rate_bias(0.0)
    , sw_version_dsp(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _canmsg_type;
  _canmsg_type canmsg;

   typedef uint8_t _rolling_count2_type;
  _rolling_count2_type rolling_count2;

   typedef uint8_t _max_track_ack_type;
  _max_track_ack_type max_track_ack;

   typedef uint8_t _overheat_error_type;
  _overheat_error_type overheat_error;

   typedef uint8_t _range_perf_error_type;
  _range_perf_error_type range_perf_error;

   typedef uint8_t _internal_error_type;
  _internal_error_type internal_error;

   typedef uint8_t _xcvr_operational_type;
  _xcvr_operational_type xcvr_operational;

   typedef uint8_t _raw_data_mode_type;
  _raw_data_mode_type raw_data_mode;

   typedef uint16_t _steer_angle_ack_type;
  _steer_angle_ack_type steer_angle_ack;

   typedef int8_t _temperature_type;
  _temperature_type temperature;

   typedef float _spd_comp_factor_type;
  _spd_comp_factor_type spd_comp_factor;

   typedef uint8_t _grouping_mode_type;
  _grouping_mode_type grouping_mode;

   typedef float _yaw_rate_bias_type;
  _yaw_rate_bias_type yaw_rate_bias;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sw_version_dsp_type;
  _sw_version_dsp_type sw_version_dsp;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> const> ConstPtr;

}; // struct EsrStatus2_

typedef ::delphi_esr_msgs::EsrStatus2_<std::allocator<void> > EsrStatus2;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus2 > EsrStatus2Ptr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus2 const> EsrStatus2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de9d4dcad18be0f8d7fd839abd77cb7c";
  }

  static const char* value(const ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xde9d4dcad18be0f8ULL;
  static const uint64_t static_value2 = 0xd7fd839abd77cb7cULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrStatus2";
  }

  static const char* value(const ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR status2\n\
string      canmsg\n\
uint8       rolling_count2\n\
uint8       max_track_ack\n\
bool        overheat_error\n\
bool        range_perf_error\n\
bool        internal_error\n\
bool        xcvr_operational\n\
bool        raw_data_mode\n\
uint16      steer_angle_ack\n\
int8        temperature\n\
float32     spd_comp_factor\n\
uint8       grouping_mode\n\
float32     yaw_rate_bias\n\
string      sw_version_dsp\n\
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

  static const char* value(const ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.canmsg);
      stream.next(m.rolling_count2);
      stream.next(m.max_track_ack);
      stream.next(m.overheat_error);
      stream.next(m.range_perf_error);
      stream.next(m.internal_error);
      stream.next(m.xcvr_operational);
      stream.next(m.raw_data_mode);
      stream.next(m.steer_angle_ack);
      stream.next(m.temperature);
      stream.next(m.spd_comp_factor);
      stream.next(m.grouping_mode);
      stream.next(m.yaw_rate_bias);
      stream.next(m.sw_version_dsp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrStatus2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrStatus2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "canmsg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.canmsg);
    s << indent << "rolling_count2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rolling_count2);
    s << indent << "max_track_ack: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.max_track_ack);
    s << indent << "overheat_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.overheat_error);
    s << indent << "range_perf_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.range_perf_error);
    s << indent << "internal_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.internal_error);
    s << indent << "xcvr_operational: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.xcvr_operational);
    s << indent << "raw_data_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.raw_data_mode);
    s << indent << "steer_angle_ack: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.steer_angle_ack);
    s << indent << "temperature: ";
    Printer<int8_t>::stream(s, indent + "  ", v.temperature);
    s << indent << "spd_comp_factor: ";
    Printer<float>::stream(s, indent + "  ", v.spd_comp_factor);
    s << indent << "grouping_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.grouping_mode);
    s << indent << "yaw_rate_bias: ";
    Printer<float>::stream(s, indent + "  ", v.yaw_rate_bias);
    s << indent << "sw_version_dsp: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sw_version_dsp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS2_H
