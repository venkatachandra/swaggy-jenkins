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
import com.cliffano.swaggyjenkins.model.HudsonmodelHudsonMasterComputerMonitorData;
import com.cliffano.swaggyjenkins.model.HudsonmodelHudsonMasterComputerexecutors;
import com.cliffano.swaggyjenkins.model.HudsonmodelLabel1;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;

/**
 * HudsonmodelHudsonMasterComputer
 */
<<<<<<< 1690c683609f02ab08c4865de97d272e4271f5d3
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:24:14.392+10:00")
=======
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:26:55.163+10:00")
>>>>>>> Initial java client generation.
public class HudsonmodelHudsonMasterComputer {
  @SerializedName("_class")
  private String propertyClass = null;

  @SerializedName("displayName")
  private String displayName = null;

  @SerializedName("executors")
  private List<HudsonmodelHudsonMasterComputerexecutors> executors = null;

  @SerializedName("icon")
  private String icon = null;

  @SerializedName("iconClassName")
  private String iconClassName = null;

  @SerializedName("idle")
  private Boolean idle = null;

  @SerializedName("jnlpAgent")
  private Boolean jnlpAgent = null;

  @SerializedName("launchSupported")
  private Boolean launchSupported = null;

  @SerializedName("loadStatistics")
  private HudsonmodelLabel1 loadStatistics = null;

  @SerializedName("manualLaunchAllowed")
  private Boolean manualLaunchAllowed = null;

  @SerializedName("monitorData")
  private HudsonmodelHudsonMasterComputerMonitorData monitorData = null;

  @SerializedName("numExecutors")
  private Integer numExecutors = null;

  @SerializedName("offline")
  private Boolean offline = null;

  @SerializedName("offlineCause")
  private String offlineCause = null;

  @SerializedName("offlineCauseReason")
  private String offlineCauseReason = null;

  @SerializedName("temporarilyOffline")
  private Boolean temporarilyOffline = null;

  public HudsonmodelHudsonMasterComputer propertyClass(String propertyClass) {
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

  public HudsonmodelHudsonMasterComputer displayName(String displayName) {
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

  public HudsonmodelHudsonMasterComputer executors(List<HudsonmodelHudsonMasterComputerexecutors> executors) {
    this.executors = executors;
    return this;
  }

  public HudsonmodelHudsonMasterComputer addExecutorsItem(HudsonmodelHudsonMasterComputerexecutors executorsItem) {
    if (this.executors == null) {
      this.executors = new ArrayList<HudsonmodelHudsonMasterComputerexecutors>();
    }
    this.executors.add(executorsItem);
    return this;
  }

   /**
   * Get executors
   * @return executors
  **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelHudsonMasterComputerexecutors> getExecutors() {
    return executors;
  }

  public void setExecutors(List<HudsonmodelHudsonMasterComputerexecutors> executors) {
    this.executors = executors;
  }

  public HudsonmodelHudsonMasterComputer icon(String icon) {
    this.icon = icon;
    return this;
  }

   /**
   * Get icon
   * @return icon
  **/
  @ApiModelProperty(value = "")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HudsonmodelHudsonMasterComputer iconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
    return this;
  }

   /**
   * Get iconClassName
   * @return iconClassName
  **/
  @ApiModelProperty(value = "")
  public String getIconClassName() {
    return iconClassName;
  }

  public void setIconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
  }

  public HudsonmodelHudsonMasterComputer idle(Boolean idle) {
    this.idle = idle;
    return this;
  }

   /**
   * Get idle
   * @return idle
  **/
  @ApiModelProperty(value = "")
  public Boolean getIdle() {
    return idle;
  }

  public void setIdle(Boolean idle) {
    this.idle = idle;
  }

  public HudsonmodelHudsonMasterComputer jnlpAgent(Boolean jnlpAgent) {
    this.jnlpAgent = jnlpAgent;
    return this;
  }

   /**
   * Get jnlpAgent
   * @return jnlpAgent
  **/
  @ApiModelProperty(value = "")
  public Boolean getJnlpAgent() {
    return jnlpAgent;
  }

  public void setJnlpAgent(Boolean jnlpAgent) {
    this.jnlpAgent = jnlpAgent;
  }

  public HudsonmodelHudsonMasterComputer launchSupported(Boolean launchSupported) {
    this.launchSupported = launchSupported;
    return this;
  }

   /**
   * Get launchSupported
   * @return launchSupported
  **/
  @ApiModelProperty(value = "")
  public Boolean getLaunchSupported() {
    return launchSupported;
  }

  public void setLaunchSupported(Boolean launchSupported) {
    this.launchSupported = launchSupported;
  }

  public HudsonmodelHudsonMasterComputer loadStatistics(HudsonmodelLabel1 loadStatistics) {
    this.loadStatistics = loadStatistics;
    return this;
  }

   /**
   * Get loadStatistics
   * @return loadStatistics
  **/
  @ApiModelProperty(value = "")
  public HudsonmodelLabel1 getLoadStatistics() {
    return loadStatistics;
  }

  public void setLoadStatistics(HudsonmodelLabel1 loadStatistics) {
    this.loadStatistics = loadStatistics;
  }

  public HudsonmodelHudsonMasterComputer manualLaunchAllowed(Boolean manualLaunchAllowed) {
    this.manualLaunchAllowed = manualLaunchAllowed;
    return this;
  }

   /**
   * Get manualLaunchAllowed
   * @return manualLaunchAllowed
  **/
  @ApiModelProperty(value = "")
  public Boolean getManualLaunchAllowed() {
    return manualLaunchAllowed;
  }

  public void setManualLaunchAllowed(Boolean manualLaunchAllowed) {
    this.manualLaunchAllowed = manualLaunchAllowed;
  }

  public HudsonmodelHudsonMasterComputer monitorData(HudsonmodelHudsonMasterComputerMonitorData monitorData) {
    this.monitorData = monitorData;
    return this;
  }

   /**
   * Get monitorData
   * @return monitorData
  **/
  @ApiModelProperty(value = "")
  public HudsonmodelHudsonMasterComputerMonitorData getMonitorData() {
    return monitorData;
  }

  public void setMonitorData(HudsonmodelHudsonMasterComputerMonitorData monitorData) {
    this.monitorData = monitorData;
  }

  public HudsonmodelHudsonMasterComputer numExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
    return this;
  }

   /**
   * Get numExecutors
   * @return numExecutors
  **/
  @ApiModelProperty(value = "")
  public Integer getNumExecutors() {
    return numExecutors;
  }

  public void setNumExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
  }

  public HudsonmodelHudsonMasterComputer offline(Boolean offline) {
    this.offline = offline;
    return this;
  }

   /**
   * Get offline
   * @return offline
  **/
  @ApiModelProperty(value = "")
  public Boolean getOffline() {
    return offline;
  }

  public void setOffline(Boolean offline) {
    this.offline = offline;
  }

  public HudsonmodelHudsonMasterComputer offlineCause(String offlineCause) {
    this.offlineCause = offlineCause;
    return this;
  }

   /**
   * Get offlineCause
   * @return offlineCause
  **/
  @ApiModelProperty(value = "")
  public String getOfflineCause() {
    return offlineCause;
  }

  public void setOfflineCause(String offlineCause) {
    this.offlineCause = offlineCause;
  }

  public HudsonmodelHudsonMasterComputer offlineCauseReason(String offlineCauseReason) {
    this.offlineCauseReason = offlineCauseReason;
    return this;
  }

   /**
   * Get offlineCauseReason
   * @return offlineCauseReason
  **/
  @ApiModelProperty(value = "")
  public String getOfflineCauseReason() {
    return offlineCauseReason;
  }

  public void setOfflineCauseReason(String offlineCauseReason) {
    this.offlineCauseReason = offlineCauseReason;
  }

  public HudsonmodelHudsonMasterComputer temporarilyOffline(Boolean temporarilyOffline) {
    this.temporarilyOffline = temporarilyOffline;
    return this;
  }

   /**
   * Get temporarilyOffline
   * @return temporarilyOffline
  **/
  @ApiModelProperty(value = "")
  public Boolean getTemporarilyOffline() {
    return temporarilyOffline;
  }

  public void setTemporarilyOffline(Boolean temporarilyOffline) {
    this.temporarilyOffline = temporarilyOffline;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelHudsonMasterComputer hudsonmodelHudsonMasterComputer = (HudsonmodelHudsonMasterComputer) o;
    return Objects.equals(this.propertyClass, hudsonmodelHudsonMasterComputer.propertyClass) &&
        Objects.equals(this.displayName, hudsonmodelHudsonMasterComputer.displayName) &&
        Objects.equals(this.executors, hudsonmodelHudsonMasterComputer.executors) &&
        Objects.equals(this.icon, hudsonmodelHudsonMasterComputer.icon) &&
        Objects.equals(this.iconClassName, hudsonmodelHudsonMasterComputer.iconClassName) &&
        Objects.equals(this.idle, hudsonmodelHudsonMasterComputer.idle) &&
        Objects.equals(this.jnlpAgent, hudsonmodelHudsonMasterComputer.jnlpAgent) &&
        Objects.equals(this.launchSupported, hudsonmodelHudsonMasterComputer.launchSupported) &&
        Objects.equals(this.loadStatistics, hudsonmodelHudsonMasterComputer.loadStatistics) &&
        Objects.equals(this.manualLaunchAllowed, hudsonmodelHudsonMasterComputer.manualLaunchAllowed) &&
        Objects.equals(this.monitorData, hudsonmodelHudsonMasterComputer.monitorData) &&
        Objects.equals(this.numExecutors, hudsonmodelHudsonMasterComputer.numExecutors) &&
        Objects.equals(this.offline, hudsonmodelHudsonMasterComputer.offline) &&
        Objects.equals(this.offlineCause, hudsonmodelHudsonMasterComputer.offlineCause) &&
        Objects.equals(this.offlineCauseReason, hudsonmodelHudsonMasterComputer.offlineCauseReason) &&
        Objects.equals(this.temporarilyOffline, hudsonmodelHudsonMasterComputer.temporarilyOffline);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, displayName, executors, icon, iconClassName, idle, jnlpAgent, launchSupported, loadStatistics, manualLaunchAllowed, monitorData, numExecutors, offline, offlineCause, offlineCauseReason, temporarilyOffline);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelHudsonMasterComputer {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    executors: ").append(toIndentedString(executors)).append("\n");
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    iconClassName: ").append(toIndentedString(iconClassName)).append("\n");
    sb.append("    idle: ").append(toIndentedString(idle)).append("\n");
    sb.append("    jnlpAgent: ").append(toIndentedString(jnlpAgent)).append("\n");
    sb.append("    launchSupported: ").append(toIndentedString(launchSupported)).append("\n");
    sb.append("    loadStatistics: ").append(toIndentedString(loadStatistics)).append("\n");
    sb.append("    manualLaunchAllowed: ").append(toIndentedString(manualLaunchAllowed)).append("\n");
    sb.append("    monitorData: ").append(toIndentedString(monitorData)).append("\n");
    sb.append("    numExecutors: ").append(toIndentedString(numExecutors)).append("\n");
    sb.append("    offline: ").append(toIndentedString(offline)).append("\n");
    sb.append("    offlineCause: ").append(toIndentedString(offlineCause)).append("\n");
    sb.append("    offlineCauseReason: ").append(toIndentedString(offlineCauseReason)).append("\n");
    sb.append("    temporarilyOffline: ").append(toIndentedString(temporarilyOffline)).append("\n");
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
