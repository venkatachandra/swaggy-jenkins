/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * API version: 1.1.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type ExtensionClassImpl struct {
	Class string `json:"_class,omitempty"`
	Links ExtensionClassImpllinks `json:"_links,omitempty"`
	Classes []string `json:"classes,omitempty"`
}
