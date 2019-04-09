# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' ExtensionClassContainerImpl1 Class
#'
#' @field _class 
#' @field _links 
#' @field map 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ExtensionClassContainerImpl1 <- R6::R6Class(
  'ExtensionClassContainerImpl1',
  public = list(
    `_class` = NULL,
    `_links` = NULL,
    `map` = NULL,
    initialize = function(`_class`, `_links`, `map`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`_links`)) {
        stopifnot(R6::is.R6(`_links`))
        self$`_links` <- `_links`
      }
      if (!missing(`map`)) {
        stopifnot(R6::is.R6(`map`))
        self$`map` <- `map`
      }
    },
    toJSON = function() {
      ExtensionClassContainerImpl1Object <- list()
      if (!is.null(self$`_class`)) {
        ExtensionClassContainerImpl1Object[['_class']] <- self$`_class`
      }
      if (!is.null(self$`_links`)) {
        ExtensionClassContainerImpl1Object[['_links']] <- self$`_links`$toJSON()
      }
      if (!is.null(self$`map`)) {
        ExtensionClassContainerImpl1Object[['map']] <- self$`map`$toJSON()
      }

      ExtensionClassContainerImpl1Object
    },
    fromJSON = function(ExtensionClassContainerImpl1Json) {
      ExtensionClassContainerImpl1Object <- jsonlite::fromJSON(ExtensionClassContainerImpl1Json)
      if (!is.null(ExtensionClassContainerImpl1Object$`_class`)) {
        self$`_class` <- ExtensionClassContainerImpl1Object$`_class`
      }
      if (!is.null(ExtensionClassContainerImpl1Object$`_links`)) {
        _linksObject <- ExtensionClassContainerImpl1links$new()
        _linksObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1Object$_links, auto_unbox = TRUE))
        self$`_links` <- _linksObject
      }
      if (!is.null(ExtensionClassContainerImpl1Object$`map`)) {
        mapObject <- ExtensionClassContainerImpl1map$new()
        mapObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1Object$map, auto_unbox = TRUE))
        self$`map` <- mapObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "_links": %s,
           "map": %s
        }',
        self$`_class`,
        self$`_links`$toJSON(),
        self$`map`$toJSON()
      )
    },
    fromJSONString = function(ExtensionClassContainerImpl1Json) {
      ExtensionClassContainerImpl1Object <- jsonlite::fromJSON(ExtensionClassContainerImpl1Json)
      self$`_class` <- ExtensionClassContainerImpl1Object$`_class`
      ExtensionClassContainerImpl1linksObject <- ExtensionClassContainerImpl1links$new()
      self$`_links` <- ExtensionClassContainerImpl1linksObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1Object$_links, auto_unbox = TRUE))
      ExtensionClassContainerImpl1mapObject <- ExtensionClassContainerImpl1map$new()
      self$`map` <- ExtensionClassContainerImpl1mapObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1Object$map, auto_unbox = TRUE))
    }
  )
)
