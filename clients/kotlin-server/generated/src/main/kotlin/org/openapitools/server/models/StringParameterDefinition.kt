/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models

import org.openapitools.server.models.StringParameterValue

/**
 * 
 * @param Underscoreclass 
 * @param defaultParameterValue 
 * @param description 
 * @param name 
 * @param type 
 */
data class StringParameterDefinition (
    val Underscoreclass: kotlin.String? = null,
    val defaultParameterValue: StringParameterValue? = null,
    val description: kotlin.String? = null,
    val name: kotlin.String? = null,
    val type: kotlin.String? = null
) {

}

