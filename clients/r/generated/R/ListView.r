# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' ListView Class
#'
#' @field _class 
#' @field description 
#' @field jobs 
#' @field name 
#' @field url 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ListView <- R6::R6Class(
  'ListView',
  public = list(
    `_class` = NULL,
    `description` = NULL,
    `jobs` = NULL,
    `name` = NULL,
    `url` = NULL,
    initialize = function(`_class`, `description`, `jobs`, `name`, `url`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!missing(`jobs`)) {
        stopifnot(is.list(`jobs`), length(`jobs`) != 0)
        lapply(`jobs`, function(x) stopifnot(R6::is.R6(x)))
        self$`jobs` <- `jobs`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`url`)) {
        stopifnot(is.character(`url`), length(`url`) == 1)
        self$`url` <- `url`
      }
    },
    toJSON = function() {
      ListViewObject <- list()
      if (!is.null(self$`_class`)) {
        ListViewObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`description`)) {
        ListViewObject[['description']] <- self$`description`
      }
      if (!is.null(self$`jobs`)) {
        ListViewObject[['jobs']] <- lapply(self$`jobs`, function(x) x$toJSON())
      }
      if (!is.null(self$`name`)) {
        ListViewObject[['name']] <- self$`name`
      }
      if (!is.null(self$`url`)) {
        ListViewObject[['url']] <- self$`url`
      }

      ListViewObject
    },
    fromJSON = function(ListViewJson) {
      ListViewObject <- jsonlite::fromJSON(ListViewJson)
      if (!is.null(ListViewObject$`_class`)) {
        self$`_class` <- ListViewObject$`_class`
      }
      if (!is.null(ListViewObject$`description`)) {
        self$`description` <- ListViewObject$`description`
      }
      if (!is.null(ListViewObject$`jobs`)) {
        self$`jobs` <- lapply(ListViewObject$`jobs`, function(x) {
          jobsObject <- FreeStyleProject$new()
          jobsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          jobsObject
        })
      }
      if (!is.null(ListViewObject$`name`)) {
        self$`name` <- ListViewObject$`name`
      }
      if (!is.null(ListViewObject$`url`)) {
        self$`url` <- ListViewObject$`url`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "description": %s,
           "jobs": [%s],
           "name": %s,
           "url": %s
        }',
        self$`_class`,
        self$`description`,
        lapply(self$`jobs`, function(x) paste(x$toJSON(), sep=",")),
        self$`name`,
        self$`url`
      )
    },
    fromJSONString = function(ListViewJson) {
      ListViewObject <- jsonlite::fromJSON(ListViewJson)
      self$`_class` <- ListViewObject$`_class`
      self$`description` <- ListViewObject$`description`
      self$`jobs` <- lapply(ListViewObject$`jobs`, function(x) FreeStyleProject$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      self$`name` <- ListViewObject$`name`
      self$`url` <- ListViewObject$`url`
    }
  )
)