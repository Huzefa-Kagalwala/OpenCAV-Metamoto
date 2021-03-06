// Generated by gencpp from file delphi_esr_msgs/EsrVehicle2.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRVEHICLE2_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRVEHICLE2_H


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
struct EsrVehicle2_
{
  typedef EsrVehicle2_<ContainerAllocator> Type;

  EsrVehicle2_()
    : header()
    , scan_index_ack(0)
    , use_angle_misalignment(false)
    , clear_faults(false)
    , high_yaw_angle(0)
    , mr_only_transmit(false)
    , lr_only_transmit(false)
    , angle_misalignment(0.0)
    , lateral_mounting_offset(0.0)
    , radar_cmd_radiate(false)
    , blockage_disable(false)
    , maximum_tracks(0)
    , turn_signal_status(0)
    , vehicle_speed_valid(false)
    , mmr_upside_down(false)
    , grouping_mode(0)
    , wiper_status(false)
    , raw_data_enabled(false)  {
    }
  EsrVehicle2_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , scan_index_ack(0)
    , use_angle_misalignment(false)
    , clear_faults(false)
    , high_yaw_angle(0)
    , mr_only_transmit(false)
    , lr_only_transmit(false)
    , angle_misalignment(0.0)
    , lateral_mounting_offset(0.0)
    , radar_cmd_radiate(false)
    , blockage_disable(false)
    , maximum_tracks(0)
    , turn_signal_status(0)
    , vehicle_speed_valid(false)
    , mmr_upside_down(false)
    , grouping_mode(0)
    , wiper_status(false)
    , raw_data_enabled(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _scan_index_ack_type;
  _scan_index_ack_type scan_index_ack;

   typedef uint8_t _use_angle_misalignment_type;
  _use_angle_misalignment_type use_angle_misalignment;

   typedef uint8_t _clear_faults_type;
  _clear_faults_type clear_faults;

   typedef int8_t _high_yaw_angle_type;
  _high_yaw_angle_type high_yaw_angle;

   typedef uint8_t _mr_only_transmit_type;
  _mr_only_transmit_type mr_only_transmit;

   typedef uint8_t _lr_only_transmit_type;
  _lr_only_transmit_type lr_only_transmit;

   typedef float _angle_misalignment_type;
  _angle_misalignment_type angle_misalignment;

   typedef float _lateral_mounting_offset_type;
  _lateral_mounting_offset_type lateral_mounting_offset;

   typedef uint8_t _radar_cmd_radiate_type;
  _radar_cmd_radiate_type radar_cmd_radiate;

   typedef uint8_t _blockage_disable_type;
  _blockage_disable_type blockage_disable;

   typedef uint8_t _maximum_tracks_type;
  _maximum_tracks_type maximum_tracks;

   typedef uint8_t _turn_signal_status_type;
  _turn_signal_status_type turn_signal_status;

   typedef uint8_t _vehicle_speed_valid_type;
  _vehicle_speed_valid_type vehicle_speed_valid;

   typedef uint8_t _mmr_upside_down_type;
  _mmr_upside_down_type mmr_upside_down;

   typedef uint8_t _grouping_mode_type;
  _grouping_mode_type grouping_mode;

   typedef uint8_t _wiper_status_type;
  _wiper_status_type wiper_status;

   typedef uint8_t _raw_data_enabled_type;
  _raw_data_enabled_type raw_data_enabled;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> const> ConstPtr;

}; // struct EsrVehicle2_

typedef ::delphi_esr_msgs::EsrVehicle2_<std::allocator<void> > EsrVehicle2;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrVehicle2 > EsrVehicle2Ptr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrVehicle2 const> EsrVehicle2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "034f7a7ed6d34122e2b7d043548b7f0d";
  }

  static const char* value(const ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x034f7a7ed6d34122ULL;
  static const uint64_t static_value2 = 0xe2b7d043548b7f0dULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrVehicle2";
  }

  static const char* value(const ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR vehicle2\n\
uint16      scan_index_ack\n\
bool        use_angle_misalignment\n\
bool        clear_faults\n\
int8        high_yaw_angle\n\
bool        mr_only_transmit\n\
bool        lr_only_transmit\n\
float32     angle_misalignment\n\
float32     lateral_mounting_offset\n\
bool        radar_cmd_radiate\n\
bool        blockage_disable\n\
uint8       maximum_tracks\n\
uint8       turn_signal_status\n\
bool        vehicle_speed_valid\n\
bool        mmr_upside_down\n\
uint8       grouping_mode\n\
bool        wiper_status\n\
bool        raw_data_enabled\n\
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

  static const char* value(const ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.scan_index_ack);
      stream.next(m.use_angle_misalignment);
      stream.next(m.clear_faults);
      stream.next(m.high_yaw_angle);
      stream.next(m.mr_only_transmit);
      stream.next(m.lr_only_transmit);
      stream.next(m.angle_misalignment);
      stream.next(m.lateral_mounting_offset);
      stream.next(m.radar_cmd_radiate);
      stream.next(m.blockage_disable);
      stream.next(m.maximum_tracks);
      stream.next(m.turn_signal_status);
      stream.next(m.vehicle_speed_valid);
      stream.next(m.mmr_upside_down);
      stream.next(m.grouping_mode);
      stream.next(m.wiper_status);
      stream.next(m.raw_data_enabled);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrVehicle2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrVehicle2_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "scan_index_ack: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.scan_index_ack);
    s << indent << "use_angle_misalignment: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_angle_misalignment);
    s << indent << "clear_faults: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clear_faults);
    s << indent << "high_yaw_angle: ";
    Printer<int8_t>::stream(s, indent + "  ", v.high_yaw_angle);
    s << indent << "mr_only_transmit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mr_only_transmit);
    s << indent << "lr_only_transmit: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lr_only_transmit);
    s << indent << "angle_misalignment: ";
    Printer<float>::stream(s, indent + "  ", v.angle_misalignment);
    s << indent << "lateral_mounting_offset: ";
    Printer<float>::stream(s, indent + "  ", v.lateral_mounting_offset);
    s << indent << "radar_cmd_radiate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.radar_cmd_radiate);
    s << indent << "blockage_disable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.blockage_disable);
    s << indent << "maximum_tracks: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.maximum_tracks);
    s << indent << "turn_signal_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.turn_signal_status);
    s << indent << "vehicle_speed_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vehicle_speed_valid);
    s << indent << "mmr_upside_down: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mmr_upside_down);
    s << indent << "grouping_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.grouping_mode);
    s << indent << "wiper_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wiper_status);
    s << indent << "raw_data_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.raw_data_enabled);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRVEHICLE2_H
