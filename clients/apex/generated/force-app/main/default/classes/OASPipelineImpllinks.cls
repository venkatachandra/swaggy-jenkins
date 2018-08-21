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
 * OASPipelineImpllinks
 */
public class OASPipelineImpllinks implements OAS.MappedProperties {
    /**
     * Get runs
     * @return runs
     */
    public OASLink runs { get; set; }

    /**
     * Get self
     * @return self
     */
    public OASLink self { get; set; }

    /**
     * Get queue
     * @return queue
     */
    public OASLink queue { get; set; }

    /**
     * Get actions
     * @return actions
     */
    public OASLink actions { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASPipelineImpllinks getExample() {
        OASPipelineImpllinks pipelineImpllinks = new OASPipelineImpllinks();
          pipelineImpllinks.runs = OASLink.getExample();
          pipelineImpllinks.self = OASLink.getExample();
          pipelineImpllinks.queue = OASLink.getExample();
          pipelineImpllinks.actions = OASLink.getExample();
          pipelineImpllinks.propertyClass = '';
        return pipelineImpllinks;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASPipelineImpllinks) {           
            OASPipelineImpllinks pipelineImpllinks = (OASPipelineImpllinks) obj;
            return this.runs == pipelineImpllinks.runs
                && this.self == pipelineImpllinks.self
                && this.queue == pipelineImpllinks.queue
                && this.actions == pipelineImpllinks.actions
                && this.propertyClass == pipelineImpllinks.propertyClass;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (runs == null ? 0 : System.hashCode(runs));
        hashCode = (17 * hashCode) + (self == null ? 0 : System.hashCode(self));
        hashCode = (17 * hashCode) + (queue == null ? 0 : System.hashCode(queue));
        hashCode = (17 * hashCode) + (actions == null ? 0 : System.hashCode(actions));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        return hashCode;
    }
}
