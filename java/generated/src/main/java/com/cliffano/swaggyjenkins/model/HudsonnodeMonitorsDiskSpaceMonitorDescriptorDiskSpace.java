/*
 * Swaggy Jenkins
 * Jenkins API client generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package com.cliffano.swaggyjenkins.model;

import java.util.Objects;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace
 */
<<<<<<< 1690c683609f02ab08c4865de97d272e4271f5d3
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:24:14.392+10:00")
=======
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:26:55.163+10:00")
>>>>>>> Initial java client generation.
public class HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace {
  @SerializedName("_class")
  private String propertyClass = null;

  @SerializedName("timestamp")
  private Integer timestamp = null;

  @SerializedName("path")
  private String path = null;

  @SerializedName("size")
  private Integer size = null;

  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
  @ApiModelProperty(value = "")
  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace timestamp(Integer timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @ApiModelProperty(value = "")
  public Integer getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(Integer timestamp) {
    this.timestamp = timestamp;
  }

  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace path(String path) {
    this.path = path;
    return this;
  }

   /**
   * Get path
   * @return path
  **/
  @ApiModelProperty(value = "")
  public String getPath() {
    return path;
  }

  public void setPath(String path) {
    this.path = path;
  }

  public HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace size(Integer size) {
    this.size = size;
    return this;
  }

   /**
   * Get size
   * @return size
  **/
  @ApiModelProperty(value = "")
  public Integer getSize() {
    return size;
  }

  public void setSize(Integer size) {
    this.size = size;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace = (HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace) o;
    return Objects.equals(this.propertyClass, hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.propertyClass) &&
        Objects.equals(this.timestamp, hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.timestamp) &&
        Objects.equals(this.path, hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.path) &&
        Objects.equals(this.size, hudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace.size);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, timestamp, path, size);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    path: ").append(toIndentedString(path)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
  
}

