<?php
/**
 * BlueOceanApiInterface
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Api;

use Symfony\Component\HttpFoundation\File\UploadedFile;
use OpenAPI\Server\Model\Body;
use OpenAPI\Server\Model\BranchImpl;
use OpenAPI\Server\Model\FavoriteImpl;
use OpenAPI\Server\Model\GithubScm;
use OpenAPI\Server\Model\MultibranchPipeline;
use OpenAPI\Server\Model\Organisation;
use OpenAPI\Server\Model\Organisations;
use OpenAPI\Server\Model\Pipeline;
use OpenAPI\Server\Model\PipelineActivities;
use OpenAPI\Server\Model\PipelineFolderImpl;
use OpenAPI\Server\Model\PipelineImpl;
use OpenAPI\Server\Model\PipelineQueue;
use OpenAPI\Server\Model\PipelineRun;
use OpenAPI\Server\Model\PipelineRunNode;
use OpenAPI\Server\Model\PipelineRunNodeSteps;
use OpenAPI\Server\Model\PipelineRunNodes;
use OpenAPI\Server\Model\PipelineRuns;
use OpenAPI\Server\Model\PipelineStepImpl;
use OpenAPI\Server\Model\Pipelines;
use OpenAPI\Server\Model\QueueItemImpl;
use OpenAPI\Server\Model\ScmOrganisations;
use OpenAPI\Server\Model\User;
use OpenAPI\Server\Model\UserFavorites;

/**
 * BlueOceanApiInterface Interface Doc Comment
 *
 * @category Interface
 * @package  OpenAPI\Server\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
interface BlueOceanApiInterface
{

    /**
     * Sets authentication method jenkins_auth
     *
     * @param string $value Value of the jenkins_auth authentication method.
     *
     * @return void
     */
    public function setjenkins_auth($value);

    /**
     * Operation deletePipelineQueueItem
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $queue  Name of the queue item (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return void
     *
     */
    public function deletePipelineQueueItem($organization, $pipeline, $queue, &$responseCode, array &$responseHeaders);

    /**
     * Operation getAuthenticatedUser
     *
     * @param  string $organization  Name of the organization (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\User[]
     *
     */
    public function getAuthenticatedUser($organization, &$responseCode, array &$responseHeaders);

    /**
     * Operation getClasses
     *
     * @param  string $class  Name of the class (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return string
     *
     */
    public function getClasses($class, &$responseCode, array &$responseHeaders);

    /**
     * Operation getJsonWebKey
     *
     * @param  int $key  Key ID received as part of JWT header field kid (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return string
     *
     */
    public function getJsonWebKey($key, &$responseCode, array &$responseHeaders);

    /**
     * Operation getJsonWebToken
     *
     * @param  int $expiryTimeInMins  Token expiry time in minutes, default: 30 minutes (optional)
     * @param  int $maxExpiryTimeInMins  Maximum token expiry time in minutes, default: 480 minutes (optional)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return string
     *
     */
    public function getJsonWebToken($expiryTimeInMins = null, $maxExpiryTimeInMins = null, &$responseCode, array &$responseHeaders);

    /**
     * Operation getOrganisation
     *
     * @param  string $organization  Name of the organization (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\Organisation[]
     *
     */
    public function getOrganisation($organization, &$responseCode, array &$responseHeaders);

    /**
     * Operation getOrganisations
     *
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\Organisations[]
     *
     */
    public function getOrganisations(&$responseCode, array &$responseHeaders);

    /**
     * Operation getPipeline
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\Pipeline[]
     *
     */
    public function getPipeline($organization, $pipeline, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineActivities
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineActivities[]
     *
     */
    public function getPipelineActivities($organization, $pipeline, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineBranch
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $branch  Name of the branch (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\BranchImpl[]
     *
     */
    public function getPipelineBranch($organization, $pipeline, $branch, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineBranchRun
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $branch  Name of the branch (required)
     * @param  string $run  Name of the run (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineRun[]
     *
     */
    public function getPipelineBranchRun($organization, $pipeline, $branch, $run, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineBranches
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\MultibranchPipeline[]
     *
     */
    public function getPipelineBranches($organization, $pipeline, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineFolder
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $folder  Name of the folder (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineFolderImpl[]
     *
     */
    public function getPipelineFolder($organization, $folder, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineFolderPipeline
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $folder  Name of the folder (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineImpl[]
     *
     */
    public function getPipelineFolderPipeline($organization, $pipeline, $folder, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineQueue
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineQueue[]
     *
     */
    public function getPipelineQueue($organization, $pipeline, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineRun
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineRun[]
     *
     */
    public function getPipelineRun($organization, $pipeline, $run, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineRunLog
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  int $start  Start position of the log (optional)
     * @param  bool $download  Set to true in order to download the file, otherwise it&#39;s passed as a response body (optional)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return string
     *
     */
    public function getPipelineRunLog($organization, $pipeline, $run, $start = null, $download = null, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineRunNode
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $node  Name of the node (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineRunNode[]
     *
     */
    public function getPipelineRunNode($organization, $pipeline, $run, $node, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineRunNodeStep
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $node  Name of the node (required)
     * @param  string $step  Name of the step (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineStepImpl[]
     *
     */
    public function getPipelineRunNodeStep($organization, $pipeline, $run, $node, $step, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineRunNodeStepLog
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $node  Name of the node (required)
     * @param  string $step  Name of the step (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return string
     *
     */
    public function getPipelineRunNodeStepLog($organization, $pipeline, $run, $node, $step, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineRunNodeSteps
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $node  Name of the node (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineRunNodeSteps[]
     *
     */
    public function getPipelineRunNodeSteps($organization, $pipeline, $run, $node, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineRunNodes
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineRunNodes[]
     *
     */
    public function getPipelineRunNodes($organization, $pipeline, $run, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelineRuns
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineRuns[]
     *
     */
    public function getPipelineRuns($organization, $pipeline, &$responseCode, array &$responseHeaders);

    /**
     * Operation getPipelines
     *
     * @param  string $organization  Name of the organization (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\Pipelines[]
     *
     */
    public function getPipelines($organization, &$responseCode, array &$responseHeaders);

    /**
     * Operation getSCM
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $scm  Name of SCM (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\GithubScm[]
     *
     */
    public function getSCM($organization, $scm, &$responseCode, array &$responseHeaders);

    /**
     * Operation getSCMOrganisationRepositories
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $scm  Name of SCM (required)
     * @param  string $scmOrganisation  Name of the SCM organization (required)
     * @param  string $credentialId  Credential ID (optional)
     * @param  int $pageSize  Number of items in a page (optional)
     * @param  int $pageNumber  Page number (optional)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\ScmOrganisations[]
     *
     */
    public function getSCMOrganisationRepositories($organization, $scm, $scmOrganisation, $credentialId = null, $pageSize = null, $pageNumber = null, &$responseCode, array &$responseHeaders);

    /**
     * Operation getSCMOrganisationRepository
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $scm  Name of SCM (required)
     * @param  string $scmOrganisation  Name of the SCM organization (required)
     * @param  string $repository  Name of the SCM repository (required)
     * @param  string $credentialId  Credential ID (optional)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\ScmOrganisations[]
     *
     */
    public function getSCMOrganisationRepository($organization, $scm, $scmOrganisation, $repository, $credentialId = null, &$responseCode, array &$responseHeaders);

    /**
     * Operation getSCMOrganisations
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $scm  Name of SCM (required)
     * @param  string $credentialId  Credential ID (optional)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\ScmOrganisations[]
     *
     */
    public function getSCMOrganisations($organization, $scm, $credentialId = null, &$responseCode, array &$responseHeaders);

    /**
     * Operation getUser
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $user  Name of the user (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\User[]
     *
     */
    public function getUser($organization, $user, &$responseCode, array &$responseHeaders);

    /**
     * Operation getUserFavorites
     *
     * @param  string $user  Name of the user (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\UserFavorites[]
     *
     */
    public function getUserFavorites($user, &$responseCode, array &$responseHeaders);

    /**
     * Operation getUsers
     *
     * @param  string $organization  Name of the organization (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\User[]
     *
     */
    public function getUsers($organization, &$responseCode, array &$responseHeaders);

    /**
     * Operation postPipelineRun
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\QueueItemImpl[]
     *
     */
    public function postPipelineRun($organization, $pipeline, $run, &$responseCode, array &$responseHeaders);

    /**
     * Operation postPipelineRuns
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\QueueItemImpl[]
     *
     */
    public function postPipelineRuns($organization, $pipeline, &$responseCode, array &$responseHeaders);

    /**
     * Operation putPipelineFavorite
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  OpenAPI\Server\Model\Body $body  Set JSON string body to {&quot;favorite&quot;: true} to favorite, set value to false to unfavorite (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\FavoriteImpl[]
     *
     */
    public function putPipelineFavorite($organization, $pipeline, Body $body, &$responseCode, array &$responseHeaders);

    /**
     * Operation putPipelineRun
     *
     * @param  string $organization  Name of the organization (required)
     * @param  string $pipeline  Name of the pipeline (required)
     * @param  string $run  Name of the run (required)
     * @param  string $blocking  Set to true to make blocking stop, default: false (optional)
     * @param  int $timeOutInSecs  Timeout in seconds, default: 10 seconds (optional)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return OpenAPI\Server\Model\PipelineRun[]
     *
     */
    public function putPipelineRun($organization, $pipeline, $run, $blocking = null, $timeOutInSecs = null, &$responseCode, array &$responseHeaders);

    /**
     * Operation search
     *
     * @param  string $q  Query string (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return string
     *
     */
    public function search($q, &$responseCode, array &$responseHeaders);

    /**
     * Operation searchClasses
     *
     * @param  string $q  Query string containing an array of class names (required)
     * @param  integer $responseCode     The HTTP response code to return
     * @param  array   $responseHeaders  Additional HTTP headers to return with the response ()
     *
     * @return string
     *
     */
    public function searchClasses($q, &$responseCode, array &$responseHeaders);
}
