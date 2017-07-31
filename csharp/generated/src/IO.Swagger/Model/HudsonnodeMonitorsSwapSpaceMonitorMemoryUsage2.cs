/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;

namespace IO.Swagger.Model
{
    /// <summary>
    /// HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2
    /// </summary>
    [DataContract]
    public partial class HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 :  IEquatable<HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2" /> class.
        /// </summary>
        /// <param name="_Class">_Class.</param>
        /// <param name="AvailablePhysicalMemory">AvailablePhysicalMemory.</param>
        /// <param name="AvailableSwapSpace">AvailableSwapSpace.</param>
        /// <param name="TotalPhysicalMemory">TotalPhysicalMemory.</param>
        /// <param name="TotalSwapSpace">TotalSwapSpace.</param>
        public HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2(string _Class = default(string), int? AvailablePhysicalMemory = default(int?), int? AvailableSwapSpace = default(int?), int? TotalPhysicalMemory = default(int?), int? TotalSwapSpace = default(int?))
        {
            this._Class = _Class;
            this.AvailablePhysicalMemory = AvailablePhysicalMemory;
            this.AvailableSwapSpace = AvailableSwapSpace;
            this.TotalPhysicalMemory = TotalPhysicalMemory;
            this.TotalSwapSpace = TotalSwapSpace;
        }
        
        /// <summary>
        /// Gets or Sets _Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string _Class { get; set; }
        /// <summary>
        /// Gets or Sets AvailablePhysicalMemory
        /// </summary>
        [DataMember(Name="availablePhysicalMemory", EmitDefaultValue=false)]
        public int? AvailablePhysicalMemory { get; set; }
        /// <summary>
        /// Gets or Sets AvailableSwapSpace
        /// </summary>
        [DataMember(Name="availableSwapSpace", EmitDefaultValue=false)]
        public int? AvailableSwapSpace { get; set; }
        /// <summary>
        /// Gets or Sets TotalPhysicalMemory
        /// </summary>
        [DataMember(Name="totalPhysicalMemory", EmitDefaultValue=false)]
        public int? TotalPhysicalMemory { get; set; }
        /// <summary>
        /// Gets or Sets TotalSwapSpace
        /// </summary>
        [DataMember(Name="totalSwapSpace", EmitDefaultValue=false)]
        public int? TotalSwapSpace { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 {\n");
            sb.Append("  _Class: ").Append(_Class).Append("\n");
            sb.Append("  AvailablePhysicalMemory: ").Append(AvailablePhysicalMemory).Append("\n");
            sb.Append("  AvailableSwapSpace: ").Append(AvailableSwapSpace).Append("\n");
            sb.Append("  TotalPhysicalMemory: ").Append(TotalPhysicalMemory).Append("\n");
            sb.Append("  TotalSwapSpace: ").Append(TotalSwapSpace).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2);
        }

        /// <summary>
        /// Returns true if HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 instances are equal
        /// </summary>
        /// <param name="other">Instance of HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this._Class == other._Class ||
                    this._Class != null &&
                    this._Class.Equals(other._Class)
                ) && 
                (
                    this.AvailablePhysicalMemory == other.AvailablePhysicalMemory ||
                    this.AvailablePhysicalMemory != null &&
                    this.AvailablePhysicalMemory.Equals(other.AvailablePhysicalMemory)
                ) && 
                (
                    this.AvailableSwapSpace == other.AvailableSwapSpace ||
                    this.AvailableSwapSpace != null &&
                    this.AvailableSwapSpace.Equals(other.AvailableSwapSpace)
                ) && 
                (
                    this.TotalPhysicalMemory == other.TotalPhysicalMemory ||
                    this.TotalPhysicalMemory != null &&
                    this.TotalPhysicalMemory.Equals(other.TotalPhysicalMemory)
                ) && 
                (
                    this.TotalSwapSpace == other.TotalSwapSpace ||
                    this.TotalSwapSpace != null &&
                    this.TotalSwapSpace.Equals(other.TotalSwapSpace)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this._Class != null)
                    hash = hash * 59 + this._Class.GetHashCode();
                if (this.AvailablePhysicalMemory != null)
                    hash = hash * 59 + this.AvailablePhysicalMemory.GetHashCode();
                if (this.AvailableSwapSpace != null)
                    hash = hash * 59 + this.AvailableSwapSpace.GetHashCode();
                if (this.TotalPhysicalMemory != null)
                    hash = hash * 59 + this.TotalPhysicalMemory.GetHashCode();
                if (this.TotalSwapSpace != null)
                    hash = hash * 59 + this.TotalSwapSpace.GetHashCode();
                return hash;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}