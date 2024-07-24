// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/Location.idl
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
#include "base_interfaces_demo/msg/detail/location__struct.h"
#include "base_interfaces_demo/msg/detail/location__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__location__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("base_interfaces_demo.msg._location.Location", full_classname_dest, 43) == 0);
  }
  base_interfaces_demo__msg__Location * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = PyLong_AsLongLong(field);
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
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hall_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "hall_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hall_location = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lift_son_loc_cali
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_son_loc_cali");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lift_son_loc_cali = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lift_current_loc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_current_loc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lift_current_loc = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lift_horseshoe_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "lift_horseshoe_en");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lift_horseshoe_en = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // state_motor_or_son
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_motor_or_son");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_motor_or_son = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // state_lift_down_or_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_lift_down_or_up");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state_lift_down_or_up = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // hall_rfid_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "hall_rfid_en");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hall_rfid_en = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distancex
    PyObject * field = PyObject_GetAttrString(_pymsg, "distancex");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distancex = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distancey
    PyObject * field = PyObject_GetAttrString(_pymsg, "distancey");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distancey = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__location__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Location */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._location");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Location");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__Location * ros_message = (base_interfaces_demo__msg__Location *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
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
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hall_location
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hall_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hall_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_son_loc_cali
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lift_son_loc_cali);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_son_loc_cali", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_current_loc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lift_current_loc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_current_loc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lift_horseshoe_en
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lift_horseshoe_en);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lift_horseshoe_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_motor_or_son
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->state_motor_or_son);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_motor_or_son", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_lift_down_or_up
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->state_lift_down_or_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_lift_down_or_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hall_rfid_en
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->hall_rfid_en);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hall_rfid_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distancex
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distancex);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distancex", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distancey
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distancey);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distancey", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
