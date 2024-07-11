// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:msg/PubCode.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/msg/detail/pub_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
base_interfaces_demo__msg__PubCode__init(base_interfaces_demo__msg__PubCode * msg)
{
  if (!msg) {
    return false;
  }
  // pub_code
  return true;
}

void
base_interfaces_demo__msg__PubCode__fini(base_interfaces_demo__msg__PubCode * msg)
{
  if (!msg) {
    return;
  }
  // pub_code
}

bool
base_interfaces_demo__msg__PubCode__are_equal(const base_interfaces_demo__msg__PubCode * lhs, const base_interfaces_demo__msg__PubCode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pub_code
  if (lhs->pub_code != rhs->pub_code) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__msg__PubCode__copy(
  const base_interfaces_demo__msg__PubCode * input,
  base_interfaces_demo__msg__PubCode * output)
{
  if (!input || !output) {
    return false;
  }
  // pub_code
  output->pub_code = input->pub_code;
  return true;
}

base_interfaces_demo__msg__PubCode *
base_interfaces_demo__msg__PubCode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__PubCode * msg = (base_interfaces_demo__msg__PubCode *)allocator.allocate(sizeof(base_interfaces_demo__msg__PubCode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__msg__PubCode));
  bool success = base_interfaces_demo__msg__PubCode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__msg__PubCode__destroy(base_interfaces_demo__msg__PubCode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__msg__PubCode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__msg__PubCode__Sequence__init(base_interfaces_demo__msg__PubCode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__PubCode * data = NULL;

  if (size) {
    data = (base_interfaces_demo__msg__PubCode *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__msg__PubCode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__msg__PubCode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__msg__PubCode__fini(&data[i - 1]);
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
base_interfaces_demo__msg__PubCode__Sequence__fini(base_interfaces_demo__msg__PubCode__Sequence * array)
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
      base_interfaces_demo__msg__PubCode__fini(&array->data[i]);
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

base_interfaces_demo__msg__PubCode__Sequence *
base_interfaces_demo__msg__PubCode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__msg__PubCode__Sequence * array = (base_interfaces_demo__msg__PubCode__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__msg__PubCode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__msg__PubCode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__msg__PubCode__Sequence__destroy(base_interfaces_demo__msg__PubCode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__msg__PubCode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__msg__PubCode__Sequence__are_equal(const base_interfaces_demo__msg__PubCode__Sequence * lhs, const base_interfaces_demo__msg__PubCode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__msg__PubCode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__msg__PubCode__Sequence__copy(
  const base_interfaces_demo__msg__PubCode__Sequence * input,
  base_interfaces_demo__msg__PubCode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__msg__PubCode);
    base_interfaces_demo__msg__PubCode * data =
      (base_interfaces_demo__msg__PubCode *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__msg__PubCode__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__msg__PubCode__fini(&data[i]);
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
    if (!base_interfaces_demo__msg__PubCode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
