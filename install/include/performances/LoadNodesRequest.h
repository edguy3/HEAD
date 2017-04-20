// Generated by gencpp from file performances/LoadNodesRequest.msg
// DO NOT EDIT!


#ifndef PERFORMANCES_MESSAGE_LOADNODESREQUEST_H
#define PERFORMANCES_MESSAGE_LOADNODESREQUEST_H


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
struct LoadNodesRequest_
{
  typedef LoadNodesRequest_<ContainerAllocator> Type;

  LoadNodesRequest_()
    : nodes()  {
    }
  LoadNodesRequest_(const ContainerAllocator& _alloc)
    : nodes(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _nodes_type;
  _nodes_type nodes;




  typedef boost::shared_ptr< ::performances::LoadNodesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::performances::LoadNodesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LoadNodesRequest_

typedef ::performances::LoadNodesRequest_<std::allocator<void> > LoadNodesRequest;

typedef boost::shared_ptr< ::performances::LoadNodesRequest > LoadNodesRequestPtr;
typedef boost::shared_ptr< ::performances::LoadNodesRequest const> LoadNodesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::performances::LoadNodesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::performances::LoadNodesRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::performances::LoadNodesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::performances::LoadNodesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::performances::LoadNodesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::performances::LoadNodesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::performances::LoadNodesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::performances::LoadNodesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::performances::LoadNodesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e12efee1e20296779b8aa9365fdf4c1e";
  }

  static const char* value(const ::performances::LoadNodesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe12efee1e2029677ULL;
  static const uint64_t static_value2 = 0x9b8aa9365fdf4c1eULL;
};

template<class ContainerAllocator>
struct DataType< ::performances::LoadNodesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "performances/LoadNodesRequest";
  }

  static const char* value(const ::performances::LoadNodesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::performances::LoadNodesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string nodes\n\
";
  }

  static const char* value(const ::performances::LoadNodesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::performances::LoadNodesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.nodes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LoadNodesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::performances::LoadNodesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::performances::LoadNodesRequest_<ContainerAllocator>& v)
  {
    s << indent << "nodes: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nodes);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERFORMANCES_MESSAGE_LOADNODESREQUEST_H
