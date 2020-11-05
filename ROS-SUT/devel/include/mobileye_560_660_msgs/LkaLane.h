// Generated by gencpp from file mobileye_560_660_msgs/LkaLane.msg
// DO NOT EDIT!


#ifndef MOBILEYE_560_660_MSGS_MESSAGE_LKALANE_H
#define MOBILEYE_560_660_MSGS_MESSAGE_LKALANE_H


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
struct LkaLane_
{
  typedef LkaLane_<ContainerAllocator> Type;

  LkaLane_()
    : header()
    , lane_type(0)
    , quality(0)
    , model_degree(0)
    , position_parameter_c0(0.0)
    , curvature_parameter_c2(0.0)
    , curvature_derivative_parameter_c3(0.0)
    , marking_width(0.0)
    , heading_angle_parameter_c1(0.0)
    , view_range(0.0)
    , view_range_availability(false)  {
    }
  LkaLane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lane_type(0)
    , quality(0)
    , model_degree(0)
    , position_parameter_c0(0.0)
    , curvature_parameter_c2(0.0)
    , curvature_derivative_parameter_c3(0.0)
    , marking_width(0.0)
    , heading_angle_parameter_c1(0.0)
    , view_range(0.0)
    , view_range_availability(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _lane_type_type;
  _lane_type_type lane_type;

   typedef uint8_t _quality_type;
  _quality_type quality;

   typedef uint8_t _model_degree_type;
  _model_degree_type model_degree;

   typedef double _position_parameter_c0_type;
  _position_parameter_c0_type position_parameter_c0;

   typedef double _curvature_parameter_c2_type;
  _curvature_parameter_c2_type curvature_parameter_c2;

   typedef double _curvature_derivative_parameter_c3_type;
  _curvature_derivative_parameter_c3_type curvature_derivative_parameter_c3;

   typedef float _marking_width_type;
  _marking_width_type marking_width;

   typedef double _heading_angle_parameter_c1_type;
  _heading_angle_parameter_c1_type heading_angle_parameter_c1;

   typedef float _view_range_type;
  _view_range_type view_range;

   typedef uint8_t _view_range_availability_type;
  _view_range_availability_type view_range_availability;



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


  typedef boost::shared_ptr< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> const> ConstPtr;

}; // struct LkaLane_

typedef ::mobileye_560_660_msgs::LkaLane_<std::allocator<void> > LkaLane;

typedef boost::shared_ptr< ::mobileye_560_660_msgs::LkaLane > LkaLanePtr;
typedef boost::shared_ptr< ::mobileye_560_660_msgs::LkaLane const> LkaLaneConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "13c7b357c14488be92473cab7e5461ca";
  }

  static const char* value(const ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x13c7b357c14488beULL;
  static const uint64_t static_value2 = 0x92473cab7e5461caULL;
};

template<class ContainerAllocator>
struct DataType< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mobileye_560_660_msgs/LkaLane";
  }

  static const char* value(const ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >
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
uint8 lane_type\n\
uint8 quality\n\
uint8 model_degree\n\
float64 position_parameter_c0\n\
float64 curvature_parameter_c2\n\
float64 curvature_derivative_parameter_c3\n\
float32 marking_width\n\
float64 heading_angle_parameter_c1\n\
float32 view_range\n\
bool view_range_availability\n\
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

  static const char* value(const ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lane_type);
      stream.next(m.quality);
      stream.next(m.model_degree);
      stream.next(m.position_parameter_c0);
      stream.next(m.curvature_parameter_c2);
      stream.next(m.curvature_derivative_parameter_c3);
      stream.next(m.marking_width);
      stream.next(m.heading_angle_parameter_c1);
      stream.next(m.view_range);
      stream.next(m.view_range_availability);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LkaLane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mobileye_560_660_msgs::LkaLane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lane_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lane_type);
    s << indent << "quality: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.quality);
    s << indent << "model_degree: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.model_degree);
    s << indent << "position_parameter_c0: ";
    Printer<double>::stream(s, indent + "  ", v.position_parameter_c0);
    s << indent << "curvature_parameter_c2: ";
    Printer<double>::stream(s, indent + "  ", v.curvature_parameter_c2);
    s << indent << "curvature_derivative_parameter_c3: ";
    Printer<double>::stream(s, indent + "  ", v.curvature_derivative_parameter_c3);
    s << indent << "marking_width: ";
    Printer<float>::stream(s, indent + "  ", v.marking_width);
    s << indent << "heading_angle_parameter_c1: ";
    Printer<double>::stream(s, indent + "  ", v.heading_angle_parameter_c1);
    s << indent << "view_range: ";
    Printer<float>::stream(s, indent + "  ", v.view_range);
    s << indent << "view_range_availability: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.view_range_availability);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOBILEYE_560_660_MSGS_MESSAGE_LKALANE_H
