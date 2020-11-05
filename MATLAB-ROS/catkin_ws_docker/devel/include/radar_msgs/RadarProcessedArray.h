// Generated by gencpp from file radar_msgs/RadarProcessedArray.msg
// DO NOT EDIT!


#ifndef RADAR_MSGS_MESSAGE_RADARPROCESSEDARRAY_H
#define RADAR_MSGS_MESSAGE_RADARPROCESSEDARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <radar_msgs/RadarProcessed.h>

namespace radar_msgs
{
template <class ContainerAllocator>
struct RadarProcessedArray_
{
  typedef RadarProcessedArray_<ContainerAllocator> Type;

  RadarProcessedArray_()
    : header()
    , groundtruth()  {
    }
  RadarProcessedArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , groundtruth(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::radar_msgs::RadarProcessed_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::radar_msgs::RadarProcessed_<ContainerAllocator> >::other >  _groundtruth_type;
  _groundtruth_type groundtruth;





  typedef boost::shared_ptr< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> const> ConstPtr;

}; // struct RadarProcessedArray_

typedef ::radar_msgs::RadarProcessedArray_<std::allocator<void> > RadarProcessedArray;

typedef boost::shared_ptr< ::radar_msgs::RadarProcessedArray > RadarProcessedArrayPtr;
typedef boost::shared_ptr< ::radar_msgs::RadarProcessedArray const> RadarProcessedArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::radar_msgs::RadarProcessedArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf9fa8e0a4edda9688b9f7533e8ed498";
  }

  static const char* value(const ::radar_msgs::RadarProcessedArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf9fa8e0a4edda96ULL;
  static const uint64_t static_value2 = 0x88b9f7533e8ed498ULL;
};

template<class ContainerAllocator>
struct DataType< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "radar_msgs/RadarProcessedArray";
  }

  static const char* value(const ::radar_msgs::RadarProcessedArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
radar_msgs/RadarProcessed[] groundtruth\n\
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
MSG: radar_msgs/RadarProcessed\n\
uint16 object_type\n\
float64 range\n\
";
  }

  static const char* value(const ::radar_msgs::RadarProcessedArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.groundtruth);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RadarProcessedArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::radar_msgs::RadarProcessedArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::radar_msgs::RadarProcessedArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "groundtruth[]" << std::endl;
    for (size_t i = 0; i < v.groundtruth.size(); ++i)
    {
      s << indent << "  groundtruth[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::radar_msgs::RadarProcessed_<ContainerAllocator> >::stream(s, indent + "    ", v.groundtruth[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RADAR_MSGS_MESSAGE_RADARPROCESSEDARRAY_H