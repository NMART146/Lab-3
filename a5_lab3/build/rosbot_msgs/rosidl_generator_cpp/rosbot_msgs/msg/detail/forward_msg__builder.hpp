// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosbot_msgs:msg/ForwardMsg.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__BUILDER_HPP_
#define ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rosbot_msgs/msg/detail/forward_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rosbot_msgs
{

namespace msg
{

namespace builder
{

class Init_ForwardMsg_pulse_array
{
public:
  Init_ForwardMsg_pulse_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosbot_msgs::msg::ForwardMsg pulse_array(::rosbot_msgs::msg::ForwardMsg::_pulse_array_type arg)
  {
    msg_.pulse_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosbot_msgs::msg::ForwardMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosbot_msgs::msg::ForwardMsg>()
{
  return rosbot_msgs::msg::builder::Init_ForwardMsg_pulse_array();
}

}  // namespace rosbot_msgs

#endif  // ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__BUILDER_HPP_
