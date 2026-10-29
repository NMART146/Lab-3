// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosbot_msgs:msg/Coordinate.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__COORDINATE__STRUCT_H_
#define ROSBOT_MSGS__MSG__DETAIL__COORDINATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Coordinate in the package rosbot_msgs.
typedef struct rosbot_msgs__msg__Coordinate
{
  double x;
  double y;
  double z;
  double phi;
  double gamma;
} rosbot_msgs__msg__Coordinate;

// Struct for a sequence of rosbot_msgs__msg__Coordinate.
typedef struct rosbot_msgs__msg__Coordinate__Sequence
{
  rosbot_msgs__msg__Coordinate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosbot_msgs__msg__Coordinate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSBOT_MSGS__MSG__DETAIL__COORDINATE__STRUCT_H_
