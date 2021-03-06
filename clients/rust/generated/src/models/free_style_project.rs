/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct FreeStyleProject {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "name")]
  name: Option<String>,
  #[serde(rename = "url")]
  url: Option<String>,
  #[serde(rename = "color")]
  color: Option<String>,
  #[serde(rename = "actions")]
  actions: Option<Vec<::models::FreeStyleProjectactions>>,
  #[serde(rename = "description")]
  description: Option<String>,
  #[serde(rename = "displayName")]
  display_name: Option<String>,
  #[serde(rename = "displayNameOrNull")]
  display_name_or_null: Option<String>,
  #[serde(rename = "fullDisplayName")]
  full_display_name: Option<String>,
  #[serde(rename = "fullName")]
  full_name: Option<String>,
  #[serde(rename = "buildable")]
  buildable: Option<bool>,
  #[serde(rename = "builds")]
  builds: Option<Vec<::models::FreeStyleBuild>>,
  #[serde(rename = "firstBuild")]
  first_build: Option<::models::FreeStyleBuild>,
  #[serde(rename = "healthReport")]
  health_report: Option<Vec<::models::FreeStyleProjecthealthReport>>,
  #[serde(rename = "inQueue")]
  in_queue: Option<bool>,
  #[serde(rename = "keepDependencies")]
  keep_dependencies: Option<bool>,
  #[serde(rename = "lastBuild")]
  last_build: Option<::models::FreeStyleBuild>,
  #[serde(rename = "lastCompletedBuild")]
  last_completed_build: Option<::models::FreeStyleBuild>,
  #[serde(rename = "lastFailedBuild")]
  last_failed_build: Option<String>,
  #[serde(rename = "lastStableBuild")]
  last_stable_build: Option<::models::FreeStyleBuild>,
  #[serde(rename = "lastSuccessfulBuild")]
  last_successful_build: Option<::models::FreeStyleBuild>,
  #[serde(rename = "lastUnstableBuild")]
  last_unstable_build: Option<String>,
  #[serde(rename = "lastUnsuccessfulBuild")]
  last_unsuccessful_build: Option<String>,
  #[serde(rename = "nextBuildNumber")]
  next_build_number: Option<i32>,
  #[serde(rename = "queueItem")]
  queue_item: Option<String>,
  #[serde(rename = "concurrentBuild")]
  concurrent_build: Option<bool>,
  #[serde(rename = "scm")]
  scm: Option<::models::NullScm>
}

impl FreeStyleProject {
  pub fn new() -> FreeStyleProject {
    FreeStyleProject {
      _class: None,
      name: None,
      url: None,
      color: None,
      actions: None,
      description: None,
      display_name: None,
      display_name_or_null: None,
      full_display_name: None,
      full_name: None,
      buildable: None,
      builds: None,
      first_build: None,
      health_report: None,
      in_queue: None,
      keep_dependencies: None,
      last_build: None,
      last_completed_build: None,
      last_failed_build: None,
      last_stable_build: None,
      last_successful_build: None,
      last_unstable_build: None,
      last_unsuccessful_build: None,
      next_build_number: None,
      queue_item: None,
      concurrent_build: None,
      scm: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> FreeStyleProject {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_name(&mut self, name: String) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: String) -> FreeStyleProject {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&String> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_url(&mut self, url: String) {
    self.url = Some(url);
  }

  pub fn with_url(mut self, url: String) -> FreeStyleProject {
    self.url = Some(url);
    self
  }

  pub fn url(&self) -> Option<&String> {
    self.url.as_ref()
  }

  pub fn reset_url(&mut self) {
    self.url = None;
  }

  pub fn set_color(&mut self, color: String) {
    self.color = Some(color);
  }

  pub fn with_color(mut self, color: String) -> FreeStyleProject {
    self.color = Some(color);
    self
  }

  pub fn color(&self) -> Option<&String> {
    self.color.as_ref()
  }

  pub fn reset_color(&mut self) {
    self.color = None;
  }

  pub fn set_actions(&mut self, actions: Vec<::models::FreeStyleProjectactions>) {
    self.actions = Some(actions);
  }

  pub fn with_actions(mut self, actions: Vec<::models::FreeStyleProjectactions>) -> FreeStyleProject {
    self.actions = Some(actions);
    self
  }

  pub fn actions(&self) -> Option<&Vec<::models::FreeStyleProjectactions>> {
    self.actions.as_ref()
  }

  pub fn reset_actions(&mut self) {
    self.actions = None;
  }

  pub fn set_description(&mut self, description: String) {
    self.description = Some(description);
  }

  pub fn with_description(mut self, description: String) -> FreeStyleProject {
    self.description = Some(description);
    self
  }

  pub fn description(&self) -> Option<&String> {
    self.description.as_ref()
  }

  pub fn reset_description(&mut self) {
    self.description = None;
  }

  pub fn set_display_name(&mut self, display_name: String) {
    self.display_name = Some(display_name);
  }

  pub fn with_display_name(mut self, display_name: String) -> FreeStyleProject {
    self.display_name = Some(display_name);
    self
  }

  pub fn display_name(&self) -> Option<&String> {
    self.display_name.as_ref()
  }

  pub fn reset_display_name(&mut self) {
    self.display_name = None;
  }

  pub fn set_display_name_or_null(&mut self, display_name_or_null: String) {
    self.display_name_or_null = Some(display_name_or_null);
  }

  pub fn with_display_name_or_null(mut self, display_name_or_null: String) -> FreeStyleProject {
    self.display_name_or_null = Some(display_name_or_null);
    self
  }

  pub fn display_name_or_null(&self) -> Option<&String> {
    self.display_name_or_null.as_ref()
  }

  pub fn reset_display_name_or_null(&mut self) {
    self.display_name_or_null = None;
  }

  pub fn set_full_display_name(&mut self, full_display_name: String) {
    self.full_display_name = Some(full_display_name);
  }

  pub fn with_full_display_name(mut self, full_display_name: String) -> FreeStyleProject {
    self.full_display_name = Some(full_display_name);
    self
  }

  pub fn full_display_name(&self) -> Option<&String> {
    self.full_display_name.as_ref()
  }

  pub fn reset_full_display_name(&mut self) {
    self.full_display_name = None;
  }

  pub fn set_full_name(&mut self, full_name: String) {
    self.full_name = Some(full_name);
  }

  pub fn with_full_name(mut self, full_name: String) -> FreeStyleProject {
    self.full_name = Some(full_name);
    self
  }

  pub fn full_name(&self) -> Option<&String> {
    self.full_name.as_ref()
  }

  pub fn reset_full_name(&mut self) {
    self.full_name = None;
  }

  pub fn set_buildable(&mut self, buildable: bool) {
    self.buildable = Some(buildable);
  }

  pub fn with_buildable(mut self, buildable: bool) -> FreeStyleProject {
    self.buildable = Some(buildable);
    self
  }

  pub fn buildable(&self) -> Option<&bool> {
    self.buildable.as_ref()
  }

  pub fn reset_buildable(&mut self) {
    self.buildable = None;
  }

  pub fn set_builds(&mut self, builds: Vec<::models::FreeStyleBuild>) {
    self.builds = Some(builds);
  }

  pub fn with_builds(mut self, builds: Vec<::models::FreeStyleBuild>) -> FreeStyleProject {
    self.builds = Some(builds);
    self
  }

  pub fn builds(&self) -> Option<&Vec<::models::FreeStyleBuild>> {
    self.builds.as_ref()
  }

  pub fn reset_builds(&mut self) {
    self.builds = None;
  }

  pub fn set_first_build(&mut self, first_build: ::models::FreeStyleBuild) {
    self.first_build = Some(first_build);
  }

  pub fn with_first_build(mut self, first_build: ::models::FreeStyleBuild) -> FreeStyleProject {
    self.first_build = Some(first_build);
    self
  }

  pub fn first_build(&self) -> Option<&::models::FreeStyleBuild> {
    self.first_build.as_ref()
  }

  pub fn reset_first_build(&mut self) {
    self.first_build = None;
  }

  pub fn set_health_report(&mut self, health_report: Vec<::models::FreeStyleProjecthealthReport>) {
    self.health_report = Some(health_report);
  }

  pub fn with_health_report(mut self, health_report: Vec<::models::FreeStyleProjecthealthReport>) -> FreeStyleProject {
    self.health_report = Some(health_report);
    self
  }

  pub fn health_report(&self) -> Option<&Vec<::models::FreeStyleProjecthealthReport>> {
    self.health_report.as_ref()
  }

  pub fn reset_health_report(&mut self) {
    self.health_report = None;
  }

  pub fn set_in_queue(&mut self, in_queue: bool) {
    self.in_queue = Some(in_queue);
  }

  pub fn with_in_queue(mut self, in_queue: bool) -> FreeStyleProject {
    self.in_queue = Some(in_queue);
    self
  }

  pub fn in_queue(&self) -> Option<&bool> {
    self.in_queue.as_ref()
  }

  pub fn reset_in_queue(&mut self) {
    self.in_queue = None;
  }

  pub fn set_keep_dependencies(&mut self, keep_dependencies: bool) {
    self.keep_dependencies = Some(keep_dependencies);
  }

  pub fn with_keep_dependencies(mut self, keep_dependencies: bool) -> FreeStyleProject {
    self.keep_dependencies = Some(keep_dependencies);
    self
  }

  pub fn keep_dependencies(&self) -> Option<&bool> {
    self.keep_dependencies.as_ref()
  }

  pub fn reset_keep_dependencies(&mut self) {
    self.keep_dependencies = None;
  }

  pub fn set_last_build(&mut self, last_build: ::models::FreeStyleBuild) {
    self.last_build = Some(last_build);
  }

  pub fn with_last_build(mut self, last_build: ::models::FreeStyleBuild) -> FreeStyleProject {
    self.last_build = Some(last_build);
    self
  }

  pub fn last_build(&self) -> Option<&::models::FreeStyleBuild> {
    self.last_build.as_ref()
  }

  pub fn reset_last_build(&mut self) {
    self.last_build = None;
  }

  pub fn set_last_completed_build(&mut self, last_completed_build: ::models::FreeStyleBuild) {
    self.last_completed_build = Some(last_completed_build);
  }

  pub fn with_last_completed_build(mut self, last_completed_build: ::models::FreeStyleBuild) -> FreeStyleProject {
    self.last_completed_build = Some(last_completed_build);
    self
  }

  pub fn last_completed_build(&self) -> Option<&::models::FreeStyleBuild> {
    self.last_completed_build.as_ref()
  }

  pub fn reset_last_completed_build(&mut self) {
    self.last_completed_build = None;
  }

  pub fn set_last_failed_build(&mut self, last_failed_build: String) {
    self.last_failed_build = Some(last_failed_build);
  }

  pub fn with_last_failed_build(mut self, last_failed_build: String) -> FreeStyleProject {
    self.last_failed_build = Some(last_failed_build);
    self
  }

  pub fn last_failed_build(&self) -> Option<&String> {
    self.last_failed_build.as_ref()
  }

  pub fn reset_last_failed_build(&mut self) {
    self.last_failed_build = None;
  }

  pub fn set_last_stable_build(&mut self, last_stable_build: ::models::FreeStyleBuild) {
    self.last_stable_build = Some(last_stable_build);
  }

  pub fn with_last_stable_build(mut self, last_stable_build: ::models::FreeStyleBuild) -> FreeStyleProject {
    self.last_stable_build = Some(last_stable_build);
    self
  }

  pub fn last_stable_build(&self) -> Option<&::models::FreeStyleBuild> {
    self.last_stable_build.as_ref()
  }

  pub fn reset_last_stable_build(&mut self) {
    self.last_stable_build = None;
  }

  pub fn set_last_successful_build(&mut self, last_successful_build: ::models::FreeStyleBuild) {
    self.last_successful_build = Some(last_successful_build);
  }

  pub fn with_last_successful_build(mut self, last_successful_build: ::models::FreeStyleBuild) -> FreeStyleProject {
    self.last_successful_build = Some(last_successful_build);
    self
  }

  pub fn last_successful_build(&self) -> Option<&::models::FreeStyleBuild> {
    self.last_successful_build.as_ref()
  }

  pub fn reset_last_successful_build(&mut self) {
    self.last_successful_build = None;
  }

  pub fn set_last_unstable_build(&mut self, last_unstable_build: String) {
    self.last_unstable_build = Some(last_unstable_build);
  }

  pub fn with_last_unstable_build(mut self, last_unstable_build: String) -> FreeStyleProject {
    self.last_unstable_build = Some(last_unstable_build);
    self
  }

  pub fn last_unstable_build(&self) -> Option<&String> {
    self.last_unstable_build.as_ref()
  }

  pub fn reset_last_unstable_build(&mut self) {
    self.last_unstable_build = None;
  }

  pub fn set_last_unsuccessful_build(&mut self, last_unsuccessful_build: String) {
    self.last_unsuccessful_build = Some(last_unsuccessful_build);
  }

  pub fn with_last_unsuccessful_build(mut self, last_unsuccessful_build: String) -> FreeStyleProject {
    self.last_unsuccessful_build = Some(last_unsuccessful_build);
    self
  }

  pub fn last_unsuccessful_build(&self) -> Option<&String> {
    self.last_unsuccessful_build.as_ref()
  }

  pub fn reset_last_unsuccessful_build(&mut self) {
    self.last_unsuccessful_build = None;
  }

  pub fn set_next_build_number(&mut self, next_build_number: i32) {
    self.next_build_number = Some(next_build_number);
  }

  pub fn with_next_build_number(mut self, next_build_number: i32) -> FreeStyleProject {
    self.next_build_number = Some(next_build_number);
    self
  }

  pub fn next_build_number(&self) -> Option<&i32> {
    self.next_build_number.as_ref()
  }

  pub fn reset_next_build_number(&mut self) {
    self.next_build_number = None;
  }

  pub fn set_queue_item(&mut self, queue_item: String) {
    self.queue_item = Some(queue_item);
  }

  pub fn with_queue_item(mut self, queue_item: String) -> FreeStyleProject {
    self.queue_item = Some(queue_item);
    self
  }

  pub fn queue_item(&self) -> Option<&String> {
    self.queue_item.as_ref()
  }

  pub fn reset_queue_item(&mut self) {
    self.queue_item = None;
  }

  pub fn set_concurrent_build(&mut self, concurrent_build: bool) {
    self.concurrent_build = Some(concurrent_build);
  }

  pub fn with_concurrent_build(mut self, concurrent_build: bool) -> FreeStyleProject {
    self.concurrent_build = Some(concurrent_build);
    self
  }

  pub fn concurrent_build(&self) -> Option<&bool> {
    self.concurrent_build.as_ref()
  }

  pub fn reset_concurrent_build(&mut self) {
    self.concurrent_build = None;
  }

  pub fn set_scm(&mut self, scm: ::models::NullScm) {
    self.scm = Some(scm);
  }

  pub fn with_scm(mut self, scm: ::models::NullScm) -> FreeStyleProject {
    self.scm = Some(scm);
    self
  }

  pub fn scm(&self) -> Option<&::models::NullScm> {
    self.scm.as_ref()
  }

  pub fn reset_scm(&mut self) {
    self.scm = None;
  }

}



