// Generated by gencpp from file pi_face_tracker/FaceEvent.msg
// DO NOT EDIT!


#ifndef PI_FACE_TRACKER_MESSAGE_FACEEVENT_H
#define PI_FACE_TRACKER_MESSAGE_FACEEVENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pi_face_tracker
{
template <class ContainerAllocator>
struct FaceEvent_
{
  typedef FaceEvent_<ContainerAllocator> Type;

  FaceEvent_()
    : face_event()
    , face_id(0)
    , recognized_id()  {
    }
  FaceEvent_(const ContainerAllocator& _alloc)
    : face_event(_alloc)
    , face_id(0)
    , recognized_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _face_event_type;
  _face_event_type face_event;

   typedef int32_t _face_id_type;
  _face_id_type face_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _recognized_id_type;
  _recognized_id_type recognized_id;




  typedef boost::shared_ptr< ::pi_face_tracker::FaceEvent_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pi_face_tracker::FaceEvent_<ContainerAllocator> const> ConstPtr;

}; // struct FaceEvent_

typedef ::pi_face_tracker::FaceEvent_<std::allocator<void> > FaceEvent;

typedef boost::shared_ptr< ::pi_face_tracker::FaceEvent > FaceEventPtr;
typedef boost::shared_ptr< ::pi_face_tracker::FaceEvent const> FaceEventConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pi_face_tracker::FaceEvent_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pi_face_tracker

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'pi_face_tracker': ['/home/icog-labs/hansonrobotics/HEAD/src/vision/pi_vision/pi_face_tracker/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pi_face_tracker::FaceEvent_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pi_face_tracker::FaceEvent_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pi_face_tracker::FaceEvent_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c1606bf80cc90b3ff678afd427716f5";
  }

  static const char* value(const ::pi_face_tracker::FaceEvent_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c1606bf80cc90b3ULL;
  static const uint64_t static_value2 = 0xff678afd427716f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pi_face_tracker/FaceEvent";
  }

  static const char* value(const ::pi_face_tracker::FaceEvent_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string face_event\n\
int32 face_id\n\
string recognized_id\n\
";
  }

  static const char* value(const ::pi_face_tracker::FaceEvent_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.face_event);
      stream.next(m.face_id);
      stream.next(m.recognized_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceEvent_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pi_face_tracker::FaceEvent_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pi_face_tracker::FaceEvent_<ContainerAllocator>& v)
  {
    s << indent << "face_event: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.face_event);
    s << indent << "face_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.face_id);
    s << indent << "recognized_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.recognized_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PI_FACE_TRACKER_MESSAGE_FACEEVENT_H
