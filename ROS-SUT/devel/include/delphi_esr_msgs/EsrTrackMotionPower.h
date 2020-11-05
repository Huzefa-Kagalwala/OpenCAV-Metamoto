// Generated by gencpp from file delphi_esr_msgs/EsrTrackMotionPower.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRTRACKMOTIONPOWER_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRTRACKMOTIONPOWER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <delphi_esr_msgs/TrackMotionPower.h>

namespace delphi_esr_msgs
{
template <class ContainerAllocator>
struct EsrTrackMotionPower_
{
  typedef EsrTrackMotionPower_<ContainerAllocator> Type;

  EsrTrackMotionPower_()
    : header()
    , canmsg()
    , rolling_count(0)
    , group_id(0)
    , tracks()  {
    }
  EsrTrackMotionPower_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , canmsg(_alloc)
    , rolling_count(0)
    , group_id(0)
    , tracks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _canmsg_type;
  _canmsg_type canmsg;

   typedef uint8_t _rolling_count_type;
  _rolling_count_type rolling_count;

   typedef uint8_t _group_id_type;
  _group_id_type group_id;

   typedef std::vector< ::delphi_esr_msgs::TrackMotionPower_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::delphi_esr_msgs::TrackMotionPower_<ContainerAllocator> >::other >  _tracks_type;
  _tracks_type tracks;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> const> ConstPtr;

}; // struct EsrTrackMotionPower_

typedef ::delphi_esr_msgs::EsrTrackMotionPower_<std::allocator<void> > EsrTrackMotionPower;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrTrackMotionPower > EsrTrackMotionPowerPtr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrTrackMotionPower const> EsrTrackMotionPowerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c8b6ca4d7b49b9f380f75c5de7ed6095";
  }

  static const char* value(const ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc8b6ca4d7b49b9f3ULL;
  static const uint64_t static_value2 = 0x80f75c5de7ed6095ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrTrackMotionPower";
  }

  static const char* value(const ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR TrackMotionPower Msg\n\
string                              canmsg\n\
uint8                               rolling_count\n\
uint8                               group_id\n\
delphi_esr_msgs/TrackMotionPower[]  tracks\n\
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
\n\
================================================================================\n\
MSG: delphi_esr_msgs/TrackMotionPower\n\
bool  movable_fast\n\
bool  movable_slow\n\
bool  moving\n\
int8  power\n\
";
  }

  static const char* value(const ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.canmsg);
      stream.next(m.rolling_count);
      stream.next(m.group_id);
      stream.next(m.tracks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrTrackMotionPower_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrTrackMotionPower_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "canmsg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.canmsg);
    s << indent << "rolling_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rolling_count);
    s << indent << "group_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.group_id);
    s << indent << "tracks[]" << std::endl;
    for (size_t i = 0; i < v.tracks.size(); ++i)
    {
      s << indent << "  tracks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::delphi_esr_msgs::TrackMotionPower_<ContainerAllocator> >::stream(s, indent + "    ", v.tracks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRTRACKMOTIONPOWER_H