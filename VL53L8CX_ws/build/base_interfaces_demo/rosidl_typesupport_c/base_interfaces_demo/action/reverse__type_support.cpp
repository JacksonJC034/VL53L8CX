// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from base_interfaces_demo:action/Reverse.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
#include "base_interfaces_demo/action/detail/reverse__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_Goal_type_support_ids_t;

static const _Reverse_Goal_type_support_ids_t _Reverse_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_Goal_type_support_symbol_names_t _Reverse_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_Goal)),
  }
};

typedef struct _Reverse_Goal_type_support_data_t
{
  void * data[2];
} _Reverse_Goal_type_support_data_t;

static _Reverse_Goal_type_support_data_t _Reverse_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_Goal_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Reverse_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Reverse_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reverse_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_Goal)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_Result_type_support_ids_t;

static const _Reverse_Result_type_support_ids_t _Reverse_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_Result_type_support_symbol_names_t _Reverse_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_Result)),
  }
};

typedef struct _Reverse_Result_type_support_data_t
{
  void * data[2];
} _Reverse_Result_type_support_data_t;

static _Reverse_Result_type_support_data_t _Reverse_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_Result_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Reverse_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Reverse_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reverse_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_Result)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_Feedback_type_support_ids_t;

static const _Reverse_Feedback_type_support_ids_t _Reverse_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_Feedback_type_support_symbol_names_t _Reverse_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_Feedback)),
  }
};

typedef struct _Reverse_Feedback_type_support_data_t
{
  void * data[2];
} _Reverse_Feedback_type_support_data_t;

static _Reverse_Feedback_type_support_data_t _Reverse_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_Feedback_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Reverse_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Reverse_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reverse_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_Feedback)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_SendGoal_Request_type_support_ids_t;

static const _Reverse_SendGoal_Request_type_support_ids_t _Reverse_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_SendGoal_Request_type_support_symbol_names_t _Reverse_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_SendGoal_Request)),
  }
};

typedef struct _Reverse_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Reverse_SendGoal_Request_type_support_data_t;

static _Reverse_SendGoal_Request_type_support_data_t _Reverse_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_SendGoal_Request_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Reverse_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Reverse_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reverse_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_SendGoal_Request)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_SendGoal_Response_type_support_ids_t;

static const _Reverse_SendGoal_Response_type_support_ids_t _Reverse_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_SendGoal_Response_type_support_symbol_names_t _Reverse_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_SendGoal_Response)),
  }
};

typedef struct _Reverse_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Reverse_SendGoal_Response_type_support_data_t;

static _Reverse_SendGoal_Response_type_support_data_t _Reverse_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_SendGoal_Response_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Reverse_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Reverse_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reverse_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_SendGoal_Response)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_SendGoal_type_support_ids_t;

static const _Reverse_SendGoal_type_support_ids_t _Reverse_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_SendGoal_type_support_symbol_names_t _Reverse_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_SendGoal)),
  }
};

typedef struct _Reverse_SendGoal_type_support_data_t
{
  void * data[2];
} _Reverse_SendGoal_type_support_data_t;

static _Reverse_SendGoal_type_support_data_t _Reverse_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_SendGoal_service_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Reverse_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Reverse_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Reverse_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_SendGoal)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_GetResult_Request_type_support_ids_t;

static const _Reverse_GetResult_Request_type_support_ids_t _Reverse_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_GetResult_Request_type_support_symbol_names_t _Reverse_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_GetResult_Request)),
  }
};

typedef struct _Reverse_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Reverse_GetResult_Request_type_support_data_t;

static _Reverse_GetResult_Request_type_support_data_t _Reverse_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_GetResult_Request_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Reverse_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Reverse_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reverse_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_GetResult_Request)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_GetResult_Response_type_support_ids_t;

static const _Reverse_GetResult_Response_type_support_ids_t _Reverse_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_GetResult_Response_type_support_symbol_names_t _Reverse_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_GetResult_Response)),
  }
};

typedef struct _Reverse_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Reverse_GetResult_Response_type_support_data_t;

static _Reverse_GetResult_Response_type_support_data_t _Reverse_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_GetResult_Response_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Reverse_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Reverse_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reverse_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_GetResult_Response)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_GetResult_type_support_ids_t;

static const _Reverse_GetResult_type_support_ids_t _Reverse_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_GetResult_type_support_symbol_names_t _Reverse_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_GetResult)),
  }
};

typedef struct _Reverse_GetResult_type_support_data_t
{
  void * data[2];
} _Reverse_GetResult_type_support_data_t;

static _Reverse_GetResult_type_support_data_t _Reverse_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_GetResult_service_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Reverse_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Reverse_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Reverse_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_GetResult)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "base_interfaces_demo/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "base_interfaces_demo/action/detail/reverse__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace base_interfaces_demo
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Reverse_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Reverse_FeedbackMessage_type_support_ids_t;

static const _Reverse_FeedbackMessage_type_support_ids_t _Reverse_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Reverse_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Reverse_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Reverse_FeedbackMessage_type_support_symbol_names_t _Reverse_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, base_interfaces_demo, action, Reverse_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, base_interfaces_demo, action, Reverse_FeedbackMessage)),
  }
};

typedef struct _Reverse_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Reverse_FeedbackMessage_type_support_data_t;

static _Reverse_FeedbackMessage_type_support_data_t _Reverse_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Reverse_FeedbackMessage_message_typesupport_map = {
  2,
  "base_interfaces_demo",
  &_Reverse_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Reverse_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Reverse_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Reverse_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Reverse_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace base_interfaces_demo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, base_interfaces_demo, action, Reverse_FeedbackMessage)() {
  return &::base_interfaces_demo::action::rosidl_typesupport_c::Reverse_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "base_interfaces_demo/action/reverse.h"
#include "base_interfaces_demo/action/detail/reverse__type_support.h"

static rosidl_action_type_support_t _base_interfaces_demo__action__Reverse__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_base_interfaces_demo
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, base_interfaces_demo, action, Reverse)()
{
  // Thread-safe by always writing the same values to the static struct
  _base_interfaces_demo__action__Reverse__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, base_interfaces_demo, action, Reverse_SendGoal)();
  _base_interfaces_demo__action__Reverse__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, base_interfaces_demo, action, Reverse_GetResult)();
  _base_interfaces_demo__action__Reverse__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _base_interfaces_demo__action__Reverse__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, base_interfaces_demo, action, Reverse_FeedbackMessage)();
  _base_interfaces_demo__action__Reverse__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_base_interfaces_demo__action__Reverse__typesupport_c;
}

#ifdef __cplusplus
}
#endif
