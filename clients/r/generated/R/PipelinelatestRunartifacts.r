# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' PipelinelatestRunartifacts Class
#'
#' @field name 
#' @field size 
#' @field url 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PipelinelatestRunartifacts <- R6::R6Class(
  'PipelinelatestRunartifacts',
  public = list(
    `name` = NULL,
    `size` = NULL,
    `url` = NULL,
    `_class` = NULL,
    initialize = function(`name`, `size`, `url`, `_class`){
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`size`)) {
        stopifnot(is.numeric(`size`), length(`size`) == 1)
        self$`size` <- `size`
      }
      if (!missing(`url`)) {
        stopifnot(is.character(`url`), length(`url`) == 1)
        self$`url` <- `url`
      }
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
    },
    toJSON = function() {
      PipelinelatestRunartifactsObject <- list()
      if (!is.null(self$`name`)) {
        PipelinelatestRunartifactsObject[['name']] <- self$`name`
      }
      if (!is.null(self$`size`)) {
        PipelinelatestRunartifactsObject[['size']] <- self$`size`
      }
      if (!is.null(self$`url`)) {
        PipelinelatestRunartifactsObject[['url']] <- self$`url`
      }
      if (!is.null(self$`_class`)) {
        PipelinelatestRunartifactsObject[['_class']] <- self$`_class`
      }

      PipelinelatestRunartifactsObject
    },
    fromJSON = function(PipelinelatestRunartifactsJson) {
      PipelinelatestRunartifactsObject <- jsonlite::fromJSON(PipelinelatestRunartifactsJson)
      if (!is.null(PipelinelatestRunartifactsObject$`name`)) {
        self$`name` <- PipelinelatestRunartifactsObject$`name`
      }
      if (!is.null(PipelinelatestRunartifactsObject$`size`)) {
        self$`size` <- PipelinelatestRunartifactsObject$`size`
      }
      if (!is.null(PipelinelatestRunartifactsObject$`url`)) {
        self$`url` <- PipelinelatestRunartifactsObject$`url`
      }
      if (!is.null(PipelinelatestRunartifactsObject$`_class`)) {
        self$`_class` <- PipelinelatestRunartifactsObject$`_class`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "name": %s,
           "size": %d,
           "url": %s,
           "_class": %s
        }',
        self$`name`,
        self$`size`,
        self$`url`,
        self$`_class`
      )
    },
    fromJSONString = function(PipelinelatestRunartifactsJson) {
      PipelinelatestRunartifactsObject <- jsonlite::fromJSON(PipelinelatestRunartifactsJson)
      self$`name` <- PipelinelatestRunartifactsObject$`name`
      self$`size` <- PipelinelatestRunartifactsObject$`size`
      self$`url` <- PipelinelatestRunartifactsObject$`url`
      self$`_class` <- PipelinelatestRunartifactsObject$`_class`
    }
  )
)
