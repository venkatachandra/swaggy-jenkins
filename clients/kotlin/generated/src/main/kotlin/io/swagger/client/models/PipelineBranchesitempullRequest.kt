/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
package io.swagger.client.models

import io.swagger.client.models.PipelineBranchesitempullRequestlinks

/**
 * 
 * @param _links 
 * @param author 
 * @param id 
 * @param title 
 * @param url 
 * @param _class 
 */
data class PipelineBranchesitempullRequest (
    val _links: PipelineBranchesitempullRequestlinks? = null,
    val author: kotlin.String? = null,
    val id: kotlin.String? = null,
    val title: kotlin.String? = null,
    val url: kotlin.String? = null,
    val _class: kotlin.String? = null
) {

}