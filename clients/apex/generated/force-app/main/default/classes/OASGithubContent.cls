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
 * OASGithubContent
 */
public class OASGithubContent implements OAS.MappedProperties {
    /**
     * Get name
     * @return name
     */
    public String name { get; set; }

    /**
     * Get sha
     * @return sha
     */
    public String sha { get; set; }

    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get repo
     * @return repo
     */
    public String repo { get; set; }

    /**
     * Get size
     * @return size
     */
    public Integer size { get; set; }

    /**
     * Get owner
     * @return owner
     */
    public String owner { get; set; }

    /**
     * Get path
     * @return path
     */
    public String path { get; set; }

    /**
     * Get base64Data
     * @return base64Data
     */
    public String base64Data { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASGithubContent getExample() {
        OASGithubContent githubContent = new OASGithubContent();
          githubContent.name = '';
          githubContent.sha = '';
          githubContent.propertyClass = '';
          githubContent.repo = '';
          githubContent.size = 0;
          githubContent.owner = '';
          githubContent.path = '';
          githubContent.base64Data = '';
        return githubContent;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASGithubContent) {           
            OASGithubContent githubContent = (OASGithubContent) obj;
            return this.name == githubContent.name
                && this.sha == githubContent.sha
                && this.propertyClass == githubContent.propertyClass
                && this.repo == githubContent.repo
                && this.size == githubContent.size
                && this.owner == githubContent.owner
                && this.path == githubContent.path
                && this.base64Data == githubContent.base64Data;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (name == null ? 0 : System.hashCode(name));
        hashCode = (17 * hashCode) + (sha == null ? 0 : System.hashCode(sha));
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (repo == null ? 0 : System.hashCode(repo));
        hashCode = (17 * hashCode) + (size == null ? 0 : System.hashCode(size));
        hashCode = (17 * hashCode) + (owner == null ? 0 : System.hashCode(owner));
        hashCode = (17 * hashCode) + (path == null ? 0 : System.hashCode(path));
        hashCode = (17 * hashCode) + (base64Data == null ? 0 : System.hashCode(base64Data));
        return hashCode;
    }
}
