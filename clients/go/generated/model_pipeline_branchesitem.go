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

type PipelineBranchesitem struct {
	DisplayName string `json:"displayName,omitempty"`
	EstimatedDurationInMillis int32 `json:"estimatedDurationInMillis,omitempty"`
	Name string `json:"name,omitempty"`
	WeatherScore int32 `json:"weatherScore,omitempty"`
	LatestRun PipelineBranchesitemlatestRun `json:"latestRun,omitempty"`
	Organization string `json:"organization,omitempty"`
	PullRequest PipelineBranchesitempullRequest `json:"pullRequest,omitempty"`
	TotalNumberOfPullRequests int32 `json:"totalNumberOfPullRequests,omitempty"`
	Class string `json:"_class,omitempty"`
}
