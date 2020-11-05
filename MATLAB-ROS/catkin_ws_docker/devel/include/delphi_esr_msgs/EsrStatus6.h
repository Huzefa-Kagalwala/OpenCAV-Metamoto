// Generated by gencpp from file delphi_esr_msgs/EsrStatus6.msg
// DO NOT EDIT!


#ifndef DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS6_H
#define DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS6_H


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
struct EsrStatus6_
{
  typedef EsrStatus6_<ContainerAllocator> Type;

  EsrStatus6_()
    : header()
    , canmsg()
    , supply_1p_8v(0)
    , supply_n_5v(0)
    , wave_diff_a2d(0)
    , sw_version_dsp_3rd_byte(0)
    , vertical_algin_updated(false)
    , system_power_mode(0)
    , found_target(false)
    , recommend_unconverge(false)
    , factory_algin_status1(0)
    , factory_algin_status2(0)
    , factory_mis_alginment(0.0)
    , serv_algin_updates_done(0)
    , vertical_mis_alginment(0.0)  {
    }
  EsrStatus6_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , canmsg(_alloc)
    , supply_1p_8v(0)
    , supply_n_5v(0)
    , wave_diff_a2d(0)
    , sw_version_dsp_3rd_byte(0)
    , vertical_algin_updated(false)
    , system_power_mode(0)
    , found_target(false)
    , recommend_unconverge(false)
    , factory_algin_status1(0)
    , factory_algin_status2(0)
    , factory_mis_alginment(0.0)
    , serv_algin_updates_done(0)
    , vertical_mis_alginment(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _canmsg_type;
  _canmsg_type canmsg;

   typedef uint8_t _supply_1p_8v_type;
  _supply_1p_8v_type supply_1p_8v;

   typedef uint8_t _supply_n_5v_type;
  _supply_n_5v_type supply_n_5v;

   typedef uint8_t _wave_diff_a2d_type;
  _wave_diff_a2d_type wave_diff_a2d;

   typedef uint8_t _sw_version_dsp_3rd_byte_type;
  _sw_version_dsp_3rd_byte_type sw_version_dsp_3rd_byte;

   typedef uint8_t _vertical_algin_updated_type;
  _vertical_algin_updated_type vertical_algin_updated;

   typedef uint8_t _system_power_mode_type;
  _system_power_mode_type system_power_mode;

   typedef uint8_t _found_target_type;
  _found_target_type found_target;

   typedef uint8_t _recommend_unconverge_type;
  _recommend_unconverge_type recommend_unconverge;

   typedef uint8_t _factory_algin_status1_type;
  _factory_algin_status1_type factory_algin_status1;

   typedef uint8_t _factory_algin_status2_type;
  _factory_algin_status2_type factory_algin_status2;

   typedef float _factory_mis_alginment_type;
  _factory_mis_alginment_type factory_mis_alginment;

   typedef uint8_t _serv_algin_updates_done_type;
  _serv_algin_updates_done_type serv_algin_updates_done;

   typedef float _vertical_mis_alginment_type;
  _vertical_mis_alginment_type vertical_mis_alginment;





  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> const> ConstPtr;

}; // struct EsrStatus6_

typedef ::delphi_esr_msgs::EsrStatus6_<std::allocator<void> > EsrStatus6;

typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus6 > EsrStatus6Ptr;
typedef boost::shared_ptr< ::delphi_esr_msgs::EsrStatus6 const> EsrStatus6ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d0f0f9e72f36d0edc6c699e8188282b7";
  }

  static const char* value(const ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd0f0f9e72f36d0edULL;
  static const uint64_t static_value2 = 0xc6c699e8188282b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_esr_msgs/EsrStatus6";
  }

  static const char* value(const ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# ESR status6\n\
string      canmsg\n\
uint8       supply_1p_8v\n\
uint8       supply_n_5v\n\
uint8       wave_diff_a2d\n\
uint8       sw_version_dsp_3rd_byte\n\
bool        vertical_algin_updated\n\
uint8       system_power_mode\n\
bool        found_target\n\
bool        recommend_unconverge\n\
uint8       factory_algin_status1\n\
uint8       factory_algin_status2\n\
float32     factory_mis_alginment\n\
uint8       serv_algin_updates_done\n\
float32     vertical_mis_alginment\n\
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

  static const char* value(const ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.canmsg);
      stream.next(m.supply_1p_8v);
      stream.next(m.supply_n_5v);
      stream.next(m.wave_diff_a2d);
      stream.next(m.sw_version_dsp_3rd_byte);
      stream.next(m.vertical_algin_updated);
      stream.next(m.system_power_mode);
      stream.next(m.found_target);
      stream.next(m.recommend_unconverge);
      stream.next(m.factory_algin_status1);
      stream.next(m.factory_algin_status2);
      stream.next(m.factory_mis_alginment);
      stream.next(m.serv_algin_updates_done);
      stream.next(m.vertical_mis_alginment);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EsrStatus6_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_esr_msgs::EsrStatus6_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "canmsg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.canmsg);
    s << indent << "supply_1p_8v: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.supply_1p_8v);
    s << indent << "supply_n_5v: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.supply_n_5v);
    s << indent << "wave_diff_a2d: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wave_diff_a2d);
    s << indent << "sw_version_dsp_3rd_byte: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sw_version_dsp_3rd_byte);
    s << indent << "vertical_algin_updated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vertical_algin_updated);
    s << indent << "system_power_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.system_power_mode);
    s << indent << "found_target: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.found_target);
    s << indent << "recommend_unconverge: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.recommend_unconverge);
    s << indent << "factory_algin_status1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.factory_algin_status1);
    s << indent << "factory_algin_status2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.factory_algin_status2);
    s << indent << "factory_mis_alginment: ";
    Printer<float>::stream(s, indent + "  ", v.factory_mis_alginment);
    s << indent << "serv_algin_updates_done: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.serv_algin_updates_done);
    s << indent << "vertical_mis_alginment: ";
    Printer<float>::stream(s, indent + "  ", v.vertical_mis_alginment);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_ESR_MSGS_MESSAGE_ESRSTATUS6_H
