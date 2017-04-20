// Generated by gencpp from file blender_api_msgs/EmotionState.msg
// DO NOT EDIT!


#ifndef BLENDER_API_MSGS_MESSAGE_EMOTIONSTATE_H
#define BLENDER_API_MSGS_MESSAGE_EMOTIONSTATE_H


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
struct EmotionState_
{
  typedef EmotionState_<ContainerAllocator> Type;

  EmotionState_()
    : name()
    , magnitude(0.0)
    , duration()  {
    }
  EmotionState_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , magnitude(0.0)
    , duration()  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef float _magnitude_type;
  _magnitude_type magnitude;

   typedef ros::Duration _duration_type;
  _duration_type duration;




  typedef boost::shared_ptr< ::blender_api_msgs::EmotionState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::blender_api_msgs::EmotionState_<ContainerAllocator> const> ConstPtr;

}; // struct EmotionState_

typedef ::blender_api_msgs::EmotionState_<std::allocator<void> > EmotionState;

typedef boost::shared_ptr< ::blender_api_msgs::EmotionState > EmotionStatePtr;
typedef boost::shared_ptr< ::blender_api_msgs::EmotionState const> EmotionStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::blender_api_msgs::EmotionState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::blender_api_msgs::EmotionState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace blender_api_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'blender_api_msgs': ['/home/icog-labs/hansonrobotics/HEAD/src/blender_api_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::blender_api_msgs::EmotionState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::blender_api_msgs::EmotionState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::blender_api_msgs::EmotionState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::blender_api_msgs::EmotionState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::blender_api_msgs::EmotionState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::blender_api_msgs::EmotionState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::blender_api_msgs::EmotionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "32bf35d00d56bb6221c497744c8f00dd";
  }

  static const char* value(const ::blender_api_msgs::EmotionState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x32bf35d00d56bb62ULL;
  static const uint64_t static_value2 = 0x21c497744c8f00ddULL;
};

template<class ContainerAllocator>
struct DataType< ::blender_api_msgs::EmotionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "blender_api_msgs/EmotionState";
  }

  static const char* value(const ::blender_api_msgs::EmotionState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::blender_api_msgs::EmotionState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
float32 magnitude\n\
duration duration\n\
";
  }

  static const char* value(const ::blender_api_msgs::EmotionState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::blender_api_msgs::EmotionState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.magnitude);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EmotionState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::blender_api_msgs::EmotionState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::blender_api_msgs::EmotionState_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "magnitude: ";
    Printer<float>::stream(s, indent + "  ", v.magnitude);
    s << indent << "duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BLENDER_API_MSGS_MESSAGE_EMOTIONSTATE_H
