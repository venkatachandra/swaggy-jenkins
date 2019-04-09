/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import org.openapitools.client.model.StringParameterValue;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class StringParameterDefinition {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("defaultParameterValue")
  private StringParameterValue defaultParameterValue = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("type")
  private String type = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getClass() {
    return _class;
  }
  public void setClass(String _class) {
    this._class = _class;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public StringParameterValue getDefaultParameterValue() {
    return defaultParameterValue;
  }
  public void setDefaultParameterValue(StringParameterValue defaultParameterValue) {
    this.defaultParameterValue = defaultParameterValue;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    StringParameterDefinition stringParameterDefinition = (StringParameterDefinition) o;
    return (this._class == null ? stringParameterDefinition._class == null : this._class.equals(stringParameterDefinition._class)) &&
        (this.defaultParameterValue == null ? stringParameterDefinition.defaultParameterValue == null : this.defaultParameterValue.equals(stringParameterDefinition.defaultParameterValue)) &&
        (this.description == null ? stringParameterDefinition.description == null : this.description.equals(stringParameterDefinition.description)) &&
        (this.name == null ? stringParameterDefinition.name == null : this.name.equals(stringParameterDefinition.name)) &&
        (this.type == null ? stringParameterDefinition.type == null : this.type.equals(stringParameterDefinition.type));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.defaultParameterValue == null ? 0: this.defaultParameterValue.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.name == null ? 0: this.name.hashCode());
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class StringParameterDefinition {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  defaultParameterValue: ").append(defaultParameterValue).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
