/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class PipelineBranchesitem(
  displayName: Option[String],

  estimatedDurationInMillis: Option[Int],

  name: Option[String],

  weatherScore: Option[Int],

  latestRun: Option[PipelineBranchesitemlatestRun],

  organization: Option[String],

  pullRequest: Option[PipelineBranchesitempullRequest],

  totalNumberOfPullRequests: Option[Int],

  Underscoreclass: Option[String]

 )
