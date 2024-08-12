# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces_demo:srv/RcsServer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RcsServer_Request(type):
    """Metaclass of message 'RcsServer_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CMD_BT': 0,
        'CMD_HARD_EMERGENCY': 1,
        'CMD_CANCEL': 2,
        'CMD_PAUSE': 3,
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
                'base_interfaces_demo.srv.RcsServer_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rcs_server__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rcs_server__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rcs_server__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rcs_server__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rcs_server__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CMD_BT': cls.__constants['CMD_BT'],
            'CMD_HARD_EMERGENCY': cls.__constants['CMD_HARD_EMERGENCY'],
            'CMD_CANCEL': cls.__constants['CMD_CANCEL'],
            'CMD_PAUSE': cls.__constants['CMD_PAUSE'],
        }

    @property
    def CMD_BT(self):
        """Message constant 'CMD_BT'."""
        return Metaclass_RcsServer_Request.__constants['CMD_BT']

    @property
    def CMD_HARD_EMERGENCY(self):
        """Message constant 'CMD_HARD_EMERGENCY'."""
        return Metaclass_RcsServer_Request.__constants['CMD_HARD_EMERGENCY']

    @property
    def CMD_CANCEL(self):
        """Message constant 'CMD_CANCEL'."""
        return Metaclass_RcsServer_Request.__constants['CMD_CANCEL']

    @property
    def CMD_PAUSE(self):
        """Message constant 'CMD_PAUSE'."""
        return Metaclass_RcsServer_Request.__constants['CMD_PAUSE']


class RcsServer_Request(metaclass=Metaclass_RcsServer_Request):
    """
    Message class 'RcsServer_Request'.

    Constants:
      CMD_BT
      CMD_HARD_EMERGENCY
      CMD_CANCEL
      CMD_PAUSE
    """

    __slots__ = [
        '_cmd',
        '_rcsstring',
    ]

    _fields_and_field_types = {
        'cmd': 'int32',
        'rcsstring': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd = kwargs.get('cmd', int())
        self.rcsstring = kwargs.get('rcsstring', str())

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
        if self.cmd != other.cmd:
            return False
        if self.rcsstring != other.rcsstring:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cmd' field must be an integer in [-2147483648, 2147483647]"
        self._cmd = value

    @property
    def rcsstring(self):
        """Message field 'rcsstring'."""
        return self._rcsstring

    @rcsstring.setter
    def rcsstring(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rcsstring' field must be of type 'str'"
        self._rcsstring = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RcsServer_Response(type):
    """Metaclass of message 'RcsServer_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RET_REJECT': 0,
        'RET_ACCEPT': 1,
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
                'base_interfaces_demo.srv.RcsServer_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rcs_server__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rcs_server__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rcs_server__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rcs_server__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rcs_server__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RET_REJECT': cls.__constants['RET_REJECT'],
            'RET_ACCEPT': cls.__constants['RET_ACCEPT'],
        }

    @property
    def RET_REJECT(self):
        """Message constant 'RET_REJECT'."""
        return Metaclass_RcsServer_Response.__constants['RET_REJECT']

    @property
    def RET_ACCEPT(self):
        """Message constant 'RET_ACCEPT'."""
        return Metaclass_RcsServer_Response.__constants['RET_ACCEPT']


class RcsServer_Response(metaclass=Metaclass_RcsServer_Response):
    """
    Message class 'RcsServer_Response'.

    Constants:
      RET_REJECT
      RET_ACCEPT
    """

    __slots__ = [
        '_ret',
    ]

    _fields_and_field_types = {
        'ret': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret = kwargs.get('ret', int())

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
        if self.ret != other.ret:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ret(self):
        """Message field 'ret'."""
        return self._ret

    @ret.setter
    def ret(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ret' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ret' field must be an integer in [-2147483648, 2147483647]"
        self._ret = value


class Metaclass_RcsServer(type):
    """Metaclass of service 'RcsServer'."""

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
                'base_interfaces_demo.srv.RcsServer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rcs_server

            from base_interfaces_demo.srv import _rcs_server
            if _rcs_server.Metaclass_RcsServer_Request._TYPE_SUPPORT is None:
                _rcs_server.Metaclass_RcsServer_Request.__import_type_support__()
            if _rcs_server.Metaclass_RcsServer_Response._TYPE_SUPPORT is None:
                _rcs_server.Metaclass_RcsServer_Response.__import_type_support__()


class RcsServer(metaclass=Metaclass_RcsServer):
    from base_interfaces_demo.srv._rcs_server import RcsServer_Request as Request
    from base_interfaces_demo.srv._rcs_server import RcsServer_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
