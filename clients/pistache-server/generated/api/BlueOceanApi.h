/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
/*
 * BlueOceanApi.h
 *
 * 
 */

#ifndef BlueOceanApi_H_
#define BlueOceanApi_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include "Body.h"
#include "BranchImpl.h"
#include "FavoriteImpl.h"
#include "GithubScm.h"
#include "MultibranchPipeline.h"
#include "Organisation.h"
#include "Organisations.h"
#include "Pipeline.h"
#include "PipelineActivities.h"
#include "PipelineFolderImpl.h"
#include "PipelineImpl.h"
#include "PipelineQueue.h"
#include "PipelineRun.h"
#include "PipelineRunNode.h"
#include "PipelineRunNodeSteps.h"
#include "PipelineRunNodes.h"
#include "PipelineRuns.h"
#include "PipelineStepImpl.h"
#include "Pipelines.h"
#include "QueueItemImpl.h"
#include "ScmOrganisations.h"
#include "User.h"
#include "UserFavorites.h"
#include <string>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class  BlueOceanApi {
public:
    BlueOceanApi(Pistache::Address addr);
    virtual ~BlueOceanApi() {};
    void init(size_t thr);
    void start();
    void shutdown();

    const std::string base = "/";

private:
    void setupRoutes();

    void delete_pipeline_queue_item_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_authenticated_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_classes_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_organisation_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_organisations_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_activities_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_branch_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_branch_run_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_branches_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_folder_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_folder_pipeline_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_queue_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_run_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_run_log_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_run_node_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_run_node_step_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_run_node_step_log_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_run_node_steps_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_run_nodes_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipeline_runs_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_pipelines_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_scm_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_scm_organisation_repositories_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_scm_organisation_repository_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_scm_organisations_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_user_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_user_favorites_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void get_users_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_pipeline_run_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void post_pipeline_runs_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void put_pipeline_favorite_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void put_pipeline_run_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void search_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void search_classes_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void blue_ocean_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Http::Endpoint> httpEndpoint;
    Pistache::Rest::Router router;


    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Delete queue item from an organization pipeline queue
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="queue">Name of the queue item</param>
    virtual void delete_pipeline_queue_item(const std::string &organization, const std::string &pipeline, const std::string &queue, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve authenticated user details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    virtual void get_authenticated_user(const std::string &organization, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get a list of class names supported by a given class
    /// </remarks>
    /// <param name="class">Name of the class</param>
    virtual void get_classes(const std::string &class, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve organization details
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    virtual void get_organisation(const std::string &organization, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all organizations details
    /// </remarks>
    virtual void get_organisations(Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    virtual void get_pipeline(const std::string &organization, const std::string &pipeline, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all activities details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    virtual void get_pipeline_activities(const std::string &organization, const std::string &pipeline, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve branch details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="branch">Name of the branch</param>
    virtual void get_pipeline_branch(const std::string &organization, const std::string &pipeline, const std::string &branch, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve branch run details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="branch">Name of the branch</param>
    /// <param name="run">Name of the run</param>
    virtual void get_pipeline_branch_run(const std::string &organization, const std::string &pipeline, const std::string &branch, const std::string &run, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all branches details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    virtual void get_pipeline_branches(const std::string &organization, const std::string &pipeline, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline folder for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="folder">Name of the folder</param>
    virtual void get_pipeline_folder(const std::string &organization, const std::string &folder, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve pipeline details for an organization folder
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="folder">Name of the folder</param>
    virtual void get_pipeline_folder_pipeline(const std::string &organization, const std::string &pipeline, const std::string &folder, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve queue details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    virtual void get_pipeline_queue(const std::string &organization, const std::string &pipeline, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    virtual void get_pipeline_run(const std::string &organization, const std::string &pipeline, const std::string &run, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get log for a pipeline run
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    /// <param name="start">Start position of the log (optional)</param>
    /// <param name="download">Set to true in order to download the file, otherwise it&#39;s passed as a response body (optional)</param>
    virtual void get_pipeline_run_log(const std::string &organization, const std::string &pipeline, const std::string &run, const Optional<int32_t> &start, const Optional<bool> &download, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run node details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    /// <param name="node">Name of the node</param>
    virtual void get_pipeline_run_node(const std::string &organization, const std::string &pipeline, const std::string &run, const std::string &node, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run node details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    /// <param name="node">Name of the node</param>
    /// <param name="step">Name of the step</param>
    virtual void get_pipeline_run_node_step(const std::string &organization, const std::string &pipeline, const std::string &run, const std::string &node, const std::string &step, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get log for a pipeline run node step
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    /// <param name="node">Name of the node</param>
    /// <param name="step">Name of the step</param>
    virtual void get_pipeline_run_node_step_log(const std::string &organization, const std::string &pipeline, const std::string &run, const std::string &node, const std::string &step, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run node steps details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    /// <param name="node">Name of the node</param>
    virtual void get_pipeline_run_node_steps(const std::string &organization, const std::string &pipeline, const std::string &run, const std::string &node, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve run nodes details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    virtual void get_pipeline_run_nodes(const std::string &organization, const std::string &pipeline, const std::string &run, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all runs details for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    virtual void get_pipeline_runs(const std::string &organization, const std::string &pipeline, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve all pipelines details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    virtual void get_pipelines(const std::string &organization, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve SCM details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="scm">Name of SCM</param>
    virtual void get_scm(const std::string &organization, const std::string &scm, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve SCM organization repositories details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="scm">Name of SCM</param>
    /// <param name="scmOrganisation">Name of the SCM organization</param>
    /// <param name="credentialId">Credential ID (optional)</param>
    /// <param name="pageSize">Number of items in a page (optional)</param>
    /// <param name="pageNumber">Page number (optional)</param>
    virtual void get_scm_organisation_repositories(const std::string &organization, const std::string &scm, const std::string &scmOrganisation, const Optional<std::string> &credentialId, const Optional<int32_t> &pageSize, const Optional<int32_t> &pageNumber, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve SCM organization repository details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="scm">Name of SCM</param>
    /// <param name="scmOrganisation">Name of the SCM organization</param>
    /// <param name="repository">Name of the SCM repository</param>
    /// <param name="credentialId">Credential ID (optional)</param>
    virtual void get_scm_organisation_repository(const std::string &organization, const std::string &scm, const std::string &scmOrganisation, const std::string &repository, const Optional<std::string> &credentialId, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve SCM organizations details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="scm">Name of SCM</param>
    /// <param name="credentialId">Credential ID (optional)</param>
    virtual void get_scm_organisations(const std::string &organization, const std::string &scm, const Optional<std::string> &credentialId, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve user details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="user">Name of the user</param>
    virtual void get_user(const std::string &organization, const std::string &user, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve user favorites details for an organization
    /// </remarks>
    /// <param name="user">Name of the user</param>
    virtual void get_user_favorites(const std::string &user, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Retrieve users details for an organization
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    virtual void get_users(const std::string &organization, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Replay an organization pipeline run
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    virtual void post_pipeline_run(const std::string &organization, const std::string &pipeline, const std::string &run, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Start a build for an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    virtual void post_pipeline_runs(const std::string &organization, const std::string &pipeline, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Favorite/unfavorite a pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="body">Set JSON string body to {\&quot;favorite\&quot;: true} to favorite, set value to false to unfavorite</param>
    virtual void put_pipeline_favorite(const std::string &organization, const std::string &pipeline, const Body &body, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Stop a build of an organization pipeline
    /// </remarks>
    /// <param name="organization">Name of the organization</param>
    /// <param name="pipeline">Name of the pipeline</param>
    /// <param name="run">Name of the run</param>
    /// <param name="blocking">Set to true to make blocking stop, default: false (optional)</param>
    /// <param name="timeOutInSecs">Timeout in seconds, default: 10 seconds (optional)</param>
    virtual void put_pipeline_run(const std::string &organization, const std::string &pipeline, const std::string &run, const Optional<std::string> &blocking, const Optional<int32_t> &timeOutInSecs, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Search for any resource details
    /// </remarks>
    /// <param name="q">Query string</param>
    virtual void search(const Optional<std::string> &q, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Get classes details
    /// </remarks>
    /// <param name="q">Query string containing an array of class names</param>
    virtual void search_classes(const Optional<std::string> &q, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* BlueOceanApi_H_ */
