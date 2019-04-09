# coding: utf-8

"""
    Swaggy Jenkins

    Jenkins API clients generated from Swagger / Open API specification  # noqa: E501

    OpenAPI spec version: 1.1.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class ListView(object):
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
        'description': 'str',
        'jobs': 'list[FreeStyleProject]',
        'name': 'str',
        'url': 'str'
    }

    attribute_map = {
        '_class': '_class',
        'description': 'description',
        'jobs': 'jobs',
        'name': 'name',
        'url': 'url'
    }

    def __init__(self, _class=None, description=None, jobs=None, name=None, url=None):  # noqa: E501
        """ListView - a model defined in OpenAPI"""  # noqa: E501

        self.__class = None
        self._description = None
        self._jobs = None
        self._name = None
        self._url = None
        self.discriminator = None

        if _class is not None:
            self._class = _class
        if description is not None:
            self.description = description
        if jobs is not None:
            self.jobs = jobs
        if name is not None:
            self.name = name
        if url is not None:
            self.url = url

    @property
    def _class(self):
        """Gets the _class of this ListView.  # noqa: E501


        :return: The _class of this ListView.  # noqa: E501
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """Sets the _class of this ListView.


        :param _class: The _class of this ListView.  # noqa: E501
        :type: str
        """

        self.__class = _class

    @property
    def description(self):
        """Gets the description of this ListView.  # noqa: E501


        :return: The description of this ListView.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this ListView.


        :param description: The description of this ListView.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def jobs(self):
        """Gets the jobs of this ListView.  # noqa: E501


        :return: The jobs of this ListView.  # noqa: E501
        :rtype: list[FreeStyleProject]
        """
        return self._jobs

    @jobs.setter
    def jobs(self, jobs):
        """Sets the jobs of this ListView.


        :param jobs: The jobs of this ListView.  # noqa: E501
        :type: list[FreeStyleProject]
        """

        self._jobs = jobs

    @property
    def name(self):
        """Gets the name of this ListView.  # noqa: E501


        :return: The name of this ListView.  # noqa: E501
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this ListView.


        :param name: The name of this ListView.  # noqa: E501
        :type: str
        """

        self._name = name

    @property
    def url(self):
        """Gets the url of this ListView.  # noqa: E501


        :return: The url of this ListView.  # noqa: E501
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url):
        """Sets the url of this ListView.


        :param url: The url of this ListView.  # noqa: E501
        :type: str
        """

        self._url = url

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
        if not isinstance(other, ListView):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
