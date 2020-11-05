// Generated by gencpp from file delphi_mrr_msgs/Detection.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_DETECTION_H
#define DELPHI_MRR_MSGS_MESSAGE_DETECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace delphi_mrr_msgs
{
template <class ContainerAllocator>
struct Detection_
{
  typedef Detection_<ContainerAllocator> Type;

  Detection_()
    : header()
    , detection_id(0)
    , confid_azimuth(0)
    , super_res_target(false)
    , nd_target(false)
    , host_veh_clutter(false)
    , valid_level(false)
    , azimuth(0.0)
    , range(0)
    , range_rate(0)
    , amplitude(0)
    , index2lsb(0)  {
    }
  Detection_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detection_id(0)
    , confid_azimuth(0)
    , super_res_target(false)
    , nd_target(false)
    , host_veh_clutter(false)
    , valid_level(false)
    , azimuth(0.0)
    , range(0)
    , range_rate(0)
    , amplitude(0)
    , index2lsb(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _detection_id_type;
  _detection_id_type detection_id;

   typedef uint8_t _confid_azimuth_type;
  _confid_azimuth_type confid_azimuth;

   typedef uint8_t _super_res_target_type;
  _super_res_target_type super_res_target;

   typedef uint8_t _nd_target_type;
  _nd_target_type nd_target;

   typedef uint8_t _host_veh_clutter_type;
  _host_veh_clutter_type host_veh_clutter;

   typedef uint8_t _valid_level_type;
  _valid_level_type valid_level;

   typedef double _azimuth_type;
  _azimuth_type azimuth;

   typedef uint16_t _range_type;
  _range_type range;

   typedef uint16_t _range_rate_type;
  _range_rate_type range_rate;

   typedef uint8_t _amplitude_type;
  _amplitude_type amplitude;

   typedef uint8_t _index2lsb_type;
  _index2lsb_type index2lsb;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::Detection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::Detection_<ContainerAllocator> const> ConstPtr;

}; // struct Detection_

typedef ::delphi_mrr_msgs::Detection_<std::allocator<void> > Detection;

typedef boost::shared_ptr< ::delphi_mrr_msgs::Detection > DetectionPtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::Detection const> DetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::Detection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace delphi_mrr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'delphi_mrr_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_mrr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::Detection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::Detection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::Detection_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "41bb0647e974bbe3192fea3dcc96ae90";
  }

  static const char* value(const ::delphi_mrr_msgs::Detection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x41bb0647e974bbe3ULL;
  static const uint64_t static_value2 = 0x192fea3dcc96ae90ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/Detection";
  }

  static const char* value(const ::delphi_mrr_msgs::Detection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint8    detection_id\n\
uint8    confid_azimuth\n\
bool     super_res_target\n\
bool     nd_target\n\
bool     host_veh_clutter\n\
bool     valid_level\n\
float64  azimuth\n\
uint16   range\n\
uint16   range_rate\n\
uint8    amplitude\n\
uint8    index2lsb\n\
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

  static const char* value(const ::delphi_mrr_msgs::Detection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detection_id);
      stream.next(m.confid_azimuth);
      stream.next(m.super_res_target);
      stream.next(m.nd_target);
      stream.next(m.host_veh_clutter);
      stream.next(m.valid_level);
      stream.next(m.azimuth);
      stream.next(m.range);
      stream.next(m.range_rate);
      stream.next(m.amplitude);
      stream.next(m.index2lsb);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Detection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::Detection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::Detection_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detection_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.detection_id);
    s << indent << "confid_azimuth: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.confid_azimuth);
    s << indent << "super_res_target: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.super_res_target);
    s << indent << "nd_target: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nd_target);
    s << indent << "host_veh_clutter: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.host_veh_clutter);
    s << indent << "valid_level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid_level);
    s << indent << "azimuth: ";
    Printer<double>::stream(s, indent + "  ", v.azimuth);
    s << indent << "range: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.range);
    s << indent << "range_rate: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.range_rate);
    s << indent << "amplitude: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.amplitude);
    s << indent << "index2lsb: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.index2lsb);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_DETECTION_H