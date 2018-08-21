<?php
/**
 * SlimRouter
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPIServer
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/** 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */
namespace OpenAPIServer;

use OpenAPIServer\Api\BlueOceanApi;
use OpenAPIServer\Api\RemoteAccessApi;
use Slim\App;
use Psr\Container\ContainerInterface;
use InvalidArgumentException;
use Tuupola\Middleware\HttpBasicAuthentication;

/**
 * SlimRouter Class Doc Comment
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPIServer\Api
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */
class SlimRouter {

    /**
     * @var $slimApp Slim\App instance
     */
    private $slimApp;

    /**
     * Class constructor
     *
     * @param ContainerInterface|array $container Either a ContainerInterface or an associative array of app settings
     * @throws InvalidArgumentException when no container is provided that implements ContainerInterface
     */
    public function __construct($container = []) {
        $app = new App($container);

        $basicAuth = new HttpBasicAuthentication([
            "secure" => false,
            "authenticator" => function ($arguments) {
                $user = $arguments["user"];
                $password = $arguments["password"];
                return false;
            }
        ]);

        $app->GET(
            '//jwt-auth/token', BlueOceanApi::class . ':getJsonWebToken'
        );
        $app->GET(
            '//blue/rest/organizations/', BlueOceanApi::class . ':getOrganisations'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/search/', BlueOceanApi::class . ':search'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/classes/', BlueOceanApi::class . ':searchClasses'
        )->add(
            $basicAuth
        );
        $app->DELETE(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/queue/{queue}', BlueOceanApi::class . ':deletePipelineQueueItem'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/user/', BlueOceanApi::class . ':getAuthenticatedUser'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/classes/{class}', BlueOceanApi::class . ':getClasses'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//jwt-auth/jwks/{key}', BlueOceanApi::class . ':getJsonWebKey'
        );
        $app->GET(
            '//blue/rest/organizations/{organization}', BlueOceanApi::class . ':getOrganisation'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}', BlueOceanApi::class . ':getPipeline'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/activities', BlueOceanApi::class . ':getPipelineActivities'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/branches/{branch}/', BlueOceanApi::class . ':getPipelineBranch'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/branches/{branch}/runs/{run}', BlueOceanApi::class . ':getPipelineBranchRun'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/branches', BlueOceanApi::class . ':getPipelineBranches'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{folder}/', BlueOceanApi::class . ':getPipelineFolder'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{folder}/pipelines/{pipeline}', BlueOceanApi::class . ':getPipelineFolderPipeline'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/queue', BlueOceanApi::class . ':getPipelineQueue'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}', BlueOceanApi::class . ':getPipelineRun'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/log', BlueOceanApi::class . ':getPipelineRunLog'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}', BlueOceanApi::class . ':getPipelineRunNode'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step}', BlueOceanApi::class . ':getPipelineRunNodeStep'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step}/log', BlueOceanApi::class . ':getPipelineRunNodeStepLog'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps', BlueOceanApi::class . ':getPipelineRunNodeSteps'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes', BlueOceanApi::class . ':getPipelineRunNodes'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs', BlueOceanApi::class . ':getPipelineRuns'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/pipelines/', BlueOceanApi::class . ':getPipelines'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/scm/{scm}', BlueOceanApi::class . ':getSCM'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/scm/{scm}/organizations/{scmOrganisation}/repositories', BlueOceanApi::class . ':getSCMOrganisationRepositories'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/scm/{scm}/organizations/{scmOrganisation}/repositories/{repository}', BlueOceanApi::class . ':getSCMOrganisationRepository'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/scm/{scm}/organizations', BlueOceanApi::class . ':getSCMOrganisations'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/users/{user}', BlueOceanApi::class . ':getUser'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/users/{user}/favorites', BlueOceanApi::class . ':getUserFavorites'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//blue/rest/organizations/{organization}/users/', BlueOceanApi::class . ':getUsers'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/replay', BlueOceanApi::class . ':postPipelineRun'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs', BlueOceanApi::class . ':postPipelineRuns'
        )->add(
            $basicAuth
        );
        $app->PUT(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/favorite', BlueOceanApi::class . ':putPipelineFavorite'
        )->add(
            $basicAuth
        );
        $app->PUT(
            '//blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/stop', BlueOceanApi::class . ':putPipelineRun'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//computer/api/json', RemoteAccessApi::class . ':getComputer'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//crumbIssuer/api/json', RemoteAccessApi::class . ':getCrumb'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//api/json', RemoteAccessApi::class . ':getJenkins'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//queue/api/json', RemoteAccessApi::class . ':getQueue'
        )->add(
            $basicAuth
        );
        $app->HEAD(
            '//api/json', RemoteAccessApi::class . ':headJenkins'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//createItem', RemoteAccessApi::class . ':postCreateItem'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//createView', RemoteAccessApi::class . ':postCreateView'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//job/{name}/api/json', RemoteAccessApi::class . ':getJob'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//job/{name}/config.xml', RemoteAccessApi::class . ':getJobConfig'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//job/{name}/lastBuild/api/json', RemoteAccessApi::class . ':getJobLastBuild'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//job/{name}/{number}/logText/progressiveText', RemoteAccessApi::class . ':getJobProgressiveText'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//queue/item/{number}/api/json', RemoteAccessApi::class . ':getQueueItem'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//view/{name}/api/json', RemoteAccessApi::class . ':getView'
        )->add(
            $basicAuth
        );
        $app->GET(
            '//view/{name}/config.xml', RemoteAccessApi::class . ':getViewConfig'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//job/{name}/build', RemoteAccessApi::class . ':postJobBuild'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//job/{name}/config.xml', RemoteAccessApi::class . ':postJobConfig'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//job/{name}/doDelete', RemoteAccessApi::class . ':postJobDelete'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//job/{name}/disable', RemoteAccessApi::class . ':postJobDisable'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//job/{name}/enable', RemoteAccessApi::class . ':postJobEnable'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//job/{name}/lastBuild/stop', RemoteAccessApi::class . ':postJobLastBuildStop'
        )->add(
            $basicAuth
        );
        $app->POST(
            '//view/{name}/config.xml', RemoteAccessApi::class . ':postViewConfig'
        )->add(
            $basicAuth
        );

        $this->slimApp = $app;
    }

    /**
     * Returns Slim Framework instance
     * @return App
     */
    public function getSlimApp() {
        return $this->slimApp;
    }
}