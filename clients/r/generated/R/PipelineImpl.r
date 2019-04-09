# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' PipelineImpl Class
#'
#' @field _class 
#' @field displayName 
#' @field estimatedDurationInMillis 
#' @field fullName 
#' @field latestRun 
#' @field name 
#' @field organization 
#' @field weatherScore 
#' @field _links 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PipelineImpl <- R6::R6Class(
  'PipelineImpl',
  public = list(
    `_class` = NULL,
    `displayName` = NULL,
    `estimatedDurationInMillis` = NULL,
    `fullName` = NULL,
    `latestRun` = NULL,
    `name` = NULL,
    `organization` = NULL,
    `weatherScore` = NULL,
    `_links` = NULL,
    initialize = function(`_class`, `displayName`, `estimatedDurationInMillis`, `fullName`, `latestRun`, `name`, `organization`, `weatherScore`, `_links`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`displayName`)) {
        stopifnot(is.character(`displayName`), length(`displayName`) == 1)
        self$`displayName` <- `displayName`
      }
      if (!missing(`estimatedDurationInMillis`)) {
        stopifnot(is.numeric(`estimatedDurationInMillis`), length(`estimatedDurationInMillis`) == 1)
        self$`estimatedDurationInMillis` <- `estimatedDurationInMillis`
      }
      if (!missing(`fullName`)) {
        stopifnot(is.character(`fullName`), length(`fullName`) == 1)
        self$`fullName` <- `fullName`
      }
      if (!missing(`latestRun`)) {
        stopifnot(is.character(`latestRun`), length(`latestRun`) == 1)
        self$`latestRun` <- `latestRun`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`organization`)) {
        stopifnot(is.character(`organization`), length(`organization`) == 1)
        self$`organization` <- `organization`
      }
      if (!missing(`weatherScore`)) {
        stopifnot(is.numeric(`weatherScore`), length(`weatherScore`) == 1)
        self$`weatherScore` <- `weatherScore`
      }
      if (!missing(`_links`)) {
        stopifnot(R6::is.R6(`_links`))
        self$`_links` <- `_links`
      }
    },
    toJSON = function() {
      PipelineImplObject <- list()
      if (!is.null(self$`_class`)) {
        PipelineImplObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`displayName`)) {
        PipelineImplObject[['displayName']] <- self$`displayName`
      }
      if (!is.null(self$`estimatedDurationInMillis`)) {
        PipelineImplObject[['estimatedDurationInMillis']] <- self$`estimatedDurationInMillis`
      }
      if (!is.null(self$`fullName`)) {
        PipelineImplObject[['fullName']] <- self$`fullName`
      }
      if (!is.null(self$`latestRun`)) {
        PipelineImplObject[['latestRun']] <- self$`latestRun`
      }
      if (!is.null(self$`name`)) {
        PipelineImplObject[['name']] <- self$`name`
      }
      if (!is.null(self$`organization`)) {
        PipelineImplObject[['organization']] <- self$`organization`
      }
      if (!is.null(self$`weatherScore`)) {
        PipelineImplObject[['weatherScore']] <- self$`weatherScore`
      }
      if (!is.null(self$`_links`)) {
        PipelineImplObject[['_links']] <- self$`_links`$toJSON()
      }

      PipelineImplObject
    },
    fromJSON = function(PipelineImplJson) {
      PipelineImplObject <- jsonlite::fromJSON(PipelineImplJson)
      if (!is.null(PipelineImplObject$`_class`)) {
        self$`_class` <- PipelineImplObject$`_class`
      }
      if (!is.null(PipelineImplObject$`displayName`)) {
        self$`displayName` <- PipelineImplObject$`displayName`
      }
      if (!is.null(PipelineImplObject$`estimatedDurationInMillis`)) {
        self$`estimatedDurationInMillis` <- PipelineImplObject$`estimatedDurationInMillis`
      }
      if (!is.null(PipelineImplObject$`fullName`)) {
        self$`fullName` <- PipelineImplObject$`fullName`
      }
      if (!is.null(PipelineImplObject$`latestRun`)) {
        self$`latestRun` <- PipelineImplObject$`latestRun`
      }
      if (!is.null(PipelineImplObject$`name`)) {
        self$`name` <- PipelineImplObject$`name`
      }
      if (!is.null(PipelineImplObject$`organization`)) {
        self$`organization` <- PipelineImplObject$`organization`
      }
      if (!is.null(PipelineImplObject$`weatherScore`)) {
        self$`weatherScore` <- PipelineImplObject$`weatherScore`
      }
      if (!is.null(PipelineImplObject$`_links`)) {
        _linksObject <- PipelineImpllinks$new()
        _linksObject$fromJSON(jsonlite::toJSON(PipelineImplObject$_links, auto_unbox = TRUE))
        self$`_links` <- _linksObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "displayName": %s,
           "estimatedDurationInMillis": %d,
           "fullName": %s,
           "latestRun": %s,
           "name": %s,
           "organization": %s,
           "weatherScore": %d,
           "_links": %s
        }',
        self$`_class`,
        self$`displayName`,
        self$`estimatedDurationInMillis`,
        self$`fullName`,
        self$`latestRun`,
        self$`name`,
        self$`organization`,
        self$`weatherScore`,
        self$`_links`$toJSON()
      )
    },
    fromJSONString = function(PipelineImplJson) {
      PipelineImplObject <- jsonlite::fromJSON(PipelineImplJson)
      self$`_class` <- PipelineImplObject$`_class`
      self$`displayName` <- PipelineImplObject$`displayName`
      self$`estimatedDurationInMillis` <- PipelineImplObject$`estimatedDurationInMillis`
      self$`fullName` <- PipelineImplObject$`fullName`
      self$`latestRun` <- PipelineImplObject$`latestRun`
      self$`name` <- PipelineImplObject$`name`
      self$`organization` <- PipelineImplObject$`organization`
      self$`weatherScore` <- PipelineImplObject$`weatherScore`
      PipelineImpllinksObject <- PipelineImpllinks$new()
      self$`_links` <- PipelineImpllinksObject$fromJSON(jsonlite::toJSON(PipelineImplObject$_links, auto_unbox = TRUE))
    }
  )
)
