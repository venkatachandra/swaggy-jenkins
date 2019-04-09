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


class PipelineRun(object):
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
        'artifacts': 'list[PipelineRunartifacts]',
        'duration_in_millis': 'int',
        'estimated_duration_in_millis': 'int',
        'en_queue_time': 'str',
        'end_time': 'str',
        'id': 'str',
        'organization': 'str',
        'pipeline': 'str',
        'result': 'str',
        'run_summary': 'str',
        'start_time': 'str',
        'state': 'str',
        'type': 'str',
        'commit_id': 'str'
    }

    attribute_map = {
        '_class': '_class',
        'artifacts': 'artifacts',
        'duration_in_millis': 'durationInMillis',
        'estimated_duration_in_millis': 'estimatedDurationInMillis',
        'en_queue_time': 'enQueueTime',
        'end_time': 'endTime',
        'id': 'id',
        'organization': 'organization',
        'pipeline': 'pipeline',
        'result': 'result',
        'run_summary': 'runSummary',
        'start_time': 'startTime',
        'state': 'state',
        'type': 'type',
        'commit_id': 'commitId'
    }

    def __init__(self, _class=None, artifacts=None, duration_in_millis=None, estimated_duration_in_millis=None, en_queue_time=None, end_time=None, id=None, organization=None, pipeline=None, result=None, run_summary=None, start_time=None, state=None, type=None, commit_id=None):  # noqa: E501
        """PipelineRun - a model defined in OpenAPI"""  # noqa: E501

        self.__class = None
        self._artifacts = None
        self._duration_in_millis = None
        self._estimated_duration_in_millis = None
        self._en_queue_time = None
        self._end_time = None
        self._id = None
        self._organization = None
        self._pipeline = None
        self._result = None
        self._run_summary = None
        self._start_time = None
        self._state = None
        self._type = None
        self._commit_id = None
        self.discriminator = None

        if _class is not None:
            self._class = _class
        if artifacts is not None:
            self.artifacts = artifacts
        if duration_in_millis is not None:
            self.duration_in_millis = duration_in_millis
        if estimated_duration_in_millis is not None:
            self.estimated_duration_in_millis = estimated_duration_in_millis
        if en_queue_time is not None:
            self.en_queue_time = en_queue_time
        if end_time is not None:
            self.end_time = end_time
        if id is not None:
            self.id = id
        if organization is not None:
            self.organization = organization
        if pipeline is not None:
            self.pipeline = pipeline
        if result is not None:
            self.result = result
        if run_summary is not None:
            self.run_summary = run_summary
        if start_time is not None:
            self.start_time = start_time
        if state is not None:
            self.state = state
        if type is not None:
            self.type = type
        if commit_id is not None:
            self.commit_id = commit_id

    @property
    def _class(self):
        """Gets the _class of this PipelineRun.  # noqa: E501


        :return: The _class of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class):
        """Sets the _class of this PipelineRun.


        :param _class: The _class of this PipelineRun.  # noqa: E501
        :type: str
        """

        self.__class = _class

    @property
    def artifacts(self):
        """Gets the artifacts of this PipelineRun.  # noqa: E501


        :return: The artifacts of this PipelineRun.  # noqa: E501
        :rtype: list[PipelineRunartifacts]
        """
        return self._artifacts

    @artifacts.setter
    def artifacts(self, artifacts):
        """Sets the artifacts of this PipelineRun.


        :param artifacts: The artifacts of this PipelineRun.  # noqa: E501
        :type: list[PipelineRunartifacts]
        """

        self._artifacts = artifacts

    @property
    def duration_in_millis(self):
        """Gets the duration_in_millis of this PipelineRun.  # noqa: E501


        :return: The duration_in_millis of this PipelineRun.  # noqa: E501
        :rtype: int
        """
        return self._duration_in_millis

    @duration_in_millis.setter
    def duration_in_millis(self, duration_in_millis):
        """Sets the duration_in_millis of this PipelineRun.


        :param duration_in_millis: The duration_in_millis of this PipelineRun.  # noqa: E501
        :type: int
        """

        self._duration_in_millis = duration_in_millis

    @property
    def estimated_duration_in_millis(self):
        """Gets the estimated_duration_in_millis of this PipelineRun.  # noqa: E501


        :return: The estimated_duration_in_millis of this PipelineRun.  # noqa: E501
        :rtype: int
        """
        return self._estimated_duration_in_millis

    @estimated_duration_in_millis.setter
    def estimated_duration_in_millis(self, estimated_duration_in_millis):
        """Sets the estimated_duration_in_millis of this PipelineRun.


        :param estimated_duration_in_millis: The estimated_duration_in_millis of this PipelineRun.  # noqa: E501
        :type: int
        """

        self._estimated_duration_in_millis = estimated_duration_in_millis

    @property
    def en_queue_time(self):
        """Gets the en_queue_time of this PipelineRun.  # noqa: E501


        :return: The en_queue_time of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._en_queue_time

    @en_queue_time.setter
    def en_queue_time(self, en_queue_time):
        """Sets the en_queue_time of this PipelineRun.


        :param en_queue_time: The en_queue_time of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._en_queue_time = en_queue_time

    @property
    def end_time(self):
        """Gets the end_time of this PipelineRun.  # noqa: E501


        :return: The end_time of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._end_time

    @end_time.setter
    def end_time(self, end_time):
        """Sets the end_time of this PipelineRun.


        :param end_time: The end_time of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._end_time = end_time

    @property
    def id(self):
        """Gets the id of this PipelineRun.  # noqa: E501


        :return: The id of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this PipelineRun.


        :param id: The id of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def organization(self):
        """Gets the organization of this PipelineRun.  # noqa: E501


        :return: The organization of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._organization

    @organization.setter
    def organization(self, organization):
        """Sets the organization of this PipelineRun.


        :param organization: The organization of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._organization = organization

    @property
    def pipeline(self):
        """Gets the pipeline of this PipelineRun.  # noqa: E501


        :return: The pipeline of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._pipeline

    @pipeline.setter
    def pipeline(self, pipeline):
        """Sets the pipeline of this PipelineRun.


        :param pipeline: The pipeline of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._pipeline = pipeline

    @property
    def result(self):
        """Gets the result of this PipelineRun.  # noqa: E501


        :return: The result of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._result

    @result.setter
    def result(self, result):
        """Sets the result of this PipelineRun.


        :param result: The result of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._result = result

    @property
    def run_summary(self):
        """Gets the run_summary of this PipelineRun.  # noqa: E501


        :return: The run_summary of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._run_summary

    @run_summary.setter
    def run_summary(self, run_summary):
        """Sets the run_summary of this PipelineRun.


        :param run_summary: The run_summary of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._run_summary = run_summary

    @property
    def start_time(self):
        """Gets the start_time of this PipelineRun.  # noqa: E501


        :return: The start_time of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._start_time

    @start_time.setter
    def start_time(self, start_time):
        """Sets the start_time of this PipelineRun.


        :param start_time: The start_time of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._start_time = start_time

    @property
    def state(self):
        """Gets the state of this PipelineRun.  # noqa: E501


        :return: The state of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._state

    @state.setter
    def state(self, state):
        """Sets the state of this PipelineRun.


        :param state: The state of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._state = state

    @property
    def type(self):
        """Gets the type of this PipelineRun.  # noqa: E501


        :return: The type of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this PipelineRun.


        :param type: The type of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._type = type

    @property
    def commit_id(self):
        """Gets the commit_id of this PipelineRun.  # noqa: E501


        :return: The commit_id of this PipelineRun.  # noqa: E501
        :rtype: str
        """
        return self._commit_id

    @commit_id.setter
    def commit_id(self, commit_id):
        """Sets the commit_id of this PipelineRun.


        :param commit_id: The commit_id of this PipelineRun.  # noqa: E501
        :type: str
        """

        self._commit_id = commit_id

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
        if not isinstance(other, PipelineRun):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
