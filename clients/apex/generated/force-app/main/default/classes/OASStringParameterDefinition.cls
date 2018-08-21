/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OAS-api/OAS-codegen.git
 * Do not edit the class manually.
 */

/**
 * OASStringParameterDefinition
 */
public class OASStringParameterDefinition implements OAS.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get defaultParameterValue
     * @return defaultParameterValue
     */
    public OASStringParameterValue defaultParameterValue { get; set; }

    /**
     * Get description
     * @return description
     */
    public String description { get; set; }

    /**
     * Get name
     * @return name
     */
    public String name { get; set; }

    /**
     * Get r_type
     * @return r_type
     */
    public String r_type { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass',
        'type' => 'r_type'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASStringParameterDefinition getExample() {
        OASStringParameterDefinition stringParameterDefinition = new OASStringParameterDefinition();
          stringParameterDefinition.propertyClass = '';
          stringParameterDefinition.defaultParameterValue = OASStringParameterValue.getExample();
          stringParameterDefinition.description = '';
          stringParameterDefinition.name = '';
          stringParameterDefinition.r_type = '';
        return stringParameterDefinition;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASStringParameterDefinition) {           
            OASStringParameterDefinition stringParameterDefinition = (OASStringParameterDefinition) obj;
            return this.propertyClass == stringParameterDefinition.propertyClass
                && this.defaultParameterValue == stringParameterDefinition.defaultParameterValue
                && this.description == stringParameterDefinition.description
                && this.name == stringParameterDefinition.name
                && this.r_type == stringParameterDefinition.r_type;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (defaultParameterValue == null ? 0 : System.hashCode(defaultParameterValue));
        hashCode = (17 * hashCode) + (description == null ? 0 : System.hashCode(description));
        hashCode = (17 * hashCode) + (name == null ? 0 : System.hashCode(name));
        hashCode = (17 * hashCode) + (r_type == null ? 0 : System.hashCode(r_type));
        return hashCode;
    }
}
