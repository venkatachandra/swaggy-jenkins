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

import org.openapitools.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class InputStepImpl (
  `class`: Option[String],
  links: Option[InputStepImpllinks],
  id: Option[String],
  message: Option[String],
  ok: Option[String],
  parameters: Option[Seq[StringParameterDefinition]],
  submitter: Option[String]
) extends ApiModel


