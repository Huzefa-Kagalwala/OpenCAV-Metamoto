// Generated by gencpp from file delphi_mrr_msgs/VehicleStateMsg2.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_VEHICLESTATEMSG2_H
#define DELPHI_MRR_MSGS_MESSAGE_VEHICLESTATEMSG2_H


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
struct VehicleStateMsg2_
{
  typedef VehicleStateMsg2_<ContainerAllocator> Type;

  VehicleStateMsg2_()
    : header()
    , fsm_yaw_rate_valid(false)
    , fsm_yaw_rate(0.0)
    , can_vehicle_index4fa(0)
    , fsm_vehicle_velocity(0.0)
    , can_steering_whl_angle_qf(false)
    , can_steering_whl_angle(0)  {
    }
  VehicleStateMsg2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , fsm_yaw_rate_valid(false)
    , fsm_yaw_rate(0.0)
    , can_vehicle_index4fa(0)
    , fsm_vehicle_velocity(0.0)
    , can_steering_whl_angle_qf(false)
    , can_steering_whl_angle(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _fsm_yaw_rate_valid_type;
  _fsm_yaw_rate_valid_type fsm_yaw_rate_valid;

   typedef float _fsm_yaw_rate_type;
  _fsm_yaw_rate_type fsm_yaw_rate;

   typedef uint16_t _can_vehicle_index4fa_type;
  _can_vehicle_index4fa_type can_vehicle_index4fa;

   typedef float _fsm_vehicle_velocity_type;
  _fsm_vehicle_velocity_type fsm_vehicle_velocity;

   typedef uint8_t _can_steering_whl_angle_qf_type;
  _can_steering_whl_angle_qf_type can_steering_whl_angle_qf;

   typedef uint16_t _can_steering_whl_angle_type;
  _can_steering_whl_angle_type can_steering_whl_angle;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleStateMsg2_

typedef ::delphi_mrr_msgs::VehicleStateMsg2_<std::allocator<void> > VehicleStateMsg2;

typedef boost::shared_ptr< ::delphi_mrr_msgs::VehicleStateMsg2 > VehicleStateMsg2Ptr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::VehicleStateMsg2 const> VehicleStateMsg2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5063ce040d482c3323905bf32060059a";
  }

  static const char* value(const ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5063ce040d482c33ULL;
  static const uint64_t static_value2 = 0x23905bf32060059aULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/VehicleStateMsg2";
  }

  static const char* value(const ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
bool    fsm_yaw_rate_valid\n\
float32 fsm_yaw_rate\n\
uint16  can_vehicle_index4fa\n\
float32 fsm_vehicle_velocity\n\
bool    can_steering_whl_angle_qf\n\
uint16  can_steering_whl_angle\n\
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

  static const char* value(const ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.fsm_yaw_rate_valid);
      stream.next(m.fsm_yaw_rate);
      stream.next(m.can_vehicle_index4fa);
      stream.next(m.fsm_vehicle_velocity);
      stream.next(m.can_steering_whl_angle_qf);
      stream.next(m.can_steering_whl_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleStateMsg2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::VehicleStateMsg2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "fsm_yaw_rate_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fsm_yaw_rate_valid);
    s << indent << "fsm_yaw_rate: ";
    Printer<float>::stream(s, indent + "  ", v.fsm_yaw_rate);
    s << indent << "can_vehicle_index4fa: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_vehicle_index4fa);
    s << indent << "fsm_vehicle_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.fsm_vehicle_velocity);
    s << indent << "can_steering_whl_angle_qf: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_steering_whl_angle_qf);
    s << indent << "can_steering_whl_angle: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_steering_whl_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_VEHICLESTATEMSG2_H