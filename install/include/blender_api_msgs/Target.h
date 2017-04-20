// Generated by gencpp from file blender_api_msgs/Target.msg
// DO NOT EDIT!


#ifndef BLENDER_API_MSGS_MESSAGE_TARGET_H
#define BLENDER_API_MSGS_MESSAGE_TARGET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace blender_api_msgs
{
template <class ContainerAllocator>
struct Target_
{
  typedef Target_<ContainerAllocator> Type;

  Target_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , speed(0.0)  {
    }
  Target_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , speed(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _speed_type;
  _speed_type speed;




  typedef boost::shared_ptr< ::blender_api_msgs::Target_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::blender_api_msgs::Target_<ContainerAllocator> const> ConstPtr;

}; // struct Target_

typedef ::blender_api_msgs::Target_<std::allocator<void> > Target;

typedef boost::shared_ptr< ::blender_api_msgs::Target > TargetPtr;
typedef boost::shared_ptr< ::blender_api_msgs::Target const> TargetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::blender_api_msgs::Target_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::blender_api_msgs::Target_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace blender_api_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'blender_api_msgs': ['/home/icog-labs/hansonrobotics/HEAD/src/blender_api_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::blender_api_msgs::Target_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::blender_api_msgs::Target_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::blender_api_msgs::Target_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::blender_api_msgs::Target_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::blender_api_msgs::Target_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::blender_api_msgs::Target_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::blender_api_msgs::Target_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eab185bbf28eb6fc3b559c668314bf50";
  }

  static const char* value(const ::blender_api_msgs::Target_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeab185bbf28eb6fcULL;
  static const uint64_t static_value2 = 0x3b559c668314bf50ULL;
};

template<class ContainerAllocator>
struct DataType< ::blender_api_msgs::Target_<ContainerAllocator> >
{
  static const char* value()
  {
    return "blender_api_msgs/Target";
  }

  static const char* value(const ::blender_api_msgs::Target_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::blender_api_msgs::Target_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 z\n\
float32 speed\n\
";
  }

  static const char* value(const ::blender_api_msgs::Target_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::blender_api_msgs::Target_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Target_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::blender_api_msgs::Target_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::blender_api_msgs::Target_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BLENDER_API_MSGS_MESSAGE_TARGET_H
