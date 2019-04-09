{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ListView exposing (ListView, listViewDecoder, listViewEncoder)

import Data.FreeStyleProject exposing (FreeStyleProject, freeStyleProjectDecoder, freeStyleProjectEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias ListView =
    { class : Maybe String
    , description : Maybe String
    , jobs : Maybe (List FreeStyleProject)
    , name : Maybe String
    , url : Maybe String
    }


listViewDecoder : Decoder ListView
listViewDecoder =
    decode ListView
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "description" (Decode.nullable Decode.string) Nothing
        |> optional "jobs" (Decode.nullable (Decode.list freeStyleProjectDecoder)) Nothing
        |> optional "name" (Decode.nullable Decode.string) Nothing
        |> optional "url" (Decode.nullable Decode.string) Nothing



listViewEncoder : ListView -> Encode.Value
listViewEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "description", withDefault Encode.null (map Encode.string model.description) )
        , ( "jobs", withDefault Encode.null (map (Encode.list << List.map freeStyleProjectEncoder) model.jobs) )
        , ( "name", withDefault Encode.null (map Encode.string model.name) )
        , ( "url", withDefault Encode.null (map Encode.string model.url) )
        ]


