// Generated by gencpp from file delphi_mrr_msgs/MrrHeaderInformationDetections.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_MRRHEADERINFORMATIONDETECTIONS_H
#define DELPHI_MRR_MSGS_MESSAGE_MRRHEADERINFORMATIONDETECTIONS_H


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
struct MrrHeaderInformationDetections_
{
  typedef MrrHeaderInformationDetections_<ContainerAllocator> Type;

  MrrHeaderInformationDetections_()
    : header()
    , can_align_uodates_done(0)
    , can_scan_index(0)
    , can_number_of_det(0)
    , can_look_id(0)
    , can_look_index(0)  {
    }
  MrrHeaderInformationDetections_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , can_align_uodates_done(0)
    , can_scan_index(0)
    , can_number_of_det(0)
    , can_look_id(0)
    , can_look_index(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _can_align_uodates_done_type;
  _can_align_uodates_done_type can_align_uodates_done;

   typedef uint16_t _can_scan_index_type;
  _can_scan_index_type can_scan_index;

   typedef uint8_t _can_number_of_det_type;
  _can_number_of_det_type can_number_of_det;

   typedef uint8_t _can_look_id_type;
  _can_look_id_type can_look_id;

   typedef uint16_t _can_look_index_type;
  _can_look_index_type can_look_index;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> const> ConstPtr;

}; // struct MrrHeaderInformationDetections_

typedef ::delphi_mrr_msgs::MrrHeaderInformationDetections_<std::allocator<void> > MrrHeaderInformationDetections;

typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderInformationDetections > MrrHeaderInformationDetectionsPtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderInformationDetections const> MrrHeaderInformationDetectionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "09a4495acf78e941c7b228312aac90b7";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x09a4495acf78e941ULL;
  static const uint64_t static_value2 = 0xc7b228312aac90b7ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/MrrHeaderInformationDetections";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint16 can_align_uodates_done\n\
uint16 can_scan_index\n\
uint8  can_number_of_det \n\
uint8  can_look_id\n\
uint16 can_look_index\n\
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

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.can_align_uodates_done);
      stream.next(m.can_scan_index);
      stream.next(m.can_number_of_det);
      stream.next(m.can_look_id);
      stream.next(m.can_look_index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MrrHeaderInformationDetections_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::MrrHeaderInformationDetections_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "can_align_uodates_done: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_align_uodates_done);
    s << indent << "can_scan_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_scan_index);
    s << indent << "can_number_of_det: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_number_of_det);
    s << indent << "can_look_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.can_look_id);
    s << indent << "can_look_index: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.can_look_index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_MRRHEADERINFORMATIONDETECTIONS_H
