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
package org.openapitools.client.models

import org.openapitools.client.models.PipelineImpllinks

/**
 * 
 * @param Underscoreclass 
 * @param displayName 
 * @param estimatedDurationInMillis 
 * @param fullName 
 * @param latestRun 
 * @param name 
 * @param organization 
 * @param weatherScore 
 * @param Underscorelinks 
 */
data class PipelineImpl (
    val Underscoreclass: kotlin.String? = null,
    val displayName: kotlin.String? = null,
    val estimatedDurationInMillis: kotlin.Int? = null,
    val fullName: kotlin.String? = null,
    val latestRun: kotlin.String? = null,
    val name: kotlin.String? = null,
    val organization: kotlin.String? = null,
    val weatherScore: kotlin.Int? = null,
    val Underscorelinks: PipelineImpllinks? = null
) {

}

