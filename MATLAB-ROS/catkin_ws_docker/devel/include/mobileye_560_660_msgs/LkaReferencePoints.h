// Generated by gencpp from file mobileye_560_660_msgs/LkaReferencePoints.msg
// DO NOT EDIT!


#ifndef MOBILEYE_560_660_MSGS_MESSAGE_LKAREFERENCEPOINTS_H
#define MOBILEYE_560_660_MSGS_MESSAGE_LKAREFERENCEPOINTS_H


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
struct LkaReferencePoints_
{
  typedef LkaReferencePoints_<ContainerAllocator> Type;

  LkaReferencePoints_()
    : header()
    , ref_point_1_position(0.0)
    , ref_point_1_distance(0.0)
    , ref_point_1_validity(false)
    , ref_point_2_position(0.0)
    , ref_point_2_distance(0.0)
    , ref_point_2_validity(false)  {
    }
  LkaReferencePoints_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ref_point_1_position(0.0)
    , ref_point_1_distance(0.0)
    , ref_point_1_validity(false)
    , ref_point_2_position(0.0)
    , ref_point_2_distance(0.0)
    , ref_point_2_validity(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _ref_point_1_position_type;
  _ref_point_1_position_type ref_point_1_position;

   typedef double _ref_point_1_distance_type;
  _ref_point_1_distance_type ref_point_1_distance;

   typedef uint8_t _ref_point_1_validity_type;
  _ref_point_1_validity_type ref_point_1_validity;

   typedef double _ref_point_2_position_type;
  _ref_point_2_position_type ref_point_2_position;

   typedef double _ref_point_2_distance_type;
  _ref_point_2_distance_type ref_point_2_distance;

   typedef uint8_t _ref_point_2_validity_type;
  _ref_point_2_validity_type ref_point_2_validity;





  typedef boost::shared_ptr< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> const> ConstPtr;

}; // struct LkaReferencePoints_

typedef ::mobileye_560_660_msgs::LkaReferencePoints_<std::allocator<void> > LkaReferencePoints;

typedef boost::shared_ptr< ::mobileye_560_660_msgs::LkaReferencePoints > LkaReferencePointsPtr;
typedef boost::shared_ptr< ::mobileye_560_660_msgs::LkaReferencePoints const> LkaReferencePointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0da833fa4330bb296afc10246a88cb60";
  }

  static const char* value(const ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0da833fa4330bb29ULL;
  static const uint64_t static_value2 = 0x6afc10246a88cb60ULL;
};

template<class ContainerAllocator>
struct DataType< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mobileye_560_660_msgs/LkaReferencePoints";
  }

  static const char* value(const ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
float64 ref_point_1_position\n\
float64 ref_point_1_distance\n\
bool ref_point_1_validity\n\
float64 ref_point_2_position\n\
float64 ref_point_2_distance\n\
bool ref_point_2_validity\n\
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

  static const char* value(const ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ref_point_1_position);
      stream.next(m.ref_point_1_distance);
      stream.next(m.ref_point_1_validity);
      stream.next(m.ref_point_2_position);
      stream.next(m.ref_point_2_distance);
      stream.next(m.ref_point_2_validity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LkaReferencePoints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mobileye_560_660_msgs::LkaReferencePoints_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ref_point_1_position: ";
    Printer<double>::stream(s, indent + "  ", v.ref_point_1_position);
    s << indent << "ref_point_1_distance: ";
    Printer<double>::stream(s, indent + "  ", v.ref_point_1_distance);
    s << indent << "ref_point_1_validity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ref_point_1_validity);
    s << indent << "ref_point_2_position: ";
    Printer<double>::stream(s, indent + "  ", v.ref_point_2_position);
    s << indent << "ref_point_2_distance: ";
    Printer<double>::stream(s, indent + "  ", v.ref_point_2_distance);
    s << indent << "ref_point_2_validity: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ref_point_2_validity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOBILEYE_560_660_MSGS_MESSAGE_LKAREFERENCEPOINTS_H
