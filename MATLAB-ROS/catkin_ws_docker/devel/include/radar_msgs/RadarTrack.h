// Generated by gencpp from file radar_msgs/RadarTrack.msg
// DO NOT EDIT!


#ifndef RADAR_MSGS_MESSAGE_RADARTRACK_H
#define RADAR_MSGS_MESSAGE_RADARTRACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Polygon.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace radar_msgs
{
template <class ContainerAllocator>
struct RadarTrack_
{
  typedef RadarTrack_<ContainerAllocator> Type;

  RadarTrack_()
    : track_id(0)
    , track_shape()
    , linear_velocity()
    , linear_acceleration()  {
    }
  RadarTrack_(const ContainerAllocator& _alloc)
    : track_id(0)
    , track_shape(_alloc)
    , linear_velocity(_alloc)
    , linear_acceleration(_alloc)  {
  (void)_alloc;
    }



   typedef uint16_t _track_id_type;
  _track_id_type track_id;

   typedef  ::geometry_msgs::Polygon_<ContainerAllocator>  _track_shape_type;
  _track_shape_type track_shape;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_velocity_type;
  _linear_velocity_type linear_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_acceleration_type;
  _linear_acceleration_type linear_acceleration;





  typedef boost::shared_ptr< ::radar_msgs::RadarTrack_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::radar_msgs::RadarTrack_<ContainerAllocator> const> ConstPtr;

}; // struct RadarTrack_

typedef ::radar_msgs::RadarTrack_<std::allocator<void> > RadarTrack;

typedef boost::shared_ptr< ::radar_msgs::RadarTrack > RadarTrackPtr;
typedef boost::shared_ptr< ::radar_msgs::RadarTrack const> RadarTrackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::radar_msgs::RadarTrack_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::radar_msgs::RadarTrack_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace radar_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'radar_msgs': ['/metamoto/catkin_ws/src/radar_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::RadarTrack_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::RadarTrack_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::RadarTrack_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::RadarTrack_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::RadarTrack_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::RadarTrack_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::radar_msgs::RadarTrack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "371627dd284ddde5489009ee4498d083";
  }

  static const char* value(const ::radar_msgs::RadarTrack_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x371627dd284ddde5ULL;
  static const uint64_t static_value2 = 0x489009ee4498d083ULL;
};

template<class ContainerAllocator>
struct DataType< ::radar_msgs::RadarTrack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "radar_msgs/RadarTrack";
  }

  static const char* value(const ::radar_msgs::RadarTrack_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::radar_msgs::RadarTrack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#All variables below are relative to the radar's frame of reference.\n\
# This message is not meant to be used alone but as part of a stamped or array message.\n\
\n\
\n\
\n\
\n\
\n\
uint16 track_id                             # The ID of this track generated by the radar. If\n\
                                            # the radar does not generate IDs, this is intended as\n\
                                            # a sequential identifier for each track in a scan.\n\
\n\
geometry_msgs/Polygon track_shape           # The shape and position of the detection. This polygon\n\
                                            # encompasses a 2D plane which approximates the size and\n\
                                            # shape of the detection based on the distance from the\n\
                                            # radar, the detection angle, the width of all detections\n\
                                            # grouped into this track, and the height of the radar's\n\
                                            # vertical field of view at the detection distance.\n\
\n\
geometry_msgs/Vector3 linear_velocity       # Only the x and y components are valid.\n\
geometry_msgs/Vector3 linear_acceleration   # Only the x component is valid.\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Polygon\n\
#A specification of a polygon where the first and last points are assumed to be connected\n\
Point32[] points\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::radar_msgs::RadarTrack_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::radar_msgs::RadarTrack_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.track_id);
      stream.next(m.track_shape);
      stream.next(m.linear_velocity);
      stream.next(m.linear_acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RadarTrack_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::radar_msgs::RadarTrack_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::radar_msgs::RadarTrack_<ContainerAllocator>& v)
  {
    s << indent << "track_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.track_id);
    s << indent << "track_shape: ";
    s << std::endl;
    Printer< ::geometry_msgs::Polygon_<ContainerAllocator> >::stream(s, indent + "  ", v.track_shape);
    s << indent << "linear_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_velocity);
    s << indent << "linear_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_acceleration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RADAR_MSGS_MESSAGE_RADARTRACK_H
