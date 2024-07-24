// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from base_interfaces_demo:action/Pallet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "base_interfaces_demo/action/detail/pallet__functions.h"
#include "base_interfaces_demo/action/detail/pallet__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Pallet_Goal__init(message_memory);
}

void Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Pallet_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_message_member_array[1] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_Goal, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Pallet_Goal",  // message name
  1,  // number of fields
  sizeof(base_interfaces_demo__action__Pallet_Goal),
  Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_message_member_array,  // message members
  Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_message_type_support_handle = {
  0,
  &Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_Goal)() {
  if (!Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_message_type_support_handle.typesupport_identifier) {
    Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pallet_Goal__rosidl_typesupport_introspection_c__Pallet_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Pallet_Result__init(message_memory);
}

void Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Pallet_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_message_member_array[3] = {
  {
    "pallet",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_Result, pallet),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_Result, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_Result, drift),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Pallet_Result",  // message name
  3,  // number of fields
  sizeof(base_interfaces_demo__action__Pallet_Result),
  Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_message_member_array,  // message members
  Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_message_type_support_handle = {
  0,
  &Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_Result)() {
  if (!Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_message_type_support_handle.typesupport_identifier) {
    Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pallet_Result__rosidl_typesupport_introspection_c__Pallet_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Pallet_Feedback__init(message_memory);
}

void Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Pallet_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_message_member_array[3] = {
  {
    "pallet",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_Feedback, pallet),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_Feedback, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drift",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_Feedback, drift),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Pallet_Feedback",  // message name
  3,  // number of fields
  sizeof(base_interfaces_demo__action__Pallet_Feedback),
  Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_message_member_array,  // message members
  Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_message_type_support_handle = {
  0,
  &Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_Feedback)() {
  if (!Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_message_type_support_handle.typesupport_identifier) {
    Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pallet_Feedback__rosidl_typesupport_introspection_c__Pallet_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "base_interfaces_demo/action/pallet.h"
// Member `goal`
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Pallet_SendGoal_Request__init(message_memory);
}

void Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Pallet_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Pallet_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__action__Pallet_SendGoal_Request),
  Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_member_array,  // message members
  Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_type_support_handle = {
  0,
  &Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_SendGoal_Request)() {
  Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_Goal)();
  if (!Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pallet_SendGoal_Request__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Pallet_SendGoal_Response__init(message_memory);
}

void Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Pallet_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Pallet_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__action__Pallet_SendGoal_Response),
  Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_member_array,  // message members
  Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_type_support_handle = {
  0,
  &Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_SendGoal_Response)() {
  Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pallet_SendGoal_Response__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_service_members = {
  "base_interfaces_demo__action",  // service namespace
  "Pallet_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_service_type_support_handle = {
  0,
  &base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_SendGoal)() {
  if (!base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_service_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_SendGoal_Response)()->data;
  }

  return &base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Pallet_GetResult_Request__init(message_memory);
}

void Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Pallet_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Pallet_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(base_interfaces_demo__action__Pallet_GetResult_Request),
  Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_member_array,  // message members
  Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_type_support_handle = {
  0,
  &Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_GetResult_Request)() {
  Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pallet_GetResult_Request__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "base_interfaces_demo/action/pallet.h"
// Member `result`
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Pallet_GetResult_Response__init(message_memory);
}

void Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Pallet_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Pallet_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__action__Pallet_GetResult_Response),
  Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_member_array,  // message members
  Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_type_support_handle = {
  0,
  &Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_GetResult_Response)() {
  Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_Result)();
  if (!Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pallet_GetResult_Response__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_service_members = {
  "base_interfaces_demo__action",  // service namespace
  "Pallet_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_service_type_support_handle = {
  0,
  &base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_GetResult)() {
  if (!base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_service_type_support_handle.typesupport_identifier) {
    base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_GetResult_Response)()->data;
  }

  return &base_interfaces_demo__action__detail__pallet__rosidl_typesupport_introspection_c__Pallet_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__functions.h"
// already included above
// #include "base_interfaces_demo/action/detail/pallet__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "base_interfaces_demo/action/pallet.h"
// Member `feedback`
// already included above
// #include "base_interfaces_demo/action/detail/pallet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  base_interfaces_demo__action__Pallet_FeedbackMessage__init(message_memory);
}

void Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_fini_function(void * message_memory)
{
  base_interfaces_demo__action__Pallet_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(base_interfaces_demo__action__Pallet_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_members = {
  "base_interfaces_demo__action",  // message namespace
  "Pallet_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(base_interfaces_demo__action__Pallet_FeedbackMessage),
  Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_member_array,  // message members
  Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_type_support_handle = {
  0,
  &Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_FeedbackMessage)() {
  Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Pallet_Feedback)();
  if (!Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pallet_FeedbackMessage__rosidl_typesupport_introspection_c__Pallet_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
