{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.PipelineStepImpl exposing (PipelineStepImpl, pipelineStepImplDecoder, pipelineStepImplEncoder)

import Data.PipelineStepImpllinks exposing (PipelineStepImpllinks, pipelineStepImpllinksDecoder, pipelineStepImpllinksEncoder)
import Data.InputStepImpl exposing (InputStepImpl, inputStepImplDecoder, inputStepImplEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias PipelineStepImpl =
    { class : Maybe String
    , links : Maybe PipelineStepImpllinks
    , displayName : Maybe String
    , durationInMillis : Maybe Int
    , id : Maybe String
    , input : Maybe InputStepImpl
    , result : Maybe String
    , startTime : Maybe String
    , state : Maybe String
    }


pipelineStepImplDecoder : Decoder PipelineStepImpl
pipelineStepImplDecoder =
    decode PipelineStepImpl
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "_links" (Decode.nullable pipelineStepImpllinksDecoder) Nothing
        |> optional "displayName" (Decode.nullable Decode.string) Nothing
        |> optional "durationInMillis" (Decode.nullable Decode.int) Nothing
        |> optional "id" (Decode.nullable Decode.string) Nothing
        |> optional "input" (Decode.nullable inputStepImplDecoder) Nothing
        |> optional "result" (Decode.nullable Decode.string) Nothing
        |> optional "startTime" (Decode.nullable Decode.string) Nothing
        |> optional "state" (Decode.nullable Decode.string) Nothing



pipelineStepImplEncoder : PipelineStepImpl -> Encode.Value
pipelineStepImplEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "_links", withDefault Encode.null (map pipelineStepImpllinksEncoder model.links) )
        , ( "displayName", withDefault Encode.null (map Encode.string model.displayName) )
        , ( "durationInMillis", withDefault Encode.null (map Encode.int model.durationInMillis) )
        , ( "id", withDefault Encode.null (map Encode.string model.id) )
        , ( "input", withDefault Encode.null (map inputStepImplEncoder model.input) )
        , ( "result", withDefault Encode.null (map Encode.string model.result) )
        , ( "startTime", withDefault Encode.null (map Encode.string model.startTime) )
        , ( "state", withDefault Encode.null (map Encode.string model.state) )
        ]


