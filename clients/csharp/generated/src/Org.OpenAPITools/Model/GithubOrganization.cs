/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
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
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// GithubOrganization
    /// </summary>
    [DataContract]
    public partial class GithubOrganization :  IEquatable<GithubOrganization>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GithubOrganization" /> class.
        /// </summary>
        /// <param name="_class">_class.</param>
        /// <param name="links">links.</param>
        /// <param name="jenkinsOrganizationPipeline">jenkinsOrganizationPipeline.</param>
        /// <param name="name">name.</param>
        public GithubOrganization(string _class = default(string), GithubOrganizationlinks links = default(GithubOrganizationlinks), bool? jenkinsOrganizationPipeline = default(bool?), string name = default(string))
        {
            this.Class = _class;
            this.Links = links;
            this.JenkinsOrganizationPipeline = jenkinsOrganizationPipeline;
            this.Name = name;
        }
        
        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string Class { get; set; }

        /// <summary>
        /// Gets or Sets Links
        /// </summary>
        [DataMember(Name="_links", EmitDefaultValue=false)]
        public GithubOrganizationlinks Links { get; set; }

        /// <summary>
        /// Gets or Sets JenkinsOrganizationPipeline
        /// </summary>
        [DataMember(Name="jenkinsOrganizationPipeline", EmitDefaultValue=false)]
        public bool? JenkinsOrganizationPipeline { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GithubOrganization {\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("  Links: ").Append(Links).Append("\n");
            sb.Append("  JenkinsOrganizationPipeline: ").Append(JenkinsOrganizationPipeline).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as GithubOrganization);
        }

        /// <summary>
        /// Returns true if GithubOrganization instances are equal
        /// </summary>
        /// <param name="input">Instance of GithubOrganization to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GithubOrganization input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Class == input.Class ||
                    (this.Class != null &&
                    this.Class.Equals(input.Class))
                ) && 
                (
                    this.Links == input.Links ||
                    (this.Links != null &&
                    this.Links.Equals(input.Links))
                ) && 
                (
                    this.JenkinsOrganizationPipeline == input.JenkinsOrganizationPipeline ||
                    (this.JenkinsOrganizationPipeline != null &&
                    this.JenkinsOrganizationPipeline.Equals(input.JenkinsOrganizationPipeline))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
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
                int hashCode = 41;
                if (this.Class != null)
                    hashCode = hashCode * 59 + this.Class.GetHashCode();
                if (this.Links != null)
                    hashCode = hashCode * 59 + this.Links.GetHashCode();
                if (this.JenkinsOrganizationPipeline != null)
                    hashCode = hashCode * 59 + this.JenkinsOrganizationPipeline.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                return hashCode;
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
