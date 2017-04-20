// Generated by gencpp from file performances/LoadSequenceRequest.msg
// DO NOT EDIT!


#ifndef PERFORMANCES_MESSAGE_LOADSEQUENCEREQUEST_H
#define PERFORMANCES_MESSAGE_LOADSEQUENCEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace performances
{
template <class ContainerAllocator>
struct LoadSequenceRequest_
{
  typedef LoadSequenceRequest_<ContainerAllocator> Type;

  LoadSequenceRequest_()
    : ids()  {
    }
  LoadSequenceRequest_(const ContainerAllocator& _alloc)
    : ids(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _ids_type;
  _ids_type ids;




  typedef boost::shared_ptr< ::performances::LoadSequenceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::performances::LoadSequenceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LoadSequenceRequest_

typedef ::performances::LoadSequenceRequest_<std::allocator<void> > LoadSequenceRequest;

typedef boost::shared_ptr< ::performances::LoadSequenceRequest > LoadSequenceRequestPtr;
typedef boost::shared_ptr< ::performances::LoadSequenceRequest const> LoadSequenceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::performances::LoadSequenceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::performances::LoadSequenceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace performances

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'performances': ['/home/icog-labs/hansonrobotics/HEAD/src/performances/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::performances::LoadSequenceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::performances::LoadSequenceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::performances::LoadSequenceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::performances::LoadSequenceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::performances::LoadSequenceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::performances::LoadSequenceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::performances::LoadSequenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31314a1125a2ca69ddc92cdc117c989c";
  }

  static const char* value(const ::performances::LoadSequenceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31314a1125a2ca69ULL;
  static const uint64_t static_value2 = 0xddc92cdc117c989cULL;
};

template<class ContainerAllocator>
struct DataType< ::performances::LoadSequenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "performances/LoadSequenceRequest";
  }

  static const char* value(const ::performances::LoadSequenceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::performances::LoadSequenceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] ids\n\
";
  }

  static const char* value(const ::performances::LoadSequenceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::performances::LoadSequenceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LoadSequenceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::performances::LoadSequenceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::performances::LoadSequenceRequest_<ContainerAllocator>& v)
  {
    s << indent << "ids[]" << std::endl;
    for (size_t i = 0; i < v.ids.size(); ++i)
    {
      s << indent << "  ids[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERFORMANCES_MESSAGE_LOADSEQUENCEREQUEST_H
