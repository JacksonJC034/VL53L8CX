// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/ObsLaser.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/obs_laser__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__ObsLaser__init(base_interfaces_demo__msg__ObsLaser * msg)
{
  if (!msg) {
    return false;
  }
  // son1
  // mom1
  // scout1
  // son2
  // mom2
  // scout2
  // error_code
  // status
  return true;
}

void
base_interfaces_demo__msg__ObsLaser__fini(base_interfaces_demo__msg__ObsLaser * msg)
{
  if (!msg) {
    return;
  }
  // son1
  // mom1
  // scout1
  // son2
  // mom2
  // scout2
  // error_code
  // status
}

bool
base_interfaces_demo__msg__ObsLaser__are_equal(const base_interfaces_demo__msg__ObsLaser * lhs, const base_interfaces_demo__msg__ObsLaser * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // son1
  if (lhs->son1 != rhs->son1) {
    return false;
  }
  // mom1
  if (lhs->mom1 != rhs->mom1) {
    return false;
  }
  // scout1
  if (lhs->scout1 != rhs->scout1) {
    return false;
  }
  // son2
  if (lhs->son2 != rhs->son2) {
    return false;
  }
  // mom2
  if (lhs->mom2 != rhs->mom2) {
    return false;
  }
  // scout2
  if (lhs->scout2 != rhs->scout2) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__ObsLaser__copy(
  const base_interfaces_demo__msg__ObsLaser * input,
  base_interfaces_demo__msg__ObsLaser * output)
{
  if (!input || !output) {
    return false;
  }
  // son1
  output->son1 = input->son1;
  // mom1
  output->mom1 = input->mom1;
  // scout1
  output->scout1 = input->scout1;
  // son2
  output->son2 = input->son2;
  // mom2
  output->mom2 = input->mom2;
  // scout2
  output->scout2 = input->scout2;
  // error_code
  output->error_code = input->error_code;
  // status
  output->status = input->status;
  return true;
}

base_interfaces_demo__msg__ObsLaser *
base_interfaces_demo__msg__ObsLaser__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__ObsLaser * msg = (base_interfaces_demo__msg__ObsLaser *)allocator.allocate(sizeof(base_interfaces_demo__msg__ObsLaser), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__ObsLaser));
  bool success = base_interfaces_demo__msg__ObsLaser__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__ObsLaser__destroy(base_interfaces_demo__msg__ObsLaser * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__ObsLaser__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__ObsLaser__Sequence__init(base_interfaces_demo__msg__ObsLaser__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__ObsLaser * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__ObsLaser *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__ObsLaser), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__ObsLaser__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__ObsLaser__fini(&data[i - 1]);
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
base_interfaces_demo__msg__ObsLaser__Sequence__fini(base_interfaces_demo__msg__ObsLaser__Sequence * array)
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
      base_interfaces_demo__msg__ObsLaser__fini(&array->data[i]);
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

base_interfaces_demo__msg__ObsLaser__Sequence *
base_interfaces_demo__msg__ObsLaser__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__ObsLaser__Sequence * array = (base_interfaces_demo__msg__ObsLaser__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__ObsLaser__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__ObsLaser__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__ObsLaser__Sequence__destroy(base_interfaces_demo__msg__ObsLaser__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__ObsLaser__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__ObsLaser__Sequence__are_equal(const base_interfaces_demo__msg__ObsLaser__Sequence * lhs, const base_interfaces_demo__msg__ObsLaser__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__ObsLaser__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__ObsLaser__Sequence__copy(
  const base_interfaces_demo__msg__ObsLaser__Sequence * input,
  base_interfaces_demo__msg__ObsLaser__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__ObsLaser);
    base_interfaces_demo__msg__ObsLaser * data =
      (base_interfaces_demo__msg__ObsLaser *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__ObsLaser__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__ObsLaser__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__ObsLaser__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
