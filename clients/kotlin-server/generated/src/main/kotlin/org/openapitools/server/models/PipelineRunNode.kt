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

import org.openapitools.server.models.PipelineRunNodeedges

/**
 * 
 * @param Underscoreclass 
 * @param displayName 
 * @param durationInMillis 
 * @param edges 
 * @param id 
 * @param result 
 * @param startTime 
 * @param state 
 */
data class PipelineRunNode (
    val Underscoreclass: kotlin.String? = null,
    val displayName: kotlin.String? = null,
    val durationInMillis: kotlin.Int? = null,
    val edges: kotlin.Array<PipelineRunNodeedges>? = null,
    val id: kotlin.String? = null,
    val result: kotlin.String? = null,
    val startTime: kotlin.String? = null,
    val state: kotlin.String? = null
) {

}

