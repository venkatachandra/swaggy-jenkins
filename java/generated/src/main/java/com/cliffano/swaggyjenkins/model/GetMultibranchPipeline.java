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
import java.util.ArrayList;
import java.util.List;

/**
 * GetMultibranchPipeline
 */
<<<<<<< 1690c683609f02ab08c4865de97d272e4271f5d3
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:24:14.392+10:00")
=======
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:26:55.163+10:00")
>>>>>>> Initial java client generation.
public class GetMultibranchPipeline {
  @SerializedName("displayName")
  private String displayName = null;

  @SerializedName("estimatedDurationInMillis")
  private Integer estimatedDurationInMillis = null;

  @SerializedName("latestRun")
  private String latestRun = null;

  @SerializedName("name")
  private String name = null;

  @SerializedName("organization")
  private String organization = null;

  @SerializedName("weatherScore")
  private Integer weatherScore = null;

  @SerializedName("branchNames")
  private List<String> branchNames = null;

  @SerializedName("numberOfFailingBranches")
  private Integer numberOfFailingBranches = null;

  @SerializedName("numberOfFailingPullRequests")
  private Integer numberOfFailingPullRequests = null;

  @SerializedName("numberOfSuccessfulBranches")
  private Integer numberOfSuccessfulBranches = null;

  @SerializedName("numberOfSuccessfulPullRequests")
  private Integer numberOfSuccessfulPullRequests = null;

  @SerializedName("totalNumberOfBranches")
  private Integer totalNumberOfBranches = null;

  @SerializedName("totalNumberOfPullRequests")
  private Integer totalNumberOfPullRequests = null;

  @SerializedName("__sourcePath")
  private String sourcePath = null;

  @SerializedName("_class")
  private String propertyClass = null;

  public GetMultibranchPipeline displayName(String displayName) {
    this.displayName = displayName;
    return this;
  }

   /**
   * Get displayName
   * @return displayName
  **/
  @ApiModelProperty(value = "")
  public String getDisplayName() {
    return displayName;
  }

  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  public GetMultibranchPipeline estimatedDurationInMillis(Integer estimatedDurationInMillis) {
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

  public GetMultibranchPipeline latestRun(String latestRun) {
    this.latestRun = latestRun;
    return this;
  }

   /**
   * Get latestRun
   * @return latestRun
  **/
  @ApiModelProperty(value = "")
  public String getLatestRun() {
    return latestRun;
  }

  public void setLatestRun(String latestRun) {
    this.latestRun = latestRun;
  }

  public GetMultibranchPipeline name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public GetMultibranchPipeline organization(String organization) {
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

  public GetMultibranchPipeline weatherScore(Integer weatherScore) {
    this.weatherScore = weatherScore;
    return this;
  }

   /**
   * Get weatherScore
   * @return weatherScore
  **/
  @ApiModelProperty(value = "")
  public Integer getWeatherScore() {
    return weatherScore;
  }

  public void setWeatherScore(Integer weatherScore) {
    this.weatherScore = weatherScore;
  }

  public GetMultibranchPipeline branchNames(List<String> branchNames) {
    this.branchNames = branchNames;
    return this;
  }

  public GetMultibranchPipeline addBranchNamesItem(String branchNamesItem) {
    if (this.branchNames == null) {
      this.branchNames = new ArrayList<String>();
    }
    this.branchNames.add(branchNamesItem);
    return this;
  }

   /**
   * Get branchNames
   * @return branchNames
  **/
  @ApiModelProperty(value = "")
  public List<String> getBranchNames() {
    return branchNames;
  }

  public void setBranchNames(List<String> branchNames) {
    this.branchNames = branchNames;
  }

  public GetMultibranchPipeline numberOfFailingBranches(Integer numberOfFailingBranches) {
    this.numberOfFailingBranches = numberOfFailingBranches;
    return this;
  }

   /**
   * Get numberOfFailingBranches
   * @return numberOfFailingBranches
  **/
  @ApiModelProperty(value = "")
  public Integer getNumberOfFailingBranches() {
    return numberOfFailingBranches;
  }

  public void setNumberOfFailingBranches(Integer numberOfFailingBranches) {
    this.numberOfFailingBranches = numberOfFailingBranches;
  }

  public GetMultibranchPipeline numberOfFailingPullRequests(Integer numberOfFailingPullRequests) {
    this.numberOfFailingPullRequests = numberOfFailingPullRequests;
    return this;
  }

   /**
   * Get numberOfFailingPullRequests
   * @return numberOfFailingPullRequests
  **/
  @ApiModelProperty(value = "")
  public Integer getNumberOfFailingPullRequests() {
    return numberOfFailingPullRequests;
  }

  public void setNumberOfFailingPullRequests(Integer numberOfFailingPullRequests) {
    this.numberOfFailingPullRequests = numberOfFailingPullRequests;
  }

  public GetMultibranchPipeline numberOfSuccessfulBranches(Integer numberOfSuccessfulBranches) {
    this.numberOfSuccessfulBranches = numberOfSuccessfulBranches;
    return this;
  }

   /**
   * Get numberOfSuccessfulBranches
   * @return numberOfSuccessfulBranches
  **/
  @ApiModelProperty(value = "")
  public Integer getNumberOfSuccessfulBranches() {
    return numberOfSuccessfulBranches;
  }

  public void setNumberOfSuccessfulBranches(Integer numberOfSuccessfulBranches) {
    this.numberOfSuccessfulBranches = numberOfSuccessfulBranches;
  }

  public GetMultibranchPipeline numberOfSuccessfulPullRequests(Integer numberOfSuccessfulPullRequests) {
    this.numberOfSuccessfulPullRequests = numberOfSuccessfulPullRequests;
    return this;
  }

   /**
   * Get numberOfSuccessfulPullRequests
   * @return numberOfSuccessfulPullRequests
  **/
  @ApiModelProperty(value = "")
  public Integer getNumberOfSuccessfulPullRequests() {
    return numberOfSuccessfulPullRequests;
  }

  public void setNumberOfSuccessfulPullRequests(Integer numberOfSuccessfulPullRequests) {
    this.numberOfSuccessfulPullRequests = numberOfSuccessfulPullRequests;
  }

  public GetMultibranchPipeline totalNumberOfBranches(Integer totalNumberOfBranches) {
    this.totalNumberOfBranches = totalNumberOfBranches;
    return this;
  }

   /**
   * Get totalNumberOfBranches
   * @return totalNumberOfBranches
  **/
  @ApiModelProperty(value = "")
  public Integer getTotalNumberOfBranches() {
    return totalNumberOfBranches;
  }

  public void setTotalNumberOfBranches(Integer totalNumberOfBranches) {
    this.totalNumberOfBranches = totalNumberOfBranches;
  }

  public GetMultibranchPipeline totalNumberOfPullRequests(Integer totalNumberOfPullRequests) {
    this.totalNumberOfPullRequests = totalNumberOfPullRequests;
    return this;
  }

   /**
   * Get totalNumberOfPullRequests
   * @return totalNumberOfPullRequests
  **/
  @ApiModelProperty(value = "")
  public Integer getTotalNumberOfPullRequests() {
    return totalNumberOfPullRequests;
  }

  public void setTotalNumberOfPullRequests(Integer totalNumberOfPullRequests) {
    this.totalNumberOfPullRequests = totalNumberOfPullRequests;
  }

  public GetMultibranchPipeline sourcePath(String sourcePath) {
    this.sourcePath = sourcePath;
    return this;
  }

   /**
   * Get sourcePath
   * @return sourcePath
  **/
  @ApiModelProperty(value = "")
  public String getSourcePath() {
    return sourcePath;
  }

  public void setSourcePath(String sourcePath) {
    this.sourcePath = sourcePath;
  }

  public GetMultibranchPipeline propertyClass(String propertyClass) {
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
    GetMultibranchPipeline getMultibranchPipeline = (GetMultibranchPipeline) o;
    return Objects.equals(this.displayName, getMultibranchPipeline.displayName) &&
        Objects.equals(this.estimatedDurationInMillis, getMultibranchPipeline.estimatedDurationInMillis) &&
        Objects.equals(this.latestRun, getMultibranchPipeline.latestRun) &&
        Objects.equals(this.name, getMultibranchPipeline.name) &&
        Objects.equals(this.organization, getMultibranchPipeline.organization) &&
        Objects.equals(this.weatherScore, getMultibranchPipeline.weatherScore) &&
        Objects.equals(this.branchNames, getMultibranchPipeline.branchNames) &&
        Objects.equals(this.numberOfFailingBranches, getMultibranchPipeline.numberOfFailingBranches) &&
        Objects.equals(this.numberOfFailingPullRequests, getMultibranchPipeline.numberOfFailingPullRequests) &&
        Objects.equals(this.numberOfSuccessfulBranches, getMultibranchPipeline.numberOfSuccessfulBranches) &&
        Objects.equals(this.numberOfSuccessfulPullRequests, getMultibranchPipeline.numberOfSuccessfulPullRequests) &&
        Objects.equals(this.totalNumberOfBranches, getMultibranchPipeline.totalNumberOfBranches) &&
        Objects.equals(this.totalNumberOfPullRequests, getMultibranchPipeline.totalNumberOfPullRequests) &&
        Objects.equals(this.sourcePath, getMultibranchPipeline.sourcePath) &&
        Objects.equals(this.propertyClass, getMultibranchPipeline.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(displayName, estimatedDurationInMillis, latestRun, name, organization, weatherScore, branchNames, numberOfFailingBranches, numberOfFailingPullRequests, numberOfSuccessfulBranches, numberOfSuccessfulPullRequests, totalNumberOfBranches, totalNumberOfPullRequests, sourcePath, propertyClass);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetMultibranchPipeline {\n");
    
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    estimatedDurationInMillis: ").append(toIndentedString(estimatedDurationInMillis)).append("\n");
    sb.append("    latestRun: ").append(toIndentedString(latestRun)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    organization: ").append(toIndentedString(organization)).append("\n");
    sb.append("    weatherScore: ").append(toIndentedString(weatherScore)).append("\n");
    sb.append("    branchNames: ").append(toIndentedString(branchNames)).append("\n");
    sb.append("    numberOfFailingBranches: ").append(toIndentedString(numberOfFailingBranches)).append("\n");
    sb.append("    numberOfFailingPullRequests: ").append(toIndentedString(numberOfFailingPullRequests)).append("\n");
    sb.append("    numberOfSuccessfulBranches: ").append(toIndentedString(numberOfSuccessfulBranches)).append("\n");
    sb.append("    numberOfSuccessfulPullRequests: ").append(toIndentedString(numberOfSuccessfulPullRequests)).append("\n");
    sb.append("    totalNumberOfBranches: ").append(toIndentedString(totalNumberOfBranches)).append("\n");
    sb.append("    totalNumberOfPullRequests: ").append(toIndentedString(totalNumberOfPullRequests)).append("\n");
    sb.append("    sourcePath: ").append(toIndentedString(sourcePath)).append("\n");
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
