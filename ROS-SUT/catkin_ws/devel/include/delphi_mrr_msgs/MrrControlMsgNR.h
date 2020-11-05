// Generated by gencpp from file delphi_mrr_msgs/MrrControlMsgNR.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_MRRCONTROLMSGNR_H
#define DELPHI_MRR_MSGS_MESSAGE_MRRCONTROLMSGNR_H


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
struct MrrControlMsgNR_
{
  typedef MrrControlMsgNR_<ContainerAllocator> Type;

  MrrControlMsgNR_()
    : header()
    , can_stop_frequency_nrml(0)
    , can_prp_factor_nrml(0)
    , can_desired_sweep_bw_nrml(0)
    , can_radiation_ctrl(false)
    , can_stop_frequency_nrll(0)
    , can_prp_factor_nrll(0)
    , can_desired_sweep_bw_nrll(0)  {
    }
  MrrControlMsgNR_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , can_stop_frequency_nrml(0)
    , can_prp_factor_nrml(0)
    , can_desired_sweep_bw_nrml(0)
    , can_radiation_ctrl(false)
    , can_stop_frequency_nrll(0)
    , can_prp_factor_nrll(0)
    , can_desired_sweep_bw_nrll(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _can_stop_frequency_nrml_type;
  _can_stop_frequency_nrml_type can_stop_frequency_nrml;

   typedef uint16_t _can_prp_factor_nrml_type;
  _can_prp_factor_nrml_type can_prp_factor_nrml;

   typedef uint8_t _can_desired_sweep_bw_nrml_type;
  _can_desired_sweep_bw_nrml_type can_desired_sweep_bw_nrml;

   typedef uint8_t _can_radiation_ctrl_type;
  _can_radiation_ctrl_type can_radiation_ctrl;

   typedef uint16_t _can_stop_frequency_nrll_type;
  _can_stop_frequency_nrll_type can_stop_frequency_nrll;

   typedef uint16_t _can_prp_factor_nrll_type;
  _can_prp_factor_nrll_type can_prp_factor_nrll;

   typedef uint8_t _can_desired_sweep_bw_nrll_type;
  _can_desired_sweep_bw_nrll_type can_desired_sweep_bw_nrll;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> const> ConstPtr;

}; // struct MrrControlMsgNR_

typedef ::delphi_mrr_msgs::MrrControlMsgNR_<std::allocator<void> > MrrControlMsgNR;

typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrControlMsgNR > MrrControlMsgNRPtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrControlMsgNR const> MrrControlMsgNRConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3100fbbd30b156c46cb7b9ae9e5d17a6";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3100fbbd30b156c4ULL;
  static const uint64_t static_value2 = 0x6cb7b9ae9e5d17a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/MrrControlMsgNR";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint16 	can_stop_frequency_nrml\n\
uint16 	can_prp_factor_nrml\n\
uint8  	can_desired_sweep_bw_nrml\n\
bool   	can_radiation_ctrl\n\
uint16 	can_stop_frequency_nrll\n\
uint16 	can_prp_factor_nrll \n\
uint8  	can_desired_sweep_bw_nrll\n\
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

  static const char* value(const ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.can_stop_frequency_nrml);
      stream.next(m.can_prp_factor_nrml);
      stream.next(m.can_desired_sweep_bw_nrml);
      stream.next(m.can_radiation_ctrl);
      stream.next(m.can_stop_frequency_nrll);
      stream.next(m.can_prp_factor_nrll);
      stream.next(m.can_desired_sweep_bw_nrll);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MrrControlMsgNR_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::MrrControlMsgNR_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "can_stop_frequency_nrml: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_stop_frequency_nrml);
    s << indent << "can_prp_factor_nrml: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_prp_factor_nrml);
    s << indent << "can_desired_sweep_bw_nrml: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_desired_sweep_bw_nrml);
    s << indent << "can_radiation_ctrl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_radiation_ctrl);
    s << indent << "can_stop_frequency_nrll: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_stop_frequency_nrll);
    s << indent << "can_prp_factor_nrll: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_prp_factor_nrll);
    s << indent << "can_desired_sweep_bw_nrll: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_desired_sweep_bw_nrll);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_MRRCONTROLMSGNR_H
