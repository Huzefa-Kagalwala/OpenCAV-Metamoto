// Generated by gencpp from file delphi_mrr_msgs/MrrHeaderTimestamps.msg
// DO NOT EDIT!


#ifndef DELPHI_MRR_MSGS_MESSAGE_MRRHEADERTIMESTAMPS_H
#define DELPHI_MRR_MSGS_MESSAGE_MRRHEADERTIMESTAMPS_H


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
struct MrrHeaderTimestamps_
{
  typedef MrrHeaderTimestamps_<ContainerAllocator> Type;

  MrrHeaderTimestamps_()
    : header()
    , can_det_time_since_meas(0.0)
    , can_sensor_time_stamp(0.0)  {
    }
  MrrHeaderTimestamps_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , can_det_time_since_meas(0.0)
    , can_sensor_time_stamp(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _can_det_time_since_meas_type;
  _can_det_time_since_meas_type can_det_time_since_meas;

   typedef float _can_sensor_time_stamp_type;
  _can_sensor_time_stamp_type can_sensor_time_stamp;





  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> const> ConstPtr;

}; // struct MrrHeaderTimestamps_

typedef ::delphi_mrr_msgs::MrrHeaderTimestamps_<std::allocator<void> > MrrHeaderTimestamps;

typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderTimestamps > MrrHeaderTimestampsPtr;
typedef boost::shared_ptr< ::delphi_mrr_msgs::MrrHeaderTimestamps const> MrrHeaderTimestampsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31560a809bee8d977f1d25fd94db961e";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31560a809bee8d97ULL;
  static const uint64_t static_value2 = 0x7f1d25fd94db961eULL;
};

template<class ContainerAllocator>
struct DataType< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "delphi_mrr_msgs/MrrHeaderTimestamps";
  }

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
float32 can_det_time_since_meas\n\
float32 can_sensor_time_stamp\n\
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

  static const char* value(const ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.can_det_time_since_meas);
      stream.next(m.can_sensor_time_stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MrrHeaderTimestamps_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::delphi_mrr_msgs::MrrHeaderTimestamps_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "can_det_time_since_meas: ";
    Printer<float>::stream(s, indent + "  ", v.can_det_time_since_meas);
    s << indent << "can_sensor_time_stamp: ";
    Printer<float>::stream(s, indent + "  ", v.can_sensor_time_stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DELPHI_MRR_MSGS_MESSAGE_MRRHEADERTIMESTAMPS_H
