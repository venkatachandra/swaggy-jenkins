/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

package io.swagger.client.model;

import io.swagger.client.model.HudsonmodelHudsonMasterComputer;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class HudsonmodelComputerSet {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("busyExecutors")
  private Integer busyExecutors = null;
  @SerializedName("computer")
  private List<HudsonmodelHudsonMasterComputer> computer = null;
  @SerializedName("displayName")
  private String displayName = null;
  @SerializedName("totalExecutors")
  private Integer totalExecutors = null;

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
  public Integer getBusyExecutors() {
    return busyExecutors;
  }
  public void setBusyExecutors(Integer busyExecutors) {
    this.busyExecutors = busyExecutors;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelHudsonMasterComputer> getComputer() {
    return computer;
  }
  public void setComputer(List<HudsonmodelHudsonMasterComputer> computer) {
    this.computer = computer;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDisplayName() {
    return displayName;
  }
  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getTotalExecutors() {
    return totalExecutors;
  }
  public void setTotalExecutors(Integer totalExecutors) {
    this.totalExecutors = totalExecutors;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelComputerSet hudsonmodelComputerSet = (HudsonmodelComputerSet) o;
    return (this._class == null ? hudsonmodelComputerSet._class == null : this._class.equals(hudsonmodelComputerSet._class)) &&
        (this.busyExecutors == null ? hudsonmodelComputerSet.busyExecutors == null : this.busyExecutors.equals(hudsonmodelComputerSet.busyExecutors)) &&
        (this.computer == null ? hudsonmodelComputerSet.computer == null : this.computer.equals(hudsonmodelComputerSet.computer)) &&
        (this.displayName == null ? hudsonmodelComputerSet.displayName == null : this.displayName.equals(hudsonmodelComputerSet.displayName)) &&
        (this.totalExecutors == null ? hudsonmodelComputerSet.totalExecutors == null : this.totalExecutors.equals(hudsonmodelComputerSet.totalExecutors));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.busyExecutors == null ? 0: this.busyExecutors.hashCode());
    result = 31 * result + (this.computer == null ? 0: this.computer.hashCode());
    result = 31 * result + (this.displayName == null ? 0: this.displayName.hashCode());
    result = 31 * result + (this.totalExecutors == null ? 0: this.totalExecutors.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelComputerSet {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  busyExecutors: ").append(busyExecutors).append("\n");
    sb.append("  computer: ").append(computer).append("\n");
    sb.append("  displayName: ").append(displayName).append("\n");
    sb.append("  totalExecutors: ").append(totalExecutors).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}