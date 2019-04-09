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

import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class QueueItemImpl {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("expectedBuildNumber")
  private Integer expectedBuildNumber = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("pipeline")
  private String pipeline = null;
  @SerializedName("queuedTime")
  private Integer queuedTime = null;

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
  public Integer getExpectedBuildNumber() {
    return expectedBuildNumber;
  }
  public void setExpectedBuildNumber(Integer expectedBuildNumber) {
    this.expectedBuildNumber = expectedBuildNumber;
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
  public String getPipeline() {
    return pipeline;
  }
  public void setPipeline(String pipeline) {
    this.pipeline = pipeline;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getQueuedTime() {
    return queuedTime;
  }
  public void setQueuedTime(Integer queuedTime) {
    this.queuedTime = queuedTime;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QueueItemImpl queueItemImpl = (QueueItemImpl) o;
    return (this._class == null ? queueItemImpl._class == null : this._class.equals(queueItemImpl._class)) &&
        (this.expectedBuildNumber == null ? queueItemImpl.expectedBuildNumber == null : this.expectedBuildNumber.equals(queueItemImpl.expectedBuildNumber)) &&
        (this.id == null ? queueItemImpl.id == null : this.id.equals(queueItemImpl.id)) &&
        (this.pipeline == null ? queueItemImpl.pipeline == null : this.pipeline.equals(queueItemImpl.pipeline)) &&
        (this.queuedTime == null ? queueItemImpl.queuedTime == null : this.queuedTime.equals(queueItemImpl.queuedTime));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.expectedBuildNumber == null ? 0: this.expectedBuildNumber.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.pipeline == null ? 0: this.pipeline.hashCode());
    result = 31 * result + (this.queuedTime == null ? 0: this.queuedTime.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueueItemImpl {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  expectedBuildNumber: ").append(expectedBuildNumber).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  pipeline: ").append(pipeline).append("\n");
    sb.append("  queuedTime: ").append(queuedTime).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
