// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/ObsLaser.idl
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
#include "base_interfaces_demo/msg/detail/obs_laser__struct.h"
#include "base_interfaces_demo/msg/detail/obs_laser__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__obs_laser__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("base_interfaces_demo.msg._obs_laser.ObsLaser", full_classname_dest, 44) == 0);
  }
  base_interfaces_demo__msg__ObsLaser * ros_message = _ros_message;
  {  // son1
    PyObject * field = PyObject_GetAttrString(_pymsg, "son1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->son1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mom1
    PyObject * field = PyObject_GetAttrString(_pymsg, "mom1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mom1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // scout1
    PyObject * field = PyObject_GetAttrString(_pymsg, "scout1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scout1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // son2
    PyObject * field = PyObject_GetAttrString(_pymsg, "son2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->son2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mom2
    PyObject * field = PyObject_GetAttrString(_pymsg, "mom2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mom2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // scout2
    PyObject * field = PyObject_GetAttrString(_pymsg, "scout2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scout2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__obs_laser__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObsLaser */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._obs_laser");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObsLaser");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__ObsLaser * ros_message = (base_interfaces_demo__msg__ObsLaser *)raw_ros_message;
  {  // son1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->son1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "son1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mom1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mom1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mom1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scout1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->scout1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scout1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // son2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->son2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "son2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mom2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->mom2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mom2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scout2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->scout2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scout2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
