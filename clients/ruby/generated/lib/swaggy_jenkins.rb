=begin
#Swaggy Jenkins

#Jenkins API clients generated from Swagger / Open API specification

OpenAPI spec version: 1.1.0
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 3.2.1-SNAPSHOT

=end

# Common files
require 'swaggy_jenkins/api_client'
require 'swaggy_jenkins/api_error'
require 'swaggy_jenkins/version'
require 'swaggy_jenkins/configuration'

# Models
require 'swaggy_jenkins/models/all_view'
require 'swaggy_jenkins/models/body'
require 'swaggy_jenkins/models/branch_impl'
require 'swaggy_jenkins/models/branch_impllinks'
require 'swaggy_jenkins/models/branch_implpermissions'
require 'swaggy_jenkins/models/cause_action'
require 'swaggy_jenkins/models/cause_user_id_cause'
require 'swaggy_jenkins/models/classes_by_class'
require 'swaggy_jenkins/models/clock_difference'
require 'swaggy_jenkins/models/computer_set'
require 'swaggy_jenkins/models/default_crumb_issuer'
require 'swaggy_jenkins/models/disk_space_monitor_descriptor_disk_space'
require 'swaggy_jenkins/models/empty_change_log_set'
require 'swaggy_jenkins/models/extension_class_container_impl1'
require 'swaggy_jenkins/models/extension_class_container_impl1links'
require 'swaggy_jenkins/models/extension_class_container_impl1map'
require 'swaggy_jenkins/models/extension_class_impl'
require 'swaggy_jenkins/models/extension_class_impllinks'
require 'swaggy_jenkins/models/favorite_impl'
require 'swaggy_jenkins/models/favorite_impllinks'
require 'swaggy_jenkins/models/free_style_build'
require 'swaggy_jenkins/models/free_style_project'
require 'swaggy_jenkins/models/free_style_projectactions'
require 'swaggy_jenkins/models/free_style_projecthealth_report'
require 'swaggy_jenkins/models/generic_resource'
require 'swaggy_jenkins/models/github_content'
require 'swaggy_jenkins/models/github_file'
require 'swaggy_jenkins/models/github_organization'
require 'swaggy_jenkins/models/github_organizationlinks'
require 'swaggy_jenkins/models/github_repositories'
require 'swaggy_jenkins/models/github_repositorieslinks'
require 'swaggy_jenkins/models/github_repository'
require 'swaggy_jenkins/models/github_repositorylinks'
require 'swaggy_jenkins/models/github_repositorypermissions'
require 'swaggy_jenkins/models/github_respository_container'
require 'swaggy_jenkins/models/github_respository_containerlinks'
require 'swaggy_jenkins/models/github_scm'
require 'swaggy_jenkins/models/github_scmlinks'
require 'swaggy_jenkins/models/hudson'
require 'swaggy_jenkins/models/hudson_master_computer'
require 'swaggy_jenkins/models/hudson_master_computerexecutors'
require 'swaggy_jenkins/models/hudson_master_computermonitor_data'
require 'swaggy_jenkins/models/hudsonassigned_labels'
require 'swaggy_jenkins/models/input_step_impl'
require 'swaggy_jenkins/models/input_step_impllinks'
require 'swaggy_jenkins/models/label1'
require 'swaggy_jenkins/models/link'
require 'swaggy_jenkins/models/list_view'
require 'swaggy_jenkins/models/multibranch_pipeline'
require 'swaggy_jenkins/models/null_scm'
require 'swaggy_jenkins/models/organisation'
require 'swaggy_jenkins/models/organisations'
require 'swaggy_jenkins/models/pipeline'
require 'swaggy_jenkins/models/pipeline_activities'
require 'swaggy_jenkins/models/pipeline_activity'
require 'swaggy_jenkins/models/pipeline_activityartifacts'
require 'swaggy_jenkins/models/pipeline_branches'
require 'swaggy_jenkins/models/pipeline_branchesitem'
require 'swaggy_jenkins/models/pipeline_branchesitemlatest_run'
require 'swaggy_jenkins/models/pipeline_branchesitempull_request'
require 'swaggy_jenkins/models/pipeline_branchesitempull_requestlinks'
require 'swaggy_jenkins/models/pipeline_folder_impl'
require 'swaggy_jenkins/models/pipeline_impl'
require 'swaggy_jenkins/models/pipeline_impllinks'
require 'swaggy_jenkins/models/pipeline_queue'
require 'swaggy_jenkins/models/pipeline_run'
require 'swaggy_jenkins/models/pipeline_run_impl'
require 'swaggy_jenkins/models/pipeline_run_impllinks'
require 'swaggy_jenkins/models/pipeline_run_node'
require 'swaggy_jenkins/models/pipeline_run_node_steps'
require 'swaggy_jenkins/models/pipeline_run_nodeedges'
require 'swaggy_jenkins/models/pipeline_run_nodes'
require 'swaggy_jenkins/models/pipeline_run_steps'
require 'swaggy_jenkins/models/pipeline_runartifacts'
require 'swaggy_jenkins/models/pipeline_runs'
require 'swaggy_jenkins/models/pipeline_step_impl'
require 'swaggy_jenkins/models/pipeline_step_impllinks'
require 'swaggy_jenkins/models/pipelinelatest_run'
require 'swaggy_jenkins/models/pipelinelatest_runartifacts'
require 'swaggy_jenkins/models/pipelines'
require 'swaggy_jenkins/models/queue'
require 'swaggy_jenkins/models/queue_blocked_item'
require 'swaggy_jenkins/models/queue_item_impl'
require 'swaggy_jenkins/models/queue_left_item'
require 'swaggy_jenkins/models/response_time_monitor_data'
require 'swaggy_jenkins/models/scm_organisations'
require 'swaggy_jenkins/models/string_parameter_definition'
require 'swaggy_jenkins/models/string_parameter_value'
require 'swaggy_jenkins/models/swap_space_monitor_memory_usage2'
require 'swaggy_jenkins/models/unlabeled_load_statistics'
require 'swaggy_jenkins/models/user'
require 'swaggy_jenkins/models/user_favorites'
require 'swaggy_jenkins/models/users'

# APIs
require 'swaggy_jenkins/api/base_remote_access_api'
require 'swaggy_jenkins/api/blue_ocean_api'
require 'swaggy_jenkins/api/remote_access_api'

module SwaggyJenkinsClient
  class << self
    # Customize default settings for the SDK using block.
    #   SwaggyJenkinsClient.configure do |config|
    #     config.username = "xxx"
    #     config.password = "xxx"
    #   end
    # If no block given, return the default Configuration object.
    def configure
      if block_given?
        yield(Configuration.default)
      else
        Configuration.default
      end
    end
  end
end
