// Generated by gencpp from file cmt_tracker_msgs/TrackedImagesRequest.msg
// DO NOT EDIT!


#ifndef CMT_TRACKER_MSGS_MESSAGE_TRACKEDIMAGESREQUEST_H
#define CMT_TRACKER_MSGS_MESSAGE_TRACKEDIMAGESREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cmt_tracker_msgs
{
template <class ContainerAllocator>
struct TrackedImagesRequest_
{
  typedef TrackedImagesRequest_<ContainerAllocator> Type;

  TrackedImagesRequest_()
    {
    }
  TrackedImagesRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedImagesRequest_

typedef ::cmt_tracker_msgs::TrackedImagesRequest_<std::allocator<void> > TrackedImagesRequest;

typedef boost::shared_ptr< ::cmt_tracker_msgs::TrackedImagesRequest > TrackedImagesRequestPtr;
typedef boost::shared_ptr< ::cmt_tracker_msgs::TrackedImagesRequest const> TrackedImagesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cmt_tracker_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'opencv_apps': ['/opt/ros/indigo/share/opencv_apps/cmake/../msg'], 'cmt_tracker_msgs': ['/home/icog-labs/hansonrobotics/HEAD/src/vision/cmt_tracker_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cmt_tracker_msgs/TrackedImagesRequest";
  }

  static const char* value(const ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedImagesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::cmt_tracker_msgs::TrackedImagesRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CMT_TRACKER_MSGS_MESSAGE_TRACKEDIMAGESREQUEST_H
