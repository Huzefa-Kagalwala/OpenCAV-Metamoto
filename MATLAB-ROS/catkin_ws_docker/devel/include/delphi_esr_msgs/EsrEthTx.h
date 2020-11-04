// Generated by gencpp from file delphi_esr_msgs/EsrEthTx.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRETHTX_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRETHTX_H


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
struct EsrEthTx_
{
  typedef EsrEthTx_<ContainerAllocator> Type;

  EsrEthTx_()
    : header()
    , xcp_format_version(0)
    , scan_index(0)
    , tcp_size(0)
    , xcp_scan_type(0)
    , look_index(0)
    , mmr_scan_index(0)
    , target_report_host_speed(0.0)
    , target_report_host_yaw_rate(0.0)
    , xcp_timestamp(0)
    , release_revision(0)
    , promote_revision(0)
    , field_revision(0)
    , target_report_count(0)
    , target_report_range()
    , target_report_range_rate()
    , target_report_theta()
    , target_report_amplitude()  {
      target_report_range.assign(0.0);

      target_report_range_rate.assign(0.0);

      target_report_theta.assign(0.0);

      target_report_amplitude.assign(0.0);
  }
  EsrEthTx_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , xcp_format_version(0)
    , scan_index(0)
    , tcp_size(0)
    , xcp_scan_type(0)
    , look_index(0)
    , mmr_scan_index(0)
    , target_report_host_speed(0.0)
    , target_report_host_yaw_rate(0.0)
    , xcp_timestamp(0)
    , release_revision(0)
    , promote_revision(0)
    , field_revision(0)
    , target_report_count(0)
    , target_report_range()
    , target_report_range_rate()
    , target_report_theta()
    , target_report_amplitude()  {
  (void)_alloc;
      target_report_range.assign(0.0);

      target_report_range_rate.assign(0.0);

      target_report_theta.assign(0.0);

      target_report_amplitude.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _xcp_format_version_type;
  _xcp_format_version_type xcp_format_version;

   typedef uint16_t _scan_index_type;
  _scan_index_type scan_index;

   typedef uint16_t _tcp_size_type;
  _tcp_size_type tcp_size;

   typedef uint8_t _xcp_scan_type_type;
  _xcp_scan_type_type xcp_scan_type;

   typedef uint16_t _look_index_type;
  _look_index_type look_index;

   typedef uint16_t _mmr_scan_index_type;
  _mmr_scan_index_type mmr_scan_index;

   typedef float _target_report_host_speed_type;
  _target_report_host_speed_type target_report_host_speed;

   typedef float _target_report_host_yaw_rate_type;
  _target_report_host_yaw_rate_type target_report_host_yaw_rate;

   typedef uint32_t _xcp_timestamp_type;
  _xcp_timestamp_type xcp_timestamp;

   typedef uint8_t _release_revision_type;
  _release_revision_type release_revision;

   typedef uint8_t _promote_revision_type;
  _promote_revision_type promote_revision;

   typedef uint8_t _field_revision_type;
  _field_revision_type field_revision;

   typedef uint8_t _target_report_count_type;
  _target_report_count_type target_report_count;

   typedef boost::array<float, 64>  _target_report_range_type;
  _target_report_range_type target_report_range;

   typedef boost::array<float, 64>  _target_report_range_rate_type;
  _target_report_range_rate_type target_report_range_rate;

   typedef boost::array<float, 64>  _target_report_theta_type;
  _target_report_theta_type target_report_theta;

   typedef boost::array<float, 64>  _target_report_amplitude_type;
  _target_report_amplitude_type target_report_amplitude;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> const> ConstPtr;

}; // struct EsrEthTx_

typedef ::delphi_esr_msgs::EsrEthTx_<std::allocator<void> > EsrEthTx;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrEthTx > EsrEthTxPtr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrEthTx const> EsrEthTxConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea522dc4f556d335d7b446f66f5ac1d2";
  }

  static const char* value(const ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea522dc4f556d335ULL;
  static const uint64_t static_value2 = 0xd7b446f66f5ac1d2ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrEthTx";
  }

  static const char* value(const ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR Track Msg\n\
uint16            xcp_format_version\n\
uint16            scan_index\n\
uint16            tcp_size\n\
uint8             xcp_scan_type\n\
uint16            look_index\n\
uint16            mmr_scan_index\n\
float32           target_report_host_speed\n\
float32           target_report_host_yaw_rate\n\
uint32            xcp_timestamp\n\
uint8             release_revision\n\
uint8             promote_revision\n\
uint8             field_revision\n\
uint8             target_report_count\n\
float32[64]       target_report_range\n\
float32[64]       target_report_range_rate\n\
float32[64]       target_report_theta\n\
float32[64]       target_report_amplitude\n\
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

  static const char* value(const ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.xcp_format_version);
      stream.next(m.scan_index);
      stream.next(m.tcp_size);
      stream.next(m.xcp_scan_type);
      stream.next(m.look_index);
      stream.next(m.mmr_scan_index);
      stream.next(m.target_report_host_speed);
      stream.next(m.target_report_host_yaw_rate);
      stream.next(m.xcp_timestamp);
      stream.next(m.release_revision);
      stream.next(m.promote_revision);
      stream.next(m.field_revision);
      stream.next(m.target_report_count);
      stream.next(m.target_report_range);
      stream.next(m.target_report_range_rate);
      stream.next(m.target_report_theta);
      stream.next(m.target_report_amplitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrEthTx_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrEthTx_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "xcp_format_version: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.xcp_format_version);
    s << indent << "scan_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.scan_index);
    s << indent << "tcp_size: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tcp_size);
    s << indent << "xcp_scan_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.xcp_scan_type);
    s << indent << "look_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.look_index);
    s << indent << "mmr_scan_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mmr_scan_index);
    s << indent << "target_report_host_speed: ";
    Printer<float>::stream(s, indent + "  ", v.target_report_host_speed);
    s << indent << "target_report_host_yaw_rate: ";
    Printer<float>::stream(s, indent + "  ", v.target_report_host_yaw_rate);
    s << indent << "xcp_timestamp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.xcp_timestamp);
    s << indent << "release_revision: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.release_revision);
    s << indent << "promote_revision: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.promote_revision);
    s << indent << "field_revision: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.field_revision);
    s << indent << "target_report_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.target_report_count);
    s << indent << "target_report_range[]" << std::endl;
    for (size_t i = 0; i < v.target_report_range.size(); ++i)
    {
      s << indent << "  target_report_range[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.target_report_range[i]);
    }
    s << indent << "target_report_range_rate[]" << std::endl;
    for (size_t i = 0; i < v.target_report_range_rate.size(); ++i)
    {
      s << indent << "  target_report_range_rate[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.target_report_range_rate[i]);
    }
    s << indent << "target_report_theta[]" << std::endl;
    for (size_t i = 0; i < v.target_report_theta.size(); ++i)
    {
      s << indent << "  target_report_theta[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.target_report_theta[i]);
    }
    s << indent << "target_report_amplitude[]" << std::endl;
    for (size_t i = 0; i < v.target_report_amplitude.size(); ++i)
    {
      s << indent << "  target_report_amplitude[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.target_report_amplitude[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRETHTX_H