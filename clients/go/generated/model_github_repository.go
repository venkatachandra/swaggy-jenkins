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

type GithubRepository struct {
	Class string `json:"_class,omitempty"`
	Links GithubRepositorylinks `json:"_links,omitempty"`
	DefaultBranch string `json:"defaultBranch,omitempty"`
	Description string `json:"description,omitempty"`
	Name string `json:"name,omitempty"`
	Permissions GithubRepositorypermissions `json:"permissions,omitempty"`
	Private bool `json:"private,omitempty"`
	FullName string `json:"fullName,omitempty"`
}
