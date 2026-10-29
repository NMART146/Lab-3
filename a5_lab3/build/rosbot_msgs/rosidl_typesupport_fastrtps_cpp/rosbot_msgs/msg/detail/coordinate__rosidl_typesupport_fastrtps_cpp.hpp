// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rosbot_msgs:msg/Coordinate.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__COORDINATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROSBOT_MSGS__MSG__DETAIL__COORDINATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosbot_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rosbot_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rosbot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbot_msgs
cdr_serialize(
  const rosbot_msgs::msg::Coordinate & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosbot_msgs::msg::Coordinate & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbot_msgs
get_serialized_size(
  const rosbot_msgs::msg::Coordinate & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbot_msgs
max_serialized_size_Coordinate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosbot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosbot_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosbot_msgs, msg, Coordinate)();

#ifdef __cplusplus
}
#endif

#endif  // ROSBOT_MSGS__MSG__DETAIL__COORDINATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
