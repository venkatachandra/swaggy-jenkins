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
pub struct StringParameterDefinition {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "defaultParameterValue")]
  default_parameter_value: Option<::models::StringParameterValue>,
  #[serde(rename = "description")]
  description: Option<String>,
  #[serde(rename = "name")]
  name: Option<String>,
  #[serde(rename = "type")]
  _type: Option<String>
}

impl StringParameterDefinition {
  pub fn new() -> StringParameterDefinition {
    StringParameterDefinition {
      _class: None,
      default_parameter_value: None,
      description: None,
      name: None,
      _type: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> StringParameterDefinition {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_default_parameter_value(&mut self, default_parameter_value: ::models::StringParameterValue) {
    self.default_parameter_value = Some(default_parameter_value);
  }

  pub fn with_default_parameter_value(mut self, default_parameter_value: ::models::StringParameterValue) -> StringParameterDefinition {
    self.default_parameter_value = Some(default_parameter_value);
    self
  }

  pub fn default_parameter_value(&self) -> Option<&::models::StringParameterValue> {
    self.default_parameter_value.as_ref()
  }

  pub fn reset_default_parameter_value(&mut self) {
    self.default_parameter_value = None;
  }

  pub fn set_description(&mut self, description: String) {
    self.description = Some(description);
  }

  pub fn with_description(mut self, description: String) -> StringParameterDefinition {
    self.description = Some(description);
    self
  }

  pub fn description(&self) -> Option<&String> {
    self.description.as_ref()
  }

  pub fn reset_description(&mut self) {
    self.description = None;
  }

  pub fn set_name(&mut self, name: String) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: String) -> StringParameterDefinition {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&String> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set__type(&mut self, _type: String) {
    self._type = Some(_type);
  }

  pub fn with__type(mut self, _type: String) -> StringParameterDefinition {
    self._type = Some(_type);
    self
  }

  pub fn _type(&self) -> Option<&String> {
    self._type.as_ref()
  }

  pub fn reset__type(&mut self) {
    self._type = None;
  }

}



