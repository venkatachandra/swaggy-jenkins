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

type ComputerSet struct {

	Class string `json:"_class,omitempty"`

	BusyExecutors int32 `json:"busyExecutors,omitempty"`

	Computer []HudsonMasterComputer `json:"computer,omitempty"`

	DisplayName string `json:"displayName,omitempty"`

	TotalExecutors int32 `json:"totalExecutors,omitempty"`
}
