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

type QueueItemImpl struct {

	Class string `json:"_class,omitempty"`

	ExpectedBuildNumber int32 `json:"expectedBuildNumber,omitempty"`

	Id string `json:"id,omitempty"`

	Pipeline string `json:"pipeline,omitempty"`

	QueuedTime int32 `json:"queuedTime,omitempty"`
}
