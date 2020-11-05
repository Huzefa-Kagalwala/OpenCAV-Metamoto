// Generated by gencpp from file kartech_linear_actuator_msgs/ResetCmd.msg
// DO NOT EDIT!


#ifndef KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_RESETCMD_H
#define KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_RESETCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace kartech_linear_actuator_msgs
{
template <class ContainerAllocator>
struct ResetCmd_
{
  typedef ResetCmd_<ContainerAllocator> Type;

  ResetCmd_()
    : header()
    , confirm(false)
    , reset_type(0)
    , reset_user_rpt_id(false)
    , reset_user_cmd_id_1(false)
    , reset_user_cmd_id_2(false)
    , reset_user_cmd_id_3(false)
    , reset_user_cmd_id_4(false)
    , disable_user_rpt_id(false)
    , reenable_default_cmd_id(false)  {
    }
  ResetCmd_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , confirm(false)
    , reset_type(0)
    , reset_user_rpt_id(false)
    , reset_user_cmd_id_1(false)
    , reset_user_cmd_id_2(false)
    , reset_user_cmd_id_3(false)
    , reset_user_cmd_id_4(false)
    , disable_user_rpt_id(false)
    , reenable_default_cmd_id(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _confirm_type;
  _confirm_type confirm;

   typedef uint8_t _reset_type_type;
  _reset_type_type reset_type;

   typedef uint8_t _reset_user_rpt_id_type;
  _reset_user_rpt_id_type reset_user_rpt_id;

   typedef uint8_t _reset_user_cmd_id_1_type;
  _reset_user_cmd_id_1_type reset_user_cmd_id_1;

   typedef uint8_t _reset_user_cmd_id_2_type;
  _reset_user_cmd_id_2_type reset_user_cmd_id_2;

   typedef uint8_t _reset_user_cmd_id_3_type;
  _reset_user_cmd_id_3_type reset_user_cmd_id_3;

   typedef uint8_t _reset_user_cmd_id_4_type;
  _reset_user_cmd_id_4_type reset_user_cmd_id_4;

   typedef uint8_t _disable_user_rpt_id_type;
  _disable_user_rpt_id_type disable_user_rpt_id;

   typedef uint8_t _reenable_default_cmd_id_type;
  _reenable_default_cmd_id_type reenable_default_cmd_id;



  enum {
    RESET_OUTPUTS = 0u,
    RESET_USER_DEFINED_IDS = 1u,
    RESET_REPORT_RATES = 2u,
    RESET_HARDWARE_CONFIGURATIONS = 3u,
    RESET_USER_CONFIGURATIONS = 4u,
    RESET_EVERYTHING = 5u,
    RESET_NONE = 6u,
  };


  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> const> ConstPtr;

}; // struct ResetCmd_

typedef ::kartech_linear_actuator_msgs::ResetCmd_<std::allocator<void> > ResetCmd;

typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ResetCmd > ResetCmdPtr;
typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ResetCmd const> ResetCmdConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kartech_linear_actuator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'kartech_linear_actuator_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0599fdf3d91d47c66c1ecb3a5a9d3e0c";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0599fdf3d91d47c6ULL;
  static const uint64_t static_value2 = 0x6c1ecb3a5a9d3e0cULL;
};

template<class ContainerAllocator>
struct DataType< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kartech_linear_actuator_msgs/ResetCmd";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
bool confirm\n\
\n\
uint8 RESET_OUTPUTS = 0\n\
uint8 RESET_USER_DEFINED_IDS = 1\n\
uint8 RESET_REPORT_RATES = 2\n\
uint8 RESET_HARDWARE_CONFIGURATIONS = 3\n\
uint8 RESET_USER_CONFIGURATIONS = 4\n\
uint8 RESET_EVERYTHING = 5\n\
uint8 RESET_NONE = 6\n\
\n\
uint8 reset_type\n\
\n\
bool reset_user_rpt_id\n\
bool reset_user_cmd_id_1\n\
bool reset_user_cmd_id_2\n\
bool reset_user_cmd_id_3\n\
bool reset_user_cmd_id_4\n\
bool disable_user_rpt_id\n\
bool reenable_default_cmd_id\n\
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

  static const char* value(const ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.confirm);
      stream.next(m.reset_type);
      stream.next(m.reset_user_rpt_id);
      stream.next(m.reset_user_cmd_id_1);
      stream.next(m.reset_user_cmd_id_2);
      stream.next(m.reset_user_cmd_id_3);
      stream.next(m.reset_user_cmd_id_4);
      stream.next(m.disable_user_rpt_id);
      stream.next(m.reenable_default_cmd_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResetCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kartech_linear_actuator_msgs::ResetCmd_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "confirm: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.confirm);
    s << indent << "reset_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_type);
    s << indent << "reset_user_rpt_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_user_rpt_id);
    s << indent << "reset_user_cmd_id_1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_user_cmd_id_1);
    s << indent << "reset_user_cmd_id_2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_user_cmd_id_2);
    s << indent << "reset_user_cmd_id_3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_user_cmd_id_3);
    s << indent << "reset_user_cmd_id_4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reset_user_cmd_id_4);
    s << indent << "disable_user_rpt_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.disable_user_rpt_id);
    s << indent << "reenable_default_cmd_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reenable_default_cmd_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_RESETCMD_H
