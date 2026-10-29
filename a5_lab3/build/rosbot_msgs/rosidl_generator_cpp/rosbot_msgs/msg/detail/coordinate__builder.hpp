// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbot_msgs:msg/Coordinate.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__COORDINATE__BUILDER_HPP_
#define ROSBOT_MSGS__MSG__DETAIL__COORDINATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbot_msgs/msg/detail/coordinate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbot_msgs
{

namespace msg
{

namespace builder
{

class Init_Coordinate_gamma
{
public:
  explicit Init_Coordinate_gamma(::rosbot_msgs::msg::Coordinate & msg)
  : msg_(msg)
  {}
  ::rosbot_msgs::msg::Coordinate gamma(::rosbot_msgs::msg::Coordinate::_gamma_type arg)
  {
    msg_.gamma = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbot_msgs::msg::Coordinate msg_;
};

class Init_Coordinate_phi
{
public:
  explicit Init_Coordinate_phi(::rosbot_msgs::msg::Coordinate & msg)
  : msg_(msg)
  {}
  Init_Coordinate_gamma phi(::rosbot_msgs::msg::Coordinate::_phi_type arg)
  {
    msg_.phi = std::move(arg);
    return Init_Coordinate_gamma(msg_);
  }

private:
  ::rosbot_msgs::msg::Coordinate msg_;
};

class Init_Coordinate_z
{
public:
  explicit Init_Coordinate_z(::rosbot_msgs::msg::Coordinate & msg)
  : msg_(msg)
  {}
  Init_Coordinate_phi z(::rosbot_msgs::msg::Coordinate::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Coordinate_phi(msg_);
  }

private:
  ::rosbot_msgs::msg::Coordinate msg_;
};

class Init_Coordinate_y
{
public:
  explicit Init_Coordinate_y(::rosbot_msgs::msg::Coordinate & msg)
  : msg_(msg)
  {}
  Init_Coordinate_z y(::rosbot_msgs::msg::Coordinate::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Coordinate_z(msg_);
  }

private:
  ::rosbot_msgs::msg::Coordinate msg_;
};

class Init_Coordinate_x
{
public:
  Init_Coordinate_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinate_y x(::rosbot_msgs::msg::Coordinate::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Coordinate_y(msg_);
  }

private:
  ::rosbot_msgs::msg::Coordinate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbot_msgs::msg::Coordinate>()
{
  return rosbot_msgs::msg::builder::Init_Coordinate_x();
}

}  // namespace rosbot_msgs

#endif  // ROSBOT_MSGS__MSG__DETAIL__COORDINATE__BUILDER_HPP_
