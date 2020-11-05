// Generated by gencpp from file delphi_mrr_msgs/ActiveFaultLatched1.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_ACTIVEFAULTLATCHED1_H
#define DELPHI_MRR_MSGS_MESSAGE_ACTIVEFAULTLATCHED1_H


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
struct ActiveFaultLatched1_
{
  typedef ActiveFaultLatched1_<ContainerAllocator> Type;

  ActiveFaultLatched1_()
    : header()
    , active_flt_latched_byte7_bit7(false)
    , active_flt_latched_byte7_bit6(false)
    , active_flt_latched_byte7_bit5(false)
    , active_flt_latched_byte7_bit4(false)
    , arm_to_dsp_chksum_fault(false)
    , dsp_to_arm_chksum_fault(false)
    , host_to_arm_chksum_fault(false)
    , arm_to_host_chksum_fault(false)
    , loop_bw_outof_range(false)
    , dsp_overrun_fault(false)
    , active_flt_latched_byte6_bit5(false)
    , tuning_sensitivity_fault(false)
    , saturated_tuning_freq_fault(false)
    , local_osc_power_fault(false)
    , transmitter_power_fault(false)
    , active_flt_latched_byte6_bit0(false)
    , active_flt_latched_byte5_bit7(false)
    , active_flt_latched_byte5_bit6(false)
    , xcvr_device_spi_fault(false)
    , freq_synthesizer_spi_fault(false)
    , analog_converter_devic_spi_fault(false)
    , side_lobe_blockage(false)
    , active_flt_latched_byte5_bit1(false)
    , mnr_blocked(false)
    , ecu_temp_high_fault(false)
    , transmitter_temp_high_fault(false)
    , alignment_routine_failed_fault(false)
    , unreasonable_radar_data(false)
    , microprocessor_temp_high_fault(false)
    , vertical_alignment_outof_range(false)
    , horizontal_alignment_outof_range(false)
    , factory_alignment_mode(false)
    , battery_low_fault(false)
    , battery_high_fault(false)
    , v1_p25_supply_outof_range(false)
    , active_flt_latched_byte3_bit4(false)
    , thermistor_outof_range(false)
    , v3_p3_dac_supply_outof_range(false)
    , v3_p3_raw_supply_outof_range(false)
    , v5_supply_outof_range(false)
    , transmitter_id_fault(false)
    , active_flt_latched_byte2_bit6(false)
    , active_flt_latched_byte2_bit5(false)
    , active_flt_latched_byte2_bit4(false)
    , active_flt_latched_byte2_bit3(false)
    , active_flt_latched_byte2_bit2(false)
    , pcan_missing_msg_fault(false)
    , pcan_bus_off(false)
    , active_flt_latched_byte1_bit7(false)
    , active_flt_latched_byte1_bit6(false)
    , instruction_set_check_fault(false)
    , stack_overflow_fault(false)
    , watchdog_fault(false)
    , pll_lock_fault(false)
    , active_flt_latched_byte1_bit1(false)
    , ram_memory_test_fault(false)
    , usc_validation_fault(false)
    , active_flt_latched_byte0_bit6(false)
    , active_flt_latched_byte0_bit5(false)
    , active_flt_latched_byte0_bit4(false)
    , active_flt_latched_byte0_bit3(false)
    , keep_alive_checksum_fault(false)
    , program_calibration_flash_checksum(false)
    , application_flash_checksum_fault(false)  {
    }
  ActiveFaultLatched1_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , active_flt_latched_byte7_bit7(false)
    , active_flt_latched_byte7_bit6(false)
    , active_flt_latched_byte7_bit5(false)
    , active_flt_latched_byte7_bit4(false)
    , arm_to_dsp_chksum_fault(false)
    , dsp_to_arm_chksum_fault(false)
    , host_to_arm_chksum_fault(false)
    , arm_to_host_chksum_fault(false)
    , loop_bw_outof_range(false)
    , dsp_overrun_fault(false)
    , active_flt_latched_byte6_bit5(false)
    , tuning_sensitivity_fault(false)
    , saturated_tuning_freq_fault(false)
    , local_osc_power_fault(false)
    , transmitter_power_fault(false)
    , active_flt_latched_byte6_bit0(false)
    , active_flt_latched_byte5_bit7(false)
    , active_flt_latched_byte5_bit6(false)
    , xcvr_device_spi_fault(false)
    , freq_synthesizer_spi_fault(false)
    , analog_converter_devic_spi_fault(false)
    , side_lobe_blockage(false)
    , active_flt_latched_byte5_bit1(false)
    , mnr_blocked(false)
    , ecu_temp_high_fault(false)
    , transmitter_temp_high_fault(false)
    , alignment_routine_failed_fault(false)
    , unreasonable_radar_data(false)
    , microprocessor_temp_high_fault(false)
    , vertical_alignment_outof_range(false)
    , horizontal_alignment_outof_range(false)
    , factory_alignment_mode(false)
    , battery_low_fault(false)
    , battery_high_fault(false)
    , v1_p25_supply_outof_range(false)
    , active_flt_latched_byte3_bit4(false)
    , thermistor_outof_range(false)
    , v3_p3_dac_supply_outof_range(false)
    , v3_p3_raw_supply_outof_range(false)
    , v5_supply_outof_range(false)
    , transmitter_id_fault(false)
    , active_flt_latched_byte2_bit6(false)
    , active_flt_latched_byte2_bit5(false)
    , active_flt_latched_byte2_bit4(false)
    , active_flt_latched_byte2_bit3(false)
    , active_flt_latched_byte2_bit2(false)
    , pcan_missing_msg_fault(false)
    , pcan_bus_off(false)
    , active_flt_latched_byte1_bit7(false)
    , active_flt_latched_byte1_bit6(false)
    , instruction_set_check_fault(false)
    , stack_overflow_fault(false)
    , watchdog_fault(false)
    , pll_lock_fault(false)
    , active_flt_latched_byte1_bit1(false)
    , ram_memory_test_fault(false)
    , usc_validation_fault(false)
    , active_flt_latched_byte0_bit6(false)
    , active_flt_latched_byte0_bit5(false)
    , active_flt_latched_byte0_bit4(false)
    , active_flt_latched_byte0_bit3(false)
    , keep_alive_checksum_fault(false)
    , program_calibration_flash_checksum(false)
    , application_flash_checksum_fault(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _active_flt_latched_byte7_bit7_type;
  _active_flt_latched_byte7_bit7_type active_flt_latched_byte7_bit7;

   typedef uint8_t _active_flt_latched_byte7_bit6_type;
  _active_flt_latched_byte7_bit6_type active_flt_latched_byte7_bit6;

   typedef uint8_t _active_flt_latched_byte7_bit5_type;
  _active_flt_latched_byte7_bit5_type active_flt_latched_byte7_bit5;

   typedef uint8_t _active_flt_latched_byte7_bit4_type;
  _active_flt_latched_byte7_bit4_type active_flt_latched_byte7_bit4;

   typedef uint8_t _arm_to_dsp_chksum_fault_type;
  _arm_to_dsp_chksum_fault_type arm_to_dsp_chksum_fault;

   typedef uint8_t _dsp_to_arm_chksum_fault_type;
  _dsp_to_arm_chksum_fault_type dsp_to_arm_chksum_fault;

   typedef uint8_t _host_to_arm_chksum_fault_type;
  _host_to_arm_chksum_fault_type host_to_arm_chksum_fault;

   typedef uint8_t _arm_to_host_chksum_fault_type;
  _arm_to_host_chksum_fault_type arm_to_host_chksum_fault;

   typedef uint8_t _loop_bw_outof_range_type;
  _loop_bw_outof_range_type loop_bw_outof_range;

   typedef uint8_t _dsp_overrun_fault_type;
  _dsp_overrun_fault_type dsp_overrun_fault;

   typedef uint8_t _active_flt_latched_byte6_bit5_type;
  _active_flt_latched_byte6_bit5_type active_flt_latched_byte6_bit5;

   typedef uint8_t _tuning_sensitivity_fault_type;
  _tuning_sensitivity_fault_type tuning_sensitivity_fault;

   typedef uint8_t _saturated_tuning_freq_fault_type;
  _saturated_tuning_freq_fault_type saturated_tuning_freq_fault;

   typedef uint8_t _local_osc_power_fault_type;
  _local_osc_power_fault_type local_osc_power_fault;

   typedef uint8_t _transmitter_power_fault_type;
  _transmitter_power_fault_type transmitter_power_fault;

   typedef uint8_t _active_flt_latched_byte6_bit0_type;
  _active_flt_latched_byte6_bit0_type active_flt_latched_byte6_bit0;

   typedef uint8_t _active_flt_latched_byte5_bit7_type;
  _active_flt_latched_byte5_bit7_type active_flt_latched_byte5_bit7;

   typedef uint8_t _active_flt_latched_byte5_bit6_type;
  _active_flt_latched_byte5_bit6_type active_flt_latched_byte5_bit6;

   typedef uint8_t _xcvr_device_spi_fault_type;
  _xcvr_device_spi_fault_type xcvr_device_spi_fault;

   typedef uint8_t _freq_synthesizer_spi_fault_type;
  _freq_synthesizer_spi_fault_type freq_synthesizer_spi_fault;

   typedef uint8_t _analog_converter_devic_spi_fault_type;
  _analog_converter_devic_spi_fault_type analog_converter_devic_spi_fault;

   typedef uint8_t _side_lobe_blockage_type;
  _side_lobe_blockage_type side_lobe_blockage;

   typedef uint8_t _active_flt_latched_byte5_bit1_type;
  _active_flt_latched_byte5_bit1_type active_flt_latched_byte5_bit1;

   typedef uint8_t _mnr_blocked_type;
  _mnr_blocked_type mnr_blocked;

   typedef uint8_t _ecu_temp_high_fault_type;
  _ecu_temp_high_fault_type ecu_temp_high_fault;

   typedef uint8_t _transmitter_temp_high_fault_type;
  _transmitter_temp_high_fault_type transmitter_temp_high_fault;

   typedef uint8_t _alignment_routine_failed_fault_type;
  _alignment_routine_failed_fault_type alignment_routine_failed_fault;

   typedef uint8_t _unreasonable_radar_data_type;
  _unreasonable_radar_data_type unreasonable_radar_data;

   typedef uint8_t _microprocessor_temp_high_fault_type;
  _microprocessor_temp_high_fault_type microprocessor_temp_high_fault;

   typedef uint8_t _vertical_alignment_outof_range_type;
  _vertical_alignment_outof_range_type vertical_alignment_outof_range;

   typedef uint8_t _horizontal_alignment_outof_range_type;
  _horizontal_alignment_outof_range_type horizontal_alignment_outof_range;

   typedef uint8_t _factory_alignment_mode_type;
  _factory_alignment_mode_type factory_alignment_mode;

   typedef uint8_t _battery_low_fault_type;
  _battery_low_fault_type battery_low_fault;

   typedef uint8_t _battery_high_fault_type;
  _battery_high_fault_type battery_high_fault;

   typedef uint8_t _v1_p25_supply_outof_range_type;
  _v1_p25_supply_outof_range_type v1_p25_supply_outof_range;

   typedef uint8_t _active_flt_latched_byte3_bit4_type;
  _active_flt_latched_byte3_bit4_type active_flt_latched_byte3_bit4;

   typedef uint8_t _thermistor_outof_range_type;
  _thermistor_outof_range_type thermistor_outof_range;

   typedef uint8_t _v3_p3_dac_supply_outof_range_type;
  _v3_p3_dac_supply_outof_range_type v3_p3_dac_supply_outof_range;

   typedef uint8_t _v3_p3_raw_supply_outof_range_type;
  _v3_p3_raw_supply_outof_range_type v3_p3_raw_supply_outof_range;

   typedef uint8_t _v5_supply_outof_range_type;
  _v5_supply_outof_range_type v5_supply_outof_range;

   typedef uint8_t _transmitter_id_fault_type;
  _transmitter_id_fault_type transmitter_id_fault;

   typedef uint8_t _active_flt_latched_byte2_bit6_type;
  _active_flt_latched_byte2_bit6_type active_flt_latched_byte2_bit6;

   typedef uint8_t _active_flt_latched_byte2_bit5_type;
  _active_flt_latched_byte2_bit5_type active_flt_latched_byte2_bit5;

   typedef uint8_t _active_flt_latched_byte2_bit4_type;
  _active_flt_latched_byte2_bit4_type active_flt_latched_byte2_bit4;

   typedef uint8_t _active_flt_latched_byte2_bit3_type;
  _active_flt_latched_byte2_bit3_type active_flt_latched_byte2_bit3;

   typedef uint8_t _active_flt_latched_byte2_bit2_type;
  _active_flt_latched_byte2_bit2_type active_flt_latched_byte2_bit2;

   typedef uint8_t _pcan_missing_msg_fault_type;
  _pcan_missing_msg_fault_type pcan_missing_msg_fault;

   typedef uint8_t _pcan_bus_off_type;
  _pcan_bus_off_type pcan_bus_off;

   typedef uint8_t _active_flt_latched_byte1_bit7_type;
  _active_flt_latched_byte1_bit7_type active_flt_latched_byte1_bit7;

   typedef uint8_t _active_flt_latched_byte1_bit6_type;
  _active_flt_latched_byte1_bit6_type active_flt_latched_byte1_bit6;

   typedef uint8_t _instruction_set_check_fault_type;
  _instruction_set_check_fault_type instruction_set_check_fault;

   typedef uint8_t _stack_overflow_fault_type;
  _stack_overflow_fault_type stack_overflow_fault;

   typedef uint8_t _watchdog_fault_type;
  _watchdog_fault_type watchdog_fault;

   typedef uint8_t _pll_lock_fault_type;
  _pll_lock_fault_type pll_lock_fault;

   typedef uint8_t _active_flt_latched_byte1_bit1_type;
  _active_flt_latched_byte1_bit1_type active_flt_latched_byte1_bit1;

   typedef uint8_t _ram_memory_test_fault_type;
  _ram_memory_test_fault_type ram_memory_test_fault;

   typedef uint8_t _usc_validation_fault_type;
  _usc_validation_fault_type usc_validation_fault;

   typedef uint8_t _active_flt_latched_byte0_bit6_type;
  _active_flt_latched_byte0_bit6_type active_flt_latched_byte0_bit6;

   typedef uint8_t _active_flt_latched_byte0_bit5_type;
  _active_flt_latched_byte0_bit5_type active_flt_latched_byte0_bit5;

   typedef uint8_t _active_flt_latched_byte0_bit4_type;
  _active_flt_latched_byte0_bit4_type active_flt_latched_byte0_bit4;

   typedef uint8_t _active_flt_latched_byte0_bit3_type;
  _active_flt_latched_byte0_bit3_type active_flt_latched_byte0_bit3;

   typedef uint8_t _keep_alive_checksum_fault_type;
  _keep_alive_checksum_fault_type keep_alive_checksum_fault;

   typedef uint8_t _program_calibration_flash_checksum_type;
  _program_calibration_flash_checksum_type program_calibration_flash_checksum;

   typedef uint8_t _application_flash_checksum_fault_type;
  _application_flash_checksum_fault_type application_flash_checksum_fault;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> const> ConstPtr;

}; // struct ActiveFaultLatched1_

typedef ::delphi_mrr_msgs::ActiveFaultLatched1_<std::allocator<void> > ActiveFaultLatched1;

typedef boost::shared_ptr< ::delphi_mrr_msgs::ActiveFaultLatched1 > ActiveFaultLatched1Ptr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::ActiveFaultLatched1 const> ActiveFaultLatched1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5994984ee721acb9bf8573f88abcd9bc";
  }

  static const char* value(const ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5994984ee721acb9ULL;
  static const uint64_t static_value2 = 0xbf8573f88abcd9bcULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/ActiveFaultLatched1";
  }

  static const char* value(const ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
bool active_flt_latched_byte7_bit7\n\
bool active_flt_latched_byte7_bit6\n\
bool active_flt_latched_byte7_bit5\n\
bool active_flt_latched_byte7_bit4\n\
bool arm_to_dsp_chksum_fault\n\
bool dsp_to_arm_chksum_fault\n\
bool host_to_arm_chksum_fault\n\
bool arm_to_host_chksum_fault\n\
bool loop_bw_outof_range\n\
bool dsp_overrun_fault\n\
bool active_flt_latched_byte6_bit5\n\
bool tuning_sensitivity_fault\n\
bool saturated_tuning_freq_fault\n\
bool local_osc_power_fault\n\
bool transmitter_power_fault\n\
bool active_flt_latched_byte6_bit0\n\
bool active_flt_latched_byte5_bit7\n\
bool active_flt_latched_byte5_bit6\n\
bool xcvr_device_spi_fault\n\
bool freq_synthesizer_spi_fault\n\
bool analog_converter_devic_spi_fault\n\
bool side_lobe_blockage\n\
bool active_flt_latched_byte5_bit1\n\
bool mnr_blocked\n\
bool ecu_temp_high_fault\n\
bool transmitter_temp_high_fault\n\
bool alignment_routine_failed_fault\n\
bool unreasonable_radar_data\n\
bool microprocessor_temp_high_fault\n\
bool vertical_alignment_outof_range\n\
bool horizontal_alignment_outof_range\n\
bool factory_alignment_mode\n\
bool battery_low_fault\n\
bool battery_high_fault\n\
bool v1_p25_supply_outof_range\n\
bool active_flt_latched_byte3_bit4\n\
bool thermistor_outof_range\n\
bool v3_p3_dac_supply_outof_range\n\
bool v3_p3_raw_supply_outof_range\n\
bool v5_supply_outof_range\n\
bool transmitter_id_fault\n\
bool active_flt_latched_byte2_bit6\n\
bool active_flt_latched_byte2_bit5\n\
bool active_flt_latched_byte2_bit4\n\
bool active_flt_latched_byte2_bit3\n\
bool active_flt_latched_byte2_bit2\n\
bool pcan_missing_msg_fault\n\
bool pcan_bus_off\n\
bool active_flt_latched_byte1_bit7\n\
bool active_flt_latched_byte1_bit6\n\
bool instruction_set_check_fault\n\
bool stack_overflow_fault\n\
bool watchdog_fault\n\
bool pll_lock_fault\n\
bool active_flt_latched_byte1_bit1\n\
bool ram_memory_test_fault\n\
bool usc_validation_fault\n\
bool active_flt_latched_byte0_bit6\n\
bool active_flt_latched_byte0_bit5\n\
bool active_flt_latched_byte0_bit4\n\
bool active_flt_latched_byte0_bit3\n\
bool keep_alive_checksum_fault\n\
bool program_calibration_flash_checksum\n\
bool application_flash_checksum_fault\n\
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

  static const char* value(const ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.active_flt_latched_byte7_bit7);
      stream.next(m.active_flt_latched_byte7_bit6);
      stream.next(m.active_flt_latched_byte7_bit5);
      stream.next(m.active_flt_latched_byte7_bit4);
      stream.next(m.arm_to_dsp_chksum_fault);
      stream.next(m.dsp_to_arm_chksum_fault);
      stream.next(m.host_to_arm_chksum_fault);
      stream.next(m.arm_to_host_chksum_fault);
      stream.next(m.loop_bw_outof_range);
      stream.next(m.dsp_overrun_fault);
      stream.next(m.active_flt_latched_byte6_bit5);
      stream.next(m.tuning_sensitivity_fault);
      stream.next(m.saturated_tuning_freq_fault);
      stream.next(m.local_osc_power_fault);
      stream.next(m.transmitter_power_fault);
      stream.next(m.active_flt_latched_byte6_bit0);
      stream.next(m.active_flt_latched_byte5_bit7);
      stream.next(m.active_flt_latched_byte5_bit6);
      stream.next(m.xcvr_device_spi_fault);
      stream.next(m.freq_synthesizer_spi_fault);
      stream.next(m.analog_converter_devic_spi_fault);
      stream.next(m.side_lobe_blockage);
      stream.next(m.active_flt_latched_byte5_bit1);
      stream.next(m.mnr_blocked);
      stream.next(m.ecu_temp_high_fault);
      stream.next(m.transmitter_temp_high_fault);
      stream.next(m.alignment_routine_failed_fault);
      stream.next(m.unreasonable_radar_data);
      stream.next(m.microprocessor_temp_high_fault);
      stream.next(m.vertical_alignment_outof_range);
      stream.next(m.horizontal_alignment_outof_range);
      stream.next(m.factory_alignment_mode);
      stream.next(m.battery_low_fault);
      stream.next(m.battery_high_fault);
      stream.next(m.v1_p25_supply_outof_range);
      stream.next(m.active_flt_latched_byte3_bit4);
      stream.next(m.thermistor_outof_range);
      stream.next(m.v3_p3_dac_supply_outof_range);
      stream.next(m.v3_p3_raw_supply_outof_range);
      stream.next(m.v5_supply_outof_range);
      stream.next(m.transmitter_id_fault);
      stream.next(m.active_flt_latched_byte2_bit6);
      stream.next(m.active_flt_latched_byte2_bit5);
      stream.next(m.active_flt_latched_byte2_bit4);
      stream.next(m.active_flt_latched_byte2_bit3);
      stream.next(m.active_flt_latched_byte2_bit2);
      stream.next(m.pcan_missing_msg_fault);
      stream.next(m.pcan_bus_off);
      stream.next(m.active_flt_latched_byte1_bit7);
      stream.next(m.active_flt_latched_byte1_bit6);
      stream.next(m.instruction_set_check_fault);
      stream.next(m.stack_overflow_fault);
      stream.next(m.watchdog_fault);
      stream.next(m.pll_lock_fault);
      stream.next(m.active_flt_latched_byte1_bit1);
      stream.next(m.ram_memory_test_fault);
      stream.next(m.usc_validation_fault);
      stream.next(m.active_flt_latched_byte0_bit6);
      stream.next(m.active_flt_latched_byte0_bit5);
      stream.next(m.active_flt_latched_byte0_bit4);
      stream.next(m.active_flt_latched_byte0_bit3);
      stream.next(m.keep_alive_checksum_fault);
      stream.next(m.program_calibration_flash_checksum);
      stream.next(m.application_flash_checksum_fault);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActiveFaultLatched1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::ActiveFaultLatched1_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "active_flt_latched_byte7_bit7: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte7_bit7);
    s << indent << "active_flt_latched_byte7_bit6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte7_bit6);
    s << indent << "active_flt_latched_byte7_bit5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte7_bit5);
    s << indent << "active_flt_latched_byte7_bit4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte7_bit4);
    s << indent << "arm_to_dsp_chksum_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.arm_to_dsp_chksum_fault);
    s << indent << "dsp_to_arm_chksum_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_to_arm_chksum_fault);
    s << indent << "host_to_arm_chksum_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.host_to_arm_chksum_fault);
    s << indent << "arm_to_host_chksum_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.arm_to_host_chksum_fault);
    s << indent << "loop_bw_outof_range: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.loop_bw_outof_range);
    s << indent << "dsp_overrun_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_overrun_fault);
    s << indent << "active_flt_latched_byte6_bit5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte6_bit5);
    s << indent << "tuning_sensitivity_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tuning_sensitivity_fault);
    s << indent << "saturated_tuning_freq_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.saturated_tuning_freq_fault);
    s << indent << "local_osc_power_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.local_osc_power_fault);
    s << indent << "transmitter_power_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.transmitter_power_fault);
    s << indent << "active_flt_latched_byte6_bit0: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte6_bit0);
    s << indent << "active_flt_latched_byte5_bit7: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte5_bit7);
    s << indent << "active_flt_latched_byte5_bit6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte5_bit6);
    s << indent << "xcvr_device_spi_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.xcvr_device_spi_fault);
    s << indent << "freq_synthesizer_spi_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.freq_synthesizer_spi_fault);
    s << indent << "analog_converter_devic_spi_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.analog_converter_devic_spi_fault);
    s << indent << "side_lobe_blockage: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.side_lobe_blockage);
    s << indent << "active_flt_latched_byte5_bit1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte5_bit1);
    s << indent << "mnr_blocked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mnr_blocked);
    s << indent << "ecu_temp_high_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ecu_temp_high_fault);
    s << indent << "transmitter_temp_high_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.transmitter_temp_high_fault);
    s << indent << "alignment_routine_failed_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.alignment_routine_failed_fault);
    s << indent << "unreasonable_radar_data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.unreasonable_radar_data);
    s << indent << "microprocessor_temp_high_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.microprocessor_temp_high_fault);
    s << indent << "vertical_alignment_outof_range: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vertical_alignment_outof_range);
    s << indent << "horizontal_alignment_outof_range: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.horizontal_alignment_outof_range);
    s << indent << "factory_alignment_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.factory_alignment_mode);
    s << indent << "battery_low_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.battery_low_fault);
    s << indent << "battery_high_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.battery_high_fault);
    s << indent << "v1_p25_supply_outof_range: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.v1_p25_supply_outof_range);
    s << indent << "active_flt_latched_byte3_bit4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte3_bit4);
    s << indent << "thermistor_outof_range: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.thermistor_outof_range);
    s << indent << "v3_p3_dac_supply_outof_range: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.v3_p3_dac_supply_outof_range);
    s << indent << "v3_p3_raw_supply_outof_range: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.v3_p3_raw_supply_outof_range);
    s << indent << "v5_supply_outof_range: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.v5_supply_outof_range);
    s << indent << "transmitter_id_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.transmitter_id_fault);
    s << indent << "active_flt_latched_byte2_bit6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte2_bit6);
    s << indent << "active_flt_latched_byte2_bit5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte2_bit5);
    s << indent << "active_flt_latched_byte2_bit4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte2_bit4);
    s << indent << "active_flt_latched_byte2_bit3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte2_bit3);
    s << indent << "active_flt_latched_byte2_bit2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte2_bit2);
    s << indent << "pcan_missing_msg_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pcan_missing_msg_fault);
    s << indent << "pcan_bus_off: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pcan_bus_off);
    s << indent << "active_flt_latched_byte1_bit7: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte1_bit7);
    s << indent << "active_flt_latched_byte1_bit6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte1_bit6);
    s << indent << "instruction_set_check_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.instruction_set_check_fault);
    s << indent << "stack_overflow_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stack_overflow_fault);
    s << indent << "watchdog_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.watchdog_fault);
    s << indent << "pll_lock_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pll_lock_fault);
    s << indent << "active_flt_latched_byte1_bit1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte1_bit1);
    s << indent << "ram_memory_test_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ram_memory_test_fault);
    s << indent << "usc_validation_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.usc_validation_fault);
    s << indent << "active_flt_latched_byte0_bit6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte0_bit6);
    s << indent << "active_flt_latched_byte0_bit5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte0_bit5);
    s << indent << "active_flt_latched_byte0_bit4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte0_bit4);
    s << indent << "active_flt_latched_byte0_bit3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.active_flt_latched_byte0_bit3);
    s << indent << "keep_alive_checksum_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.keep_alive_checksum_fault);
    s << indent << "program_calibration_flash_checksum: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.program_calibration_flash_checksum);
    s << indent << "application_flash_checksum_fault: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.application_flash_checksum_fault);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_ACTIVEFAULTLATCHED1_H
