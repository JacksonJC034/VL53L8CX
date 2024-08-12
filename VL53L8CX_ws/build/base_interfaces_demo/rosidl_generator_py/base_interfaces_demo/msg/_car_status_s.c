// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/CarStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfaces_demo/msg/detail/car_status__struct.h"
#include "base_interfaces_demo/msg/detail/car_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__car_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("base_interfaces_demo.msg._car_status.CarStatus", full_classname_dest, 46) == 0);
  }
  base_interfaces_demo__msg__CarStatus * ros_message = _ros_message;
  {  // task_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // initializing
    PyObject * field = PyObject_GetAttrString(_pymsg, "initializing");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->initializing = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // checking
    PyObject * field = PyObject_GetAttrString(_pymsg, "checking");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->checking = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // releasing
    PyObject * field = PyObject_GetAttrString(_pymsg, "releasing");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->releasing = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // driving
    PyObject * field = PyObject_GetAttrString(_pymsg, "driving");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->driving = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fine_positioning
    PyObject * field = PyObject_GetAttrString(_pymsg, "fine_positioning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fine_positioning = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // on_tag
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_tag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->on_tag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // on_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_track");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->on_track = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->warning = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // estop
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->estop = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sleeping
    PyObject * field = PyObject_GetAttrString(_pymsg, "sleeping");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sleeping = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // load
    PyObject * field = PyObject_GetAttrString(_pymsg, "load");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->load = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charging = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stand_alone_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "stand_alone_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stand_alone_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__car_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CarStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._car_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CarStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__CarStatus * ros_message = (base_interfaces_demo__msg__CarStatus *)raw_ros_message;
  {  // task_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->task_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initializing
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->initializing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initializing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // checking
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->checking);
    {
      int rc = PyObject_SetAttrString(_pymessage, "checking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // releasing
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->releasing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "releasing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driving
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->driving);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fine_positioning
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fine_positioning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fine_positioning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_tag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->on_tag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_tag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_track
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->on_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // warning
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->estop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sleeping
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sleeping);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sleeping", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // load
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->charging);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stand_alone_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stand_alone_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stand_alone_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
