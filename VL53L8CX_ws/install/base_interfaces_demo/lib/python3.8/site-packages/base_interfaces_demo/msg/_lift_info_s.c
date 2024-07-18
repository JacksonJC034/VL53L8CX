// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/LiftInfo.idl
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
#include "base_interfaces_demo/msg/detail/lift_info__struct.h"
#include "base_interfaces_demo/msg/detail/lift_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__lift_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("base_interfaces_demo.msg._lift_info.LiftInfo", full_classname_dest, 44) == 0);
  }
  base_interfaces_demo__msg__LiftInfo * ros_message = _ros_message;
  {  // lift_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lift_location = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lift_base_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_base_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lift_base_location = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__lift_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LiftInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._lift_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LiftInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__LiftInfo * ros_message = (base_interfaces_demo__msg__LiftInfo *)raw_ros_message;
  {  // lift_location
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lift_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_base_location
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lift_base_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_base_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
