// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__SystemStatus__init(base_interfaces_demo__msg__SystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // system_mode
  // work_status
  // init_status
  return true;
}

void
base_interfaces_demo__msg__SystemStatus__fini(base_interfaces_demo__msg__SystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // system_mode
  // work_status
  // init_status
}

bool
base_interfaces_demo__msg__SystemStatus__are_equal(const base_interfaces_demo__msg__SystemStatus * lhs, const base_interfaces_demo__msg__SystemStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // system_mode
  if (lhs->system_mode != rhs->system_mode) {
    return false;
  }
  // work_status
  if (lhs->work_status != rhs->work_status) {
    return false;
  }
  // init_status
  if (lhs->init_status != rhs->init_status) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__SystemStatus__copy(
  const base_interfaces_demo__msg__SystemStatus * input,
  base_interfaces_demo__msg__SystemStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // system_mode
  output->system_mode = input->system_mode;
  // work_status
  output->work_status = input->work_status;
  // init_status
  output->init_status = input->init_status;
  return true;
}

base_interfaces_demo__msg__SystemStatus *
base_interfaces_demo__msg__SystemStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__SystemStatus * msg = (base_interfaces_demo__msg__SystemStatus *)allocator.allocate(sizeof(base_interfaces_demo__msg__SystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__SystemStatus));
  bool success = base_interfaces_demo__msg__SystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__SystemStatus__destroy(base_interfaces_demo__msg__SystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__SystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__SystemStatus__Sequence__init(base_interfaces_demo__msg__SystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__SystemStatus * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__SystemStatus *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__SystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__SystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__SystemStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_interfaces_demo__msg__SystemStatus__Sequence__fini(base_interfaces_demo__msg__SystemStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_interfaces_demo__msg__SystemStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_interfaces_demo__msg__SystemStatus__Sequence *
base_interfaces_demo__msg__SystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__SystemStatus__Sequence * array = (base_interfaces_demo__msg__SystemStatus__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__SystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__SystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__SystemStatus__Sequence__destroy(base_interfaces_demo__msg__SystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__SystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__SystemStatus__Sequence__are_equal(const base_interfaces_demo__msg__SystemStatus__Sequence * lhs, const base_interfaces_demo__msg__SystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__SystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__SystemStatus__Sequence__copy(
  const base_interfaces_demo__msg__SystemStatus__Sequence * input,
  base_interfaces_demo__msg__SystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__SystemStatus);
    base_interfaces_demo__msg__SystemStatus * data =
      (base_interfaces_demo__msg__SystemStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__SystemStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__SystemStatus__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_interfaces_demo__msg__SystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
