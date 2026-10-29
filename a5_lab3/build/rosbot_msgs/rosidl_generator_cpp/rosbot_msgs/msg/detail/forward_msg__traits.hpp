// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbot_msgs:msg/ForwardMsg.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__TRAITS_HPP_
#define ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbot_msgs/msg/detail/forward_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ForwardMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: pulse_array
  {
    if (msg.pulse_array.size() == 0) {
      out << "pulse_array: []";
    } else {
      out << "pulse_array: [";
      size_t pending_items = msg.pulse_array.size();
      for (auto item : msg.pulse_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ForwardMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pulse_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pulse_array.size() == 0) {
      out << "pulse_array: []\n";
    } else {
      out << "pulse_array:\n";
      for (auto item : msg.pulse_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ForwardMsg & msg, bool use_flow_style = false)
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
  const rosbot_msgs::msg::ForwardMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbot_msgs::msg::ForwardMsg & msg)
{
  return rosbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbot_msgs::msg::ForwardMsg>()
{
  return "rosbot_msgs::msg::ForwardMsg";
}

template<>
inline const char * name<rosbot_msgs::msg::ForwardMsg>()
{
  return "rosbot_msgs/msg/ForwardMsg";
}

template<>
struct has_fixed_size<rosbot_msgs::msg::ForwardMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosbot_msgs::msg::ForwardMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosbot_msgs::msg::ForwardMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__TRAITS_HPP_
