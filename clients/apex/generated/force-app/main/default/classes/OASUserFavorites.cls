/*
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OAS-api/OAS-codegen.git
 * Do not edit the class manually.
 */

/**
 * OASUserFavorites
 */
public class OASUserFavorites extends List<OASFavoriteImpl> {
    public static OASUserFavorites getExample() {
        OASUserFavorites userFavorites = new OASUserFavorites();
        return userFavorites;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASUserFavorites) {           
                return true;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        return hashCode;
    }
}

