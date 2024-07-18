// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces_demo:msg/BmsInfo.idl
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
#include "base_interfaces_demo/msg/detail/bms_info__struct.h"
#include "base_interfaces_demo/msg/detail/bms_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces_demo__msg__bms_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("base_interfaces_demo.msg._bms_info.BmsInfo", full_classname_dest, 42) == 0);
  }
  base_interfaces_demo__msg__BmsInfo * ros_message = _ros_message;
  {  // cell_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "cell_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cell_num = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // run_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->run_time = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hsoc
    PyObject * field = PyObject_GetAttrString(_pymsg, "hsoc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hsoc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur_cadc
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_cadc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_cadc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 6;
      double * dest = ros_message->temp;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // temp1
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp2
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp3
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp4
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp5
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp5 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temp6
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temp6 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tmax
    PyObject * field = PyObject_GetAttrString(_pymsg, "tmax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tmax = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tmin
    PyObject * field = PyObject_GetAttrString(_pymsg, "tmin");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tmin = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vmax
    PyObject * field = PyObject_GetAttrString(_pymsg, "vmax");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vmax = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vmin
    PyObject * field = PyObject_GetAttrString(_pymsg, "vmin");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vmin = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vmaxmin_no
    PyObject * field = PyObject_GetAttrString(_pymsg, "vmaxmin_no");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vmaxmin_no = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rsoc
    PyObject * field = PyObject_GetAttrString(_pymsg, "rsoc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rsoc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fcc
    PyObject * field = PyObject_GetAttrString(_pymsg, "fcc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fcc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rc
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cycle_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "cycle_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cycle_count = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // protect
    PyObject * field = PyObject_GetAttrString(_pymsg, "protect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->protect = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alarm
    PyObject * field = PyObject_GetAttrString(_pymsg, "alarm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alarm = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pack_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "pack_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pack_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vcell
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcell");
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
      assert(PyArray_TYPE(seq_field) == NPY_UINT32);
      Py_ssize_t size = 17;
      uint32_t * dest = ros_message->vcell;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint32_t tmp = *(npy_uint32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // vcell1
    PyObject * field = PyObject_GetAttrString(_pymsg, "vcell1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vcell1 = PyLong_AsUnsignedLong(field);
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
  {  // soc
    PyObject * field = PyObject_GetAttrString(_pymsg, "soc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->soc = PyLong_AsUnsignedLong(field);
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
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces_demo__msg__bms_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BmsInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces_demo.msg._bms_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BmsInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces_demo__msg__BmsInfo * ros_message = (base_interfaces_demo__msg__BmsInfo *)raw_ros_message;
  {  // cell_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cell_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cell_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->run_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hsoc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hsoc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hsoc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_cadc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_cadc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_cadc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "temp");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->temp[0]);
    memcpy(dst, src, 6 * sizeof(double));
    Py_DECREF(field);
  }
  {  // temp1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->temp6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tmax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tmax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tmax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tmin
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tmin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tmin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vmax
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vmax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vmax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vmin
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vmin);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vmin", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vmaxmin_no
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vmaxmin_no);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vmaxmin_no", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rsoc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rsoc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rsoc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fcc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fcc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fcc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cycle_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cycle_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cycle_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // protect
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->protect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "protect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alarm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alarm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alarm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pack_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pack_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pack_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vcell
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "vcell");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT32);
    assert(sizeof(npy_uint32) == sizeof(uint32_t));
    npy_uint32 * dst = (npy_uint32 *)PyArray_GETPTR1(seq_field, 0);
    uint32_t * src = &(ros_message->vcell[0]);
    memcpy(dst, src, 17 * sizeof(uint32_t));
    Py_DECREF(field);
  }
  {  // vcell1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vcell1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vcell1", field);
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
  {  // soc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->soc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "soc", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
