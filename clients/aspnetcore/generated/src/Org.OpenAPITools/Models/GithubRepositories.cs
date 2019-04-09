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
    public partial class GithubRepositories : IEquatable<GithubRepositories>
    { 
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets Links
        /// </summary>
        [DataMember(Name="_links")]
        public GithubRepositorieslinks Links { get; set; }

        /// <summary>
        /// Gets or Sets Items
        /// </summary>
        [DataMember(Name="items")]
        public List<GithubRepository> Items { get; set; }

        /// <summary>
        /// Gets or Sets LastPage
        /// </summary>
        [DataMember(Name="lastPage")]
        public int? LastPage { get; set; }

        /// <summary>
        /// Gets or Sets NextPage
        /// </summary>
        [DataMember(Name="nextPage")]
        public int? NextPage { get; set; }

        /// <summary>
        /// Gets or Sets PageSize
        /// </summary>
        [DataMember(Name="pageSize")]
        public int? PageSize { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GithubRepositories {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Links: ").Append(Links).Append("\n");
            sb.Append("  Items: ").Append(Items).Append("\n");
            sb.Append("  LastPage: ").Append(LastPage).Append("\n");
            sb.Append("  NextPage: ").Append(NextPage).Append("\n");
            sb.Append("  PageSize: ").Append(PageSize).Append("\n");
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
            return obj.GetType() == GetType() && Equals((GithubRepositories)obj);
        }

        /// <summary>
        /// Returns true if GithubRepositories instances are equal
        /// </summary>
        /// <param name="other">Instance of GithubRepositories to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GithubRepositories other)
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
                    Links == other.Links ||
                    Links != null &&
                    Links.Equals(other.Links)
                ) && 
                (
                    Items == other.Items ||
                    Items != null &&
                    Items.SequenceEqual(other.Items)
                ) && 
                (
                    LastPage == other.LastPage ||
                    LastPage != null &&
                    LastPage.Equals(other.LastPage)
                ) && 
                (
                    NextPage == other.NextPage ||
                    NextPage != null &&
                    NextPage.Equals(other.NextPage)
                ) && 
                (
                    PageSize == other.PageSize ||
                    PageSize != null &&
                    PageSize.Equals(other.PageSize)
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
                    if (Links != null)
                    hashCode = hashCode * 59 + Links.GetHashCode();
                    if (Items != null)
                    hashCode = hashCode * 59 + Items.GetHashCode();
                    if (LastPage != null)
                    hashCode = hashCode * 59 + LastPage.GetHashCode();
                    if (NextPage != null)
                    hashCode = hashCode * 59 + NextPage.GetHashCode();
                    if (PageSize != null)
                    hashCode = hashCode * 59 + PageSize.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(GithubRepositories left, GithubRepositories right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(GithubRepositories left, GithubRepositories right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
