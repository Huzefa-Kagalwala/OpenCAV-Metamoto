// Generated by gencpp from file delphi_mrr_msgs/MrrHeaderAlignmentState.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_MRRHEADERALIGNMENTSTATE_H
#define DELPHI_MRR_MSGS_MESSAGE_MRRHEADERALIGNMENTSTATE_H


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
struct MrrHeaderAlignmentState_
{
  typedef MrrHeaderAlignmentState_<ContainerAllocator> Type;

  MrrHeaderAlignmentState_()
    : header()
    , can_auto_align_hangle_qf(0)
    , can_alignment_status(0)
    , can_alignment_state(0)
    , can_auto_align_hangle_ref(0.0)
    , can_auto_align_hangle(0.0)  {
    }
  MrrHeaderAlignmentState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , can_auto_align_hangle_qf(0)
    , can_alignment_status(0)
    , can_alignment_state(0)
    , can_auto_align_hangle_ref(0.0)
    , can_auto_align_hangle(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _can_auto_align_hangle_qf_type;
  _can_auto_align_hangle_qf_type can_auto_align_hangle_qf;

   typedef uint8_t _can_alignment_status_type;
  _can_alignment_status_type can_alignment_status;

   typedef uint8_t _can_alignment_state_type;
  _can_alignment_state_type can_alignment_state;

   typedef float _can_auto_align_hangle_ref_type;
  _can_auto_align_hangle_ref_type can_auto_align_hangle_ref;

   typedef float _can_auto_align_hangle_type;
  _can_auto_align_hangle_type can_auto_align_hangle;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> const> ConstPtr;

}; // struct MrrHeaderAlignmentState_

typedef ::delphi_mrr_msgs::MrrHeaderAlignmentState_<std::allocator<void> > MrrHeaderAlignmentState;

typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderAlignmentState > MrrHeaderAlignmentStatePtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderAlignmentState const> MrrHeaderAlignmentStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ed76a328bc6693a98452aedfe696f11a";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xed76a328bc6693a9ULL;
  static const uint64_t static_value2 = 0x8452aedfe696f11aULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/MrrHeaderAlignmentState";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint8 	  can_auto_align_hangle_qf\n\
uint8 	  can_alignment_status\n\
uint8 	  can_alignment_state\n\
float32   can_auto_align_hangle_ref\n\
float32   can_auto_align_hangle\n\
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

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.can_auto_align_hangle_qf);
      stream.next(m.can_alignment_status);
      stream.next(m.can_alignment_state);
      stream.next(m.can_auto_align_hangle_ref);
      stream.next(m.can_auto_align_hangle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MrrHeaderAlignmentState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::MrrHeaderAlignmentState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "can_auto_align_hangle_qf: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_auto_align_hangle_qf);
    s << indent << "can_alignment_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_alignment_status);
    s << indent << "can_alignment_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_alignment_state);
    s << indent << "can_auto_align_hangle_ref: ";
    Printer<float>::stream(s, indent + "  ", v.can_auto_align_hangle_ref);
    s << indent << "can_auto_align_hangle: ";
    Printer<float>::stream(s, indent + "  ", v.can_auto_align_hangle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_MRRHEADERALIGNMENTSTATE_H