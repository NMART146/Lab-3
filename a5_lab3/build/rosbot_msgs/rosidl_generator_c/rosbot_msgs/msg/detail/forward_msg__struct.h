// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbot_msgs:msg/ForwardMsg.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__STRUCT_H_
#define ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pulse_array'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ForwardMsg in the package rosbot_msgs.
typedef struct rosbot_msgs__msg__ForwardMsg
{
  rosidl_runtime_c__int64__Sequence pulse_array;
} rosbot_msgs__msg__ForwardMsg;

// Struct for a sequence of rosbot_msgs__msg__ForwardMsg.
typedef struct rosbot_msgs__msg__ForwardMsg__Sequence
{
  rosbot_msgs__msg__ForwardMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbot_msgs__msg__ForwardMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__STRUCT_H_
