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

type StringParameterDefinition struct {
	Class string `json:"_class,omitempty"`
	DefaultParameterValue StringParameterValue `json:"defaultParameterValue,omitempty"`
	Description string `json:"description,omitempty"`
	Name string `json:"name,omitempty"`
	Type string `json:"type,omitempty"`
}
