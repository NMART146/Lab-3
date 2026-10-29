// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbot_msgs:msg/Coordinate.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__COORDINATE__TRAITS_HPP_
#define ROSBOT_MSGS__MSG__DETAIL__COORDINATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosbot_msgs/msg/detail/coordinate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosbot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Coordinate & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: phi
  {
    out << "phi: ";
    rosidl_generator_traits::value_to_yaml(msg.phi, out);
    out << ", ";
  }

  // member: gamma
  {
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coordinate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: phi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "phi: ";
    rosidl_generator_traits::value_to_yaml(msg.phi, out);
    out << "\n";
  }

  // member: gamma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamma: ";
    rosidl_generator_traits::value_to_yaml(msg.gamma, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coordinate & msg, bool use_flow_style = false)
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
  const rosbot_msgs::msg::Coordinate & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosbot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosbot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosbot_msgs::msg::Coordinate & msg)
{
  return rosbot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosbot_msgs::msg::Coordinate>()
{
  return "rosbot_msgs::msg::Coordinate";
}

template<>
inline const char * name<rosbot_msgs::msg::Coordinate>()
{
  return "rosbot_msgs/msg/Coordinate";
}

template<>
struct has_fixed_size<rosbot_msgs::msg::Coordinate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosbot_msgs::msg::Coordinate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosbot_msgs::msg::Coordinate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBOT_MSGS__MSG__DETAIL__COORDINATE__TRAITS_HPP_
