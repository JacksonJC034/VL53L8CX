// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/Manual.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/manual__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__Manual__init(base_interfaces_demo__msg__Manual * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // sender
  // iparameter
  // isize
  // fparameter
  // fsize
  // status
  return true;
}

void
base_interfaces_demo__msg__Manual__fini(base_interfaces_demo__msg__Manual * msg)
{
  if (!msg) {
    return;
  }
  // type
  // sender
  // iparameter
  // isize
  // fparameter
  // fsize
  // status
}

bool
base_interfaces_demo__msg__Manual__are_equal(const base_interfaces_demo__msg__Manual * lhs, const base_interfaces_demo__msg__Manual * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // sender
  if (lhs->sender != rhs->sender) {
    return false;
  }
  // iparameter
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->iparameter[i] != rhs->iparameter[i]) {
      return false;
    }
  }
  // isize
  if (lhs->isize != rhs->isize) {
    return false;
  }
  // fparameter
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->fparameter[i] != rhs->fparameter[i]) {
      return false;
    }
  }
  // fsize
  if (lhs->fsize != rhs->fsize) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__Manual__copy(
  const base_interfaces_demo__msg__Manual * input,
  base_interfaces_demo__msg__Manual * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // sender
  output->sender = input->sender;
  // iparameter
  for (size_t i = 0; i < 16; ++i) {
    output->iparameter[i] = input->iparameter[i];
  }
  // isize
  output->isize = input->isize;
  // fparameter
  for (size_t i = 0; i < 16; ++i) {
    output->fparameter[i] = input->fparameter[i];
  }
  // fsize
  output->fsize = input->fsize;
  // status
  output->status = input->status;
  return true;
}

base_interfaces_demo__msg__Manual *
base_interfaces_demo__msg__Manual__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__Manual * msg = (base_interfaces_demo__msg__Manual *)allocator.allocate(sizeof(base_interfaces_demo__msg__Manual), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__Manual));
  bool success = base_interfaces_demo__msg__Manual__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__Manual__destroy(base_interfaces_demo__msg__Manual * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__Manual__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__Manual__Sequence__init(base_interfaces_demo__msg__Manual__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__Manual * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__Manual *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__Manual), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__Manual__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__Manual__fini(&data[i - 1]);
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
base_interfaces_demo__msg__Manual__Sequence__fini(base_interfaces_demo__msg__Manual__Sequence * array)
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
      base_interfaces_demo__msg__Manual__fini(&array->data[i]);
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

base_interfaces_demo__msg__Manual__Sequence *
base_interfaces_demo__msg__Manual__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__Manual__Sequence * array = (base_interfaces_demo__msg__Manual__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__Manual__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__Manual__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__Manual__Sequence__destroy(base_interfaces_demo__msg__Manual__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__Manual__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__Manual__Sequence__are_equal(const base_interfaces_demo__msg__Manual__Sequence * lhs, const base_interfaces_demo__msg__Manual__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__Manual__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__Manual__Sequence__copy(
  const base_interfaces_demo__msg__Manual__Sequence * input,
  base_interfaces_demo__msg__Manual__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__Manual);
    base_interfaces_demo__msg__Manual * data =
      (base_interfaces_demo__msg__Manual *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__Manual__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__Manual__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__Manual__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
