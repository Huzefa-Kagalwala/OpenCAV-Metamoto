// Generated by gencpp from file delphi_esr_msgs/EsrVehicle5.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRVEHICLE5_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRVEHICLE5_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace delphi_esr_msgs
{
template <class ContainerAllocator>
struct EsrVehicle5_
{
  typedef EsrVehicle5_<ContainerAllocator> Type;

  EsrVehicle5_()
    : header()
    , oversteer_understeer(0)
    , yaw_rate_bias_shift(false)
    , beamwidth_vert(0.0)
    , funnel_offset_left(0.0)
    , funnel_offset_right(0.0)
    , cw_blockage_threshold(0.0)
    , distance_rear_axle(0)
    , wheel_base(0)
    , steering_gear_ratio(0.0)  {
    }
  EsrVehicle5_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , oversteer_understeer(0)
    , yaw_rate_bias_shift(false)
    , beamwidth_vert(0.0)
    , funnel_offset_left(0.0)
    , funnel_offset_right(0.0)
    , cw_blockage_threshold(0.0)
    , distance_rear_axle(0)
    , wheel_base(0)
    , steering_gear_ratio(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int8_t _oversteer_understeer_type;
  _oversteer_understeer_type oversteer_understeer;

   typedef uint8_t _yaw_rate_bias_shift_type;
  _yaw_rate_bias_shift_type yaw_rate_bias_shift;

   typedef float _beamwidth_vert_type;
  _beamwidth_vert_type beamwidth_vert;

   typedef float _funnel_offset_left_type;
  _funnel_offset_left_type funnel_offset_left;

   typedef float _funnel_offset_right_type;
  _funnel_offset_right_type funnel_offset_right;

   typedef float _cw_blockage_threshold_type;
  _cw_blockage_threshold_type cw_blockage_threshold;

   typedef uint16_t _distance_rear_axle_type;
  _distance_rear_axle_type distance_rear_axle;

   typedef uint16_t _wheel_base_type;
  _wheel_base_type wheel_base;

   typedef float _steering_gear_ratio_type;
  _steering_gear_ratio_type steering_gear_ratio;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> const> ConstPtr;

}; // struct EsrVehicle5_

typedef ::delphi_esr_msgs::EsrVehicle5_<std::allocator<void> > EsrVehicle5;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrVehicle5 > EsrVehicle5Ptr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrVehicle5 const> EsrVehicle5ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace delphi_esr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'delphi_esr_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_esr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4135fc6914a28e2c947a8270cd84b22";
  }

  static const char* value(const ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4135fc6914a28e2ULL;
  static const uint64_t static_value2 = 0xc947a8270cd84b22ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrVehicle5";
  }

  static const char* value(const ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR vehicle5\n\
int8        oversteer_understeer\n\
bool        yaw_rate_bias_shift\n\
float32     beamwidth_vert\n\
float32     funnel_offset_left\n\
float32     funnel_offset_right\n\
float32     cw_blockage_threshold\n\
uint16      distance_rear_axle\n\
uint16      wheel_base\n\
float32     steering_gear_ratio       \n\
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

  static const char* value(const ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.oversteer_understeer);
      stream.next(m.yaw_rate_bias_shift);
      stream.next(m.beamwidth_vert);
      stream.next(m.funnel_offset_left);
      stream.next(m.funnel_offset_right);
      stream.next(m.cw_blockage_threshold);
      stream.next(m.distance_rear_axle);
      stream.next(m.wheel_base);
      stream.next(m.steering_gear_ratio);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrVehicle5_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrVehicle5_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "oversteer_understeer: ";
    Printer<int8_t>::stream(s, indent + "  ", v.oversteer_understeer);
    s << indent << "yaw_rate_bias_shift: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.yaw_rate_bias_shift);
    s << indent << "beamwidth_vert: ";
    Printer<float>::stream(s, indent + "  ", v.beamwidth_vert);
    s << indent << "funnel_offset_left: ";
    Printer<float>::stream(s, indent + "  ", v.funnel_offset_left);
    s << indent << "funnel_offset_right: ";
    Printer<float>::stream(s, indent + "  ", v.funnel_offset_right);
    s << indent << "cw_blockage_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.cw_blockage_threshold);
    s << indent << "distance_rear_axle: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.distance_rear_axle);
    s << indent << "wheel_base: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.wheel_base);
    s << indent << "steering_gear_ratio: ";
    Printer<float>::stream(s, indent + "  ", v.steering_gear_ratio);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRVEHICLE5_H