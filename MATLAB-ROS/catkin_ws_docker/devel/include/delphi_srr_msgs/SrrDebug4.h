// Generated by gencpp from file delphi_srr_msgs/SrrDebug4.msg
// DO NOT EDIT!


#ifndef DELPHI_SRR_MSGS_MESSAGE_SRRDEBUG4_H
#define DELPHI_SRR_MSGS_MESSAGE_SRRDEBUG4_H


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
struct SrrDebug4_
{
  typedef SrrDebug4_<ContainerAllocator> Type;

  SrrDebug4_()
    : header()
    , timer_create_error(false)
    , thread_create_error(false)
    , arm_calibration_error(false)
    , spi_fee_error(false)
    , spi_comm_error(false)
    , socket_write_error(false)
    , dsp_cal_obsolete_62_error(false)
    , socket_read_error(false)
    , socket_init_error(false)
    , signal_wait_error(false)
    , signal_send_error(false)
    , signal_create_error(false)
    , shared_mem_write_error(false)
    , shared_mem_read_error(false)
    , shared_mem_config_error(false)
    , share_mem_init_error(false)
    , ram_test_error(false)
    , num_errors(false)
    , mmap_memory_error(false)
    , isr_attach_error(false)
    , ipc_drv_write_error(false)
    , ipc_drv_trigger_error(false)
    , ipc_drv_sync_error(false)
    , ipc_drv_read_error(false)
    , ipc_drv_init_error(false)
    , interrupt_enable_error(false)
    , hil_format_error(false)
    , flash_filesystem_error(false)
    , error_none(false)
    , dsp_load_read_error(false)
    , dsp_load_open_error(false)
    , dsp_load_address_error(false)
    , dsp_isp_write_error(false)
    , dsp_ipc_read_error(false)
    , dsp_ipc_init(false)
    , dsp_init_error(false)
    , dsp_drv_start_error(false)
    , dsp_drv_load_error(false)
    , dsp_drv_init_error(false)
    , dsp_drv_init2_error(false)
    , dsp_drv_init1_error(false)
    , dsp_calibration_error(false)
    , can_xmt_error(false)
    , can_rcv_error(false)
    , can_hardware_error(false)
    , always_true(false)  {
    }
  SrrDebug4_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , timer_create_error(false)
    , thread_create_error(false)
    , arm_calibration_error(false)
    , spi_fee_error(false)
    , spi_comm_error(false)
    , socket_write_error(false)
    , dsp_cal_obsolete_62_error(false)
    , socket_read_error(false)
    , socket_init_error(false)
    , signal_wait_error(false)
    , signal_send_error(false)
    , signal_create_error(false)
    , shared_mem_write_error(false)
    , shared_mem_read_error(false)
    , shared_mem_config_error(false)
    , share_mem_init_error(false)
    , ram_test_error(false)
    , num_errors(false)
    , mmap_memory_error(false)
    , isr_attach_error(false)
    , ipc_drv_write_error(false)
    , ipc_drv_trigger_error(false)
    , ipc_drv_sync_error(false)
    , ipc_drv_read_error(false)
    , ipc_drv_init_error(false)
    , interrupt_enable_error(false)
    , hil_format_error(false)
    , flash_filesystem_error(false)
    , error_none(false)
    , dsp_load_read_error(false)
    , dsp_load_open_error(false)
    , dsp_load_address_error(false)
    , dsp_isp_write_error(false)
    , dsp_ipc_read_error(false)
    , dsp_ipc_init(false)
    , dsp_init_error(false)
    , dsp_drv_start_error(false)
    , dsp_drv_load_error(false)
    , dsp_drv_init_error(false)
    , dsp_drv_init2_error(false)
    , dsp_drv_init1_error(false)
    , dsp_calibration_error(false)
    , can_xmt_error(false)
    , can_rcv_error(false)
    , can_hardware_error(false)
    , always_true(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _timer_create_error_type;
  _timer_create_error_type timer_create_error;

   typedef uint8_t _thread_create_error_type;
  _thread_create_error_type thread_create_error;

   typedef uint8_t _arm_calibration_error_type;
  _arm_calibration_error_type arm_calibration_error;

   typedef uint8_t _spi_fee_error_type;
  _spi_fee_error_type spi_fee_error;

   typedef uint8_t _spi_comm_error_type;
  _spi_comm_error_type spi_comm_error;

   typedef uint8_t _socket_write_error_type;
  _socket_write_error_type socket_write_error;

   typedef uint8_t _dsp_cal_obsolete_62_error_type;
  _dsp_cal_obsolete_62_error_type dsp_cal_obsolete_62_error;

   typedef uint8_t _socket_read_error_type;
  _socket_read_error_type socket_read_error;

   typedef uint8_t _socket_init_error_type;
  _socket_init_error_type socket_init_error;

   typedef uint8_t _signal_wait_error_type;
  _signal_wait_error_type signal_wait_error;

   typedef uint8_t _signal_send_error_type;
  _signal_send_error_type signal_send_error;

   typedef uint8_t _signal_create_error_type;
  _signal_create_error_type signal_create_error;

   typedef uint8_t _shared_mem_write_error_type;
  _shared_mem_write_error_type shared_mem_write_error;

   typedef uint8_t _shared_mem_read_error_type;
  _shared_mem_read_error_type shared_mem_read_error;

   typedef uint8_t _shared_mem_config_error_type;
  _shared_mem_config_error_type shared_mem_config_error;

   typedef uint8_t _share_mem_init_error_type;
  _share_mem_init_error_type share_mem_init_error;

   typedef uint8_t _ram_test_error_type;
  _ram_test_error_type ram_test_error;

   typedef uint8_t _num_errors_type;
  _num_errors_type num_errors;

   typedef uint8_t _mmap_memory_error_type;
  _mmap_memory_error_type mmap_memory_error;

   typedef uint8_t _isr_attach_error_type;
  _isr_attach_error_type isr_attach_error;

   typedef uint8_t _ipc_drv_write_error_type;
  _ipc_drv_write_error_type ipc_drv_write_error;

   typedef uint8_t _ipc_drv_trigger_error_type;
  _ipc_drv_trigger_error_type ipc_drv_trigger_error;

   typedef uint8_t _ipc_drv_sync_error_type;
  _ipc_drv_sync_error_type ipc_drv_sync_error;

   typedef uint8_t _ipc_drv_read_error_type;
  _ipc_drv_read_error_type ipc_drv_read_error;

   typedef uint8_t _ipc_drv_init_error_type;
  _ipc_drv_init_error_type ipc_drv_init_error;

   typedef uint8_t _interrupt_enable_error_type;
  _interrupt_enable_error_type interrupt_enable_error;

   typedef uint8_t _hil_format_error_type;
  _hil_format_error_type hil_format_error;

   typedef uint8_t _flash_filesystem_error_type;
  _flash_filesystem_error_type flash_filesystem_error;

   typedef uint8_t _error_none_type;
  _error_none_type error_none;

   typedef uint8_t _dsp_load_read_error_type;
  _dsp_load_read_error_type dsp_load_read_error;

   typedef uint8_t _dsp_load_open_error_type;
  _dsp_load_open_error_type dsp_load_open_error;

   typedef uint8_t _dsp_load_address_error_type;
  _dsp_load_address_error_type dsp_load_address_error;

   typedef uint8_t _dsp_isp_write_error_type;
  _dsp_isp_write_error_type dsp_isp_write_error;

   typedef uint8_t _dsp_ipc_read_error_type;
  _dsp_ipc_read_error_type dsp_ipc_read_error;

   typedef uint8_t _dsp_ipc_init_type;
  _dsp_ipc_init_type dsp_ipc_init;

   typedef uint8_t _dsp_init_error_type;
  _dsp_init_error_type dsp_init_error;

   typedef uint8_t _dsp_drv_start_error_type;
  _dsp_drv_start_error_type dsp_drv_start_error;

   typedef uint8_t _dsp_drv_load_error_type;
  _dsp_drv_load_error_type dsp_drv_load_error;

   typedef uint8_t _dsp_drv_init_error_type;
  _dsp_drv_init_error_type dsp_drv_init_error;

   typedef uint8_t _dsp_drv_init2_error_type;
  _dsp_drv_init2_error_type dsp_drv_init2_error;

   typedef uint8_t _dsp_drv_init1_error_type;
  _dsp_drv_init1_error_type dsp_drv_init1_error;

   typedef uint8_t _dsp_calibration_error_type;
  _dsp_calibration_error_type dsp_calibration_error;

   typedef uint8_t _can_xmt_error_type;
  _can_xmt_error_type can_xmt_error;

   typedef uint8_t _can_rcv_error_type;
  _can_rcv_error_type can_rcv_error;

   typedef uint8_t _can_hardware_error_type;
  _can_hardware_error_type can_hardware_error;

   typedef uint8_t _always_true_type;
  _always_true_type always_true;





  typedef boost::shared_ptr< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> const> ConstPtr;

}; // struct SrrDebug4_

typedef ::delphi_srr_msgs::SrrDebug4_<std::allocator<void> > SrrDebug4;

typedef boost::shared_ptr< ::delphi_srr_msgs::SrrDebug4 > SrrDebug4Ptr;
typedef boost::shared_ptr< ::delphi_srr_msgs::SrrDebug4 const> SrrDebug4ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c0ece44351bdc580e837fa3403929592";
  }

  static const char* value(const ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc0ece44351bdc580ULL;
  static const uint64_t static_value2 = 0xe837fa3403929592ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_srr_msgs/SrrDebug4";
  }

  static const char* value(const ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message file for srr_debug4\n\
\n\
std_msgs/Header header\n\
\n\
bool      timer_create_error\n\
bool      thread_create_error\n\
bool      arm_calibration_error\n\
bool      spi_fee_error\n\
bool      spi_comm_error\n\
bool      socket_write_error\n\
bool      dsp_cal_obsolete_62_error\n\
bool      socket_read_error\n\
bool      socket_init_error\n\
bool      signal_wait_error\n\
bool      signal_send_error\n\
bool      signal_create_error\n\
bool      shared_mem_write_error\n\
bool      shared_mem_read_error\n\
bool      shared_mem_config_error\n\
bool      share_mem_init_error\n\
bool      ram_test_error\n\
bool      num_errors\n\
bool      mmap_memory_error\n\
bool      isr_attach_error\n\
bool      ipc_drv_write_error\n\
bool      ipc_drv_trigger_error\n\
bool      ipc_drv_sync_error\n\
bool      ipc_drv_read_error\n\
bool      ipc_drv_init_error\n\
bool      interrupt_enable_error\n\
bool      hil_format_error\n\
bool      flash_filesystem_error\n\
bool      error_none\n\
bool      dsp_load_read_error\n\
bool      dsp_load_open_error\n\
bool      dsp_load_address_error\n\
bool      dsp_isp_write_error\n\
bool      dsp_ipc_read_error\n\
bool      dsp_ipc_init\n\
bool      dsp_init_error\n\
bool      dsp_drv_start_error\n\
bool      dsp_drv_load_error\n\
bool      dsp_drv_init_error\n\
bool      dsp_drv_init2_error\n\
bool      dsp_drv_init1_error\n\
bool      dsp_calibration_error\n\
bool      can_xmt_error\n\
bool      can_rcv_error\n\
bool      can_hardware_error\n\
bool      always_true\n\
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

  static const char* value(const ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.timer_create_error);
      stream.next(m.thread_create_error);
      stream.next(m.arm_calibration_error);
      stream.next(m.spi_fee_error);
      stream.next(m.spi_comm_error);
      stream.next(m.socket_write_error);
      stream.next(m.dsp_cal_obsolete_62_error);
      stream.next(m.socket_read_error);
      stream.next(m.socket_init_error);
      stream.next(m.signal_wait_error);
      stream.next(m.signal_send_error);
      stream.next(m.signal_create_error);
      stream.next(m.shared_mem_write_error);
      stream.next(m.shared_mem_read_error);
      stream.next(m.shared_mem_config_error);
      stream.next(m.share_mem_init_error);
      stream.next(m.ram_test_error);
      stream.next(m.num_errors);
      stream.next(m.mmap_memory_error);
      stream.next(m.isr_attach_error);
      stream.next(m.ipc_drv_write_error);
      stream.next(m.ipc_drv_trigger_error);
      stream.next(m.ipc_drv_sync_error);
      stream.next(m.ipc_drv_read_error);
      stream.next(m.ipc_drv_init_error);
      stream.next(m.interrupt_enable_error);
      stream.next(m.hil_format_error);
      stream.next(m.flash_filesystem_error);
      stream.next(m.error_none);
      stream.next(m.dsp_load_read_error);
      stream.next(m.dsp_load_open_error);
      stream.next(m.dsp_load_address_error);
      stream.next(m.dsp_isp_write_error);
      stream.next(m.dsp_ipc_read_error);
      stream.next(m.dsp_ipc_init);
      stream.next(m.dsp_init_error);
      stream.next(m.dsp_drv_start_error);
      stream.next(m.dsp_drv_load_error);
      stream.next(m.dsp_drv_init_error);
      stream.next(m.dsp_drv_init2_error);
      stream.next(m.dsp_drv_init1_error);
      stream.next(m.dsp_calibration_error);
      stream.next(m.can_xmt_error);
      stream.next(m.can_rcv_error);
      stream.next(m.can_hardware_error);
      stream.next(m.always_true);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SrrDebug4_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_srr_msgs::SrrDebug4_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "timer_create_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.timer_create_error);
    s << indent << "thread_create_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.thread_create_error);
    s << indent << "arm_calibration_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.arm_calibration_error);
    s << indent << "spi_fee_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.spi_fee_error);
    s << indent << "spi_comm_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.spi_comm_error);
    s << indent << "socket_write_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.socket_write_error);
    s << indent << "dsp_cal_obsolete_62_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_cal_obsolete_62_error);
    s << indent << "socket_read_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.socket_read_error);
    s << indent << "socket_init_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.socket_init_error);
    s << indent << "signal_wait_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.signal_wait_error);
    s << indent << "signal_send_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.signal_send_error);
    s << indent << "signal_create_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.signal_create_error);
    s << indent << "shared_mem_write_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.shared_mem_write_error);
    s << indent << "shared_mem_read_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.shared_mem_read_error);
    s << indent << "shared_mem_config_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.shared_mem_config_error);
    s << indent << "share_mem_init_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.share_mem_init_error);
    s << indent << "ram_test_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ram_test_error);
    s << indent << "num_errors: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num_errors);
    s << indent << "mmap_memory_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mmap_memory_error);
    s << indent << "isr_attach_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isr_attach_error);
    s << indent << "ipc_drv_write_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ipc_drv_write_error);
    s << indent << "ipc_drv_trigger_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ipc_drv_trigger_error);
    s << indent << "ipc_drv_sync_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ipc_drv_sync_error);
    s << indent << "ipc_drv_read_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ipc_drv_read_error);
    s << indent << "ipc_drv_init_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ipc_drv_init_error);
    s << indent << "interrupt_enable_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.interrupt_enable_error);
    s << indent << "hil_format_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hil_format_error);
    s << indent << "flash_filesystem_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flash_filesystem_error);
    s << indent << "error_none: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_none);
    s << indent << "dsp_load_read_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_load_read_error);
    s << indent << "dsp_load_open_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_load_open_error);
    s << indent << "dsp_load_address_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_load_address_error);
    s << indent << "dsp_isp_write_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_isp_write_error);
    s << indent << "dsp_ipc_read_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_ipc_read_error);
    s << indent << "dsp_ipc_init: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_ipc_init);
    s << indent << "dsp_init_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_init_error);
    s << indent << "dsp_drv_start_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_drv_start_error);
    s << indent << "dsp_drv_load_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_drv_load_error);
    s << indent << "dsp_drv_init_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_drv_init_error);
    s << indent << "dsp_drv_init2_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_drv_init2_error);
    s << indent << "dsp_drv_init1_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_drv_init1_error);
    s << indent << "dsp_calibration_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dsp_calibration_error);
    s << indent << "can_xmt_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_xmt_error);
    s << indent << "can_rcv_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_rcv_error);
    s << indent << "can_hardware_error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_hardware_error);
    s << indent << "always_true: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.always_true);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_SRR_MSGS_MESSAGE_SRRDEBUG4_H