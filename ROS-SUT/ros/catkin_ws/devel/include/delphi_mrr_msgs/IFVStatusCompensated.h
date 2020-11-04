// Generated by gencpp from file delphi_mrr_msgs/IFVStatusCompensated.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_IFVSTATUSCOMPENSATED_H
#define DELPHI_MRR_MSGS_MESSAGE_IFVSTATUSCOMPENSATED_H


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
struct IFVStatusCompensated_
{
  typedef IFVStatusCompensated_<ContainerAllocator> Type;

  IFVStatusCompensated_()
    : header()
    , can_yaw_rate_calc_qf(0)
    , can_yaw_rate_calc(0.0)
    , can_yaw_rate_bias(0.0)
    , can_vehicle_speed_calc(0.0)
    , can_veh_spd_comp_factor(0.0)  {
    }
  IFVStatusCompensated_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , can_yaw_rate_calc_qf(0)
    , can_yaw_rate_calc(0.0)
    , can_yaw_rate_bias(0.0)
    , can_vehicle_speed_calc(0.0)
    , can_veh_spd_comp_factor(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _can_yaw_rate_calc_qf_type;
  _can_yaw_rate_calc_qf_type can_yaw_rate_calc_qf;

   typedef float _can_yaw_rate_calc_type;
  _can_yaw_rate_calc_type can_yaw_rate_calc;

   typedef float _can_yaw_rate_bias_type;
  _can_yaw_rate_bias_type can_yaw_rate_bias;

   typedef float _can_vehicle_speed_calc_type;
  _can_vehicle_speed_calc_type can_vehicle_speed_calc;

   typedef float _can_veh_spd_comp_factor_type;
  _can_veh_spd_comp_factor_type can_veh_spd_comp_factor;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> const> ConstPtr;

}; // struct IFVStatusCompensated_

typedef ::delphi_mrr_msgs::IFVStatusCompensated_<std::allocator<void> > IFVStatusCompensated;

typedef boost::shared_ptr< ::delphi_mrr_msgs::IFVStatusCompensated > IFVStatusCompensatedPtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::IFVStatusCompensated const> IFVStatusCompensatedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >
{
  static const char* value()
  {
    return "273b2128306b82c1d31a3b67f601a030";
  }

  static const char* value(const ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x273b2128306b82c1ULL;
  static const uint64_t static_value2 = 0xd31a3b67f601a030ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/IFVStatusCompensated";
  }

  static const char* value(const ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint8 can_yaw_rate_calc_qf\n\
float32 can_yaw_rate_calc\n\
float32 can_yaw_rate_bias\n\
float32 can_vehicle_speed_calc\n\
float32 can_veh_spd_comp_factor\n\
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

  static const char* value(const ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.can_yaw_rate_calc_qf);
      stream.next(m.can_yaw_rate_calc);
      stream.next(m.can_yaw_rate_bias);
      stream.next(m.can_vehicle_speed_calc);
      stream.next(m.can_veh_spd_comp_factor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IFVStatusCompensated_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::IFVStatusCompensated_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "can_yaw_rate_calc_qf: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_yaw_rate_calc_qf);
    s << indent << "can_yaw_rate_calc: ";
    Printer<float>::stream(s, indent + "  ", v.can_yaw_rate_calc);
    s << indent << "can_yaw_rate_bias: ";
    Printer<float>::stream(s, indent + "  ", v.can_yaw_rate_bias);
    s << indent << "can_vehicle_speed_calc: ";
    Printer<float>::stream(s, indent + "  ", v.can_vehicle_speed_calc);
    s << indent << "can_veh_spd_comp_factor: ";
    Printer<float>::stream(s, indent + "  ", v.can_veh_spd_comp_factor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_IFVSTATUSCOMPENSATED_H