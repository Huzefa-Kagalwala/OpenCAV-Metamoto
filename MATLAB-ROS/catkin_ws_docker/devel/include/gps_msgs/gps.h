// Generated by gencpp from file gps_msgs/gps.msg
// DO NOT EDIT!


#ifndef GPS_MSGS_MESSAGE_GPS_H
#define GPS_MSGS_MESSAGE_GPS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gps_msgs
{
template <class ContainerAllocator>
struct gps_
{
  typedef gps_<ContainerAllocator> Type;

  gps_()
    : latitude(0.0)
    , longitude(0.0)  {
    }
  gps_(const ContainerAllocator& _alloc)
    : latitude(0.0)
    , longitude(0.0)  {
  (void)_alloc;
    }



   typedef float _latitude_type;
  _latitude_type latitude;

   typedef float _longitude_type;
  _longitude_type longitude;





  typedef boost::shared_ptr< ::gps_msgs::gps_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gps_msgs::gps_<ContainerAllocator> const> ConstPtr;

}; // struct gps_

typedef ::gps_msgs::gps_<std::allocator<void> > gps;

typedef boost::shared_ptr< ::gps_msgs::gps > gpsPtr;
typedef boost::shared_ptr< ::gps_msgs::gps const> gpsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gps_msgs::gps_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gps_msgs::gps_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'gps_msgs': ['/metamoto/catkin_ws/src/gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gps_msgs::gps_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gps_msgs::gps_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gps_msgs::gps_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gps_msgs::gps_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gps_msgs::gps_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gps_msgs::gps_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gps_msgs::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9aeb2245d9611f300beeb62a0151d3f3";
  }

  static const char* value(const ::gps_msgs::gps_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9aeb2245d9611f30ULL;
  static const uint64_t static_value2 = 0x0beeb62a0151d3f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::gps_msgs::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gps_msgs/gps";
  }

  static const char* value(const ::gps_msgs::gps_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gps_msgs::gps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 latitude\n\
float32 longitude\n\
";
  }

  static const char* value(const ::gps_msgs::gps_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gps_msgs::gps_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.latitude);
      stream.next(m.longitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gps_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gps_msgs::gps_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gps_msgs::gps_<ContainerAllocator>& v)
  {
    s << indent << "latitude: ";
    Printer<float>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<float>::stream(s, indent + "  ", v.longitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GPS_MSGS_MESSAGE_GPS_H
