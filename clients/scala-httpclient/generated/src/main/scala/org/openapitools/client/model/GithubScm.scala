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


case class GithubScm (
  `class`: Option[String] = None,
  links: Option[GithubScmlinks] = None,
  credentialId: Option[String] = None,
  id: Option[String] = None,
  uri: Option[String] = None
)

