// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/LiftInfo.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/lift_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__LiftInfo__init(base_interfaces_demo__msg__LiftInfo * msg)
{
  if (!msg) {
    return false;
  }
  // lift_location
  // lift_base_location
  // error
  // status
  return true;
}

void
base_interfaces_demo__msg__LiftInfo__fini(base_interfaces_demo__msg__LiftInfo * msg)
{
  if (!msg) {
    return;
  }
  // lift_location
  // lift_base_location
  // error
  // status
}

bool
base_interfaces_demo__msg__LiftInfo__are_equal(const base_interfaces_demo__msg__LiftInfo * lhs, const base_interfaces_demo__msg__LiftInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lift_location
  if (lhs->lift_location != rhs->lift_location) {
    return false;
  }
  // lift_base_location
  if (lhs->lift_base_location != rhs->lift_base_location) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__LiftInfo__copy(
  const base_interfaces_demo__msg__LiftInfo * input,
  base_interfaces_demo__msg__LiftInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // lift_location
  output->lift_location = input->lift_location;
  // lift_base_location
  output->lift_base_location = input->lift_base_location;
  // error
  output->error = input->error;
  // status
  output->status = input->status;
  return true;
}

base_interfaces_demo__msg__LiftInfo *
base_interfaces_demo__msg__LiftInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__LiftInfo * msg = (base_interfaces_demo__msg__LiftInfo *)allocator.allocate(sizeof(base_interfaces_demo__msg__LiftInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__LiftInfo));
  bool success = base_interfaces_demo__msg__LiftInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__LiftInfo__destroy(base_interfaces_demo__msg__LiftInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__LiftInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__LiftInfo__Sequence__init(base_interfaces_demo__msg__LiftInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__LiftInfo * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__LiftInfo *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__LiftInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__LiftInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__LiftInfo__fini(&data[i - 1]);
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
base_interfaces_demo__msg__LiftInfo__Sequence__fini(base_interfaces_demo__msg__LiftInfo__Sequence * array)
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
      base_interfaces_demo__msg__LiftInfo__fini(&array->data[i]);
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

base_interfaces_demo__msg__LiftInfo__Sequence *
base_interfaces_demo__msg__LiftInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__LiftInfo__Sequence * array = (base_interfaces_demo__msg__LiftInfo__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__LiftInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__LiftInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__LiftInfo__Sequence__destroy(base_interfaces_demo__msg__LiftInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__LiftInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__LiftInfo__Sequence__are_equal(const base_interfaces_demo__msg__LiftInfo__Sequence * lhs, const base_interfaces_demo__msg__LiftInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__LiftInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__LiftInfo__Sequence__copy(
  const base_interfaces_demo__msg__LiftInfo__Sequence * input,
  base_interfaces_demo__msg__LiftInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__LiftInfo);
    base_interfaces_demo__msg__LiftInfo * data =
      (base_interfaces_demo__msg__LiftInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__LiftInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__LiftInfo__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__LiftInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
