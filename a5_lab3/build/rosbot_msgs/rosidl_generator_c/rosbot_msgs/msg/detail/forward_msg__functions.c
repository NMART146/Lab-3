// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosbot_msgs:msg/ForwardMsg.idl
// generated code does not contain a copyright notice
#include "rosbot_msgs/msg/detail/forward_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pulse_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rosbot_msgs__msg__ForwardMsg__init(rosbot_msgs__msg__ForwardMsg * msg)
{
  if (!msg) {
    return false;
  }
  // pulse_array
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->pulse_array, 0)) {
    rosbot_msgs__msg__ForwardMsg__fini(msg);
    return false;
  }
  return true;
}

void
rosbot_msgs__msg__ForwardMsg__fini(rosbot_msgs__msg__ForwardMsg * msg)
{
  if (!msg) {
    return;
  }
  // pulse_array
  rosidl_runtime_c__int64__Sequence__fini(&msg->pulse_array);
}

bool
rosbot_msgs__msg__ForwardMsg__are_equal(const rosbot_msgs__msg__ForwardMsg * lhs, const rosbot_msgs__msg__ForwardMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pulse_array
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->pulse_array), &(rhs->pulse_array)))
  {
    return false;
  }
  return true;
}

bool
rosbot_msgs__msg__ForwardMsg__copy(
  const rosbot_msgs__msg__ForwardMsg * input,
  rosbot_msgs__msg__ForwardMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // pulse_array
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->pulse_array), &(output->pulse_array)))
  {
    return false;
  }
  return true;
}

rosbot_msgs__msg__ForwardMsg *
rosbot_msgs__msg__ForwardMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbot_msgs__msg__ForwardMsg * msg = (rosbot_msgs__msg__ForwardMsg *)allocator.allocate(sizeof(rosbot_msgs__msg__ForwardMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosbot_msgs__msg__ForwardMsg));
  bool success = rosbot_msgs__msg__ForwardMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosbot_msgs__msg__ForwardMsg__destroy(rosbot_msgs__msg__ForwardMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosbot_msgs__msg__ForwardMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosbot_msgs__msg__ForwardMsg__Sequence__init(rosbot_msgs__msg__ForwardMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbot_msgs__msg__ForwardMsg * data = NULL;

  if (size) {
    data = (rosbot_msgs__msg__ForwardMsg *)allocator.zero_allocate(size, sizeof(rosbot_msgs__msg__ForwardMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosbot_msgs__msg__ForwardMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosbot_msgs__msg__ForwardMsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rosbot_msgs__msg__ForwardMsg__Sequence__fini(rosbot_msgs__msg__ForwardMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosbot_msgs__msg__ForwardMsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rosbot_msgs__msg__ForwardMsg__Sequence *
rosbot_msgs__msg__ForwardMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosbot_msgs__msg__ForwardMsg__Sequence * array = (rosbot_msgs__msg__ForwardMsg__Sequence *)allocator.allocate(sizeof(rosbot_msgs__msg__ForwardMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosbot_msgs__msg__ForwardMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosbot_msgs__msg__ForwardMsg__Sequence__destroy(rosbot_msgs__msg__ForwardMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosbot_msgs__msg__ForwardMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosbot_msgs__msg__ForwardMsg__Sequence__are_equal(const rosbot_msgs__msg__ForwardMsg__Sequence * lhs, const rosbot_msgs__msg__ForwardMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosbot_msgs__msg__ForwardMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosbot_msgs__msg__ForwardMsg__Sequence__copy(
  const rosbot_msgs__msg__ForwardMsg__Sequence * input,
  rosbot_msgs__msg__ForwardMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosbot_msgs__msg__ForwardMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosbot_msgs__msg__ForwardMsg * data =
      (rosbot_msgs__msg__ForwardMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosbot_msgs__msg__ForwardMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosbot_msgs__msg__ForwardMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosbot_msgs__msg__ForwardMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
