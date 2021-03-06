/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.cliffano.swaggyjenkins.model;

import java.util.Objects;
import java.util.Arrays;
import com.cliffano.swaggyjenkins.model.CauseAction;
import com.cliffano.swaggyjenkins.model.FreeStyleBuild;
import com.cliffano.swaggyjenkins.model.FreeStyleProject;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * QueueLeftItem
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2019-04-10T13:31:03.355Z[GMT]")
public class QueueLeftItem {
  public static final String SERIALIZED_NAME_PROPERTY_CLASS = "_class";
  @SerializedName(SERIALIZED_NAME_PROPERTY_CLASS)
  private String propertyClass = null;

  public static final String SERIALIZED_NAME_ACTIONS = "actions";
  @SerializedName(SERIALIZED_NAME_ACTIONS)
  private List<CauseAction> actions = null;

  public static final String SERIALIZED_NAME_BLOCKED = "blocked";
  @SerializedName(SERIALIZED_NAME_BLOCKED)
  private Boolean blocked = null;

  public static final String SERIALIZED_NAME_BUILDABLE = "buildable";
  @SerializedName(SERIALIZED_NAME_BUILDABLE)
  private Boolean buildable = null;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private Integer id = null;

  public static final String SERIALIZED_NAME_IN_QUEUE_SINCE = "inQueueSince";
  @SerializedName(SERIALIZED_NAME_IN_QUEUE_SINCE)
  private Integer inQueueSince = null;

  public static final String SERIALIZED_NAME_PARAMS = "params";
  @SerializedName(SERIALIZED_NAME_PARAMS)
  private String params = null;

  public static final String SERIALIZED_NAME_STUCK = "stuck";
  @SerializedName(SERIALIZED_NAME_STUCK)
  private Boolean stuck = null;

  public static final String SERIALIZED_NAME_TASK = "task";
  @SerializedName(SERIALIZED_NAME_TASK)
  private FreeStyleProject task = null;

  public static final String SERIALIZED_NAME_URL = "url";
  @SerializedName(SERIALIZED_NAME_URL)
  private String url = null;

  public static final String SERIALIZED_NAME_WHY = "why";
  @SerializedName(SERIALIZED_NAME_WHY)
  private String why = null;

  public static final String SERIALIZED_NAME_CANCELLED = "cancelled";
  @SerializedName(SERIALIZED_NAME_CANCELLED)
  private Boolean cancelled = null;

  public static final String SERIALIZED_NAME_EXECUTABLE = "executable";
  @SerializedName(SERIALIZED_NAME_EXECUTABLE)
  private FreeStyleBuild executable = null;

  public QueueLeftItem propertyClass(String propertyClass) {
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

  public QueueLeftItem actions(List<CauseAction> actions) {
    this.actions = actions;
    return this;
  }

  public QueueLeftItem addActionsItem(CauseAction actionsItem) {
    if (this.actions == null) {
      this.actions = new ArrayList<CauseAction>();
    }
    this.actions.add(actionsItem);
    return this;
  }

   /**
   * Get actions
   * @return actions
  **/
  @ApiModelProperty(value = "")
  public List<CauseAction> getActions() {
    return actions;
  }

  public void setActions(List<CauseAction> actions) {
    this.actions = actions;
  }

  public QueueLeftItem blocked(Boolean blocked) {
    this.blocked = blocked;
    return this;
  }

   /**
   * Get blocked
   * @return blocked
  **/
  @ApiModelProperty(value = "")
  public Boolean getBlocked() {
    return blocked;
  }

  public void setBlocked(Boolean blocked) {
    this.blocked = blocked;
  }

  public QueueLeftItem buildable(Boolean buildable) {
    this.buildable = buildable;
    return this;
  }

   /**
   * Get buildable
   * @return buildable
  **/
  @ApiModelProperty(value = "")
  public Boolean getBuildable() {
    return buildable;
  }

  public void setBuildable(Boolean buildable) {
    this.buildable = buildable;
  }

  public QueueLeftItem id(Integer id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(value = "")
  public Integer getId() {
    return id;
  }

  public void setId(Integer id) {
    this.id = id;
  }

  public QueueLeftItem inQueueSince(Integer inQueueSince) {
    this.inQueueSince = inQueueSince;
    return this;
  }

   /**
   * Get inQueueSince
   * @return inQueueSince
  **/
  @ApiModelProperty(value = "")
  public Integer getInQueueSince() {
    return inQueueSince;
  }

  public void setInQueueSince(Integer inQueueSince) {
    this.inQueueSince = inQueueSince;
  }

  public QueueLeftItem params(String params) {
    this.params = params;
    return this;
  }

   /**
   * Get params
   * @return params
  **/
  @ApiModelProperty(value = "")
  public String getParams() {
    return params;
  }

  public void setParams(String params) {
    this.params = params;
  }

  public QueueLeftItem stuck(Boolean stuck) {
    this.stuck = stuck;
    return this;
  }

   /**
   * Get stuck
   * @return stuck
  **/
  @ApiModelProperty(value = "")
  public Boolean getStuck() {
    return stuck;
  }

  public void setStuck(Boolean stuck) {
    this.stuck = stuck;
  }

  public QueueLeftItem task(FreeStyleProject task) {
    this.task = task;
    return this;
  }

   /**
   * Get task
   * @return task
  **/
  @ApiModelProperty(value = "")
  public FreeStyleProject getTask() {
    return task;
  }

  public void setTask(FreeStyleProject task) {
    this.task = task;
  }

  public QueueLeftItem url(String url) {
    this.url = url;
    return this;
  }

   /**
   * Get url
   * @return url
  **/
  @ApiModelProperty(value = "")
  public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public QueueLeftItem why(String why) {
    this.why = why;
    return this;
  }

   /**
   * Get why
   * @return why
  **/
  @ApiModelProperty(value = "")
  public String getWhy() {
    return why;
  }

  public void setWhy(String why) {
    this.why = why;
  }

  public QueueLeftItem cancelled(Boolean cancelled) {
    this.cancelled = cancelled;
    return this;
  }

   /**
   * Get cancelled
   * @return cancelled
  **/
  @ApiModelProperty(value = "")
  public Boolean getCancelled() {
    return cancelled;
  }

  public void setCancelled(Boolean cancelled) {
    this.cancelled = cancelled;
  }

  public QueueLeftItem executable(FreeStyleBuild executable) {
    this.executable = executable;
    return this;
  }

   /**
   * Get executable
   * @return executable
  **/
  @ApiModelProperty(value = "")
  public FreeStyleBuild getExecutable() {
    return executable;
  }

  public void setExecutable(FreeStyleBuild executable) {
    this.executable = executable;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    QueueLeftItem queueLeftItem = (QueueLeftItem) o;
    return Objects.equals(this.propertyClass, queueLeftItem.propertyClass) &&
        Objects.equals(this.actions, queueLeftItem.actions) &&
        Objects.equals(this.blocked, queueLeftItem.blocked) &&
        Objects.equals(this.buildable, queueLeftItem.buildable) &&
        Objects.equals(this.id, queueLeftItem.id) &&
        Objects.equals(this.inQueueSince, queueLeftItem.inQueueSince) &&
        Objects.equals(this.params, queueLeftItem.params) &&
        Objects.equals(this.stuck, queueLeftItem.stuck) &&
        Objects.equals(this.task, queueLeftItem.task) &&
        Objects.equals(this.url, queueLeftItem.url) &&
        Objects.equals(this.why, queueLeftItem.why) &&
        Objects.equals(this.cancelled, queueLeftItem.cancelled) &&
        Objects.equals(this.executable, queueLeftItem.executable);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, actions, blocked, buildable, id, inQueueSince, params, stuck, task, url, why, cancelled, executable);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class QueueLeftItem {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    actions: ").append(toIndentedString(actions)).append("\n");
    sb.append("    blocked: ").append(toIndentedString(blocked)).append("\n");
    sb.append("    buildable: ").append(toIndentedString(buildable)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    inQueueSince: ").append(toIndentedString(inQueueSince)).append("\n");
    sb.append("    params: ").append(toIndentedString(params)).append("\n");
    sb.append("    stuck: ").append(toIndentedString(stuck)).append("\n");
    sb.append("    task: ").append(toIndentedString(task)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
    sb.append("    why: ").append(toIndentedString(why)).append("\n");
    sb.append("    cancelled: ").append(toIndentedString(cancelled)).append("\n");
    sb.append("    executable: ").append(toIndentedString(executable)).append("\n");
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

