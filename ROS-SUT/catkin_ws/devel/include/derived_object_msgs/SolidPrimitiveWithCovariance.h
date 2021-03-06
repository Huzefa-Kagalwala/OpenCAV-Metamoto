// Generated by gencpp from file derived_object_msgs/SolidPrimitiveWithCovariance.msg
// DO NOT EDIT!


#ifndef DERIVED_OBJECT_MSGS_MESSAGE_SOLIDPRIMITIVEWITHCOVARIANCE_H
#define DERIVED_OBJECT_MSGS_MESSAGE_SOLIDPRIMITIVEWITHCOVARIANCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace derived_object_msgs
{
template <class ContainerAllocator>
struct SolidPrimitiveWithCovariance_
{
  typedef SolidPrimitiveWithCovariance_<ContainerAllocator> Type;

  SolidPrimitiveWithCovariance_()
    : type(0)
    , dimensions()
    , covariance()  {
    }
  SolidPrimitiveWithCovariance_(const ContainerAllocator& _alloc)
    : type(0)
    , dimensions(_alloc)
    , covariance(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _dimensions_type;
  _dimensions_type dimensions;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _covariance_type;
  _covariance_type covariance;



  enum {
    BOX = 1u,
    SPHERE = 2u,
    CYLINDER = 3u,
    CONE = 4u,
    BOX_X = 0u,
    BOX_Y = 1u,
    BOX_Z = 2u,
    SPHERE_RADIUS = 0u,
    CYLINDER_HEIGHT = 0u,
    CYLINDER_RADIUS = 1u,
    CONE_HEIGHT = 0u,
    CONE_RADIUS = 1u,
  };


  typedef boost::shared_ptr< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> const> ConstPtr;

}; // struct SolidPrimitiveWithCovariance_

typedef ::derived_object_msgs::SolidPrimitiveWithCovariance_<std::allocator<void> > SolidPrimitiveWithCovariance;

typedef boost::shared_ptr< ::derived_object_msgs::SolidPrimitiveWithCovariance > SolidPrimitiveWithCovariancePtr;
typedef boost::shared_ptr< ::derived_object_msgs::SolidPrimitiveWithCovariance const> SolidPrimitiveWithCovarianceConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace derived_object_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'shape_msgs': ['/opt/ros/kinetic/share/shape_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'derived_object_msgs': ['/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c43d90f132111449bd65e4b2e79d97c2";
  }

  static const char* value(const ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc43d90f132111449ULL;
  static const uint64_t static_value2 = 0xbd65e4b2e79d97c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "derived_object_msgs/SolidPrimitiveWithCovariance";
  }

  static const char* value(const ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Define box, sphere, cylinder, cone \n\
# All shapes are defined to have their bounding boxes centered around 0,0,0.\n\
# This message based on shape_msgs/SolidPrimitive\n\
\n\
# The type of the shape\n\
uint8 type\n\
uint8 BOX=1\n\
uint8 SPHERE=2\n\
uint8 CYLINDER=3\n\
uint8 CONE=4\n\
\n\
# The dimensions of the shape\n\
float64[] dimensions\n\
\n\
# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n\
# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n\
# sides of the box.\n\
uint8 BOX_X=0\n\
uint8 BOX_Y=1\n\
uint8 BOX_Z=2\n\
\n\
# For the SPHERE type, only one component is used, and it gives the radius of\n\
# the sphere.\n\
uint8 SPHERE_RADIUS=0\n\
\n\
# For the CYLINDER and CONE types, the center line is oriented along\n\
# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n\
# of dimensions gives the height of the cylinder (cone).  The\n\
# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n\
# radius of the base of the cylinder (cone).  Cone and cylinder\n\
# primitives are defined to be circular. The tip of the cone is\n\
# pointing up, along +Z axis.\n\
uint8 CYLINDER_HEIGHT=0\n\
uint8 CYLINDER_RADIUS=1\n\
\n\
uint8 CONE_HEIGHT=0\n\
uint8 CONE_RADIUS=1\n\
\n\
# Row-major representation of the covariance matrix associated with the shape.\n\
# For the BOX type, this should be a 3x3 matrix defining the uncertainty of the X, Y, and Z measurements.\n\
# For the SPHERE type, this should contain only one value for the radius.\n\
# For the CYLINDER and CONE types, this will be a 2x2 matrix defining the uncertainty of the HEIGHT and RADIUS measurements.\n\
float64[] covariance\n\
";
  }

  static const char* value(const ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.dimensions);
      stream.next(m.covariance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SolidPrimitiveWithCovariance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::derived_object_msgs::SolidPrimitiveWithCovariance_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "dimensions[]" << std::endl;
    for (size_t i = 0; i < v.dimensions.size(); ++i)
    {
      s << indent << "  dimensions[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dimensions[i]);
    }
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DERIVED_OBJECT_MSGS_MESSAGE_SOLIDPRIMITIVEWITHCOVARIANCE_H
