// Generated by gencpp from file blender_api_msgs/GetParam.msg
// DO NOT EDIT!


#ifndef BLENDER_API_MSGS_MESSAGE_GETPARAM_H
#define BLENDER_API_MSGS_MESSAGE_GETPARAM_H

#include <ros/service_traits.h>


#include <blender_api_msgs/GetParamRequest.h>
#include <blender_api_msgs/GetParamResponse.h>


namespace blender_api_msgs
{

struct GetParam
{

typedef GetParamRequest Request;
typedef GetParamResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetParam
} // namespace blender_api_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::blender_api_msgs::GetParam > {
  static const char* value()
  {
    return "2017f3298983627814c079c3b10ca05d";
  }

  static const char* value(const ::blender_api_msgs::GetParam&) { return value(); }
};

template<>
struct DataType< ::blender_api_msgs::GetParam > {
  static const char* value()
  {
    return "blender_api_msgs/GetParam";
  }

  static const char* value(const ::blender_api_msgs::GetParam&) { return value(); }
};


// service_traits::MD5Sum< ::blender_api_msgs::GetParamRequest> should match 
// service_traits::MD5Sum< ::blender_api_msgs::GetParam > 
template<>
struct MD5Sum< ::blender_api_msgs::GetParamRequest>
{
  static const char* value()
  {
    return MD5Sum< ::blender_api_msgs::GetParam >::value();
  }
  static const char* value(const ::blender_api_msgs::GetParamRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::blender_api_msgs::GetParamRequest> should match 
// service_traits::DataType< ::blender_api_msgs::GetParam > 
template<>
struct DataType< ::blender_api_msgs::GetParamRequest>
{
  static const char* value()
  {
    return DataType< ::blender_api_msgs::GetParam >::value();
  }
  static const char* value(const ::blender_api_msgs::GetParamRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::blender_api_msgs::GetParamResponse> should match 
// service_traits::MD5Sum< ::blender_api_msgs::GetParam > 
template<>
struct MD5Sum< ::blender_api_msgs::GetParamResponse>
{
  static const char* value()
  {
    return MD5Sum< ::blender_api_msgs::GetParam >::value();
  }
  static const char* value(const ::blender_api_msgs::GetParamResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::blender_api_msgs::GetParamResponse> should match 
// service_traits::DataType< ::blender_api_msgs::GetParam > 
template<>
struct DataType< ::blender_api_msgs::GetParamResponse>
{
  static const char* value()
  {
    return DataType< ::blender_api_msgs::GetParam >::value();
  }
  static const char* value(const ::blender_api_msgs::GetParamResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BLENDER_API_MSGS_MESSAGE_GETPARAM_H
