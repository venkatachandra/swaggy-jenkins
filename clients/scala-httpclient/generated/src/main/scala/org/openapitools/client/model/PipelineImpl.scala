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

package org.openapitools.client.model


case class PipelineImpl (
  `class`: Option[String] = None,
  displayName: Option[String] = None,
  estimatedDurationInMillis: Option[Integer] = None,
  fullName: Option[String] = None,
  latestRun: Option[String] = None,
  name: Option[String] = None,
  organization: Option[String] = None,
  weatherScore: Option[Integer] = None,
  links: Option[PipelineImpllinks] = None
)

