{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.Organisations exposing (Organisations, organisationsDecoder, organisationsEncoder)

import Data.Organisation exposing (Organisation, organisationDecoder, organisationEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias Organisations =
    List Organisation


organisationsDecoder : Decoder Organisations
organisationsDecoder =
    Decode.list organisationDecoder


organisationsEncoder : Organisations -> Encode.Value
organisationsEncoder model =
    Encode.list (List.map organisationEncoder model)

