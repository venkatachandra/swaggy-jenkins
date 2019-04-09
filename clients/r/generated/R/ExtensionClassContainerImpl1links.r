# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' ExtensionClassContainerImpl1links Class
#'
#' @field self 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ExtensionClassContainerImpl1links <- R6::R6Class(
  'ExtensionClassContainerImpl1links',
  public = list(
    `self` = NULL,
    `_class` = NULL,
    initialize = function(`self`, `_class`){
      if (!missing(`self`)) {
        stopifnot(R6::is.R6(`self`))
        self$`self` <- `self`
      }
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
    },
    toJSON = function() {
      ExtensionClassContainerImpl1linksObject <- list()
      if (!is.null(self$`self`)) {
        ExtensionClassContainerImpl1linksObject[['self']] <- self$`self`$toJSON()
      }
      if (!is.null(self$`_class`)) {
        ExtensionClassContainerImpl1linksObject[['_class']] <- self$`_class`
      }

      ExtensionClassContainerImpl1linksObject
    },
    fromJSON = function(ExtensionClassContainerImpl1linksJson) {
      ExtensionClassContainerImpl1linksObject <- jsonlite::fromJSON(ExtensionClassContainerImpl1linksJson)
      if (!is.null(ExtensionClassContainerImpl1linksObject$`self`)) {
        selfObject <- Link$new()
        selfObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1linksObject$self, auto_unbox = TRUE))
        self$`self` <- selfObject
      }
      if (!is.null(ExtensionClassContainerImpl1linksObject$`_class`)) {
        self$`_class` <- ExtensionClassContainerImpl1linksObject$`_class`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "self": %s,
           "_class": %s
        }',
        self$`self`$toJSON(),
        self$`_class`
      )
    },
    fromJSONString = function(ExtensionClassContainerImpl1linksJson) {
      ExtensionClassContainerImpl1linksObject <- jsonlite::fromJSON(ExtensionClassContainerImpl1linksJson)
      LinkObject <- Link$new()
      self$`self` <- LinkObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1linksObject$self, auto_unbox = TRUE))
      self$`_class` <- ExtensionClassContainerImpl1linksObject$`_class`
    }
  )
)
