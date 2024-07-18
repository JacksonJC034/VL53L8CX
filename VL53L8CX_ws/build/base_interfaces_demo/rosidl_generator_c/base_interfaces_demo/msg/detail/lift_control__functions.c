// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/LiftControl.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/lift_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__LiftControl__init(base_interfaces_demo__msg__LiftControl * msg)
{
  if (!msg) {
    return false;
  }
  // error
  // status
  // lift_times
  // convert_times
  return true;
}

void
base_interfaces_demo__msg__LiftControl__fini(base_interfaces_demo__msg__LiftControl * msg)
{
  if (!msg) {
    return;
  }
  // error
  // status
  // lift_times
  // convert_times
}

bool
base_interfaces_demo__msg__LiftControl__are_equal(const base_interfaces_demo__msg__LiftControl * lhs, const base_interfaces_demo__msg__LiftControl * rhs)
{
  if (!lhs || !rhs) {
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
  // lift_times
  if (lhs->lift_times != rhs->lift_times) {
    return false;
  }
  // convert_times
  if (lhs->convert_times != rhs->convert_times) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__LiftControl__copy(
  const base_interfaces_demo__msg__LiftControl * input,
  base_interfaces_demo__msg__LiftControl * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  output->error = input->error;
  // status
  output->status = input->status;
  // lift_times
  output->lift_times = input->lift_times;
  // convert_times
  output->convert_times = input->convert_times;
  return true;
}

base_interfaces_demo__msg__LiftControl *
base_interfaces_demo__msg__LiftControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__LiftControl * msg = (base_interfaces_demo__msg__LiftControl *)allocator.allocate(sizeof(base_interfaces_demo__msg__LiftControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__LiftControl));
  bool success = base_interfaces_demo__msg__LiftControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__LiftControl__destroy(base_interfaces_demo__msg__LiftControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__LiftControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__LiftControl__Sequence__init(base_interfaces_demo__msg__LiftControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__LiftControl * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__LiftControl *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__LiftControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__LiftControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__LiftControl__fini(&data[i - 1]);
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
base_interfaces_demo__msg__LiftControl__Sequence__fini(base_interfaces_demo__msg__LiftControl__Sequence * array)
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
      base_interfaces_demo__msg__LiftControl__fini(&array->data[i]);
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

base_interfaces_demo__msg__LiftControl__Sequence *
base_interfaces_demo__msg__LiftControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__LiftControl__Sequence * array = (base_interfaces_demo__msg__LiftControl__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__LiftControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__LiftControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__LiftControl__Sequence__destroy(base_interfaces_demo__msg__LiftControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__LiftControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__LiftControl__Sequence__are_equal(const base_interfaces_demo__msg__LiftControl__Sequence * lhs, const base_interfaces_demo__msg__LiftControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__LiftControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__LiftControl__Sequence__copy(
  const base_interfaces_demo__msg__LiftControl__Sequence * input,
  base_interfaces_demo__msg__LiftControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__LiftControl);
    base_interfaces_demo__msg__LiftControl * data =
      (base_interfaces_demo__msg__LiftControl *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__LiftControl__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__LiftControl__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__LiftControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
