// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbot_msgs:msg/GripMsg.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__TRAITS_HPP_
#define ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbot_msgs/msg/detail/grip_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo_id
  {
    out << "servo_id: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_id, out);
    out << ", ";
  }

  // member: command_pulse
  {
    out << "command_pulse: ";
    rosidl_generator_traits::value_to_yaml(msg.command_pulse, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_id: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_id, out);
    out << "\n";
  }

  // member: command_pulse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_pulse: ";
    rosidl_generator_traits::value_to_yaml(msg.command_pulse, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rosbot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rosbot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosbot_msgs::msg::GripMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbot_msgs::msg::GripMsg & msg)
{
  return rosbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbot_msgs::msg::GripMsg>()
{
  return "rosbot_msgs::msg::GripMsg";
}

template<>
inline const char * name<rosbot_msgs::msg::GripMsg>()
{
  return "rosbot_msgs/msg/GripMsg";
}

template<>
struct has_fixed_size<rosbot_msgs::msg::GripMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbot_msgs::msg::GripMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbot_msgs::msg::GripMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__TRAITS_HPP_
