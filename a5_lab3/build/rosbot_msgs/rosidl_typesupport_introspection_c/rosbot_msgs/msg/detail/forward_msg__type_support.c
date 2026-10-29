// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosbot_msgs:msg/ForwardMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosbot_msgs/msg/detail/forward_msg__rosidl_typesupport_introspection_c.h"
#include "rosbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosbot_msgs/msg/detail/forward_msg__functions.h"
#include "rosbot_msgs/msg/detail/forward_msg__struct.h"


// Include directives for member types
// Member `pulse_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosbot_msgs__msg__ForwardMsg__init(message_memory);
}

void rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_fini_function(void * message_memory)
{
  rosbot_msgs__msg__ForwardMsg__fini(message_memory);
}

size_t rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__size_function__ForwardMsg__pulse_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__get_const_function__ForwardMsg__pulse_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__get_function__ForwardMsg__pulse_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__fetch_function__ForwardMsg__pulse_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__get_const_function__ForwardMsg__pulse_array(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__assign_function__ForwardMsg__pulse_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__get_function__ForwardMsg__pulse_array(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__resize_function__ForwardMsg__pulse_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_message_member_array[1] = {
  {
    "pulse_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosbot_msgs__msg__ForwardMsg, pulse_array),  // bytes offset in struct
    NULL,  // default value
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__size_function__ForwardMsg__pulse_array,  // size() function pointer
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__get_const_function__ForwardMsg__pulse_array,  // get_const(index) function pointer
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__get_function__ForwardMsg__pulse_array,  // get(index) function pointer
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__fetch_function__ForwardMsg__pulse_array,  // fetch(index, &value) function pointer
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__assign_function__ForwardMsg__pulse_array,  // assign(index, value) function pointer
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__resize_function__ForwardMsg__pulse_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_message_members = {
  "rosbot_msgs__msg",  // message namespace
  "ForwardMsg",  // message name
  1,  // number of fields
  sizeof(rosbot_msgs__msg__ForwardMsg),
  rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_message_member_array,  // message members
  rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_message_type_support_handle = {
  0,
  &rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosbot_msgs, msg, ForwardMsg)() {
  if (!rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_message_type_support_handle.typesupport_identifier) {
    rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rosbot_msgs__msg__ForwardMsg__rosidl_typesupport_introspection_c__ForwardMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
