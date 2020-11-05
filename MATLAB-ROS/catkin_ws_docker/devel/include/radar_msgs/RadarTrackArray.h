// Generated by gencpp from file radar_msgs/RadarTrackArray.msg
// DO NOT EDIT!


#ifndef RADAR_MSGS_MESSAGE_RADARTRACKARRAY_H
#define RADAR_MSGS_MESSAGE_RADARTRACKARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <radar_msgs/RadarTrack.h>

namespace radar_msgs
{
template <class ContainerAllocator>
struct RadarTrackArray_
{
  typedef RadarTrackArray_<ContainerAllocator> Type;

  RadarTrackArray_()
    : header()
    , tracks()  {
    }
  RadarTrackArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tracks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::radar_msgs::RadarTrack_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::radar_msgs::RadarTrack_<ContainerAllocator> >::other >  _tracks_type;
  _tracks_type tracks;





  typedef boost::shared_ptr< ::radar_msgs::RadarTrackArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::radar_msgs::RadarTrackArray_<ContainerAllocator> const> ConstPtr;

}; // struct RadarTrackArray_

typedef ::radar_msgs::RadarTrackArray_<std::allocator<void> > RadarTrackArray;

typedef boost::shared_ptr< ::radar_msgs::RadarTrackArray > RadarTrackArrayPtr;
typedef boost::shared_ptr< ::radar_msgs::RadarTrackArray const> RadarTrackArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::radar_msgs::RadarTrackArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace radar_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'radar_msgs': ['/metamoto/catkin_ws/src/radar_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::RadarTrackArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::RadarTrackArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::RadarTrackArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "49d8549010f0f446ea46ca97a1099cba";
  }

  static const char* value(const ::radar_msgs::RadarTrackArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x49d8549010f0f446ULL;
  static const uint64_t static_value2 = 0xea46ca97a1099cbaULL;
};

template<class ContainerAllocator>
struct DataType< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "radar_msgs/RadarTrackArray";
  }

  static const char* value(const ::radar_msgs::RadarTrackArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
RadarTrack[] tracks\n\
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
\n\
================================================================================\n\
MSG: radar_msgs/RadarTrack\n\
#All variables below are relative to the radar's frame of reference.\n\
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

  static const char* value(const ::radar_msgs::RadarTrackArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tracks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RadarTrackArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::radar_msgs::RadarTrackArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::radar_msgs::RadarTrackArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tracks[]" << std::endl;
    for (size_t i = 0; i < v.tracks.size(); ++i)
    {
      s << indent << "  tracks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::radar_msgs::RadarTrack_<ContainerAllocator> >::stream(s, indent + "    ", v.tracks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RADAR_MSGS_MESSAGE_RADARTRACKARRAY_H
