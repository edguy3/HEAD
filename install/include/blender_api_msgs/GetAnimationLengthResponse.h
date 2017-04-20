// Generated by gencpp from file blender_api_msgs/GetAnimationLengthResponse.msg
// DO NOT EDIT!


#ifndef BLENDER_API_MSGS_MESSAGE_GETANIMATIONLENGTHRESPONSE_H
#define BLENDER_API_MSGS_MESSAGE_GETANIMATIONLENGTHRESPONSE_H


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
struct GetAnimationLengthResponse_
{
  typedef GetAnimationLengthResponse_<ContainerAllocator> Type;

  GetAnimationLengthResponse_()
    : length(0.0)  {
    }
  GetAnimationLengthResponse_(const ContainerAllocator& _alloc)
    : length(0.0)  {
  (void)_alloc;
    }



   typedef float _length_type;
  _length_type length;




  typedef boost::shared_ptr< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetAnimationLengthResponse_

typedef ::blender_api_msgs::GetAnimationLengthResponse_<std::allocator<void> > GetAnimationLengthResponse;

typedef boost::shared_ptr< ::blender_api_msgs::GetAnimationLengthResponse > GetAnimationLengthResponsePtr;
typedef boost::shared_ptr< ::blender_api_msgs::GetAnimationLengthResponse const> GetAnimationLengthResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "30516591bd33c945cbc4d8d225f8022b";
  }

  static const char* value(const ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x30516591bd33c945ULL;
  static const uint64_t static_value2 = 0xcbc4d8d225f8022bULL;
};

template<class ContainerAllocator>
struct DataType< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "blender_api_msgs/GetAnimationLengthResponse";
  }

  static const char* value(const ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 length\n\
\n\
\n\
";
  }

  static const char* value(const ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.length);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetAnimationLengthResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::blender_api_msgs::GetAnimationLengthResponse_<ContainerAllocator>& v)
  {
    s << indent << "length: ";
    Printer<float>::stream(s, indent + "  ", v.length);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BLENDER_API_MSGS_MESSAGE_GETANIMATIONLENGTHRESPONSE_H
