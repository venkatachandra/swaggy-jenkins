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
pub struct PipelineBranchesitempullRequestlinks {
  #[serde(rename = "self")]
  _self: Option<String>,
  #[serde(rename = "_class")]
  _class: Option<String>
}

impl PipelineBranchesitempullRequestlinks {
  pub fn new() -> PipelineBranchesitempullRequestlinks {
    PipelineBranchesitempullRequestlinks {
      _self: None,
      _class: None
    }
  }

  pub fn set__self(&mut self, _self: String) {
    self._self = Some(_self);
  }

  pub fn with__self(mut self, _self: String) -> PipelineBranchesitempullRequestlinks {
    self._self = Some(_self);
    self
  }

  pub fn _self(&self) -> Option<&String> {
    self._self.as_ref()
  }

  pub fn reset__self(&mut self) {
    self._self = None;
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> PipelineBranchesitempullRequestlinks {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

}



