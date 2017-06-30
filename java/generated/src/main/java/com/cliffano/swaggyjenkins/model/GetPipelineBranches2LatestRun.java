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
 * GetPipelineBranches2LatestRun
 */
<<<<<<< 1690c683609f02ab08c4865de97d272e4271f5d3
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:24:14.392+10:00")
=======
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:26:55.163+10:00")
>>>>>>> Initial java client generation.
public class GetPipelineBranches2LatestRun {
  @SerializedName("durationInMillis")
  private Integer durationInMillis = null;

  @SerializedName("estimatedDurationInMillis")
  private Integer estimatedDurationInMillis = null;

  @SerializedName("enQueueTime")
  private String enQueueTime = null;

  @SerializedName("endTime")
  private String endTime = null;

  @SerializedName("id")
  private String id = null;

  @SerializedName("organization")
  private String organization = null;

  @SerializedName("pipeline")
  private String pipeline = null;

  @SerializedName("result")
  private String result = null;

  @SerializedName("runSummary")
  private String runSummary = null;

  @SerializedName("startTime")
  private String startTime = null;

  @SerializedName("state")
  private String state = null;

  @SerializedName("type")
  private String type = null;

  @SerializedName("commitId")
  private String commitId = null;

  @SerializedName("_class")
  private String propertyClass = null;

  public GetPipelineBranches2LatestRun durationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
    return this;
  }

   /**
   * Get durationInMillis
   * @return durationInMillis
  **/
  @ApiModelProperty(value = "")
  public Integer getDurationInMillis() {
    return durationInMillis;
  }

  public void setDurationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
  }

  public GetPipelineBranches2LatestRun estimatedDurationInMillis(Integer estimatedDurationInMillis) {
    this.estimatedDurationInMillis = estimatedDurationInMillis;
    return this;
  }

   /**
   * Get estimatedDurationInMillis
   * @return estimatedDurationInMillis
  **/
  @ApiModelProperty(value = "")
  public Integer getEstimatedDurationInMillis() {
    return estimatedDurationInMillis;
  }

  public void setEstimatedDurationInMillis(Integer estimatedDurationInMillis) {
    this.estimatedDurationInMillis = estimatedDurationInMillis;
  }

  public GetPipelineBranches2LatestRun enQueueTime(String enQueueTime) {
    this.enQueueTime = enQueueTime;
    return this;
  }

   /**
   * Get enQueueTime
   * @return enQueueTime
  **/
  @ApiModelProperty(value = "")
  public String getEnQueueTime() {
    return enQueueTime;
  }

  public void setEnQueueTime(String enQueueTime) {
    this.enQueueTime = enQueueTime;
  }

  public GetPipelineBranches2LatestRun endTime(String endTime) {
    this.endTime = endTime;
    return this;
  }

   /**
   * Get endTime
   * @return endTime
  **/
  @ApiModelProperty(value = "")
  public String getEndTime() {
    return endTime;
  }

  public void setEndTime(String endTime) {
    this.endTime = endTime;
  }

  public GetPipelineBranches2LatestRun id(String id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public GetPipelineBranches2LatestRun organization(String organization) {
    this.organization = organization;
    return this;
  }

   /**
   * Get organization
   * @return organization
  **/
  @ApiModelProperty(value = "")
  public String getOrganization() {
    return organization;
  }

  public void setOrganization(String organization) {
    this.organization = organization;
  }

  public GetPipelineBranches2LatestRun pipeline(String pipeline) {
    this.pipeline = pipeline;
    return this;
  }

   /**
   * Get pipeline
   * @return pipeline
  **/
  @ApiModelProperty(value = "")
  public String getPipeline() {
    return pipeline;
  }

  public void setPipeline(String pipeline) {
    this.pipeline = pipeline;
  }

  public GetPipelineBranches2LatestRun result(String result) {
    this.result = result;
    return this;
  }

   /**
   * Get result
   * @return result
  **/
  @ApiModelProperty(value = "")
  public String getResult() {
    return result;
  }

  public void setResult(String result) {
    this.result = result;
  }

  public GetPipelineBranches2LatestRun runSummary(String runSummary) {
    this.runSummary = runSummary;
    return this;
  }

   /**
   * Get runSummary
   * @return runSummary
  **/
  @ApiModelProperty(value = "")
  public String getRunSummary() {
    return runSummary;
  }

  public void setRunSummary(String runSummary) {
    this.runSummary = runSummary;
  }

  public GetPipelineBranches2LatestRun startTime(String startTime) {
    this.startTime = startTime;
    return this;
  }

   /**
   * Get startTime
   * @return startTime
  **/
  @ApiModelProperty(value = "")
  public String getStartTime() {
    return startTime;
  }

  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }

  public GetPipelineBranches2LatestRun state(String state) {
    this.state = state;
    return this;
  }

   /**
   * Get state
   * @return state
  **/
  @ApiModelProperty(value = "")
  public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }

  public GetPipelineBranches2LatestRun type(String type) {
    this.type = type;
    return this;
  }

   /**
   * Get type
   * @return type
  **/
  @ApiModelProperty(value = "")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public GetPipelineBranches2LatestRun commitId(String commitId) {
    this.commitId = commitId;
    return this;
  }

   /**
   * Get commitId
   * @return commitId
  **/
  @ApiModelProperty(value = "")
  public String getCommitId() {
    return commitId;
  }

  public void setCommitId(String commitId) {
    this.commitId = commitId;
  }

  public GetPipelineBranches2LatestRun propertyClass(String propertyClass) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GetPipelineBranches2LatestRun getPipelineBranches2LatestRun = (GetPipelineBranches2LatestRun) o;
    return Objects.equals(this.durationInMillis, getPipelineBranches2LatestRun.durationInMillis) &&
        Objects.equals(this.estimatedDurationInMillis, getPipelineBranches2LatestRun.estimatedDurationInMillis) &&
        Objects.equals(this.enQueueTime, getPipelineBranches2LatestRun.enQueueTime) &&
        Objects.equals(this.endTime, getPipelineBranches2LatestRun.endTime) &&
        Objects.equals(this.id, getPipelineBranches2LatestRun.id) &&
        Objects.equals(this.organization, getPipelineBranches2LatestRun.organization) &&
        Objects.equals(this.pipeline, getPipelineBranches2LatestRun.pipeline) &&
        Objects.equals(this.result, getPipelineBranches2LatestRun.result) &&
        Objects.equals(this.runSummary, getPipelineBranches2LatestRun.runSummary) &&
        Objects.equals(this.startTime, getPipelineBranches2LatestRun.startTime) &&
        Objects.equals(this.state, getPipelineBranches2LatestRun.state) &&
        Objects.equals(this.type, getPipelineBranches2LatestRun.type) &&
        Objects.equals(this.commitId, getPipelineBranches2LatestRun.commitId) &&
        Objects.equals(this.propertyClass, getPipelineBranches2LatestRun.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(durationInMillis, estimatedDurationInMillis, enQueueTime, endTime, id, organization, pipeline, result, runSummary, startTime, state, type, commitId, propertyClass);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetPipelineBranches2LatestRun {\n");
    
    sb.append("    durationInMillis: ").append(toIndentedString(durationInMillis)).append("\n");
    sb.append("    estimatedDurationInMillis: ").append(toIndentedString(estimatedDurationInMillis)).append("\n");
    sb.append("    enQueueTime: ").append(toIndentedString(enQueueTime)).append("\n");
    sb.append("    endTime: ").append(toIndentedString(endTime)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    organization: ").append(toIndentedString(organization)).append("\n");
    sb.append("    pipeline: ").append(toIndentedString(pipeline)).append("\n");
    sb.append("    result: ").append(toIndentedString(result)).append("\n");
    sb.append("    runSummary: ").append(toIndentedString(runSummary)).append("\n");
    sb.append("    startTime: ").append(toIndentedString(startTime)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    commitId: ").append(toIndentedString(commitId)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
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

