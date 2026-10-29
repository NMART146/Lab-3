// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosbot_msgs:msg/GripMsg.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__STRUCT_HPP_
#define ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rosbot_msgs__msg__GripMsg __attribute__((deprecated))
#else
# define DEPRECATED__rosbot_msgs__msg__GripMsg __declspec(deprecated)
#endif

namespace rosbot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripMsg_
{
  using Type = GripMsg_<ContainerAllocator>;

  explicit GripMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_id = 0ll;
      this->command_pulse = 0ll;
    }
  }

  explicit GripMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_id = 0ll;
      this->command_pulse = 0ll;
    }
  }

  // field types and members
  using _servo_id_type =
    int64_t;
  _servo_id_type servo_id;
  using _command_pulse_type =
    int64_t;
  _command_pulse_type command_pulse;

  // setters for named parameter idiom
  Type & set__servo_id(
    const int64_t & _arg)
  {
    this->servo_id = _arg;
    return *this;
  }
  Type & set__command_pulse(
    const int64_t & _arg)
  {
    this->command_pulse = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosbot_msgs::msg::GripMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosbot_msgs::msg::GripMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosbot_msgs::msg::GripMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosbot_msgs::msg::GripMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosbot_msgs::msg::GripMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosbot_msgs::msg::GripMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosbot_msgs::msg::GripMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosbot_msgs::msg::GripMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosbot_msgs::msg::GripMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosbot_msgs::msg::GripMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosbot_msgs__msg__GripMsg
    std::shared_ptr<rosbot_msgs::msg::GripMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosbot_msgs__msg__GripMsg
    std::shared_ptr<rosbot_msgs::msg::GripMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripMsg_ & other) const
  {
    if (this->servo_id != other.servo_id) {
      return false;
    }
    if (this->command_pulse != other.command_pulse) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripMsg_

// alias to use template instance with default allocator
using GripMsg =
  rosbot_msgs::msg::GripMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosbot_msgs

#endif  // ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__STRUCT_HPP_
