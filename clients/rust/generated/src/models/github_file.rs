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
pub struct GithubFile {
  #[serde(rename = "content")]
  content: Option<::models::GithubContent>,
  #[serde(rename = "_class")]
  _class: Option<String>
}

impl GithubFile {
  pub fn new() -> GithubFile {
    GithubFile {
      content: None,
      _class: None
    }
  }

  pub fn set_content(&mut self, content: ::models::GithubContent) {
    self.content = Some(content);
  }

  pub fn with_content(mut self, content: ::models::GithubContent) -> GithubFile {
    self.content = Some(content);
    self
  }

  pub fn content(&self) -> Option<&::models::GithubContent> {
    self.content.as_ref()
  }

  pub fn reset_content(&mut self) {
    self.content = None;
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> GithubFile {
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



