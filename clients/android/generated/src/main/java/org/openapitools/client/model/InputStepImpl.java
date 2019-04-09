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

import java.util.*;
import org.openapitools.client.model.InputStepImpllinks;
import org.openapitools.client.model.StringParameterDefinition;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class InputStepImpl {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("_links")
  private InputStepImpllinks links = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("message")
  private String message = null;
  @SerializedName("ok")
  private String ok = null;
  @SerializedName("parameters")
  private List<StringParameterDefinition> parameters = null;
  @SerializedName("submitter")
  private String submitter = null;

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
  public InputStepImpllinks getLinks() {
    return links;
  }
  public void setLinks(InputStepImpllinks links) {
    this.links = links;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getOk() {
    return ok;
  }
  public void setOk(String ok) {
    this.ok = ok;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<StringParameterDefinition> getParameters() {
    return parameters;
  }
  public void setParameters(List<StringParameterDefinition> parameters) {
    this.parameters = parameters;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getSubmitter() {
    return submitter;
  }
  public void setSubmitter(String submitter) {
    this.submitter = submitter;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InputStepImpl inputStepImpl = (InputStepImpl) o;
    return (this._class == null ? inputStepImpl._class == null : this._class.equals(inputStepImpl._class)) &&
        (this.links == null ? inputStepImpl.links == null : this.links.equals(inputStepImpl.links)) &&
        (this.id == null ? inputStepImpl.id == null : this.id.equals(inputStepImpl.id)) &&
        (this.message == null ? inputStepImpl.message == null : this.message.equals(inputStepImpl.message)) &&
        (this.ok == null ? inputStepImpl.ok == null : this.ok.equals(inputStepImpl.ok)) &&
        (this.parameters == null ? inputStepImpl.parameters == null : this.parameters.equals(inputStepImpl.parameters)) &&
        (this.submitter == null ? inputStepImpl.submitter == null : this.submitter.equals(inputStepImpl.submitter));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.links == null ? 0: this.links.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.message == null ? 0: this.message.hashCode());
    result = 31 * result + (this.ok == null ? 0: this.ok.hashCode());
    result = 31 * result + (this.parameters == null ? 0: this.parameters.hashCode());
    result = 31 * result + (this.submitter == null ? 0: this.submitter.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class InputStepImpl {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  links: ").append(links).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  message: ").append(message).append("\n");
    sb.append("  ok: ").append(ok).append("\n");
    sb.append("  parameters: ").append(parameters).append("\n");
    sb.append("  submitter: ").append(submitter).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
