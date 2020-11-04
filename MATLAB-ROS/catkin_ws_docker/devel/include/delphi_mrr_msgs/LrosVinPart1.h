// Generated by gencpp from file delphi_mrr_msgs/LrosVinPart1.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_LROSVINPART1_H
#define DELPHI_MRR_MSGS_MESSAGE_LROSVINPART1_H


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
struct LrosVinPart1_
{
  typedef LrosVinPart1_<ContainerAllocator> Type;

  LrosVinPart1_()
    : header()
    , vin_part1(0)  {
    }
  LrosVinPart1_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vin_part1(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _vin_part1_type;
  _vin_part1_type vin_part1;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> const> ConstPtr;

}; // struct LrosVinPart1_

typedef ::delphi_mrr_msgs::LrosVinPart1_<std::allocator<void> > LrosVinPart1;

typedef boost::shared_ptr< ::delphi_mrr_msgs::LrosVinPart1 > LrosVinPart1Ptr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::LrosVinPart1 const> LrosVinPart1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ff22ba3036cf1a56cdd735e84c556020";
  }

  static const char* value(const ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xff22ba3036cf1a56ULL;
  static const uint64_t static_value2 = 0xcdd735e84c556020ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/LrosVinPart1";
  }

  static const char* value(const ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint8 vin_part1\n\
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

  static const char* value(const ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vin_part1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LrosVinPart1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::LrosVinPart1_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vin_part1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vin_part1);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_LROSVINPART1_H