/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class QueueLeftItem : IEquatable<QueueLeftItem>
    { 
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets Actions
        /// </summary>
        [DataMember(Name="actions")]
        public List<CauseAction> Actions { get; set; }

        /// <summary>
        /// Gets or Sets Blocked
        /// </summary>
        [DataMember(Name="blocked")]
        public bool? Blocked { get; set; }

        /// <summary>
        /// Gets or Sets Buildable
        /// </summary>
        [DataMember(Name="buildable")]
        public bool? Buildable { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id")]
        public int? Id { get; set; }

        /// <summary>
        /// Gets or Sets InQueueSince
        /// </summary>
        [DataMember(Name="inQueueSince")]
        public int? InQueueSince { get; set; }

        /// <summary>
        /// Gets or Sets Params
        /// </summary>
        [DataMember(Name="params")]
        public string Params { get; set; }

        /// <summary>
        /// Gets or Sets Stuck
        /// </summary>
        [DataMember(Name="stuck")]
        public bool? Stuck { get; set; }

        /// <summary>
        /// Gets or Sets Task
        /// </summary>
        [DataMember(Name="task")]
        public FreeStyleProject Task { get; set; }

        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url")]
        public string Url { get; set; }

        /// <summary>
        /// Gets or Sets Why
        /// </summary>
        [DataMember(Name="why")]
        public string Why { get; set; }

        /// <summary>
        /// Gets or Sets Cancelled
        /// </summary>
        [DataMember(Name="cancelled")]
        public bool? Cancelled { get; set; }

        /// <summary>
        /// Gets or Sets Executable
        /// </summary>
        [DataMember(Name="executable")]
        public FreeStyleBuild Executable { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class QueueLeftItem {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Actions: ").Append(Actions).Append("\n");
            sb.Append("  Blocked: ").Append(Blocked).Append("\n");
            sb.Append("  Buildable: ").Append(Buildable).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  InQueueSince: ").Append(InQueueSince).Append("\n");
            sb.Append("  Params: ").Append(Params).Append("\n");
            sb.Append("  Stuck: ").Append(Stuck).Append("\n");
            sb.Append("  Task: ").Append(Task).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  Why: ").Append(Why).Append("\n");
            sb.Append("  Cancelled: ").Append(Cancelled).Append("\n");
            sb.Append("  Executable: ").Append(Executable).Append("\n");
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
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((QueueLeftItem)obj);
        }

        /// <summary>
        /// Returns true if QueueLeftItem instances are equal
        /// </summary>
        /// <param name="other">Instance of QueueLeftItem to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(QueueLeftItem other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Class == other.Class ||
                    Class != null &&
                    Class.Equals(other.Class)
                ) && 
                (
                    Actions == other.Actions ||
                    Actions != null &&
                    Actions.SequenceEqual(other.Actions)
                ) && 
                (
                    Blocked == other.Blocked ||
                    Blocked != null &&
                    Blocked.Equals(other.Blocked)
                ) && 
                (
                    Buildable == other.Buildable ||
                    Buildable != null &&
                    Buildable.Equals(other.Buildable)
                ) && 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    InQueueSince == other.InQueueSince ||
                    InQueueSince != null &&
                    InQueueSince.Equals(other.InQueueSince)
                ) && 
                (
                    Params == other.Params ||
                    Params != null &&
                    Params.Equals(other.Params)
                ) && 
                (
                    Stuck == other.Stuck ||
                    Stuck != null &&
                    Stuck.Equals(other.Stuck)
                ) && 
                (
                    Task == other.Task ||
                    Task != null &&
                    Task.Equals(other.Task)
                ) && 
                (
                    Url == other.Url ||
                    Url != null &&
                    Url.Equals(other.Url)
                ) && 
                (
                    Why == other.Why ||
                    Why != null &&
                    Why.Equals(other.Why)
                ) && 
                (
                    Cancelled == other.Cancelled ||
                    Cancelled != null &&
                    Cancelled.Equals(other.Cancelled)
                ) && 
                (
                    Executable == other.Executable ||
                    Executable != null &&
                    Executable.Equals(other.Executable)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (Class != null)
                    hashCode = hashCode * 59 + Class.GetHashCode();
                    if (Actions != null)
                    hashCode = hashCode * 59 + Actions.GetHashCode();
                    if (Blocked != null)
                    hashCode = hashCode * 59 + Blocked.GetHashCode();
                    if (Buildable != null)
                    hashCode = hashCode * 59 + Buildable.GetHashCode();
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    if (InQueueSince != null)
                    hashCode = hashCode * 59 + InQueueSince.GetHashCode();
                    if (Params != null)
                    hashCode = hashCode * 59 + Params.GetHashCode();
                    if (Stuck != null)
                    hashCode = hashCode * 59 + Stuck.GetHashCode();
                    if (Task != null)
                    hashCode = hashCode * 59 + Task.GetHashCode();
                    if (Url != null)
                    hashCode = hashCode * 59 + Url.GetHashCode();
                    if (Why != null)
                    hashCode = hashCode * 59 + Why.GetHashCode();
                    if (Cancelled != null)
                    hashCode = hashCode * 59 + Cancelled.GetHashCode();
                    if (Executable != null)
                    hashCode = hashCode * 59 + Executable.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(QueueLeftItem left, QueueLeftItem right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(QueueLeftItem left, QueueLeftItem right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
