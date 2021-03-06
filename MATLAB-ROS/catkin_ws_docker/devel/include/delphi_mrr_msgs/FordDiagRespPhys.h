// Generated by gencpp from file delphi_mrr_msgs/FordDiagRespPhys.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_FORDDIAGRESPPHYS_H
#define DELPHI_MRR_MSGS_MESSAGE_FORDDIAGRESPPHYS_H


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
struct FordDiagRespPhys_
{
  typedef FordDiagRespPhys_<ContainerAllocator> Type;

  FordDiagRespPhys_()
    : header()
    , tester_physical_res_ccm(0)  {
    }
  FordDiagRespPhys_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tester_physical_res_ccm(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint64_t _tester_physical_res_ccm_type;
  _tester_physical_res_ccm_type tester_physical_res_ccm;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> const> ConstPtr;

}; // struct FordDiagRespPhys_

typedef ::delphi_mrr_msgs::FordDiagRespPhys_<std::allocator<void> > FordDiagRespPhys;

typedef boost::shared_ptr< ::delphi_mrr_msgs::FordDiagRespPhys > FordDiagRespPhysPtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::FordDiagRespPhys const> FordDiagRespPhysConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e28b716bd1cda9916d5789d9fcaa98e7";
  }

  static const char* value(const ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe28b716bd1cda991ULL;
  static const uint64_t static_value2 = 0x6d5789d9fcaa98e7ULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/FordDiagRespPhys";
  }

  static const char* value(const ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
uint64 tester_physical_res_ccm\n\
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

  static const char* value(const ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tester_physical_res_ccm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FordDiagRespPhys_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::FordDiagRespPhys_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tester_physical_res_ccm: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.tester_physical_res_ccm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_FORDDIAGRESPPHYS_H
