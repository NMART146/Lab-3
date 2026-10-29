// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosbot_msgs:msg/ForwardMsg.idl
// generated code does not contain a copyright notice

#ifndef ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__FUNCTIONS_H_
#define ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosbot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosbot_msgs/msg/detail/forward_msg__struct.h"

/// Initialize msg/ForwardMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosbot_msgs__msg__ForwardMsg
 * )) before or use
 * rosbot_msgs__msg__ForwardMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__ForwardMsg__init(rosbot_msgs__msg__ForwardMsg * msg);

/// Finalize msg/ForwardMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
void
rosbot_msgs__msg__ForwardMsg__fini(rosbot_msgs__msg__ForwardMsg * msg);

/// Create msg/ForwardMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosbot_msgs__msg__ForwardMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
rosbot_msgs__msg__ForwardMsg *
rosbot_msgs__msg__ForwardMsg__create();

/// Destroy msg/ForwardMsg message.
/**
 * It calls
 * rosbot_msgs__msg__ForwardMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
void
rosbot_msgs__msg__ForwardMsg__destroy(rosbot_msgs__msg__ForwardMsg * msg);

/// Check for msg/ForwardMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__ForwardMsg__are_equal(const rosbot_msgs__msg__ForwardMsg * lhs, const rosbot_msgs__msg__ForwardMsg * rhs);

/// Copy a msg/ForwardMsg message.
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
rosbot_msgs__msg__ForwardMsg__copy(
  const rosbot_msgs__msg__ForwardMsg * input,
  rosbot_msgs__msg__ForwardMsg * output);

/// Initialize array of msg/ForwardMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosbot_msgs__msg__ForwardMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__ForwardMsg__Sequence__init(rosbot_msgs__msg__ForwardMsg__Sequence * array, size_t size);

/// Finalize array of msg/ForwardMsg messages.
/**
 * It calls
 * rosbot_msgs__msg__ForwardMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
void
rosbot_msgs__msg__ForwardMsg__Sequence__fini(rosbot_msgs__msg__ForwardMsg__Sequence * array);

/// Create array of msg/ForwardMsg messages.
/**
 * It allocates the memory for the array and calls
 * rosbot_msgs__msg__ForwardMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
rosbot_msgs__msg__ForwardMsg__Sequence *
rosbot_msgs__msg__ForwardMsg__Sequence__create(size_t size);

/// Destroy array of msg/ForwardMsg messages.
/**
 * It calls
 * rosbot_msgs__msg__ForwardMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
void
rosbot_msgs__msg__ForwardMsg__Sequence__destroy(rosbot_msgs__msg__ForwardMsg__Sequence * array);

/// Check for msg/ForwardMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosbot_msgs
bool
rosbot_msgs__msg__ForwardMsg__Sequence__are_equal(const rosbot_msgs__msg__ForwardMsg__Sequence * lhs, const rosbot_msgs__msg__ForwardMsg__Sequence * rhs);

/// Copy an array of msg/ForwardMsg messages.
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
rosbot_msgs__msg__ForwardMsg__Sequence__copy(
  const rosbot_msgs__msg__ForwardMsg__Sequence * input,
  rosbot_msgs__msg__ForwardMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROSBOT_MSGS__MSG__DETAIL__FORWARD_MSG__FUNCTIONS_H_
