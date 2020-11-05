// Generated by gencpp from file delphi_esr_msgs/EsrTrack.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRTRACK_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRTRACK_H


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
struct EsrTrack_
{
  typedef EsrTrack_<ContainerAllocator> Type;

  EsrTrack_()
    : header()
    , canmsg()
    , track_id(0)
    , track_lat_rate(0.0)
    , track_group_changed(false)
    , track_status(0)
    , track_angle(0.0)
    , track_range(0.0)
    , track_bridge_object(false)
    , track_rolling_count(false)
    , track_width(0.0)
    , track_range_accel(0.0)
    , track_med_range_mode(0)
    , track_range_rate(0.0)  {
    }
  EsrTrack_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , canmsg(_alloc)
    , track_id(0)
    , track_lat_rate(0.0)
    , track_group_changed(false)
    , track_status(0)
    , track_angle(0.0)
    , track_range(0.0)
    , track_bridge_object(false)
    , track_rolling_count(false)
    , track_width(0.0)
    , track_range_accel(0.0)
    , track_med_range_mode(0)
    , track_range_rate(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _canmsg_type;
  _canmsg_type canmsg;

   typedef uint8_t _track_id_type;
  _track_id_type track_id;

   typedef float _track_lat_rate_type;
  _track_lat_rate_type track_lat_rate;

   typedef uint8_t _track_group_changed_type;
  _track_group_changed_type track_group_changed;

   typedef uint8_t _track_status_type;
  _track_status_type track_status;

   typedef float _track_angle_type;
  _track_angle_type track_angle;

   typedef float _track_range_type;
  _track_range_type track_range;

   typedef uint8_t _track_bridge_object_type;
  _track_bridge_object_type track_bridge_object;

   typedef uint8_t _track_rolling_count_type;
  _track_rolling_count_type track_rolling_count;

   typedef float _track_width_type;
  _track_width_type track_width;

   typedef float _track_range_accel_type;
  _track_range_accel_type track_range_accel;

   typedef uint8_t _track_med_range_mode_type;
  _track_med_range_mode_type track_med_range_mode;

   typedef float _track_range_rate_type;
  _track_range_rate_type track_range_rate;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> const> ConstPtr;

}; // struct EsrTrack_

typedef ::delphi_esr_msgs::EsrTrack_<std::allocator<void> > EsrTrack;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrTrack > EsrTrackPtr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrTrack const> EsrTrackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "67d29dbcdfb86efe0822e360bf7a498a";
  }

  static const char* value(const ::delphi_esr_msgs::EsrTrack_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x67d29dbcdfb86efeULL;
  static const uint64_t static_value2 = 0x0822e360bf7a498aULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrTrack";
  }

  static const char* value(const ::delphi_esr_msgs::EsrTrack_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR Track Msg\n\
string        canmsg\n\
uint8         track_id\n\
float32       track_lat_rate\n\
bool          track_group_changed\n\
uint8         track_status\n\
float32       track_angle\n\
float32       track_range\n\
bool          track_bridge_object\n\
bool          track_rolling_count\n\
float32       track_width\n\
float32       track_range_accel\n\
uint8         track_med_range_mode\n\
float32       track_range_rate\n\
\n\
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

  static const char* value(const ::delphi_esr_msgs::EsrTrack_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.canmsg);
      stream.next(m.track_id);
      stream.next(m.track_lat_rate);
      stream.next(m.track_group_changed);
      stream.next(m.track_status);
      stream.next(m.track_angle);
      stream.next(m.track_range);
      stream.next(m.track_bridge_object);
      stream.next(m.track_rolling_count);
      stream.next(m.track_width);
      stream.next(m.track_range_accel);
      stream.next(m.track_med_range_mode);
      stream.next(m.track_range_rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrTrack_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrTrack_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrTrack_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "canmsg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.canmsg);
    s << indent << "track_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.track_id);
    s << indent << "track_lat_rate: ";
    Printer<float>::stream(s, indent + "  ", v.track_lat_rate);
    s << indent << "track_group_changed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.track_group_changed);
    s << indent << "track_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.track_status);
    s << indent << "track_angle: ";
    Printer<float>::stream(s, indent + "  ", v.track_angle);
    s << indent << "track_range: ";
    Printer<float>::stream(s, indent + "  ", v.track_range);
    s << indent << "track_bridge_object: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.track_bridge_object);
    s << indent << "track_rolling_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.track_rolling_count);
    s << indent << "track_width: ";
    Printer<float>::stream(s, indent + "  ", v.track_width);
    s << indent << "track_range_accel: ";
    Printer<float>::stream(s, indent + "  ", v.track_range_accel);
    s << indent << "track_med_range_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.track_med_range_mode);
    s << indent << "track_range_rate: ";
    Printer<float>::stream(s, indent + "  ", v.track_range_rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRTRACK_H
