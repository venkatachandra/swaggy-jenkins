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

package io.swagger.client.model
import play.api.libs.json._

case class DefaultCrumbIssuer (
                  `class`: Option[String],
                  crumb: Option[String],
                  crumbRequestField: Option[String]
)

object DefaultCrumbIssuer {
implicit val format: Format[DefaultCrumbIssuer] = Json.format
}

