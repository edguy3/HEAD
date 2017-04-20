// Generated by gencpp from file basic_head_api/MakeFaceExpr.msg
// DO NOT EDIT!


#ifndef BASIC_HEAD_API_MESSAGE_MAKEFACEEXPR_H
#define BASIC_HEAD_API_MESSAGE_MAKEFACEEXPR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace basic_head_api
{
template <class ContainerAllocator>
struct MakeFaceExpr_
{
  typedef MakeFaceExpr_<ContainerAllocator> Type;

  MakeFaceExpr_()
    : exprname()
    , intensity(0.0)  {
    }
  MakeFaceExpr_(const ContainerAllocator& _alloc)
    : exprname(_alloc)
    , intensity(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _exprname_type;
  _exprname_type exprname;

   typedef double _intensity_type;
  _intensity_type intensity;




  typedef boost::shared_ptr< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> const> ConstPtr;

}; // struct MakeFaceExpr_

typedef ::basic_head_api::MakeFaceExpr_<std::allocator<void> > MakeFaceExpr;

typedef boost::shared_ptr< ::basic_head_api::MakeFaceExpr > MakeFaceExprPtr;
typedef boost::shared_ptr< ::basic_head_api::MakeFaceExpr const> MakeFaceExprConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::basic_head_api::MakeFaceExpr_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace basic_head_api

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'basic_head_api': ['/home/icog-labs/hansonrobotics/HEAD/src/hardware/basic_head_api/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23f4cd70e7885a30cd4d3e8e82073188";
  }

  static const char* value(const ::basic_head_api::MakeFaceExpr_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23f4cd70e7885a30ULL;
  static const uint64_t static_value2 = 0xcd4d3e8e82073188ULL;
};

template<class ContainerAllocator>
struct DataType< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "basic_head_api/MakeFaceExpr";
  }

  static const char* value(const ::basic_head_api::MakeFaceExpr_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string exprname\n\
float64 intensity\n\
";
  }

  static const char* value(const ::basic_head_api::MakeFaceExpr_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.exprname);
      stream.next(m.intensity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MakeFaceExpr_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::basic_head_api::MakeFaceExpr_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::basic_head_api::MakeFaceExpr_<ContainerAllocator>& v)
  {
    s << indent << "exprname: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.exprname);
    s << indent << "intensity: ";
    Printer<double>::stream(s, indent + "  ", v.intensity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASIC_HEAD_API_MESSAGE_MAKEFACEEXPR_H
