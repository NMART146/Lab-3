// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbot_msgs:msg/GripMsg.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__BUILDER_HPP_
#define ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbot_msgs/msg/detail/grip_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbot_msgs
{

namespace msg
{

namespace builder
{

class Init_GripMsg_command_pulse
{
public:
  explicit Init_GripMsg_command_pulse(::rosbot_msgs::msg::GripMsg & msg)
  : msg_(msg)
  {}
  ::rosbot_msgs::msg::GripMsg command_pulse(::rosbot_msgs::msg::GripMsg::_command_pulse_type arg)
  {
    msg_.command_pulse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbot_msgs::msg::GripMsg msg_;
};

class Init_GripMsg_servo_id
{
public:
  Init_GripMsg_servo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripMsg_command_pulse servo_id(::rosbot_msgs::msg::GripMsg::_servo_id_type arg)
  {
    msg_.servo_id = std::move(arg);
    return Init_GripMsg_command_pulse(msg_);
  }

private:
  ::rosbot_msgs::msg::GripMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbot_msgs::msg::GripMsg>()
{
  return rosbot_msgs::msg::builder::Init_GripMsg_servo_id();
}

}  // namespace rosbot_msgs

#endif  // ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__BUILDER_HPP_
