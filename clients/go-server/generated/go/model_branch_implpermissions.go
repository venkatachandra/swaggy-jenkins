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

type BranchImplpermissions struct {

	Create bool `json:"create,omitempty"`

	Read bool `json:"read,omitempty"`

	Start bool `json:"start,omitempty"`

	Stop bool `json:"stop,omitempty"`

	Class string `json:"_class,omitempty"`
}
