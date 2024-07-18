// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/HallInfo.idl
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
#include "base_interfaces_demo/msg/detail/hall_info__struct.h"
#include "base_interfaces_demo/msg/detail/hall_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__hall_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("base_interfaces_demo.msg._hall_info.HallInfo", full_classname_dest, 44) == 0);
  }
  base_interfaces_demo__msg__HallInfo * ros_message = _ros_message;
  {  // uid7
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uid7 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uid6
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uid6 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uid5
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uid5 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uid4
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uid4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uid3
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uid3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uid2
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uid2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uid1
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uid1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uid0
    PyObject * field = PyObject_GetAttrString(_pymsg, "uid0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uid0 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // f1
    PyObject * field = PyObject_GetAttrString(_pymsg, "f1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f2
    PyObject * field = PyObject_GetAttrString(_pymsg, "f2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f3
    PyObject * field = PyObject_GetAttrString(_pymsg, "f3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f4
    PyObject * field = PyObject_GetAttrString(_pymsg, "f4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b1
    PyObject * field = PyObject_GetAttrString(_pymsg, "b1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b2
    PyObject * field = PyObject_GetAttrString(_pymsg, "b2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b3
    PyObject * field = PyObject_GetAttrString(_pymsg, "b3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b4
    PyObject * field = PyObject_GetAttrString(_pymsg, "b4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // l1
    PyObject * field = PyObject_GetAttrString(_pymsg, "l1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->l1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // l2
    PyObject * field = PyObject_GetAttrString(_pymsg, "l2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->l2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // l3
    PyObject * field = PyObject_GetAttrString(_pymsg, "l3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->l3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // l4
    PyObject * field = PyObject_GetAttrString(_pymsg, "l4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->l4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r1
    PyObject * field = PyObject_GetAttrString(_pymsg, "r1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r2
    PyObject * field = PyObject_GetAttrString(_pymsg, "r2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r3
    PyObject * field = PyObject_GetAttrString(_pymsg, "r3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r4
    PyObject * field = PyObject_GetAttrString(_pymsg, "r4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__hall_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HallInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._hall_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HallInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__HallInfo * ros_message = (base_interfaces_demo__msg__HallInfo *)raw_ros_message;
  {  // uid7
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uid7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uid6
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uid6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uid5
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uid5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uid4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uid4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uid3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uid3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uid2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uid2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uid1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uid1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uid0
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uid0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uid0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->l1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->l2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->l3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // l4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->l4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "l4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
