// Generated by gencpp from file performances/PauseResponse.msg
// DO NOT EDIT!


#ifndef PERFORMANCES_MESSAGE_PAUSERESPONSE_H
#define PERFORMANCES_MESSAGE_PAUSERESPONSE_H


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
struct PauseResponse_
{
  typedef PauseResponse_<ContainerAllocator> Type;

  PauseResponse_()
    : success(false)
    , time(0.0)  {
    }
  PauseResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , time(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef double _time_type;
  _time_type time;




  typedef boost::shared_ptr< ::performances::PauseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::performances::PauseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PauseResponse_

typedef ::performances::PauseResponse_<std::allocator<void> > PauseResponse;

typedef boost::shared_ptr< ::performances::PauseResponse > PauseResponsePtr;
typedef boost::shared_ptr< ::performances::PauseResponse const> PauseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::performances::PauseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::performances::PauseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace performances

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'performances': ['/home/icog-labs/hansonrobotics/HEAD/src/performances/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::performances::PauseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::performances::PauseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::performances::PauseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::performances::PauseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::performances::PauseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::performances::PauseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::performances::PauseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1c819fef9d84d752cee0adc8561a9b4";
  }

  static const char* value(const ::performances::PauseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1c819fef9d84d75ULL;
  static const uint64_t static_value2 = 0x2cee0adc8561a9b4ULL;
};

template<class ContainerAllocator>
struct DataType< ::performances::PauseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "performances/PauseResponse";
  }

  static const char* value(const ::performances::PauseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::performances::PauseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
float64 time\n\
\n\
";
  }

  static const char* value(const ::performances::PauseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::performances::PauseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PauseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::performances::PauseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::performances::PauseResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "time: ";
    Printer<double>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERFORMANCES_MESSAGE_PAUSERESPONSE_H
