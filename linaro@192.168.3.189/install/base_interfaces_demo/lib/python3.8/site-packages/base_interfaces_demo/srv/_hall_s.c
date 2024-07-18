// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:srv/Hall.idl
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
#include "base_interfaces_demo/srv/detail/hall__struct.h"
#include "base_interfaces_demo/srv/detail/hall__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__srv__hall__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("base_interfaces_demo.srv._hall.Hall_Request", full_classname_dest, 43) == 0);
  }
  base_interfaces_demo__srv__Hall_Request * ros_message = _ros_message;
  {  // cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cmd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__srv__hall__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Hall_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.srv._hall");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Hall_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__srv__Hall_Request * ros_message = (base_interfaces_demo__srv__Hall_Request *)raw_ros_message;
  {  // cmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfaces_demo/srv/detail/hall__struct.h"
// already included above
// #include "base_interfaces_demo/srv/detail/hall__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__srv__hall__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("base_interfaces_demo.srv._hall.Hall_Response", full_classname_dest, 44) == 0);
  }
  base_interfaces_demo__srv__Hall_Response * ros_message = _ros_message;
  {  // ret
    PyObject * field = PyObject_GetAttrString(_pymsg, "ret");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ret = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // para
    PyObject * field = PyObject_GetAttrString(_pymsg, "para");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->para = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // para2
    PyObject * field = PyObject_GetAttrString(_pymsg, "para2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->para2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__srv__hall__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Hall_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.srv._hall");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Hall_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__srv__Hall_Response * ros_message = (base_interfaces_demo__srv__Hall_Response *)raw_ros_message;
  {  // ret
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ret);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ret", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // para
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->para);
    {
      int rc = PyObject_SetAttrString(_pymessage, "para", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // para2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->para2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "para2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
