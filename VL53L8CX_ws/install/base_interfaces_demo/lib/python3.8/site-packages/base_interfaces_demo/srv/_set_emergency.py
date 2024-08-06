# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:srv/SetEmergency.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetEmergency_Request(type):
    """Metaclass of message 'SetEmergency_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EMERGENCY_NONE': 0,
        'EMERGENCY_SOFT': 1,
        'EMERGENCY_HARD': 2,
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
                'base_interfaces_demo.srv.SetEmergency_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_emergency__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_emergency__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_emergency__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_emergency__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_emergency__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EMERGENCY_NONE': cls.__constants['EMERGENCY_NONE'],
            'EMERGENCY_SOFT': cls.__constants['EMERGENCY_SOFT'],
            'EMERGENCY_HARD': cls.__constants['EMERGENCY_HARD'],
        }

    @property
    def EMERGENCY_NONE(self):
        """Message constant 'EMERGENCY_NONE'."""
        return Metaclass_SetEmergency_Request.__constants['EMERGENCY_NONE']

    @property
    def EMERGENCY_SOFT(self):
        """Message constant 'EMERGENCY_SOFT'."""
        return Metaclass_SetEmergency_Request.__constants['EMERGENCY_SOFT']

    @property
    def EMERGENCY_HARD(self):
        """Message constant 'EMERGENCY_HARD'."""
        return Metaclass_SetEmergency_Request.__constants['EMERGENCY_HARD']


class SetEmergency_Request(metaclass=Metaclass_SetEmergency_Request):
    """
    Message class 'SetEmergency_Request'.

    Constants:
      EMERGENCY_NONE
      EMERGENCY_SOFT
      EMERGENCY_HARD
    """

    __slots__ = [
        '_emergency_cmd',
    ]

    _fields_and_field_types = {
        'emergency_cmd': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.emergency_cmd = kwargs.get('emergency_cmd', int())

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
        if self.emergency_cmd != other.emergency_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def emergency_cmd(self):
        """Message field 'emergency_cmd'."""
        return self._emergency_cmd

    @emergency_cmd.setter
    def emergency_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emergency_cmd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emergency_cmd' field must be an unsigned integer in [0, 255]"
        self._emergency_cmd = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetEmergency_Response(type):
    """Metaclass of message 'SetEmergency_Response'."""

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
                'base_interfaces_demo.srv.SetEmergency_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_emergency__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_emergency__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_emergency__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_emergency__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_emergency__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetEmergency_Response(metaclass=Metaclass_SetEmergency_Response):
    """Message class 'SetEmergency_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetEmergency(type):
    """Metaclass of service 'SetEmergency'."""

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
                'base_interfaces_demo.srv.SetEmergency')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_emergency

            from base_interfaces_demo.srv import _set_emergency
            if _set_emergency.Metaclass_SetEmergency_Request._TYPE_SUPPORT is None:
                _set_emergency.Metaclass_SetEmergency_Request.__import_type_support__()
            if _set_emergency.Metaclass_SetEmergency_Response._TYPE_SUPPORT is None:
                _set_emergency.Metaclass_SetEmergency_Response.__import_type_support__()


class SetEmergency(metaclass=Metaclass_SetEmergency):
    from base_interfaces_demo.srv._set_emergency import SetEmergency_Request as Request
    from base_interfaces_demo.srv._set_emergency import SetEmergency_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
