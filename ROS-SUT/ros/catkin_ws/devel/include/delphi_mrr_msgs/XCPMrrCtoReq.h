// Generated by gencpp from file delphi_mrr_msgs/XCPMrrCtoReq.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_XCPMRRCTOREQ_H
#define DELPHI_MRR_MSGS_MESSAGE_XCPMRRCTOREQ_H


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
struct XCPMrrCtoReq_
{
  typedef XCPMrrCtoReq_<ContainerAllocator> Type;

  XCPMrrCtoReq_()
    : header()
    , mrr_xcp_cto_cmd_byte7(0)
    , mrr_xcp_cto_cmd_byte6(0)
    , mrr_xcp_cto_cmd_byte5(0)
    , mrr_xcp_cto_cmd_byte4(0)
    , mrr_xcp_cto_cmd_byte3(0)
    , mrr_xcp_cto_cmd_byte2(0)
    , mrr_xcp_cto_cmd_byte1(0)
    , mrr_xcp_cto_cmd_byte0(0)  {
    }
  XCPMrrCtoReq_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , mrr_xcp_cto_cmd_byte7(0)
    , mrr_xcp_cto_cmd_byte6(0)
    , mrr_xcp_cto_cmd_byte5(0)
    , mrr_xcp_cto_cmd_byte4(0)
    , mrr_xcp_cto_cmd_byte3(0)
    , mrr_xcp_cto_cmd_byte2(0)
    , mrr_xcp_cto_cmd_byte1(0)
    , mrr_xcp_cto_cmd_byte0(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _mrr_xcp_cto_cmd_byte7_type;
  _mrr_xcp_cto_cmd_byte7_type mrr_xcp_cto_cmd_byte7;

   typedef uint8_t _mrr_xcp_cto_cmd_byte6_type;
  _mrr_xcp_cto_cmd_byte6_type mrr_xcp_cto_cmd_byte6;

   typedef uint8_t _mrr_xcp_cto_cmd_byte5_type;
  _mrr_xcp_cto_cmd_byte5_type mrr_xcp_cto_cmd_byte5;

   typedef uint8_t _mrr_xcp_cto_cmd_byte4_type;
  _mrr_xcp_cto_cmd_byte4_type mrr_xcp_cto_cmd_byte4;

   typedef uint8_t _mrr_xcp_cto_cmd_byte3_type;
  _mrr_xcp_cto_cmd_byte3_type mrr_xcp_cto_cmd_byte3;

   typedef uint8_t _mrr_xcp_cto_cmd_byte2_type;
  _mrr_xcp_cto_cmd_byte2_type mrr_xcp_cto_cmd_byte2;

   typedef uint8_t _mrr_xcp_cto_cmd_byte1_type;
  _mrr_xcp_cto_cmd_byte1_type mrr_xcp_cto_cmd_byte1;

   typedef uint8_t _mrr_xcp_cto_cmd_byte0_type;
  _mrr_xcp_cto_cmd_byte0_type mrr_xcp_cto_cmd_byte0;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> const> ConstPtr;

}; // struct XCPMrrCtoReq_

typedef ::delphi_mrr_msgs::XCPMrrCtoReq_<std::allocator<void> > XCPMrrCtoReq;

typedef boost::shared_ptr< ::delphi_mrr_msgs::XCPMrrCtoReq > XCPMrrCtoReqPtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::XCPMrrCtoReq const> XCPMrrCtoReqConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f545e57f047f86264c43b7d6b7456576";
  }

  static const char* value(const ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf545e57f047f8626ULL;
  static const uint64_t static_value2 = 0x4c43b7d6b7456576ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/XCPMrrCtoReq";
  }

  static const char* value(const ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint8 mrr_xcp_cto_cmd_byte7\n\
uint8 mrr_xcp_cto_cmd_byte6\n\
uint8 mrr_xcp_cto_cmd_byte5\n\
uint8 mrr_xcp_cto_cmd_byte4\n\
uint8 mrr_xcp_cto_cmd_byte3\n\
uint8 mrr_xcp_cto_cmd_byte2\n\
uint8 mrr_xcp_cto_cmd_byte1\n\
uint8 mrr_xcp_cto_cmd_byte0\n\
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

  static const char* value(const ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.mrr_xcp_cto_cmd_byte7);
      stream.next(m.mrr_xcp_cto_cmd_byte6);
      stream.next(m.mrr_xcp_cto_cmd_byte5);
      stream.next(m.mrr_xcp_cto_cmd_byte4);
      stream.next(m.mrr_xcp_cto_cmd_byte3);
      stream.next(m.mrr_xcp_cto_cmd_byte2);
      stream.next(m.mrr_xcp_cto_cmd_byte1);
      stream.next(m.mrr_xcp_cto_cmd_byte0);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct XCPMrrCtoReq_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::XCPMrrCtoReq_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "mrr_xcp_cto_cmd_byte7: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mrr_xcp_cto_cmd_byte7);
    s << indent << "mrr_xcp_cto_cmd_byte6: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mrr_xcp_cto_cmd_byte6);
    s << indent << "mrr_xcp_cto_cmd_byte5: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mrr_xcp_cto_cmd_byte5);
    s << indent << "mrr_xcp_cto_cmd_byte4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mrr_xcp_cto_cmd_byte4);
    s << indent << "mrr_xcp_cto_cmd_byte3: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mrr_xcp_cto_cmd_byte3);
    s << indent << "mrr_xcp_cto_cmd_byte2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mrr_xcp_cto_cmd_byte2);
    s << indent << "mrr_xcp_cto_cmd_byte1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mrr_xcp_cto_cmd_byte1);
    s << indent << "mrr_xcp_cto_cmd_byte0: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mrr_xcp_cto_cmd_byte0);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_XCPMRRCTOREQ_H