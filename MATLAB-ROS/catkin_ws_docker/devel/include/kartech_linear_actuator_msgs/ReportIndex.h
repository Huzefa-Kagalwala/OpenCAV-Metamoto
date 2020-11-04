// Generated by gencpp from file kartech_linear_actuator_msgs/ReportIndex.msg
// DO NOT EDIT!


#ifndef KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_REPORTINDEX_H
#define KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_REPORTINDEX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kartech_linear_actuator_msgs
{
template <class ContainerAllocator>
struct ReportIndex_
{
  typedef ReportIndex_<ContainerAllocator> Type;

  ReportIndex_()
    : report_index(0)  {
    }
  ReportIndex_(const ContainerAllocator& _alloc)
    : report_index(0)  {
  (void)_alloc;
    }



   typedef uint8_t _report_index_type;
  _report_index_type report_index;



  enum {
    POSITION_REPORT_INDEX = 128u,
    MOTOR_CURRENT_REPORT_INDEX = 129u,
    ENHANCED_POSITION_REPORT_INDEX = 152u,
    UNIQUE_DEVICE_ID_REPORTS_INDEX = 167u,
    SOFTWARE_REVISION_REPORT_INDEX = 229u,
    ZEROING_MESSAGE_REPORT_INDEX = 238u,
  };


  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> const> ConstPtr;

}; // struct ReportIndex_

typedef ::kartech_linear_actuator_msgs::ReportIndex_<std::allocator<void> > ReportIndex;

typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ReportIndex > ReportIndexPtr;
typedef boost::shared_ptr< ::kartech_linear_actuator_msgs::ReportIndex const> ReportIndexConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kartech_linear_actuator_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'kartech_linear_actuator_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "05847e803066ad58819c151b2e8471e0";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x05847e803066ad58ULL;
  static const uint64_t static_value2 = 0x819c151b2e8471e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kartech_linear_actuator_msgs/ReportIndex";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 POSITION_REPORT_INDEX = 128\n\
uint8 MOTOR_CURRENT_REPORT_INDEX = 129\n\
uint8 ENHANCED_POSITION_REPORT_INDEX = 152\n\
uint8 UNIQUE_DEVICE_ID_REPORTS_INDEX = 167\n\
uint8 SOFTWARE_REVISION_REPORT_INDEX = 229\n\
uint8 ZEROING_MESSAGE_REPORT_INDEX = 238\n\
\n\
uint8 report_index\n\
";
  }

  static const char* value(const ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.report_index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReportIndex_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kartech_linear_actuator_msgs::ReportIndex_<ContainerAllocator>& v)
  {
    s << indent << "report_index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.report_index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KARTECH_LINEAR_ACTUATOR_MSGS_MESSAGE_REPORTINDEX_H