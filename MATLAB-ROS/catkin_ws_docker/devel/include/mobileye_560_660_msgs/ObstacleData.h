// Generated by gencpp from file mobileye_560_660_msgs/ObstacleData.msg
// DO NOT EDIT!


#ifndef MOBILEYE_560_660_MSGS_MESSAGE_OBSTACLEDATA_H
#define MOBILEYE_560_660_MSGS_MESSAGE_OBSTACLEDATA_H


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
struct ObstacleData_
{
  typedef ObstacleData_<ContainerAllocator> Type;

  ObstacleData_()
    : header()
    , obstacle_id(0)
    , obstacle_pos_x(0.0)
    , obstacle_pos_y(0.0)
    , blinker_info(0)
    , cut_in_and_out(0)
    , obstacle_rel_vel_x(0.0)
    , obstacle_type(0)
    , obstacle_status(0)
    , obstacle_brake_lights(false)
    , obstacle_valid(0)
    , obstacle_length(0.0)
    , obstacle_width(0.0)
    , obstacle_age(0)
    , obstacle_lane(0)
    , cipv_flag(false)
    , radar_pos_x(0.0)
    , radar_vel_x(0.0)
    , radar_match_confidence(0)
    , matched_radar_id(0)
    , obstacle_angle_rate(0.0)
    , obstacle_scale_change(0.0)
    , object_accel_x(0.0)
    , obstacle_replaced(false)
    , obstacle_angle(0.0)  {
    }
  ObstacleData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , obstacle_id(0)
    , obstacle_pos_x(0.0)
    , obstacle_pos_y(0.0)
    , blinker_info(0)
    , cut_in_and_out(0)
    , obstacle_rel_vel_x(0.0)
    , obstacle_type(0)
    , obstacle_status(0)
    , obstacle_brake_lights(false)
    , obstacle_valid(0)
    , obstacle_length(0.0)
    , obstacle_width(0.0)
    , obstacle_age(0)
    , obstacle_lane(0)
    , cipv_flag(false)
    , radar_pos_x(0.0)
    , radar_vel_x(0.0)
    , radar_match_confidence(0)
    , matched_radar_id(0)
    , obstacle_angle_rate(0.0)
    , obstacle_scale_change(0.0)
    , object_accel_x(0.0)
    , obstacle_replaced(false)
    , obstacle_angle(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _obstacle_id_type;
  _obstacle_id_type obstacle_id;

   typedef double _obstacle_pos_x_type;
  _obstacle_pos_x_type obstacle_pos_x;

   typedef double _obstacle_pos_y_type;
  _obstacle_pos_y_type obstacle_pos_y;

   typedef uint8_t _blinker_info_type;
  _blinker_info_type blinker_info;

   typedef uint8_t _cut_in_and_out_type;
  _cut_in_and_out_type cut_in_and_out;

   typedef double _obstacle_rel_vel_x_type;
  _obstacle_rel_vel_x_type obstacle_rel_vel_x;

   typedef uint8_t _obstacle_type_type;
  _obstacle_type_type obstacle_type;

   typedef uint8_t _obstacle_status_type;
  _obstacle_status_type obstacle_status;

   typedef uint8_t _obstacle_brake_lights_type;
  _obstacle_brake_lights_type obstacle_brake_lights;

   typedef uint8_t _obstacle_valid_type;
  _obstacle_valid_type obstacle_valid;

   typedef float _obstacle_length_type;
  _obstacle_length_type obstacle_length;

   typedef float _obstacle_width_type;
  _obstacle_width_type obstacle_width;

   typedef uint16_t _obstacle_age_type;
  _obstacle_age_type obstacle_age;

   typedef uint8_t _obstacle_lane_type;
  _obstacle_lane_type obstacle_lane;

   typedef uint8_t _cipv_flag_type;
  _cipv_flag_type cipv_flag;

   typedef float _radar_pos_x_type;
  _radar_pos_x_type radar_pos_x;

   typedef float _radar_vel_x_type;
  _radar_vel_x_type radar_vel_x;

   typedef uint8_t _radar_match_confidence_type;
  _radar_match_confidence_type radar_match_confidence;

   typedef uint16_t _matched_radar_id_type;
  _matched_radar_id_type matched_radar_id;

   typedef float _obstacle_angle_rate_type;
  _obstacle_angle_rate_type obstacle_angle_rate;

   typedef double _obstacle_scale_change_type;
  _obstacle_scale_change_type obstacle_scale_change;

   typedef float _object_accel_x_type;
  _object_accel_x_type object_accel_x;

   typedef uint8_t _obstacle_replaced_type;
  _obstacle_replaced_type obstacle_replaced;

   typedef float _obstacle_angle_type;
  _obstacle_angle_type obstacle_angle;



  enum {
    BLINKER_INFO_UNAVAILABLE = 0u,
    BLINKER_INFO_OFF = 1u,
    BLINKER_INFO_LEFT = 2u,
    BLINKER_INFO_RIGHT = 3u,
    BLINKER_INFO_BOTH = 4u,
    CUT_IN_AND_OUT_UNDEFINED = 0u,
    CUT_IN_AND_OUT_IN_HOST_LANE = 1u,
    CUT_IN_AND_OUT_OUT_HOST_LANE = 2u,
    CUT_IN_AND_OUT_CUT_IN = 3u,
    CUT_IN_AND_OUT_CUT_OUT = 4u,
    OBSTACLE_TYPE_VEHICLE = 0u,
    OBSTACLE_TYPE_TRUCK = 1u,
    OBSTACLE_TYPE_BIKE = 2u,
    OBSTACLE_TYPE_PED = 3u,
    OBSTACLE_TYPE_BICYCLE = 4u,
    OBSTACLE_STATUS_UNDEFINED = 0u,
    OBSTACLE_STATUS_STANDING = 1u,
    OBSTACLE_STATUS_STOPPED = 2u,
    OBSTACLE_STATUS_MOVING = 3u,
    OBSTACLE_STATUS_ONCOMING = 4u,
    OBSTACLE_STATUS_PARKED = 5u,
    OBSTACLE_VALID_INVALID = 0u,
    OBSTACLE_VALID_NEW = 1u,
    OBSTACLE_VALID_OLDER = 2u,
    OBSTACLE_LANE_NOT_ASSIGNED = 0u,
    OBSTACLE_LANE_EGO_LANE = 1u,
    OBSTACLE_LANE_NEXT_LANE = 2u,
    OBSTACLE_LANE_INVALID = 3u,
    RADAR_MATCH_CONFIDENCE_NO_MATCH = 0u,
    RADAR_MATCH_CONFIDENCE_MULTI_MATCH = 1u,
    RADAR_MATCH_CONFIDENCE_BOUNDED_LOW = 2u,
    RADAR_MATCH_CONFIDENCE_BOUNDED_MED = 3u,
    RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH = 4u,
    RADAR_MATCH_CONFIDENCE_HIGH = 5u,
  };


  typedef boost::shared_ptr< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> const> ConstPtr;

}; // struct ObstacleData_

typedef ::mobileye_560_660_msgs::ObstacleData_<std::allocator<void> > ObstacleData;

typedef boost::shared_ptr< ::mobileye_560_660_msgs::ObstacleData > ObstacleDataPtr;
typedef boost::shared_ptr< ::mobileye_560_660_msgs::ObstacleData const> ObstacleDataConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ff75c75f79e1f472d5b0086caa5c286f";
  }

  static const char* value(const ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xff75c75f79e1f472ULL;
  static const uint64_t static_value2 = 0xd5b0086caa5c286fULL;
};

template<class ContainerAllocator>
struct DataType< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mobileye_560_660_msgs/ObstacleData";
  }

  static const char* value(const ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint16 obstacle_id\n\
float64 obstacle_pos_x\n\
float64 obstacle_pos_y\n\
\n\
uint8 BLINKER_INFO_UNAVAILABLE = 0\n\
uint8 BLINKER_INFO_OFF = 1\n\
uint8 BLINKER_INFO_LEFT = 2\n\
uint8 BLINKER_INFO_RIGHT = 3\n\
uint8 BLINKER_INFO_BOTH = 4\n\
uint8 blinker_info\n\
\n\
uint8 CUT_IN_AND_OUT_UNDEFINED = 0\n\
uint8 CUT_IN_AND_OUT_IN_HOST_LANE = 1\n\
uint8 CUT_IN_AND_OUT_OUT_HOST_LANE = 2\n\
uint8 CUT_IN_AND_OUT_CUT_IN = 3\n\
uint8 CUT_IN_AND_OUT_CUT_OUT = 4\n\
uint8 cut_in_and_out\n\
\n\
float64 obstacle_rel_vel_x\n\
\n\
uint8 OBSTACLE_TYPE_VEHICLE = 0\n\
uint8 OBSTACLE_TYPE_TRUCK = 1\n\
uint8 OBSTACLE_TYPE_BIKE = 2\n\
uint8 OBSTACLE_TYPE_PED = 3\n\
uint8 OBSTACLE_TYPE_BICYCLE = 4\n\
uint8 obstacle_type\n\
\n\
uint8 OBSTACLE_STATUS_UNDEFINED = 0\n\
uint8 OBSTACLE_STATUS_STANDING = 1\n\
uint8 OBSTACLE_STATUS_STOPPED = 2\n\
uint8 OBSTACLE_STATUS_MOVING = 3\n\
uint8 OBSTACLE_STATUS_ONCOMING = 4\n\
uint8 OBSTACLE_STATUS_PARKED = 5\n\
uint8 obstacle_status\n\
\n\
bool obstacle_brake_lights\n\
\n\
uint8 OBSTACLE_VALID_INVALID = 0\n\
uint8 OBSTACLE_VALID_NEW = 1\n\
uint8 OBSTACLE_VALID_OLDER = 2\n\
uint8 obstacle_valid\n\
\n\
float32 obstacle_length\n\
float32 obstacle_width\n\
uint16 obstacle_age\n\
\n\
uint8 OBSTACLE_LANE_NOT_ASSIGNED = 0\n\
uint8 OBSTACLE_LANE_EGO_LANE = 1\n\
uint8 OBSTACLE_LANE_NEXT_LANE = 2\n\
uint8 OBSTACLE_LANE_INVALID = 3\n\
uint8 obstacle_lane\n\
\n\
bool cipv_flag\n\
float32 radar_pos_x\n\
float32 radar_vel_x\n\
\n\
uint8 RADAR_MATCH_CONFIDENCE_NO_MATCH = 0\n\
uint8 RADAR_MATCH_CONFIDENCE_MULTI_MATCH = 1\n\
uint8 RADAR_MATCH_CONFIDENCE_BOUNDED_LOW = 2\n\
uint8 RADAR_MATCH_CONFIDENCE_BOUNDED_MED = 3\n\
uint8 RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH = 4\n\
uint8 RADAR_MATCH_CONFIDENCE_HIGH = 5\n\
uint8 radar_match_confidence\n\
\n\
uint16 matched_radar_id\n\
float32 obstacle_angle_rate\n\
float64 obstacle_scale_change\n\
float32 object_accel_x\n\
bool obstacle_replaced\n\
float32 obstacle_angle\n\
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

  static const char* value(const ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.obstacle_id);
      stream.next(m.obstacle_pos_x);
      stream.next(m.obstacle_pos_y);
      stream.next(m.blinker_info);
      stream.next(m.cut_in_and_out);
      stream.next(m.obstacle_rel_vel_x);
      stream.next(m.obstacle_type);
      stream.next(m.obstacle_status);
      stream.next(m.obstacle_brake_lights);
      stream.next(m.obstacle_valid);
      stream.next(m.obstacle_length);
      stream.next(m.obstacle_width);
      stream.next(m.obstacle_age);
      stream.next(m.obstacle_lane);
      stream.next(m.cipv_flag);
      stream.next(m.radar_pos_x);
      stream.next(m.radar_vel_x);
      stream.next(m.radar_match_confidence);
      stream.next(m.matched_radar_id);
      stream.next(m.obstacle_angle_rate);
      stream.next(m.obstacle_scale_change);
      stream.next(m.object_accel_x);
      stream.next(m.obstacle_replaced);
      stream.next(m.obstacle_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObstacleData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mobileye_560_660_msgs::ObstacleData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "obstacle_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.obstacle_id);
    s << indent << "obstacle_pos_x: ";
    Printer<double>::stream(s, indent + "  ", v.obstacle_pos_x);
    s << indent << "obstacle_pos_y: ";
    Printer<double>::stream(s, indent + "  ", v.obstacle_pos_y);
    s << indent << "blinker_info: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.blinker_info);
    s << indent << "cut_in_and_out: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cut_in_and_out);
    s << indent << "obstacle_rel_vel_x: ";
    Printer<double>::stream(s, indent + "  ", v.obstacle_rel_vel_x);
    s << indent << "obstacle_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.obstacle_type);
    s << indent << "obstacle_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.obstacle_status);
    s << indent << "obstacle_brake_lights: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.obstacle_brake_lights);
    s << indent << "obstacle_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.obstacle_valid);
    s << indent << "obstacle_length: ";
    Printer<float>::stream(s, indent + "  ", v.obstacle_length);
    s << indent << "obstacle_width: ";
    Printer<float>::stream(s, indent + "  ", v.obstacle_width);
    s << indent << "obstacle_age: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.obstacle_age);
    s << indent << "obstacle_lane: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.obstacle_lane);
    s << indent << "cipv_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cipv_flag);
    s << indent << "radar_pos_x: ";
    Printer<float>::stream(s, indent + "  ", v.radar_pos_x);
    s << indent << "radar_vel_x: ";
    Printer<float>::stream(s, indent + "  ", v.radar_vel_x);
    s << indent << "radar_match_confidence: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.radar_match_confidence);
    s << indent << "matched_radar_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.matched_radar_id);
    s << indent << "obstacle_angle_rate: ";
    Printer<float>::stream(s, indent + "  ", v.obstacle_angle_rate);
    s << indent << "obstacle_scale_change: ";
    Printer<double>::stream(s, indent + "  ", v.obstacle_scale_change);
    s << indent << "object_accel_x: ";
    Printer<float>::stream(s, indent + "  ", v.object_accel_x);
    s << indent << "obstacle_replaced: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.obstacle_replaced);
    s << indent << "obstacle_angle: ";
    Printer<float>::stream(s, indent + "  ", v.obstacle_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOBILEYE_560_660_MSGS_MESSAGE_OBSTACLEDATA_H
