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


package com.wordnik.client.model


case class GithubRespositoryContainer (
  _class: Option[String],
  _links: Option[GithubRespositoryContainerlinks],
  repositories: Option[GithubRepositories]
)