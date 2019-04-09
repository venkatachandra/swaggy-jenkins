{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.GithubScm exposing (GithubScm, githubScmDecoder, githubScmEncoder)

import Data.GithubScmlinks exposing (GithubScmlinks, githubScmlinksDecoder, githubScmlinksEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias GithubScm =
    { class : Maybe String
    , links : Maybe GithubScmlinks
    , credentialId : Maybe String
    , id : Maybe String
    , uri : Maybe String
    }


githubScmDecoder : Decoder GithubScm
githubScmDecoder =
    decode GithubScm
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "_links" (Decode.nullable githubScmlinksDecoder) Nothing
        |> optional "credentialId" (Decode.nullable Decode.string) Nothing
        |> optional "id" (Decode.nullable Decode.string) Nothing
        |> optional "uri" (Decode.nullable Decode.string) Nothing



githubScmEncoder : GithubScm -> Encode.Value
githubScmEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "_links", withDefault Encode.null (map githubScmlinksEncoder model.links) )
        , ( "credentialId", withDefault Encode.null (map Encode.string model.credentialId) )
        , ( "id", withDefault Encode.null (map Encode.string model.id) )
        , ( "uri", withDefault Encode.null (map Encode.string model.uri) )
        ]


