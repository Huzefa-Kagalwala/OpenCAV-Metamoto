// Generated by gencpp from file delphi_srr_msgs/SrrStatus5.msg
// DO NOT EDIT!


#ifndef DELPHI_SRR_MSGS_MESSAGE_SRRSTATUS5_H
#define DELPHI_SRR_MSGS_MESSAGE_SRRSTATUS5_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace delphi_srr_msgs
{
template <class ContainerAllocator>
struct SrrStatus5_
{
  typedef SrrStatus5_<ContainerAllocator> Type;

  SrrStatus5_()
    : header()
    , disable_auto_align(false)
    , can_tx_yaw_rate_ref_qf(0)
    , can_tx_yaw_rate_raw_qf(0)
    , can_tx_yaw_rate_reference(0.0)
    , can_tx_yaw_rate_raw(0.0)
    , can_tx_system_status(0)
    , can_tx_outside_temperature(0)
    , can_blockage_mnr_blocked(false)
    , can_blockage_bb_blocked(false)
    , can_blockage_radar_blocked(false)
    , can_td_blocked(false)
    , radar_tx_power_error(false)
    , radar_lo_power_error(false)
    , radar_data_sync_error(false)
    , linearizer_spi_transfer_error(false)
    , saturated_tuning_freq_error(false)
    , rtn_spi_transfer_error(false)
    , rrn_spi_transfer_error(false)
    , video_port_capture_error(false)
    , vertical_misalignment_error(false)
    , tx_temperature_fault(false)
    , transmitter_id_error(false)
    , dsp_unit_cal_checksum_error(false)
    , dsp_unit_cal_block_chcksm_error(false)
    , dsp_tuning_sensitivity_error(false)
    , dsp_loop_overrun_error(false)
    , adc_spi_transfer_error(false)  {
    }
  SrrStatus5_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , disable_auto_align(false)
    , can_tx_yaw_rate_ref_qf(0)
    , can_tx_yaw_rate_raw_qf(0)
    , can_tx_yaw_rate_reference(0.0)
    , can_tx_yaw_rate_raw(0.0)
    , can_tx_system_status(0)
    , can_tx_outside_temperature(0)
    , can_blockage_mnr_blocked(false)
    , can_blockage_bb_blocked(false)
    , can_blockage_radar_blocked(false)
    , can_td_blocked(false)
    , radar_tx_power_error(false)
    , radar_lo_power_error(false)
    , radar_data_sync_error(false)
    , linearizer_spi_transfer_error(false)
    , saturated_tuning_freq_error(false)
    , rtn_spi_transfer_error(false)
    , rrn_spi_transfer_error(false)
    , video_port_capture_error(false)
    , vertical_misalignment_error(false)
    , tx_temperature_fault(false)
    , transmitter_id_error(false)
    , dsp_unit_cal_checksum_error(false)
    , dsp_unit_cal_block_chcksm_error(false)
    , dsp_tuning_sensitivity_error(false)
    , dsp_loop_overrun_error(false)
    , adc_spi_transfer_error(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _disable_auto_align_type;
  _disable_auto_align_type disable_auto_align;

   typedef uint8_t _can_tx_yaw_rate_ref_qf_type;
  _can_tx_yaw_rate_ref_qf_type can_tx_yaw_rate_ref_qf;

   typedef uint8_t _can_tx_yaw_rate_raw_qf_type;
  _can_tx_yaw_rate_raw_qf_type can_tx_yaw_rate_raw_qf;

   typedef float _can_tx_yaw_rate_reference_type;
  _can_tx_yaw_rate_reference_type can_tx_yaw_rate_reference;

   typedef float _can_tx_yaw_rate_raw_type;
  _can_tx_yaw_rate_raw_type can_tx_yaw_rate_raw;

   typedef uint8_t _can_tx_system_status_type;
  _can_tx_system_status_type can_tx_system_status;

   typedef int16_t _can_tx_outside_temperature_type;
  _can_tx_outside_temperature_type can_tx_outside_temperature;

   typedef uint8_t _can_blockage_mnr_blocked_type;
  _can_blockage_mnr_blocked_type can_blockage_mnr_blocked;

   typedef uint8_t _can_blockage_bb_blocked_type;
  _can_blockage_bb_blocked_type can_blockage_bb_blocked;

   typedef uint8_t _can_blockage_radar_blocked_type;
  _can_blockage_radar_blocked_type can_blockage_radar_blocked;

   typedef uint8_t _can_td_blocked_type;
  _can_td_blocked_type can_td_blocked;

   typedef uint8_t _radar_tx_power_error_type;
  _radar_tx_power_error_type radar_tx_power_error;

   typedef uint8_t _radar_lo_power_error_type;
  _radar_lo_power_error_type radar_lo_power_error;

   typedef uint8_t _radar_data_sync_error_type;
  _radar_data_sync_error_type radar_data_sync_error;

   typedef uint8_t _linearizer_spi_transfer_error_type;
  _linearizer_spi_transfer_error_type linearizer_spi_transfer_error;

   typedef uint8_t _saturated_tuning_freq_error_type;
  _saturated_tuning_freq_error_type saturated_tuning_freq_error;

   typedef uint8_t _rtn_spi_transfer_error_type;
  _rtn_spi_transfer_error_type rtn_spi_transfer_error;

   typedef uint8_t _rrn_spi_transfer_error_type;
  _rrn_spi_transfer_error_type rrn_spi_transfer_error;

   typedef uint8_t _video_port_capture_error_type;
  _video_port_capture_error_type video_port_capture_error;

   typedef uint8_t _vertical_misalignment_error_type;
  _vertical_misalignment_error_type vertical_misalignment_error;

   typedef uint8_t _tx_temperature_fault_type;
  _tx_temperature_fault_type tx_temperature_fault;

   typedef uint8_t _transmitter_id_error_type;
  _transmitter_id_error_type transmitter_id_error;

   typedef uint8_t _dsp_unit_cal_checksum_error_type;
  _dsp_unit_cal_checksum_error_type dsp_unit_cal_checksum_error;

   typedef uint8_t _dsp_unit_cal_block_chcksm_error_type;
  _dsp_unit_cal_block_chcksm_error_type dsp_unit_cal_block_chcksm_error;

   typedef uint8_t _dsp_tuning_sensitivity_error_type;
  _dsp_tuning_sensitivity_error_type dsp_tuning_sensitivity_error;

   typedef uint8_t _dsp_loop_overrun_error_type;
  _dsp_loop_overrun_error_type dsp_loop_overrun_error;

   typedef uint8_t _adc_spi_transfer_error_type;
  _adc_spi_transfer_error_type adc_spi_transfer_error;



  enum {
    CAN_TX_YAW_RATE_REF_QF_UNDEFINED = 0u,
    CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED = 1u,
    CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE = 2u,
    CAN_TX_YAW_RATE_REF_QF_ACCURATE = 3u,
    CAN_TX_YAW_RATE_RAW_QF_UNDEFINED = 0u,
    CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED = 1u,
    CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE = 2u,
    CAN_TX_YAW_RATE_RAW_QF_ACCURATE = 3u,
    CAN_TX_SYSTEM_STATUS_CONFIGURATION = 0u,
    CAN_TX_SYSTEM_STATUS_STARTUP = 1u,
    CAN_TX_SYSTEM_STATUS_RUNNING = 2u,
    CAN_TX_SYSTEM_STATUS_BLOCKED = 3u,
    CAN_TX_SYSTEM_STATUS_FAULTY = 4u,
    CAN_TX_SYSTEM_STATUS_SHUTDOWN = 5u,
    CAN_TX_SYSTEM_STATUS_HOT = 6u,
  };


  typedef boost::shared_ptr< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> const> ConstPtr;

}; // struct SrrStatus5_

typedef ::delphi_srr_msgs::SrrStatus5_<std::allocator<void> > SrrStatus5;

typedef boost::shared_ptr< ::delphi_srr_msgs::SrrStatus5 > SrrStatus5Ptr;
typedef boost::shared_ptr< ::delphi_srr_msgs::SrrStatus5 const> SrrStatus5ConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace delphi_srr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'delphi_srr_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cd86757abd1063dffe9941dbe3f4362f";
  }

  static const char* value(const ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcd86757abd1063dfULL;
  static const uint64_t static_value2 = 0xfe9941dbe3f4362fULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_srr_msgs/SrrStatus5";
  }

  static const char* value(const ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message file for srr_status5\n\
\n\
std_msgs/Header header\n\
\n\
bool      disable_auto_align\n\
\n\
uint8     can_tx_yaw_rate_ref_qf\n\
uint8     CAN_TX_YAW_RATE_REF_QF_UNDEFINED=0\n\
uint8     CAN_TX_YAW_RATE_REF_QF_TEMP_UNDEFINED=1\n\
uint8     CAN_TX_YAW_RATE_REF_QF_NOT_ACCURATE=2\n\
uint8     CAN_TX_YAW_RATE_REF_QF_ACCURATE=3\n\
\n\
uint8     can_tx_yaw_rate_raw_qf\n\
uint8     CAN_TX_YAW_RATE_RAW_QF_UNDEFINED=0\n\
uint8     CAN_TX_YAW_RATE_RAW_QF_TEMP_UNDEFINED=1\n\
uint8     CAN_TX_YAW_RATE_RAW_QF_NOT_ACCURATE=2\n\
uint8     CAN_TX_YAW_RATE_RAW_QF_ACCURATE=3\n\
\n\
float32   can_tx_yaw_rate_reference                # deg/s\n\
float32   can_tx_yaw_rate_raw                      # deg/s\n\
\n\
uint8     can_tx_system_status\n\
uint8     CAN_TX_SYSTEM_STATUS_CONFIGURATION=0\n\
uint8     CAN_TX_SYSTEM_STATUS_STARTUP=1\n\
uint8     CAN_TX_SYSTEM_STATUS_RUNNING=2\n\
uint8     CAN_TX_SYSTEM_STATUS_BLOCKED=3\n\
uint8     CAN_TX_SYSTEM_STATUS_FAULTY=4\n\
uint8     CAN_TX_SYSTEM_STATUS_SHUTDOWN=5\n\
uint8     CAN_TX_SYSTEM_STATUS_HOT=6\n\
\n\
int16     can_tx_outside_temperature               # degc\n\
bool      can_blockage_mnr_blocked\n\
bool      can_blockage_bb_blocked\n\
bool      can_blockage_radar_blocked\n\
bool      can_td_blocked\n\
bool      radar_tx_power_error\n\
bool      radar_lo_power_error\n\
bool      radar_data_sync_error\n\
bool      linearizer_spi_transfer_error\n\
bool      saturated_tuning_freq_error\n\
bool      rtn_spi_transfer_error\n\
bool      rrn_spi_transfer_error\n\
bool      video_port_capture_error\n\
bool      vertical_misalignment_error\n\
bool      tx_temperature_fault\n\
bool      transmitter_id_error\n\
bool      dsp_unit_cal_checksum_error\n\
bool      dsp_unit_cal_block_chcksm_error\n\
bool      dsp_tuning_sensitivity_error\n\
bool      dsp_loop_overrun_error\n\
bool      adc_spi_transfer_error\n\
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

  static const char* value(const ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.disable_auto_align);
      stream.next(m.can_tx_yaw_rate_ref_qf);
      stream.next(m.can_tx_yaw_rate_raw_qf);
      stream.next(m.can_tx_yaw_rate_reference);
      stream.next(m.can_tx_yaw_rate_raw);
      stream.next(m.can_tx_system_status);
      stream.next(m.can_tx_outside_temperature);
      stream.next(m.can_blockage_mnr_blocked);
      stream.next(m.can_blockage_bb_blocked);
      stream.next(m.can_blockage_radar_blocked);
      stream.next(m.can_td_blocked);
      stream.next(m.radar_tx_power_error);
      stream.next(m.radar_lo_power_error);
      stream.next(m.radar_data_sync_error);
      stream.next(m.linearizer_spi_transfer_error);
      stream.next(m.saturated_tuning_freq_error);
      stream.next(m.rtn_spi_transfer_error);
      stream.next(m.rrn_spi_transfer_error);
      stream.next(m.video_port_capture_error);
      stream.next(m.vertical_misalignment_error);
      stream.next(m.tx_temperature_fault);
      stream.next(m.transmitter_id_error);
      stream.next(m.dsp_unit_cal_checksum_error);
      stream.next(m.dsp_unit_cal_block_chcksm_error);
      stream.next(m.dsp_tuning_sensitivity_error);
      stream.next(m.dsp_loop_overrun_error);
      stream.next(m.adc_spi_transfer_error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SrrStatus5_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_srr_msgs::SrrStatus5_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "disable_auto_align: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.disable_auto_align);
    s << indent << "can_tx_yaw_rate_ref_qf: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_tx_yaw_rate_ref_qf);
    s << indent << "can_tx_yaw_rate_raw_qf: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_tx_yaw_rate_raw_qf);
    s << indent << "can_tx_yaw_rate_reference: ";
    Printer<float>::stream(s, indent + "  ", v.can_tx_yaw_rate_reference);
    s << indent << "can_tx_yaw_rate_raw: ";
    Printer<float>::stream(s, indent + "  ", v.can_tx_yaw_rate_raw);
    s << indent << "can_tx_system_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_tx_system_status);
    s << indent << "can_tx_outside_temperature: ";
    Printer<int16_t>::stream(s, indent + "  ", v.can_tx_outside_temperature);
    s << indent << "can_blockage_mnr_blocked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_blockage_mnr_blocked);
    s << indent << "can_blockage_bb_blocked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_blockage_bb_blocked);
    s << indent << "can_blockage_radar_blocked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_blockage_radar_blocked);
    s << indent << "can_td_blocked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_td_blocked);
    s << indent << "radar_tx_power_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.radar_tx_power_error);
    s << indent << "radar_lo_power_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.radar_lo_power_error);
    s << indent << "radar_data_sync_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.radar_data_sync_error);
    s << indent << "linearizer_spi_transfer_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.linearizer_spi_transfer_error);
    s << indent << "saturated_tuning_freq_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.saturated_tuning_freq_error);
    s << indent << "rtn_spi_transfer_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rtn_spi_transfer_error);
    s << indent << "rrn_spi_transfer_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rrn_spi_transfer_error);
    s << indent << "video_port_capture_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.video_port_capture_error);
    s << indent << "vertical_misalignment_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vertical_misalignment_error);
    s << indent << "tx_temperature_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tx_temperature_fault);
    s << indent << "transmitter_id_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.transmitter_id_error);
    s << indent << "dsp_unit_cal_checksum_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_unit_cal_checksum_error);
    s << indent << "dsp_unit_cal_block_chcksm_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_unit_cal_block_chcksm_error);
    s << indent << "dsp_tuning_sensitivity_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_tuning_sensitivity_error);
    s << indent << "dsp_loop_overrun_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_loop_overrun_error);
    s << indent << "adc_spi_transfer_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.adc_spi_transfer_error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_SRR_MSGS_MESSAGE_SRRSTATUS5_H