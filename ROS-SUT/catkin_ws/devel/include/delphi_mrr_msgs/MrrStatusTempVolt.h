// Generated by gencpp from file delphi_mrr_msgs/MrrStatusTempVolt.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_MRRSTATUSTEMPVOLT_H
#define DELPHI_MRR_MSGS_MESSAGE_MRRSTATUSTEMPVOLT_H


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
struct MrrStatusTempVolt_
{
  typedef MrrStatusTempVolt_<ContainerAllocator> Type;

  MrrStatusTempVolt_()
    : header()
    , can_mmic_temp1(0)
    , can_processor_thermistor(0)
    , can_processor_temp1(0)
    , can_12_5v(0.0)
    , can_5v(0.0)
    , can_3v3_raw(0.0)
    , can_3v3_dac(0.0)
    , can_batt_volts(0.0)  {
    }
  MrrStatusTempVolt_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , can_mmic_temp1(0)
    , can_processor_thermistor(0)
    , can_processor_temp1(0)
    , can_12_5v(0.0)
    , can_5v(0.0)
    , can_3v3_raw(0.0)
    , can_3v3_dac(0.0)
    , can_batt_volts(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _can_mmic_temp1_type;
  _can_mmic_temp1_type can_mmic_temp1;

   typedef uint8_t _can_processor_thermistor_type;
  _can_processor_thermistor_type can_processor_thermistor;

   typedef uint8_t _can_processor_temp1_type;
  _can_processor_temp1_type can_processor_temp1;

   typedef float _can_12_5v_type;
  _can_12_5v_type can_12_5v;

   typedef float _can_5v_type;
  _can_5v_type can_5v;

   typedef float _can_3v3_raw_type;
  _can_3v3_raw_type can_3v3_raw;

   typedef float _can_3v3_dac_type;
  _can_3v3_dac_type can_3v3_dac;

   typedef float _can_batt_volts_type;
  _can_batt_volts_type can_batt_volts;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> const> ConstPtr;

}; // struct MrrStatusTempVolt_

typedef ::delphi_mrr_msgs::MrrStatusTempVolt_<std::allocator<void> > MrrStatusTempVolt;

typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrStatusTempVolt > MrrStatusTempVoltPtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrStatusTempVolt const> MrrStatusTempVoltConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "52765a7a5dd3bd215b60d1ecc9a70758";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x52765a7a5dd3bd21ULL;
  static const uint64_t static_value2 = 0x5b60d1ecc9a70758ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/MrrStatusTempVolt";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint8    can_mmic_temp1\n\
uint8    can_processor_thermistor\n\
uint8    can_processor_temp1\n\
float32  can_12_5v\n\
float32  can_5v\n\
float32  can_3v3_raw\n\
float32  can_3v3_dac\n\
float32  can_batt_volts\n\
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

  static const char* value(const ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.can_mmic_temp1);
      stream.next(m.can_processor_thermistor);
      stream.next(m.can_processor_temp1);
      stream.next(m.can_12_5v);
      stream.next(m.can_5v);
      stream.next(m.can_3v3_raw);
      stream.next(m.can_3v3_dac);
      stream.next(m.can_batt_volts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MrrStatusTempVolt_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::MrrStatusTempVolt_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "can_mmic_temp1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_mmic_temp1);
    s << indent << "can_processor_thermistor: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_processor_thermistor);
    s << indent << "can_processor_temp1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_processor_temp1);
    s << indent << "can_12_5v: ";
    Printer<float>::stream(s, indent + "  ", v.can_12_5v);
    s << indent << "can_5v: ";
    Printer<float>::stream(s, indent + "  ", v.can_5v);
    s << indent << "can_3v3_raw: ";
    Printer<float>::stream(s, indent + "  ", v.can_3v3_raw);
    s << indent << "can_3v3_dac: ";
    Printer<float>::stream(s, indent + "  ", v.can_3v3_dac);
    s << indent << "can_batt_volts: ";
    Printer<float>::stream(s, indent + "  ", v.can_batt_volts);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_MRRSTATUSTEMPVOLT_H
