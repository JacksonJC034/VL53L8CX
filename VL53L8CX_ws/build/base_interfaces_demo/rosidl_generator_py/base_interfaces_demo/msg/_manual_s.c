// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/Manual.idl
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
#include "base_interfaces_demo/msg/detail/manual__struct.h"
#include "base_interfaces_demo/msg/detail/manual__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__manual__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("base_interfaces_demo.msg._manual.Manual", full_classname_dest, 39) == 0);
  }
  base_interfaces_demo__msg__Manual * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sender
    PyObject * field = PyObject_GetAttrString(_pymsg, "sender");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sender = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // iparameter
    PyObject * field = PyObject_GetAttrString(_pymsg, "iparameter");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT32);
      Py_ssize_t size = 16;
      int32_t * dest = ros_message->iparameter;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // isize
    PyObject * field = PyObject_GetAttrString(_pymsg, "isize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->isize = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fparameter
    PyObject * field = PyObject_GetAttrString(_pymsg, "fparameter");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 16;
      float * dest = ros_message->fparameter;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // fsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "fsize");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fsize = (float)PyFloat_AS_DOUBLE(field);
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
PyObject * base_interfaces_demo__msg__manual__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Manual */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._manual");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Manual");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__Manual * ros_message = (base_interfaces_demo__msg__Manual *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sender
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sender);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sender", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iparameter
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "iparameter");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->iparameter[0]);
    memcpy(dst, src, 16 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // isize
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->isize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fparameter
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "fparameter");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->fparameter[0]);
    memcpy(dst, src, 16 * sizeof(float));
    Py_DECREF(field);
  }
  {  // fsize
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fsize", field);
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
