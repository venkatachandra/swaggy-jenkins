# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.1
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' GithubOrganization Class
#'
#' @field _class 
#' @field _links 
#' @field jenkinsOrganizationPipeline 
#' @field name 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GithubOrganization <- R6::R6Class(
  'GithubOrganization',
  public = list(
    `_class` = NULL,
    `_links` = NULL,
    `jenkinsOrganizationPipeline` = NULL,
    `name` = NULL,
    initialize = function(`_class`, `_links`, `jenkinsOrganizationPipeline`, `name`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`_links`)) {
        stopifnot(R6::is.R6(`_links`))
        self$`_links` <- `_links`
      }
      if (!missing(`jenkinsOrganizationPipeline`)) {
        self$`jenkinsOrganizationPipeline` <- `jenkinsOrganizationPipeline`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
    },
    toJSON = function() {
      GithubOrganizationObject <- list()
      if (!is.null(self$`_class`)) {
        GithubOrganizationObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`_links`)) {
        GithubOrganizationObject[['_links']] <- self$`_links`$toJSON()
      }
      if (!is.null(self$`jenkinsOrganizationPipeline`)) {
        GithubOrganizationObject[['jenkinsOrganizationPipeline']] <- self$`jenkinsOrganizationPipeline`
      }
      if (!is.null(self$`name`)) {
        GithubOrganizationObject[['name']] <- self$`name`
      }

      GithubOrganizationObject
    },
    fromJSON = function(GithubOrganizationJson) {
      GithubOrganizationObject <- jsonlite::fromJSON(GithubOrganizationJson)
      if (!is.null(GithubOrganizationObject$`_class`)) {
        self$`_class` <- GithubOrganizationObject$`_class`
      }
      if (!is.null(GithubOrganizationObject$`_links`)) {
        _linksObject <- GithubOrganizationlinks$new()
        _linksObject$fromJSON(jsonlite::toJSON(GithubOrganizationObject$_links, auto_unbox = TRUE))
        self$`_links` <- _linksObject
      }
      if (!is.null(GithubOrganizationObject$`jenkinsOrganizationPipeline`)) {
        self$`jenkinsOrganizationPipeline` <- GithubOrganizationObject$`jenkinsOrganizationPipeline`
      }
      if (!is.null(GithubOrganizationObject$`name`)) {
        self$`name` <- GithubOrganizationObject$`name`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "_links": %s,
           "jenkinsOrganizationPipeline": %s,
           "name": %s
        }',
        self$`_class`,
        self$`_links`$toJSON(),
        self$`jenkinsOrganizationPipeline`,
        self$`name`
      )
    },
    fromJSONString = function(GithubOrganizationJson) {
      GithubOrganizationObject <- jsonlite::fromJSON(GithubOrganizationJson)
      self$`_class` <- GithubOrganizationObject$`_class`
      GithubOrganizationlinksObject <- GithubOrganizationlinks$new()
      self$`_links` <- GithubOrganizationlinksObject$fromJSON(jsonlite::toJSON(GithubOrganizationObject$_links, auto_unbox = TRUE))
      self$`jenkinsOrganizationPipeline` <- GithubOrganizationObject$`jenkinsOrganizationPipeline`
      self$`name` <- GithubOrganizationObject$`name`
    }
  )
)
