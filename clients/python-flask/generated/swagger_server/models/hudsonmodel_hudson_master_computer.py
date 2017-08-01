# coding: utf-8

from __future__ import absolute_import
from swagger_server.models.hudsonmodel_hudson_master_computer_monitor_data import HudsonmodelHudsonMasterComputerMonitorData
from swagger_server.models.hudsonmodel_hudson_master_computerexecutors import HudsonmodelHudsonMasterComputerexecutors
from swagger_server.models.hudsonmodel_label1 import HudsonmodelLabel1
from .base_model_ import Model
from datetime import date, datetime
from typing import List, Dict
from ..util import deserialize_model


class HudsonmodelHudsonMasterComputer(Model):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, _class: str=None, display_name: str=None, executors: List[HudsonmodelHudsonMasterComputerexecutors]=None, icon: str=None, icon_class_name: str=None, idle: bool=None, jnlp_agent: bool=None, launch_supported: bool=None, load_statistics: HudsonmodelLabel1=None, manual_launch_allowed: bool=None, monitor_data: HudsonmodelHudsonMasterComputerMonitorData=None, num_executors: int=None, offline: bool=None, offline_cause: str=None, offline_cause_reason: str=None, temporarily_offline: bool=None):
        """
        HudsonmodelHudsonMasterComputer - a model defined in Swagger

        :param _class: The _class of this HudsonmodelHudsonMasterComputer.
        :type _class: str
        :param display_name: The display_name of this HudsonmodelHudsonMasterComputer.
        :type display_name: str
        :param executors: The executors of this HudsonmodelHudsonMasterComputer.
        :type executors: List[HudsonmodelHudsonMasterComputerexecutors]
        :param icon: The icon of this HudsonmodelHudsonMasterComputer.
        :type icon: str
        :param icon_class_name: The icon_class_name of this HudsonmodelHudsonMasterComputer.
        :type icon_class_name: str
        :param idle: The idle of this HudsonmodelHudsonMasterComputer.
        :type idle: bool
        :param jnlp_agent: The jnlp_agent of this HudsonmodelHudsonMasterComputer.
        :type jnlp_agent: bool
        :param launch_supported: The launch_supported of this HudsonmodelHudsonMasterComputer.
        :type launch_supported: bool
        :param load_statistics: The load_statistics of this HudsonmodelHudsonMasterComputer.
        :type load_statistics: HudsonmodelLabel1
        :param manual_launch_allowed: The manual_launch_allowed of this HudsonmodelHudsonMasterComputer.
        :type manual_launch_allowed: bool
        :param monitor_data: The monitor_data of this HudsonmodelHudsonMasterComputer.
        :type monitor_data: HudsonmodelHudsonMasterComputerMonitorData
        :param num_executors: The num_executors of this HudsonmodelHudsonMasterComputer.
        :type num_executors: int
        :param offline: The offline of this HudsonmodelHudsonMasterComputer.
        :type offline: bool
        :param offline_cause: The offline_cause of this HudsonmodelHudsonMasterComputer.
        :type offline_cause: str
        :param offline_cause_reason: The offline_cause_reason of this HudsonmodelHudsonMasterComputer.
        :type offline_cause_reason: str
        :param temporarily_offline: The temporarily_offline of this HudsonmodelHudsonMasterComputer.
        :type temporarily_offline: bool
        """
        self.swagger_types = {
            '_class': str,
            'display_name': str,
            'executors': List[HudsonmodelHudsonMasterComputerexecutors],
            'icon': str,
            'icon_class_name': str,
            'idle': bool,
            'jnlp_agent': bool,
            'launch_supported': bool,
            'load_statistics': HudsonmodelLabel1,
            'manual_launch_allowed': bool,
            'monitor_data': HudsonmodelHudsonMasterComputerMonitorData,
            'num_executors': int,
            'offline': bool,
            'offline_cause': str,
            'offline_cause_reason': str,
            'temporarily_offline': bool
        }

        self.attribute_map = {
            '_class': '_class',
            'display_name': 'displayName',
            'executors': 'executors',
            'icon': 'icon',
            'icon_class_name': 'iconClassName',
            'idle': 'idle',
            'jnlp_agent': 'jnlpAgent',
            'launch_supported': 'launchSupported',
            'load_statistics': 'loadStatistics',
            'manual_launch_allowed': 'manualLaunchAllowed',
            'monitor_data': 'monitorData',
            'num_executors': 'numExecutors',
            'offline': 'offline',
            'offline_cause': 'offlineCause',
            'offline_cause_reason': 'offlineCauseReason',
            'temporarily_offline': 'temporarilyOffline'
        }

        self.__class = _class
        self._display_name = display_name
        self._executors = executors
        self._icon = icon
        self._icon_class_name = icon_class_name
        self._idle = idle
        self._jnlp_agent = jnlp_agent
        self._launch_supported = launch_supported
        self._load_statistics = load_statistics
        self._manual_launch_allowed = manual_launch_allowed
        self._monitor_data = monitor_data
        self._num_executors = num_executors
        self._offline = offline
        self._offline_cause = offline_cause
        self._offline_cause_reason = offline_cause_reason
        self._temporarily_offline = temporarily_offline

    @classmethod
    def from_dict(cls, dikt) -> 'HudsonmodelHudsonMasterComputer':
        """
        Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The hudsonmodelHudsonMasterComputer of this HudsonmodelHudsonMasterComputer.
        :rtype: HudsonmodelHudsonMasterComputer
        """
        return deserialize_model(dikt, cls)

    @property
    def _class(self) -> str:
        """
        Gets the _class of this HudsonmodelHudsonMasterComputer.

        :return: The _class of this HudsonmodelHudsonMasterComputer.
        :rtype: str
        """
        return self.__class

    @_class.setter
    def _class(self, _class: str):
        """
        Sets the _class of this HudsonmodelHudsonMasterComputer.

        :param _class: The _class of this HudsonmodelHudsonMasterComputer.
        :type _class: str
        """

        self.__class = _class

    @property
    def display_name(self) -> str:
        """
        Gets the display_name of this HudsonmodelHudsonMasterComputer.

        :return: The display_name of this HudsonmodelHudsonMasterComputer.
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name: str):
        """
        Sets the display_name of this HudsonmodelHudsonMasterComputer.

        :param display_name: The display_name of this HudsonmodelHudsonMasterComputer.
        :type display_name: str
        """

        self._display_name = display_name

    @property
    def executors(self) -> List[HudsonmodelHudsonMasterComputerexecutors]:
        """
        Gets the executors of this HudsonmodelHudsonMasterComputer.

        :return: The executors of this HudsonmodelHudsonMasterComputer.
        :rtype: List[HudsonmodelHudsonMasterComputerexecutors]
        """
        return self._executors

    @executors.setter
    def executors(self, executors: List[HudsonmodelHudsonMasterComputerexecutors]):
        """
        Sets the executors of this HudsonmodelHudsonMasterComputer.

        :param executors: The executors of this HudsonmodelHudsonMasterComputer.
        :type executors: List[HudsonmodelHudsonMasterComputerexecutors]
        """

        self._executors = executors

    @property
    def icon(self) -> str:
        """
        Gets the icon of this HudsonmodelHudsonMasterComputer.

        :return: The icon of this HudsonmodelHudsonMasterComputer.
        :rtype: str
        """
        return self._icon

    @icon.setter
    def icon(self, icon: str):
        """
        Sets the icon of this HudsonmodelHudsonMasterComputer.

        :param icon: The icon of this HudsonmodelHudsonMasterComputer.
        :type icon: str
        """

        self._icon = icon

    @property
    def icon_class_name(self) -> str:
        """
        Gets the icon_class_name of this HudsonmodelHudsonMasterComputer.

        :return: The icon_class_name of this HudsonmodelHudsonMasterComputer.
        :rtype: str
        """
        return self._icon_class_name

    @icon_class_name.setter
    def icon_class_name(self, icon_class_name: str):
        """
        Sets the icon_class_name of this HudsonmodelHudsonMasterComputer.

        :param icon_class_name: The icon_class_name of this HudsonmodelHudsonMasterComputer.
        :type icon_class_name: str
        """

        self._icon_class_name = icon_class_name

    @property
    def idle(self) -> bool:
        """
        Gets the idle of this HudsonmodelHudsonMasterComputer.

        :return: The idle of this HudsonmodelHudsonMasterComputer.
        :rtype: bool
        """
        return self._idle

    @idle.setter
    def idle(self, idle: bool):
        """
        Sets the idle of this HudsonmodelHudsonMasterComputer.

        :param idle: The idle of this HudsonmodelHudsonMasterComputer.
        :type idle: bool
        """

        self._idle = idle

    @property
    def jnlp_agent(self) -> bool:
        """
        Gets the jnlp_agent of this HudsonmodelHudsonMasterComputer.

        :return: The jnlp_agent of this HudsonmodelHudsonMasterComputer.
        :rtype: bool
        """
        return self._jnlp_agent

    @jnlp_agent.setter
    def jnlp_agent(self, jnlp_agent: bool):
        """
        Sets the jnlp_agent of this HudsonmodelHudsonMasterComputer.

        :param jnlp_agent: The jnlp_agent of this HudsonmodelHudsonMasterComputer.
        :type jnlp_agent: bool
        """

        self._jnlp_agent = jnlp_agent

    @property
    def launch_supported(self) -> bool:
        """
        Gets the launch_supported of this HudsonmodelHudsonMasterComputer.

        :return: The launch_supported of this HudsonmodelHudsonMasterComputer.
        :rtype: bool
        """
        return self._launch_supported

    @launch_supported.setter
    def launch_supported(self, launch_supported: bool):
        """
        Sets the launch_supported of this HudsonmodelHudsonMasterComputer.

        :param launch_supported: The launch_supported of this HudsonmodelHudsonMasterComputer.
        :type launch_supported: bool
        """

        self._launch_supported = launch_supported

    @property
    def load_statistics(self) -> HudsonmodelLabel1:
        """
        Gets the load_statistics of this HudsonmodelHudsonMasterComputer.

        :return: The load_statistics of this HudsonmodelHudsonMasterComputer.
        :rtype: HudsonmodelLabel1
        """
        return self._load_statistics

    @load_statistics.setter
    def load_statistics(self, load_statistics: HudsonmodelLabel1):
        """
        Sets the load_statistics of this HudsonmodelHudsonMasterComputer.

        :param load_statistics: The load_statistics of this HudsonmodelHudsonMasterComputer.
        :type load_statistics: HudsonmodelLabel1
        """

        self._load_statistics = load_statistics

    @property
    def manual_launch_allowed(self) -> bool:
        """
        Gets the manual_launch_allowed of this HudsonmodelHudsonMasterComputer.

        :return: The manual_launch_allowed of this HudsonmodelHudsonMasterComputer.
        :rtype: bool
        """
        return self._manual_launch_allowed

    @manual_launch_allowed.setter
    def manual_launch_allowed(self, manual_launch_allowed: bool):
        """
        Sets the manual_launch_allowed of this HudsonmodelHudsonMasterComputer.

        :param manual_launch_allowed: The manual_launch_allowed of this HudsonmodelHudsonMasterComputer.
        :type manual_launch_allowed: bool
        """

        self._manual_launch_allowed = manual_launch_allowed

    @property
    def monitor_data(self) -> HudsonmodelHudsonMasterComputerMonitorData:
        """
        Gets the monitor_data of this HudsonmodelHudsonMasterComputer.

        :return: The monitor_data of this HudsonmodelHudsonMasterComputer.
        :rtype: HudsonmodelHudsonMasterComputerMonitorData
        """
        return self._monitor_data

    @monitor_data.setter
    def monitor_data(self, monitor_data: HudsonmodelHudsonMasterComputerMonitorData):
        """
        Sets the monitor_data of this HudsonmodelHudsonMasterComputer.

        :param monitor_data: The monitor_data of this HudsonmodelHudsonMasterComputer.
        :type monitor_data: HudsonmodelHudsonMasterComputerMonitorData
        """

        self._monitor_data = monitor_data

    @property
    def num_executors(self) -> int:
        """
        Gets the num_executors of this HudsonmodelHudsonMasterComputer.

        :return: The num_executors of this HudsonmodelHudsonMasterComputer.
        :rtype: int
        """
        return self._num_executors

    @num_executors.setter
    def num_executors(self, num_executors: int):
        """
        Sets the num_executors of this HudsonmodelHudsonMasterComputer.

        :param num_executors: The num_executors of this HudsonmodelHudsonMasterComputer.
        :type num_executors: int
        """

        self._num_executors = num_executors

    @property
    def offline(self) -> bool:
        """
        Gets the offline of this HudsonmodelHudsonMasterComputer.

        :return: The offline of this HudsonmodelHudsonMasterComputer.
        :rtype: bool
        """
        return self._offline

    @offline.setter
    def offline(self, offline: bool):
        """
        Sets the offline of this HudsonmodelHudsonMasterComputer.

        :param offline: The offline of this HudsonmodelHudsonMasterComputer.
        :type offline: bool
        """

        self._offline = offline

    @property
    def offline_cause(self) -> str:
        """
        Gets the offline_cause of this HudsonmodelHudsonMasterComputer.

        :return: The offline_cause of this HudsonmodelHudsonMasterComputer.
        :rtype: str
        """
        return self._offline_cause

    @offline_cause.setter
    def offline_cause(self, offline_cause: str):
        """
        Sets the offline_cause of this HudsonmodelHudsonMasterComputer.

        :param offline_cause: The offline_cause of this HudsonmodelHudsonMasterComputer.
        :type offline_cause: str
        """

        self._offline_cause = offline_cause

    @property
    def offline_cause_reason(self) -> str:
        """
        Gets the offline_cause_reason of this HudsonmodelHudsonMasterComputer.

        :return: The offline_cause_reason of this HudsonmodelHudsonMasterComputer.
        :rtype: str
        """
        return self._offline_cause_reason

    @offline_cause_reason.setter
    def offline_cause_reason(self, offline_cause_reason: str):
        """
        Sets the offline_cause_reason of this HudsonmodelHudsonMasterComputer.

        :param offline_cause_reason: The offline_cause_reason of this HudsonmodelHudsonMasterComputer.
        :type offline_cause_reason: str
        """

        self._offline_cause_reason = offline_cause_reason

    @property
    def temporarily_offline(self) -> bool:
        """
        Gets the temporarily_offline of this HudsonmodelHudsonMasterComputer.

        :return: The temporarily_offline of this HudsonmodelHudsonMasterComputer.
        :rtype: bool
        """
        return self._temporarily_offline

    @temporarily_offline.setter
    def temporarily_offline(self, temporarily_offline: bool):
        """
        Sets the temporarily_offline of this HudsonmodelHudsonMasterComputer.

        :param temporarily_offline: The temporarily_offline of this HudsonmodelHudsonMasterComputer.
        :type temporarily_offline: bool
        """

        self._temporarily_offline = temporarily_offline
