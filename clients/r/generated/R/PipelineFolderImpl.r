# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' PipelineFolderImpl Class
#'
#' @field _class 
#' @field displayName 
#' @field fullName 
#' @field name 
#' @field organization 
#' @field numberOfFolders 
#' @field numberOfPipelines 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PipelineFolderImpl <- R6::R6Class(
  'PipelineFolderImpl',
  public = list(
    `_class` = NULL,
    `displayName` = NULL,
    `fullName` = NULL,
    `name` = NULL,
    `organization` = NULL,
    `numberOfFolders` = NULL,
    `numberOfPipelines` = NULL,
    initialize = function(`_class`, `displayName`, `fullName`, `name`, `organization`, `numberOfFolders`, `numberOfPipelines`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`displayName`)) {
        stopifnot(is.character(`displayName`), length(`displayName`) == 1)
        self$`displayName` <- `displayName`
      }
      if (!missing(`fullName`)) {
        stopifnot(is.character(`fullName`), length(`fullName`) == 1)
        self$`fullName` <- `fullName`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`organization`)) {
        stopifnot(is.character(`organization`), length(`organization`) == 1)
        self$`organization` <- `organization`
      }
      if (!missing(`numberOfFolders`)) {
        stopifnot(is.numeric(`numberOfFolders`), length(`numberOfFolders`) == 1)
        self$`numberOfFolders` <- `numberOfFolders`
      }
      if (!missing(`numberOfPipelines`)) {
        stopifnot(is.numeric(`numberOfPipelines`), length(`numberOfPipelines`) == 1)
        self$`numberOfPipelines` <- `numberOfPipelines`
      }
    },
    toJSON = function() {
      PipelineFolderImplObject <- list()
      if (!is.null(self$`_class`)) {
        PipelineFolderImplObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`displayName`)) {
        PipelineFolderImplObject[['displayName']] <- self$`displayName`
      }
      if (!is.null(self$`fullName`)) {
        PipelineFolderImplObject[['fullName']] <- self$`fullName`
      }
      if (!is.null(self$`name`)) {
        PipelineFolderImplObject[['name']] <- self$`name`
      }
      if (!is.null(self$`organization`)) {
        PipelineFolderImplObject[['organization']] <- self$`organization`
      }
      if (!is.null(self$`numberOfFolders`)) {
        PipelineFolderImplObject[['numberOfFolders']] <- self$`numberOfFolders`
      }
      if (!is.null(self$`numberOfPipelines`)) {
        PipelineFolderImplObject[['numberOfPipelines']] <- self$`numberOfPipelines`
      }

      PipelineFolderImplObject
    },
    fromJSON = function(PipelineFolderImplJson) {
      PipelineFolderImplObject <- jsonlite::fromJSON(PipelineFolderImplJson)
      if (!is.null(PipelineFolderImplObject$`_class`)) {
        self$`_class` <- PipelineFolderImplObject$`_class`
      }
      if (!is.null(PipelineFolderImplObject$`displayName`)) {
        self$`displayName` <- PipelineFolderImplObject$`displayName`
      }
      if (!is.null(PipelineFolderImplObject$`fullName`)) {
        self$`fullName` <- PipelineFolderImplObject$`fullName`
      }
      if (!is.null(PipelineFolderImplObject$`name`)) {
        self$`name` <- PipelineFolderImplObject$`name`
      }
      if (!is.null(PipelineFolderImplObject$`organization`)) {
        self$`organization` <- PipelineFolderImplObject$`organization`
      }
      if (!is.null(PipelineFolderImplObject$`numberOfFolders`)) {
        self$`numberOfFolders` <- PipelineFolderImplObject$`numberOfFolders`
      }
      if (!is.null(PipelineFolderImplObject$`numberOfPipelines`)) {
        self$`numberOfPipelines` <- PipelineFolderImplObject$`numberOfPipelines`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "displayName": %s,
           "fullName": %s,
           "name": %s,
           "organization": %s,
           "numberOfFolders": %d,
           "numberOfPipelines": %d
        }',
        self$`_class`,
        self$`displayName`,
        self$`fullName`,
        self$`name`,
        self$`organization`,
        self$`numberOfFolders`,
        self$`numberOfPipelines`
      )
    },
    fromJSONString = function(PipelineFolderImplJson) {
      PipelineFolderImplObject <- jsonlite::fromJSON(PipelineFolderImplJson)
      self$`_class` <- PipelineFolderImplObject$`_class`
      self$`displayName` <- PipelineFolderImplObject$`displayName`
      self$`fullName` <- PipelineFolderImplObject$`fullName`
      self$`name` <- PipelineFolderImplObject$`name`
      self$`organization` <- PipelineFolderImplObject$`organization`
      self$`numberOfFolders` <- PipelineFolderImplObject$`numberOfFolders`
      self$`numberOfPipelines` <- PipelineFolderImplObject$`numberOfPipelines`
    }
  )
)
