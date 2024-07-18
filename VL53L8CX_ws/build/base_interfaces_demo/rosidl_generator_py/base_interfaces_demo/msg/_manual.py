# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/Manual.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'iparameter'
# Member 'fparameter'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Manual(type):
    """Metaclass of message 'Manual'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('base_interfaces_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces_demo.msg.Manual')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__manual
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__manual
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__manual
            cls._TYPE_SUPPORT = module.type_support_msg__msg__manual
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__manual

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Manual(metaclass=Metaclass_Manual):
    """Message class 'Manual'."""

    __slots__ = [
        '_type',
        '_sender',
        '_iparameter',
        '_isize',
        '_fparameter',
        '_fsize',
        '_status',
    ]

    _fields_and_field_types = {
        'type': 'int32',
        'sender': 'int32',
        'iparameter': 'int32[16]',
        'isize': 'int32',
        'fparameter': 'float[16]',
        'fsize': 'float',
        'status': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.sender = kwargs.get('sender', int())
        if 'iparameter' not in kwargs:
            self.iparameter = numpy.zeros(16, dtype=numpy.int32)
        else:
            self.iparameter = numpy.array(kwargs.get('iparameter'), dtype=numpy.int32)
            assert self.iparameter.shape == (16, )
        self.isize = kwargs.get('isize', int())
        if 'fparameter' not in kwargs:
            self.fparameter = numpy.zeros(16, dtype=numpy.float32)
        else:
            self.fparameter = numpy.array(kwargs.get('fparameter'), dtype=numpy.float32)
            assert self.fparameter.shape == (16, )
        self.fsize = kwargs.get('fsize', float())
        self.status = kwargs.get('status', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.type != other.type:
            return False
        if self.sender != other.sender:
            return False
        if all(self.iparameter != other.iparameter):
            return False
        if self.isize != other.isize:
            return False
        if all(self.fparameter != other.fparameter):
            return False
        if self.fsize != other.fsize:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @property
    def sender(self):
        """Message field 'sender'."""
        return self._sender

    @sender.setter
    def sender(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sender' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sender' field must be an integer in [-2147483648, 2147483647]"
        self._sender = value

    @property
    def iparameter(self):
        """Message field 'iparameter'."""
        return self._iparameter

    @iparameter.setter
    def iparameter(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'iparameter' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 16, \
                "The 'iparameter' numpy.ndarray() must have a size of 16"
            self._iparameter = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'iparameter' field must be a set or sequence with length 16 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._iparameter = numpy.array(value, dtype=numpy.int32)

    @property
    def isize(self):
        """Message field 'isize'."""
        return self._isize

    @isize.setter
    def isize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'isize' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'isize' field must be an integer in [-2147483648, 2147483647]"
        self._isize = value

    @property
    def fparameter(self):
        """Message field 'fparameter'."""
        return self._fparameter

    @fparameter.setter
    def fparameter(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'fparameter' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 16, \
                "The 'fparameter' numpy.ndarray() must have a size of 16"
            self._fparameter = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'fparameter' field must be a set or sequence with length 16 and each value of type 'float'"
        self._fparameter = numpy.array(value, dtype=numpy.float32)

    @property
    def fsize(self):
        """Message field 'fsize'."""
        return self._fsize

    @fsize.setter
    def fsize(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fsize' field must be of type 'float'"
        self._fsize = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'status' field must be an integer in [-2147483648, 2147483647]"
        self._status = value
