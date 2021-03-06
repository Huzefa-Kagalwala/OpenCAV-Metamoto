// Generated by gencpp from file mobileye_560_660_msgs/AftermarketLane.msg
// DO NOT EDIT!


#ifndef MOBILEYE_560_660_MSGS_MESSAGE_AFTERMARKETLANE_H
#define MOBILEYE_560_660_MSGS_MESSAGE_AFTERMARKETLANE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mobileye_560_660_msgs
{
template <class ContainerAllocator>
struct AftermarketLane_
{
  typedef AftermarketLane_<ContainerAllocator> Type;

  AftermarketLane_()
    : header()
    , lane_confidence_left(0)
    , ldw_available_left(false)
    , lane_type_left(0)
    , distance_to_left_lane(0.0)
    , lane_confidence_right(0)
    , ldw_available_right(false)
    , lane_type_right(0)
    , distance_to_right_lane(0.0)  {
    }
  AftermarketLane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lane_confidence_left(0)
    , ldw_available_left(false)
    , lane_type_left(0)
    , distance_to_left_lane(0.0)
    , lane_confidence_right(0)
    , ldw_available_right(false)
    , lane_type_right(0)
    , distance_to_right_lane(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _lane_confidence_left_type;
  _lane_confidence_left_type lane_confidence_left;

   typedef uint8_t _ldw_available_left_type;
  _ldw_available_left_type ldw_available_left;

   typedef uint8_t _lane_type_left_type;
  _lane_type_left_type lane_type_left;

   typedef float _distance_to_left_lane_type;
  _distance_to_left_lane_type distance_to_left_lane;

   typedef uint8_t _lane_confidence_right_type;
  _lane_confidence_right_type lane_confidence_right;

   typedef uint8_t _ldw_available_right_type;
  _ldw_available_right_type ldw_available_right;

   typedef uint8_t _lane_type_right_type;
  _lane_type_right_type lane_type_right;

   typedef float _distance_to_right_lane_type;
  _distance_to_right_lane_type distance_to_right_lane;



  enum {
    LANE_CONFIDENCE_NONE = 0u,
    LANE_CONFIDENCE_LOW = 1u,
    LANE_CONFIDENCE_MED = 2u,
    LANE_CONFIDENCE_HIGH = 3u,
    LANE_TYPE_DASHED = 0u,
    LANE_TYPE_SOLID = 1u,
    LANE_TYPE_NONE = 2u,
    LANE_TYPE_ROAD_EDGE = 3u,
    LANE_TYPE_DOUBLE_LANE_MARK = 4u,
    LANE_TYPE_BOTTS_DOTS = 5u,
    LANE_TYPE_INVALID = 6u,
  };


  typedef boost::shared_ptr< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> const> ConstPtr;

}; // struct AftermarketLane_

typedef ::mobileye_560_660_msgs::AftermarketLane_<std::allocator<void> > AftermarketLane;

typedef boost::shared_ptr< ::mobileye_560_660_msgs::AftermarketLane > AftermarketLanePtr;
typedef boost::shared_ptr< ::mobileye_560_660_msgs::AftermarketLane const> AftermarketLaneConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mobileye_560_660_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mobileye_560_660_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/mobileye_560_660_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a56b7a5f0247252831a59dfc0910af7";
  }

  static const char* value(const ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a56b7a5f0247252ULL;
  static const uint64_t static_value2 = 0x831a59dfc0910af7ULL;
};

template<class ContainerAllocator>
struct DataType< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mobileye_560_660_msgs/AftermarketLane";
  }

  static const char* value(const ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint8 LANE_CONFIDENCE_NONE = 0\n\
uint8 LANE_CONFIDENCE_LOW = 1\n\
uint8 LANE_CONFIDENCE_MED = 2\n\
uint8 LANE_CONFIDENCE_HIGH = 3\n\
\n\
uint8 LANE_TYPE_DASHED = 0\n\
uint8 LANE_TYPE_SOLID = 1\n\
uint8 LANE_TYPE_NONE = 2\n\
uint8 LANE_TYPE_ROAD_EDGE = 3\n\
uint8 LANE_TYPE_DOUBLE_LANE_MARK = 4\n\
uint8 LANE_TYPE_BOTTS_DOTS = 5\n\
uint8 LANE_TYPE_INVALID = 6\n\
\n\
uint8 lane_confidence_left\n\
bool ldw_available_left\n\
uint8 lane_type_left\n\
float32 distance_to_left_lane\n\
uint8 lane_confidence_right\n\
bool ldw_available_right\n\
uint8 lane_type_right\n\
float32 distance_to_right_lane\n\
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

  static const char* value(const ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lane_confidence_left);
      stream.next(m.ldw_available_left);
      stream.next(m.lane_type_left);
      stream.next(m.distance_to_left_lane);
      stream.next(m.lane_confidence_right);
      stream.next(m.ldw_available_right);
      stream.next(m.lane_type_right);
      stream.next(m.distance_to_right_lane);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AftermarketLane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mobileye_560_660_msgs::AftermarketLane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lane_confidence_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lane_confidence_left);
    s << indent << "ldw_available_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ldw_available_left);
    s << indent << "lane_type_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lane_type_left);
    s << indent << "distance_to_left_lane: ";
    Printer<float>::stream(s, indent + "  ", v.distance_to_left_lane);
    s << indent << "lane_confidence_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lane_confidence_right);
    s << indent << "ldw_available_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ldw_available_right);
    s << indent << "lane_type_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lane_type_right);
    s << indent << "distance_to_right_lane: ";
    Printer<float>::stream(s, indent + "  ", v.distance_to_right_lane);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOBILEYE_560_660_MSGS_MESSAGE_AFTERMARKETLANE_H
