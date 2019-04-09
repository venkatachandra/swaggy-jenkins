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
pub struct CauseAction {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "causes")]
  causes: Option<Vec<::models::CauseUserIdCause>>
}

impl CauseAction {
  pub fn new() -> CauseAction {
    CauseAction {
      _class: None,
      causes: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> CauseAction {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_causes(&mut self, causes: Vec<::models::CauseUserIdCause>) {
    self.causes = Some(causes);
  }

  pub fn with_causes(mut self, causes: Vec<::models::CauseUserIdCause>) -> CauseAction {
    self.causes = Some(causes);
    self
  }

  pub fn causes(&self) -> Option<&Vec<::models::CauseUserIdCause>> {
    self.causes.as_ref()
  }

  pub fn reset_causes(&mut self) {
    self.causes = None;
  }

}



