# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:msg/HallInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HallInfo(type):
    """Metaclass of message 'HallInfo'."""

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
                'base_interfaces_demo.msg.HallInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hall_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hall_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hall_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hall_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hall_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HallInfo(metaclass=Metaclass_HallInfo):
    """Message class 'HallInfo'."""

    __slots__ = [
        '_uid7',
        '_uid6',
        '_uid5',
        '_uid4',
        '_uid3',
        '_uid2',
        '_uid1',
        '_uid0',
        '_f1',
        '_f2',
        '_f3',
        '_f4',
        '_b1',
        '_b2',
        '_b3',
        '_b4',
        '_l1',
        '_l2',
        '_l3',
        '_l4',
        '_r1',
        '_r2',
        '_r3',
        '_r4',
        '_state',
    ]

    _fields_and_field_types = {
        'uid7': 'int32',
        'uid6': 'int32',
        'uid5': 'int32',
        'uid4': 'int32',
        'uid3': 'int32',
        'uid2': 'int32',
        'uid1': 'int32',
        'uid0': 'int32',
        'f1': 'double',
        'f2': 'double',
        'f3': 'double',
        'f4': 'double',
        'b1': 'double',
        'b2': 'double',
        'b3': 'double',
        'b4': 'double',
        'l1': 'double',
        'l2': 'double',
        'l3': 'double',
        'l4': 'double',
        'r1': 'double',
        'r2': 'double',
        'r3': 'double',
        'r4': 'double',
        'state': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.uid7 = kwargs.get('uid7', int())
        self.uid6 = kwargs.get('uid6', int())
        self.uid5 = kwargs.get('uid5', int())
        self.uid4 = kwargs.get('uid4', int())
        self.uid3 = kwargs.get('uid3', int())
        self.uid2 = kwargs.get('uid2', int())
        self.uid1 = kwargs.get('uid1', int())
        self.uid0 = kwargs.get('uid0', int())
        self.f1 = kwargs.get('f1', float())
        self.f2 = kwargs.get('f2', float())
        self.f3 = kwargs.get('f3', float())
        self.f4 = kwargs.get('f4', float())
        self.b1 = kwargs.get('b1', float())
        self.b2 = kwargs.get('b2', float())
        self.b3 = kwargs.get('b3', float())
        self.b4 = kwargs.get('b4', float())
        self.l1 = kwargs.get('l1', float())
        self.l2 = kwargs.get('l2', float())
        self.l3 = kwargs.get('l3', float())
        self.l4 = kwargs.get('l4', float())
        self.r1 = kwargs.get('r1', float())
        self.r2 = kwargs.get('r2', float())
        self.r3 = kwargs.get('r3', float())
        self.r4 = kwargs.get('r4', float())
        self.state = kwargs.get('state', int())

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
        if self.uid7 != other.uid7:
            return False
        if self.uid6 != other.uid6:
            return False
        if self.uid5 != other.uid5:
            return False
        if self.uid4 != other.uid4:
            return False
        if self.uid3 != other.uid3:
            return False
        if self.uid2 != other.uid2:
            return False
        if self.uid1 != other.uid1:
            return False
        if self.uid0 != other.uid0:
            return False
        if self.f1 != other.f1:
            return False
        if self.f2 != other.f2:
            return False
        if self.f3 != other.f3:
            return False
        if self.f4 != other.f4:
            return False
        if self.b1 != other.b1:
            return False
        if self.b2 != other.b2:
            return False
        if self.b3 != other.b3:
            return False
        if self.b4 != other.b4:
            return False
        if self.l1 != other.l1:
            return False
        if self.l2 != other.l2:
            return False
        if self.l3 != other.l3:
            return False
        if self.l4 != other.l4:
            return False
        if self.r1 != other.r1:
            return False
        if self.r2 != other.r2:
            return False
        if self.r3 != other.r3:
            return False
        if self.r4 != other.r4:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def uid7(self):
        """Message field 'uid7'."""
        return self._uid7

    @uid7.setter
    def uid7(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid7' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uid7' field must be an integer in [-2147483648, 2147483647]"
        self._uid7 = value

    @property
    def uid6(self):
        """Message field 'uid6'."""
        return self._uid6

    @uid6.setter
    def uid6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid6' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uid6' field must be an integer in [-2147483648, 2147483647]"
        self._uid6 = value

    @property
    def uid5(self):
        """Message field 'uid5'."""
        return self._uid5

    @uid5.setter
    def uid5(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid5' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uid5' field must be an integer in [-2147483648, 2147483647]"
        self._uid5 = value

    @property
    def uid4(self):
        """Message field 'uid4'."""
        return self._uid4

    @uid4.setter
    def uid4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uid4' field must be an integer in [-2147483648, 2147483647]"
        self._uid4 = value

    @property
    def uid3(self):
        """Message field 'uid3'."""
        return self._uid3

    @uid3.setter
    def uid3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uid3' field must be an integer in [-2147483648, 2147483647]"
        self._uid3 = value

    @property
    def uid2(self):
        """Message field 'uid2'."""
        return self._uid2

    @uid2.setter
    def uid2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uid2' field must be an integer in [-2147483648, 2147483647]"
        self._uid2 = value

    @property
    def uid1(self):
        """Message field 'uid1'."""
        return self._uid1

    @uid1.setter
    def uid1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uid1' field must be an integer in [-2147483648, 2147483647]"
        self._uid1 = value

    @property
    def uid0(self):
        """Message field 'uid0'."""
        return self._uid0

    @uid0.setter
    def uid0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uid0' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'uid0' field must be an integer in [-2147483648, 2147483647]"
        self._uid0 = value

    @property
    def f1(self):
        """Message field 'f1'."""
        return self._f1

    @f1.setter
    def f1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f1' field must be of type 'float'"
        self._f1 = value

    @property
    def f2(self):
        """Message field 'f2'."""
        return self._f2

    @f2.setter
    def f2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f2' field must be of type 'float'"
        self._f2 = value

    @property
    def f3(self):
        """Message field 'f3'."""
        return self._f3

    @f3.setter
    def f3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f3' field must be of type 'float'"
        self._f3 = value

    @property
    def f4(self):
        """Message field 'f4'."""
        return self._f4

    @f4.setter
    def f4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'f4' field must be of type 'float'"
        self._f4 = value

    @property
    def b1(self):
        """Message field 'b1'."""
        return self._b1

    @b1.setter
    def b1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b1' field must be of type 'float'"
        self._b1 = value

    @property
    def b2(self):
        """Message field 'b2'."""
        return self._b2

    @b2.setter
    def b2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b2' field must be of type 'float'"
        self._b2 = value

    @property
    def b3(self):
        """Message field 'b3'."""
        return self._b3

    @b3.setter
    def b3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b3' field must be of type 'float'"
        self._b3 = value

    @property
    def b4(self):
        """Message field 'b4'."""
        return self._b4

    @b4.setter
    def b4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'b4' field must be of type 'float'"
        self._b4 = value

    @property
    def l1(self):
        """Message field 'l1'."""
        return self._l1

    @l1.setter
    def l1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'l1' field must be of type 'float'"
        self._l1 = value

    @property
    def l2(self):
        """Message field 'l2'."""
        return self._l2

    @l2.setter
    def l2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'l2' field must be of type 'float'"
        self._l2 = value

    @property
    def l3(self):
        """Message field 'l3'."""
        return self._l3

    @l3.setter
    def l3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'l3' field must be of type 'float'"
        self._l3 = value

    @property
    def l4(self):
        """Message field 'l4'."""
        return self._l4

    @l4.setter
    def l4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'l4' field must be of type 'float'"
        self._l4 = value

    @property
    def r1(self):
        """Message field 'r1'."""
        return self._r1

    @r1.setter
    def r1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r1' field must be of type 'float'"
        self._r1 = value

    @property
    def r2(self):
        """Message field 'r2'."""
        return self._r2

    @r2.setter
    def r2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r2' field must be of type 'float'"
        self._r2 = value

    @property
    def r3(self):
        """Message field 'r3'."""
        return self._r3

    @r3.setter
    def r3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r3' field must be of type 'float'"
        self._r3 = value

    @property
    def r4(self):
        """Message field 'r4'."""
        return self._r4

    @r4.setter
    def r4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r4' field must be of type 'float'"
        self._r4 = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state' field must be an integer in [-2147483648, 2147483647]"
        self._state = value
