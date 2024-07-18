// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_interfaces_demo:srv/PubCode.idl
// generated code does not contain a copyright notice
#include "base_interfaces_demo/srv/detail/pub_code__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
base_interfaces_demo__srv__PubCode_Request__init(base_interfaces_demo__srv__PubCode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pub_code
  return true;
}

void
base_interfaces_demo__srv__PubCode_Request__fini(base_interfaces_demo__srv__PubCode_Request * msg)
{
  if (!msg) {
    return;
  }
  // pub_code
}

bool
base_interfaces_demo__srv__PubCode_Request__are_equal(const base_interfaces_demo__srv__PubCode_Request * lhs, const base_interfaces_demo__srv__PubCode_Request * rhs)
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
base_interfaces_demo__srv__PubCode_Request__copy(
  const base_interfaces_demo__srv__PubCode_Request * input,
  base_interfaces_demo__srv__PubCode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pub_code
  output->pub_code = input->pub_code;
  return true;
}

base_interfaces_demo__srv__PubCode_Request *
base_interfaces_demo__srv__PubCode_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__srv__PubCode_Request * msg = (base_interfaces_demo__srv__PubCode_Request *)allocator.allocate(sizeof(base_interfaces_demo__srv__PubCode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__srv__PubCode_Request));
  bool success = base_interfaces_demo__srv__PubCode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__srv__PubCode_Request__destroy(base_interfaces_demo__srv__PubCode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__srv__PubCode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__srv__PubCode_Request__Sequence__init(base_interfaces_demo__srv__PubCode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__srv__PubCode_Request * data = NULL;

  if (size) {
    data = (base_interfaces_demo__srv__PubCode_Request *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__srv__PubCode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__srv__PubCode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__srv__PubCode_Request__fini(&data[i - 1]);
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
base_interfaces_demo__srv__PubCode_Request__Sequence__fini(base_interfaces_demo__srv__PubCode_Request__Sequence * array)
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
      base_interfaces_demo__srv__PubCode_Request__fini(&array->data[i]);
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

base_interfaces_demo__srv__PubCode_Request__Sequence *
base_interfaces_demo__srv__PubCode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__srv__PubCode_Request__Sequence * array = (base_interfaces_demo__srv__PubCode_Request__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__srv__PubCode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__srv__PubCode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__srv__PubCode_Request__Sequence__destroy(base_interfaces_demo__srv__PubCode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__srv__PubCode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__srv__PubCode_Request__Sequence__are_equal(const base_interfaces_demo__srv__PubCode_Request__Sequence * lhs, const base_interfaces_demo__srv__PubCode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__srv__PubCode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__srv__PubCode_Request__Sequence__copy(
  const base_interfaces_demo__srv__PubCode_Request__Sequence * input,
  base_interfaces_demo__srv__PubCode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__srv__PubCode_Request);
    base_interfaces_demo__srv__PubCode_Request * data =
      (base_interfaces_demo__srv__PubCode_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__srv__PubCode_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__srv__PubCode_Request__fini(&data[i]);
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
    if (!base_interfaces_demo__srv__PubCode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
base_interfaces_demo__srv__PubCode_Response__init(base_interfaces_demo__srv__PubCode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // calibration
  // drift
  // angle
  return true;
}

void
base_interfaces_demo__srv__PubCode_Response__fini(base_interfaces_demo__srv__PubCode_Response * msg)
{
  if (!msg) {
    return;
  }
  // calibration
  // drift
  // angle
}

bool
base_interfaces_demo__srv__PubCode_Response__are_equal(const base_interfaces_demo__srv__PubCode_Response * lhs, const base_interfaces_demo__srv__PubCode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // calibration
  if (lhs->calibration != rhs->calibration) {
    return false;
  }
  // drift
  if (lhs->drift != rhs->drift) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
base_interfaces_demo__srv__PubCode_Response__copy(
  const base_interfaces_demo__srv__PubCode_Response * input,
  base_interfaces_demo__srv__PubCode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // calibration
  output->calibration = input->calibration;
  // drift
  output->drift = input->drift;
  // angle
  output->angle = input->angle;
  return true;
}

base_interfaces_demo__srv__PubCode_Response *
base_interfaces_demo__srv__PubCode_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__srv__PubCode_Response * msg = (base_interfaces_demo__srv__PubCode_Response *)allocator.allocate(sizeof(base_interfaces_demo__srv__PubCode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_interfaces_demo__srv__PubCode_Response));
  bool success = base_interfaces_demo__srv__PubCode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_interfaces_demo__srv__PubCode_Response__destroy(base_interfaces_demo__srv__PubCode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_interfaces_demo__srv__PubCode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_interfaces_demo__srv__PubCode_Response__Sequence__init(base_interfaces_demo__srv__PubCode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__srv__PubCode_Response * data = NULL;

  if (size) {
    data = (base_interfaces_demo__srv__PubCode_Response *)allocator.zero_allocate(size, sizeof(base_interfaces_demo__srv__PubCode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_interfaces_demo__srv__PubCode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_interfaces_demo__srv__PubCode_Response__fini(&data[i - 1]);
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
base_interfaces_demo__srv__PubCode_Response__Sequence__fini(base_interfaces_demo__srv__PubCode_Response__Sequence * array)
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
      base_interfaces_demo__srv__PubCode_Response__fini(&array->data[i]);
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

base_interfaces_demo__srv__PubCode_Response__Sequence *
base_interfaces_demo__srv__PubCode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_interfaces_demo__srv__PubCode_Response__Sequence * array = (base_interfaces_demo__srv__PubCode_Response__Sequence *)allocator.allocate(sizeof(base_interfaces_demo__srv__PubCode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_interfaces_demo__srv__PubCode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_interfaces_demo__srv__PubCode_Response__Sequence__destroy(base_interfaces_demo__srv__PubCode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_interfaces_demo__srv__PubCode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_interfaces_demo__srv__PubCode_Response__Sequence__are_equal(const base_interfaces_demo__srv__PubCode_Response__Sequence * lhs, const base_interfaces_demo__srv__PubCode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_interfaces_demo__srv__PubCode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_interfaces_demo__srv__PubCode_Response__Sequence__copy(
  const base_interfaces_demo__srv__PubCode_Response__Sequence * input,
  base_interfaces_demo__srv__PubCode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_interfaces_demo__srv__PubCode_Response);
    base_interfaces_demo__srv__PubCode_Response * data =
      (base_interfaces_demo__srv__PubCode_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_interfaces_demo__srv__PubCode_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          base_interfaces_demo__srv__PubCode_Response__fini(&data[i]);
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
    if (!base_interfaces_demo__srv__PubCode_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
