// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosbot_msgs:msg/GripMsg.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__FUNCTIONS_H_
#define ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosbot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbot_msgs/msg/detail/grip_msg__struct.h"

/// Initialize msg/GripMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbot_msgs__msg__GripMsg
 * )) before or use
 * rosbot_msgs__msg__GripMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__GripMsg__init(rosbot_msgs__msg__GripMsg * msg);

/// Finalize msg/GripMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
void
rosbot_msgs__msg__GripMsg__fini(rosbot_msgs__msg__GripMsg * msg);

/// Create msg/GripMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbot_msgs__msg__GripMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
rosbot_msgs__msg__GripMsg *
rosbot_msgs__msg__GripMsg__create();

/// Destroy msg/GripMsg message.
/**
 * It calls
 * rosbot_msgs__msg__GripMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
void
rosbot_msgs__msg__GripMsg__destroy(rosbot_msgs__msg__GripMsg * msg);

/// Check for msg/GripMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__GripMsg__are_equal(const rosbot_msgs__msg__GripMsg * lhs, const rosbot_msgs__msg__GripMsg * rhs);

/// Copy a msg/GripMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__GripMsg__copy(
  const rosbot_msgs__msg__GripMsg * input,
  rosbot_msgs__msg__GripMsg * output);

/// Initialize array of msg/GripMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbot_msgs__msg__GripMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__GripMsg__Sequence__init(rosbot_msgs__msg__GripMsg__Sequence * array, size_t size);

/// Finalize array of msg/GripMsg messages.
/**
 * It calls
 * rosbot_msgs__msg__GripMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
void
rosbot_msgs__msg__GripMsg__Sequence__fini(rosbot_msgs__msg__GripMsg__Sequence * array);

/// Create array of msg/GripMsg messages.
/**
 * It allocates the memory for the array and calls
 * rosbot_msgs__msg__GripMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
rosbot_msgs__msg__GripMsg__Sequence *
rosbot_msgs__msg__GripMsg__Sequence__create(size_t size);

/// Destroy array of msg/GripMsg messages.
/**
 * It calls
 * rosbot_msgs__msg__GripMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
void
rosbot_msgs__msg__GripMsg__Sequence__destroy(rosbot_msgs__msg__GripMsg__Sequence * array);

/// Check for msg/GripMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__GripMsg__Sequence__are_equal(const rosbot_msgs__msg__GripMsg__Sequence * lhs, const rosbot_msgs__msg__GripMsg__Sequence * rhs);

/// Copy an array of msg/GripMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__GripMsg__Sequence__copy(
  const rosbot_msgs__msg__GripMsg__Sequence * input,
  rosbot_msgs__msg__GripMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSBOT_MSGS__MSG__DETAIL__GRIP_MSG__FUNCTIONS_H_
