/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct HudsonMasterComputer {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "displayName")]
  display_name: Option<String>,
  #[serde(rename = "executors")]
  executors: Option<Vec<::models::HudsonMasterComputerexecutors>>,
  #[serde(rename = "icon")]
  icon: Option<String>,
  #[serde(rename = "iconClassName")]
  icon_class_name: Option<String>,
  #[serde(rename = "idle")]
  idle: Option<bool>,
  #[serde(rename = "jnlpAgent")]
  jnlp_agent: Option<bool>,
  #[serde(rename = "launchSupported")]
  launch_supported: Option<bool>,
  #[serde(rename = "loadStatistics")]
  load_statistics: Option<::models::Label1>,
  #[serde(rename = "manualLaunchAllowed")]
  manual_launch_allowed: Option<bool>,
  #[serde(rename = "monitorData")]
  monitor_data: Option<::models::HudsonMasterComputermonitorData>,
  #[serde(rename = "numExecutors")]
  num_executors: Option<i32>,
  #[serde(rename = "offline")]
  offline: Option<bool>,
  #[serde(rename = "offlineCause")]
  offline_cause: Option<String>,
  #[serde(rename = "offlineCauseReason")]
  offline_cause_reason: Option<String>,
  #[serde(rename = "temporarilyOffline")]
  temporarily_offline: Option<bool>
}

impl HudsonMasterComputer {
  pub fn new() -> HudsonMasterComputer {
    HudsonMasterComputer {
      _class: None,
      display_name: None,
      executors: None,
      icon: None,
      icon_class_name: None,
      idle: None,
      jnlp_agent: None,
      launch_supported: None,
      load_statistics: None,
      manual_launch_allowed: None,
      monitor_data: None,
      num_executors: None,
      offline: None,
      offline_cause: None,
      offline_cause_reason: None,
      temporarily_offline: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> HudsonMasterComputer {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_display_name(&mut self, display_name: String) {
    self.display_name = Some(display_name);
  }

  pub fn with_display_name(mut self, display_name: String) -> HudsonMasterComputer {
    self.display_name = Some(display_name);
    self
  }

  pub fn display_name(&self) -> Option<&String> {
    self.display_name.as_ref()
  }

  pub fn reset_display_name(&mut self) {
    self.display_name = None;
  }

  pub fn set_executors(&mut self, executors: Vec<::models::HudsonMasterComputerexecutors>) {
    self.executors = Some(executors);
  }

  pub fn with_executors(mut self, executors: Vec<::models::HudsonMasterComputerexecutors>) -> HudsonMasterComputer {
    self.executors = Some(executors);
    self
  }

  pub fn executors(&self) -> Option<&Vec<::models::HudsonMasterComputerexecutors>> {
    self.executors.as_ref()
  }

  pub fn reset_executors(&mut self) {
    self.executors = None;
  }

  pub fn set_icon(&mut self, icon: String) {
    self.icon = Some(icon);
  }

  pub fn with_icon(mut self, icon: String) -> HudsonMasterComputer {
    self.icon = Some(icon);
    self
  }

  pub fn icon(&self) -> Option<&String> {
    self.icon.as_ref()
  }

  pub fn reset_icon(&mut self) {
    self.icon = None;
  }

  pub fn set_icon_class_name(&mut self, icon_class_name: String) {
    self.icon_class_name = Some(icon_class_name);
  }

  pub fn with_icon_class_name(mut self, icon_class_name: String) -> HudsonMasterComputer {
    self.icon_class_name = Some(icon_class_name);
    self
  }

  pub fn icon_class_name(&self) -> Option<&String> {
    self.icon_class_name.as_ref()
  }

  pub fn reset_icon_class_name(&mut self) {
    self.icon_class_name = None;
  }

  pub fn set_idle(&mut self, idle: bool) {
    self.idle = Some(idle);
  }

  pub fn with_idle(mut self, idle: bool) -> HudsonMasterComputer {
    self.idle = Some(idle);
    self
  }

  pub fn idle(&self) -> Option<&bool> {
    self.idle.as_ref()
  }

  pub fn reset_idle(&mut self) {
    self.idle = None;
  }

  pub fn set_jnlp_agent(&mut self, jnlp_agent: bool) {
    self.jnlp_agent = Some(jnlp_agent);
  }

  pub fn with_jnlp_agent(mut self, jnlp_agent: bool) -> HudsonMasterComputer {
    self.jnlp_agent = Some(jnlp_agent);
    self
  }

  pub fn jnlp_agent(&self) -> Option<&bool> {
    self.jnlp_agent.as_ref()
  }

  pub fn reset_jnlp_agent(&mut self) {
    self.jnlp_agent = None;
  }

  pub fn set_launch_supported(&mut self, launch_supported: bool) {
    self.launch_supported = Some(launch_supported);
  }

  pub fn with_launch_supported(mut self, launch_supported: bool) -> HudsonMasterComputer {
    self.launch_supported = Some(launch_supported);
    self
  }

  pub fn launch_supported(&self) -> Option<&bool> {
    self.launch_supported.as_ref()
  }

  pub fn reset_launch_supported(&mut self) {
    self.launch_supported = None;
  }

  pub fn set_load_statistics(&mut self, load_statistics: ::models::Label1) {
    self.load_statistics = Some(load_statistics);
  }

  pub fn with_load_statistics(mut self, load_statistics: ::models::Label1) -> HudsonMasterComputer {
    self.load_statistics = Some(load_statistics);
    self
  }

  pub fn load_statistics(&self) -> Option<&::models::Label1> {
    self.load_statistics.as_ref()
  }

  pub fn reset_load_statistics(&mut self) {
    self.load_statistics = None;
  }

  pub fn set_manual_launch_allowed(&mut self, manual_launch_allowed: bool) {
    self.manual_launch_allowed = Some(manual_launch_allowed);
  }

  pub fn with_manual_launch_allowed(mut self, manual_launch_allowed: bool) -> HudsonMasterComputer {
    self.manual_launch_allowed = Some(manual_launch_allowed);
    self
  }

  pub fn manual_launch_allowed(&self) -> Option<&bool> {
    self.manual_launch_allowed.as_ref()
  }

  pub fn reset_manual_launch_allowed(&mut self) {
    self.manual_launch_allowed = None;
  }

  pub fn set_monitor_data(&mut self, monitor_data: ::models::HudsonMasterComputermonitorData) {
    self.monitor_data = Some(monitor_data);
  }

  pub fn with_monitor_data(mut self, monitor_data: ::models::HudsonMasterComputermonitorData) -> HudsonMasterComputer {
    self.monitor_data = Some(monitor_data);
    self
  }

  pub fn monitor_data(&self) -> Option<&::models::HudsonMasterComputermonitorData> {
    self.monitor_data.as_ref()
  }

  pub fn reset_monitor_data(&mut self) {
    self.monitor_data = None;
  }

  pub fn set_num_executors(&mut self, num_executors: i32) {
    self.num_executors = Some(num_executors);
  }

  pub fn with_num_executors(mut self, num_executors: i32) -> HudsonMasterComputer {
    self.num_executors = Some(num_executors);
    self
  }

  pub fn num_executors(&self) -> Option<&i32> {
    self.num_executors.as_ref()
  }

  pub fn reset_num_executors(&mut self) {
    self.num_executors = None;
  }

  pub fn set_offline(&mut self, offline: bool) {
    self.offline = Some(offline);
  }

  pub fn with_offline(mut self, offline: bool) -> HudsonMasterComputer {
    self.offline = Some(offline);
    self
  }

  pub fn offline(&self) -> Option<&bool> {
    self.offline.as_ref()
  }

  pub fn reset_offline(&mut self) {
    self.offline = None;
  }

  pub fn set_offline_cause(&mut self, offline_cause: String) {
    self.offline_cause = Some(offline_cause);
  }

  pub fn with_offline_cause(mut self, offline_cause: String) -> HudsonMasterComputer {
    self.offline_cause = Some(offline_cause);
    self
  }

  pub fn offline_cause(&self) -> Option<&String> {
    self.offline_cause.as_ref()
  }

  pub fn reset_offline_cause(&mut self) {
    self.offline_cause = None;
  }

  pub fn set_offline_cause_reason(&mut self, offline_cause_reason: String) {
    self.offline_cause_reason = Some(offline_cause_reason);
  }

  pub fn with_offline_cause_reason(mut self, offline_cause_reason: String) -> HudsonMasterComputer {
    self.offline_cause_reason = Some(offline_cause_reason);
    self
  }

  pub fn offline_cause_reason(&self) -> Option<&String> {
    self.offline_cause_reason.as_ref()
  }

  pub fn reset_offline_cause_reason(&mut self) {
    self.offline_cause_reason = None;
  }

  pub fn set_temporarily_offline(&mut self, temporarily_offline: bool) {
    self.temporarily_offline = Some(temporarily_offline);
  }

  pub fn with_temporarily_offline(mut self, temporarily_offline: bool) -> HudsonMasterComputer {
    self.temporarily_offline = Some(temporarily_offline);
    self
  }

  pub fn temporarily_offline(&self) -> Option<&bool> {
    self.temporarily_offline.as_ref()
  }

  pub fn reset_temporarily_offline(&mut self) {
    self.temporarily_offline = None;
  }

}



