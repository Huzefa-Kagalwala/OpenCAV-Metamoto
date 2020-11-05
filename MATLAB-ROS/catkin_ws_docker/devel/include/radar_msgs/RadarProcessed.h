// Generated by gencpp from file radar_msgs/RadarProcessed.msg
// DO NOT EDIT!


#ifndef RADAR_MSGS_MESSAGE_RADARPROCESSED_H
#define RADAR_MSGS_MESSAGE_RADARPROCESSED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace radar_msgs
{
template <class ContainerAllocator>
struct RadarProcessed_
{
  typedef RadarProcessed_<ContainerAllocator> Type;

  RadarProcessed_()
    : object_type(0)
    , range(0.0)  {
    }
  RadarProcessed_(const ContainerAllocator& _alloc)
    : object_type(0)
    , range(0.0)  {
  (void)_alloc;
    }



   typedef uint16_t _object_type_type;
  _object_type_type object_type;

   typedef double _range_type;
  _range_type range;





  typedef boost::shared_ptr< ::radar_msgs::RadarProcessed_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::radar_msgs::RadarProcessed_<ContainerAllocator> const> ConstPtr;

}; // struct RadarProcessed_

typedef ::radar_msgs::RadarProcessed_<std::allocator<void> > RadarProcessed;

typedef boost::shared_ptr< ::radar_msgs::RadarProcessed > RadarProcessedPtr;
typedef boost::shared_ptr< ::radar_msgs::RadarProcessed const> RadarProcessedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::radar_msgs::RadarProcessed_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::radar_msgs::RadarProcessed_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace radar_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'radar_msgs': ['/metamoto/catkin_ws/src/radar_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::RadarProcessed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::radar_msgs::RadarProcessed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::RadarProcessed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::radar_msgs::RadarProcessed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::RadarProcessed_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::radar_msgs::RadarProcessed_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::radar_msgs::RadarProcessed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "70dc93b14bad2d82dec80476656b3685";
  }

  static const char* value(const ::radar_msgs::RadarProcessed_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x70dc93b14bad2d82ULL;
  static const uint64_t static_value2 = 0xdec80476656b3685ULL;
};

template<class ContainerAllocator>
struct DataType< ::radar_msgs::RadarProcessed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "radar_msgs/RadarProcessed";
  }

  static const char* value(const ::radar_msgs::RadarProcessed_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::radar_msgs::RadarProcessed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 object_type\n\
float64 range\n\
";
  }

  static const char* value(const ::radar_msgs::RadarProcessed_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::radar_msgs::RadarProcessed_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object_type);
      stream.next(m.range);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RadarProcessed_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::radar_msgs::RadarProcessed_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::radar_msgs::RadarProcessed_<ContainerAllocator>& v)
  {
    s << indent << "object_type: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.object_type);
    s << indent << "range: ";
    Printer<double>::stream(s, indent + "  ", v.range);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RADAR_MSGS_MESSAGE_RADARPROCESSED_H
