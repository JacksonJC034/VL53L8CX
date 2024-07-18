# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:srv/PubCode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PubCode_Request(type):
    """Metaclass of message 'PubCode_Request'."""

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
                'base_interfaces_demo.srv.PubCode_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pub_code__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pub_code__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pub_code__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pub_code__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pub_code__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PubCode_Request(metaclass=Metaclass_PubCode_Request):
    """Message class 'PubCode_Request'."""

    __slots__ = [
        '_pub_code',
    ]

    _fields_and_field_types = {
        'pub_code': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pub_code = kwargs.get('pub_code', int())

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
        if self.pub_code != other.pub_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pub_code(self):
        """Message field 'pub_code'."""
        return self._pub_code

    @pub_code.setter
    def pub_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pub_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pub_code' field must be an integer in [-2147483648, 2147483647]"
        self._pub_code = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PubCode_Response(type):
    """Metaclass of message 'PubCode_Response'."""

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
                'base_interfaces_demo.srv.PubCode_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pub_code__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pub_code__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pub_code__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pub_code__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pub_code__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PubCode_Response(metaclass=Metaclass_PubCode_Response):
    """Message class 'PubCode_Response'."""

    __slots__ = [
        '_calibration',
        '_drift',
        '_angle',
    ]

    _fields_and_field_types = {
        'calibration': 'int32',
        'drift': 'double',
        'angle': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.calibration = kwargs.get('calibration', int())
        self.drift = kwargs.get('drift', float())
        self.angle = kwargs.get('angle', float())

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
        if self.calibration != other.calibration:
            return False
        if self.drift != other.drift:
            return False
        if self.angle != other.angle:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def calibration(self):
        """Message field 'calibration'."""
        return self._calibration

    @calibration.setter
    def calibration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibration' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'calibration' field must be an integer in [-2147483648, 2147483647]"
        self._calibration = value

    @property
    def drift(self):
        """Message field 'drift'."""
        return self._drift

    @drift.setter
    def drift(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drift' field must be of type 'float'"
        self._drift = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
        self._angle = value


class Metaclass_PubCode(type):
    """Metaclass of service 'PubCode'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('base_interfaces_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces_demo.srv.PubCode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pub_code

            from base_interfaces_demo.srv import _pub_code
            if _pub_code.Metaclass_PubCode_Request._TYPE_SUPPORT is None:
                _pub_code.Metaclass_PubCode_Request.__import_type_support__()
            if _pub_code.Metaclass_PubCode_Response._TYPE_SUPPORT is None:
                _pub_code.Metaclass_PubCode_Response.__import_type_support__()


class PubCode(metaclass=Metaclass_PubCode):
    from base_interfaces_demo.srv._pub_code import PubCode_Request as Request
    from base_interfaces_demo.srv._pub_code import PubCode_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
