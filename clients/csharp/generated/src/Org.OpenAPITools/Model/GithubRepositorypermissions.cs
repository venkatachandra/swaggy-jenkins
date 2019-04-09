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
    /// GithubRepositorypermissions
    /// </summary>
    [DataContract]
    public partial class GithubRepositorypermissions :  IEquatable<GithubRepositorypermissions>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GithubRepositorypermissions" /> class.
        /// </summary>
        /// <param name="admin">admin.</param>
        /// <param name="push">push.</param>
        /// <param name="pull">pull.</param>
        /// <param name="_class">_class.</param>
        public GithubRepositorypermissions(bool? admin = default(bool?), bool? push = default(bool?), bool? pull = default(bool?), string _class = default(string))
        {
            this.Admin = admin;
            this.Push = push;
            this.Pull = pull;
            this.Class = _class;
        }
        
        /// <summary>
        /// Gets or Sets Admin
        /// </summary>
        [DataMember(Name="admin", EmitDefaultValue=false)]
        public bool? Admin { get; set; }

        /// <summary>
        /// Gets or Sets Push
        /// </summary>
        [DataMember(Name="push", EmitDefaultValue=false)]
        public bool? Push { get; set; }

        /// <summary>
        /// Gets or Sets Pull
        /// </summary>
        [DataMember(Name="pull", EmitDefaultValue=false)]
        public bool? Pull { get; set; }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class", EmitDefaultValue=false)]
        public string Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GithubRepositorypermissions {\n");
            sb.Append("  Admin: ").Append(Admin).Append("\n");
            sb.Append("  Push: ").Append(Push).Append("\n");
            sb.Append("  Pull: ").Append(Pull).Append("\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
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
            return this.Equals(input as GithubRepositorypermissions);
        }

        /// <summary>
        /// Returns true if GithubRepositorypermissions instances are equal
        /// </summary>
        /// <param name="input">Instance of GithubRepositorypermissions to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(GithubRepositorypermissions input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Admin == input.Admin ||
                    (this.Admin != null &&
                    this.Admin.Equals(input.Admin))
                ) && 
                (
                    this.Push == input.Push ||
                    (this.Push != null &&
                    this.Push.Equals(input.Push))
                ) && 
                (
                    this.Pull == input.Pull ||
                    (this.Pull != null &&
                    this.Pull.Equals(input.Pull))
                ) && 
                (
                    this.Class == input.Class ||
                    (this.Class != null &&
                    this.Class.Equals(input.Class))
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
                if (this.Admin != null)
                    hashCode = hashCode * 59 + this.Admin.GetHashCode();
                if (this.Push != null)
                    hashCode = hashCode * 59 + this.Push.GetHashCode();
                if (this.Pull != null)
                    hashCode = hashCode * 59 + this.Pull.GetHashCode();
                if (this.Class != null)
                    hashCode = hashCode * 59 + this.Class.GetHashCode();
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
