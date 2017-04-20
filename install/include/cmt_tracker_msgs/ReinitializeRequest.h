// Generated by gencpp from file cmt_tracker_msgs/ReinitializeRequest.msg
// DO NOT EDIT!


#ifndef CMT_TRACKER_MSGS_MESSAGE_REINITIALIZEREQUEST_H
#define CMT_TRACKER_MSGS_MESSAGE_REINITIALIZEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/RegionOfInterest.h>

namespace cmt_tracker_msgs
{
template <class ContainerAllocator>
struct ReinitializeRequest_
{
  typedef ReinitializeRequest_<ContainerAllocator> Type;

  ReinitializeRequest_()
    : object()
    , name()  {
    }
  ReinitializeRequest_(const ContainerAllocator& _alloc)
    : object(_alloc)
    , name(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::RegionOfInterest_<ContainerAllocator>  _object_type;
  _object_type object;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;




  typedef boost::shared_ptr< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ReinitializeRequest_

typedef ::cmt_tracker_msgs::ReinitializeRequest_<std::allocator<void> > ReinitializeRequest;

typedef boost::shared_ptr< ::cmt_tracker_msgs::ReinitializeRequest > ReinitializeRequestPtr;
typedef boost::shared_ptr< ::cmt_tracker_msgs::ReinitializeRequest const> ReinitializeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cmt_tracker_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'opencv_apps': ['/opt/ros/indigo/share/opencv_apps/cmake/../msg'], 'cmt_tracker_msgs': ['/home/icog-labs/hansonrobotics/HEAD/src/vision/cmt_tracker_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0392f3ba1598a6396d8981fc037597b8";
  }

  static const char* value(const ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0392f3ba1598a639ULL;
  static const uint64_t static_value2 = 0x6d8981fc037597b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cmt_tracker_msgs/ReinitializeRequest";
  }

  static const char* value(const ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/RegionOfInterest object\n\
string name\n\
\n\
================================================================================\n\
MSG: sensor_msgs/RegionOfInterest\n\
# This message is used to specify a region of interest within an image.\n\
#\n\
# When used to specify the ROI setting of the camera when the image was\n\
# taken, the height and width fields should either match the height and\n\
# width fields for the associated image; or height = width = 0\n\
# indicates that the full resolution image was captured.\n\
\n\
uint32 x_offset  # Leftmost pixel of the ROI\n\
                 # (0 if the ROI includes the left edge of the image)\n\
uint32 y_offset  # Topmost pixel of the ROI\n\
                 # (0 if the ROI includes the top edge of the image)\n\
uint32 height    # Height of ROI\n\
uint32 width     # Width of ROI\n\
\n\
# True if a distinct rectified ROI should be calculated from the \"raw\"\n\
# ROI in this message. Typically this should be False if the full image\n\
# is captured (ROI not used), and True if a subwindow is captured (ROI\n\
# used).\n\
bool do_rectify\n\
";
  }

  static const char* value(const ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.object);
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReinitializeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cmt_tracker_msgs::ReinitializeRequest_<ContainerAllocator>& v)
  {
    s << indent << "object: ";
    s << std::endl;
    Printer< ::sensor_msgs::RegionOfInterest_<ContainerAllocator> >::stream(s, indent + "  ", v.object);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CMT_TRACKER_MSGS_MESSAGE_REINITIALIZEREQUEST_H
