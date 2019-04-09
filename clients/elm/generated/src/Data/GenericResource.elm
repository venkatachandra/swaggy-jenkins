{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.GenericResource exposing (GenericResource, genericResourceDecoder, genericResourceEncoder)

import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias GenericResource =
    { class : Maybe String
    , displayName : Maybe String
    , durationInMillis : Maybe Int
    , id : Maybe String
    , result : Maybe String
    , startTime : Maybe String
    }


genericResourceDecoder : Decoder GenericResource
genericResourceDecoder =
    decode GenericResource
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "displayName" (Decode.nullable Decode.string) Nothing
        |> optional "durationInMillis" (Decode.nullable Decode.int) Nothing
        |> optional "id" (Decode.nullable Decode.string) Nothing
        |> optional "result" (Decode.nullable Decode.string) Nothing
        |> optional "startTime" (Decode.nullable Decode.string) Nothing



genericResourceEncoder : GenericResource -> Encode.Value
genericResourceEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "displayName", withDefault Encode.null (map Encode.string model.displayName) )
        , ( "durationInMillis", withDefault Encode.null (map Encode.int model.durationInMillis) )
        , ( "id", withDefault Encode.null (map Encode.string model.id) )
        , ( "result", withDefault Encode.null (map Encode.string model.result) )
        , ( "startTime", withDefault Encode.null (map Encode.string model.startTime) )
        ]


