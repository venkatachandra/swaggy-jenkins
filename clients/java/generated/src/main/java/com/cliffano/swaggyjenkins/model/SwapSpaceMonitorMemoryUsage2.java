/*
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


package com.cliffano.swaggyjenkins.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * SwapSpaceMonitorMemoryUsage2
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-04-09T15:08:14.438Z[GMT]")
public class SwapSpaceMonitorMemoryUsage2 {
  public static final String SERIALIZED_NAME_PROPERTY_CLASS = "_class";
  @SerializedName(SERIALIZED_NAME_PROPERTY_CLASS)
  private String propertyClass = null;

  public static final String SERIALIZED_NAME_AVAILABLE_PHYSICAL_MEMORY = "availablePhysicalMemory";
  @SerializedName(SERIALIZED_NAME_AVAILABLE_PHYSICAL_MEMORY)
  private Integer availablePhysicalMemory = null;

  public static final String SERIALIZED_NAME_AVAILABLE_SWAP_SPACE = "availableSwapSpace";
  @SerializedName(SERIALIZED_NAME_AVAILABLE_SWAP_SPACE)
  private Integer availableSwapSpace = null;

  public static final String SERIALIZED_NAME_TOTAL_PHYSICAL_MEMORY = "totalPhysicalMemory";
  @SerializedName(SERIALIZED_NAME_TOTAL_PHYSICAL_MEMORY)
  private Integer totalPhysicalMemory = null;

  public static final String SERIALIZED_NAME_TOTAL_SWAP_SPACE = "totalSwapSpace";
  @SerializedName(SERIALIZED_NAME_TOTAL_SWAP_SPACE)
  private Integer totalSwapSpace = null;

  public SwapSpaceMonitorMemoryUsage2 propertyClass(String propertyClass) {
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

  public SwapSpaceMonitorMemoryUsage2 availablePhysicalMemory(Integer availablePhysicalMemory) {
    this.availablePhysicalMemory = availablePhysicalMemory;
    return this;
  }

   /**
   * Get availablePhysicalMemory
   * @return availablePhysicalMemory
  **/
  @ApiModelProperty(value = "")
  public Integer getAvailablePhysicalMemory() {
    return availablePhysicalMemory;
  }

  public void setAvailablePhysicalMemory(Integer availablePhysicalMemory) {
    this.availablePhysicalMemory = availablePhysicalMemory;
  }

  public SwapSpaceMonitorMemoryUsage2 availableSwapSpace(Integer availableSwapSpace) {
    this.availableSwapSpace = availableSwapSpace;
    return this;
  }

   /**
   * Get availableSwapSpace
   * @return availableSwapSpace
  **/
  @ApiModelProperty(value = "")
  public Integer getAvailableSwapSpace() {
    return availableSwapSpace;
  }

  public void setAvailableSwapSpace(Integer availableSwapSpace) {
    this.availableSwapSpace = availableSwapSpace;
  }

  public SwapSpaceMonitorMemoryUsage2 totalPhysicalMemory(Integer totalPhysicalMemory) {
    this.totalPhysicalMemory = totalPhysicalMemory;
    return this;
  }

   /**
   * Get totalPhysicalMemory
   * @return totalPhysicalMemory
  **/
  @ApiModelProperty(value = "")
  public Integer getTotalPhysicalMemory() {
    return totalPhysicalMemory;
  }

  public void setTotalPhysicalMemory(Integer totalPhysicalMemory) {
    this.totalPhysicalMemory = totalPhysicalMemory;
  }

  public SwapSpaceMonitorMemoryUsage2 totalSwapSpace(Integer totalSwapSpace) {
    this.totalSwapSpace = totalSwapSpace;
    return this;
  }

   /**
   * Get totalSwapSpace
   * @return totalSwapSpace
  **/
  @ApiModelProperty(value = "")
  public Integer getTotalSwapSpace() {
    return totalSwapSpace;
  }

  public void setTotalSwapSpace(Integer totalSwapSpace) {
    this.totalSwapSpace = totalSwapSpace;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SwapSpaceMonitorMemoryUsage2 swapSpaceMonitorMemoryUsage2 = (SwapSpaceMonitorMemoryUsage2) o;
    return Objects.equals(this.propertyClass, swapSpaceMonitorMemoryUsage2.propertyClass) &&
        Objects.equals(this.availablePhysicalMemory, swapSpaceMonitorMemoryUsage2.availablePhysicalMemory) &&
        Objects.equals(this.availableSwapSpace, swapSpaceMonitorMemoryUsage2.availableSwapSpace) &&
        Objects.equals(this.totalPhysicalMemory, swapSpaceMonitorMemoryUsage2.totalPhysicalMemory) &&
        Objects.equals(this.totalSwapSpace, swapSpaceMonitorMemoryUsage2.totalSwapSpace);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, availablePhysicalMemory, availableSwapSpace, totalPhysicalMemory, totalSwapSpace);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SwapSpaceMonitorMemoryUsage2 {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    availablePhysicalMemory: ").append(toIndentedString(availablePhysicalMemory)).append("\n");
    sb.append("    availableSwapSpace: ").append(toIndentedString(availableSwapSpace)).append("\n");
    sb.append("    totalPhysicalMemory: ").append(toIndentedString(totalPhysicalMemory)).append("\n");
    sb.append("    totalSwapSpace: ").append(toIndentedString(totalSwapSpace)).append("\n");
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

