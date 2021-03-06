# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification  # noqa: E501

    OpenAPI spec version: 1.1.1
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class StringParameterDefinition(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        '_class': 'str',
        'default_parameter_value': 'StringParameterValue',
        'description': 'str',
        'name': 'str',
        'type': 'str'
    }

    attribute_map = {
        '_class': '_class',
        'default_parameter_value': 'defaultParameterValue',
        'description': 'description',
        'name': 'name',
        'type': 'type'
    }

    def __init__(self, _class=None, default_parameter_value=None, description=None, name=None, type=None):  # noqa: E501
        """StringParameterDefinition - a model defined in OpenAPI"""  # noqa: E501

        self.__class = None
        self._default_parameter_value = None
        self._description = None
        self._name = None
        self._type = None
        self.discriminator = None

        if _class is not None:
            self._class = _class
        if default_parameter_value is not None:
            self.default_parameter_value = default_parameter_value
        if description is not None:
            self.description = description
        if name is not None:
            self.name = name
        if type is not None:
            self.type = type

    @property
    def _class(self):
        """Gets the _class of this StringParameterDefinition.  # noqa: E501


        :return: The _class of this StringParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """Sets the _class of this StringParameterDefinition.


        :param _class: The _class of this StringParameterDefinition.  # noqa: E501
        :type: str
        """

        self.__class = _class

    @property
    def default_parameter_value(self):
        """Gets the default_parameter_value of this StringParameterDefinition.  # noqa: E501


        :return: The default_parameter_value of this StringParameterDefinition.  # noqa: E501
        :rtype: StringParameterValue
        """
        return self._default_parameter_value

    @default_parameter_value.setter
    def default_parameter_value(self, default_parameter_value):
        """Sets the default_parameter_value of this StringParameterDefinition.


        :param default_parameter_value: The default_parameter_value of this StringParameterDefinition.  # noqa: E501
        :type: StringParameterValue
        """

        self._default_parameter_value = default_parameter_value

    @property
    def description(self):
        """Gets the description of this StringParameterDefinition.  # noqa: E501


        :return: The description of this StringParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this StringParameterDefinition.


        :param description: The description of this StringParameterDefinition.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def name(self):
        """Gets the name of this StringParameterDefinition.  # noqa: E501


        :return: The name of this StringParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this StringParameterDefinition.


        :param name: The name of this StringParameterDefinition.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def type(self):
        """Gets the type of this StringParameterDefinition.  # noqa: E501


        :return: The type of this StringParameterDefinition.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this StringParameterDefinition.


        :param type: The type of this StringParameterDefinition.  # noqa: E501
        :type: str
        """

        self._type = type

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, StringParameterDefinition):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
