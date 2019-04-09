{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.GithubRepositories exposing (GithubRepositories, githubRepositoriesDecoder, githubRepositoriesEncoder)

import Data.GithubRepositorieslinks exposing (GithubRepositorieslinks, githubRepositorieslinksDecoder, githubRepositorieslinksEncoder)
import Data.GithubRepository exposing (GithubRepository, githubRepositoryDecoder, githubRepositoryEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias GithubRepositories =
    { class : Maybe String
    , links : Maybe GithubRepositorieslinks
    , items : Maybe (List GithubRepository)
    , lastPage : Maybe Int
    , nextPage : Maybe Int
    , pageSize : Maybe Int
    }


githubRepositoriesDecoder : Decoder GithubRepositories
githubRepositoriesDecoder =
    decode GithubRepositories
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "_links" (Decode.nullable githubRepositorieslinksDecoder) Nothing
        |> optional "items" (Decode.nullable (Decode.list githubRepositoryDecoder)) Nothing
        |> optional "lastPage" (Decode.nullable Decode.int) Nothing
        |> optional "nextPage" (Decode.nullable Decode.int) Nothing
        |> optional "pageSize" (Decode.nullable Decode.int) Nothing



githubRepositoriesEncoder : GithubRepositories -> Encode.Value
githubRepositoriesEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "_links", withDefault Encode.null (map githubRepositorieslinksEncoder model.links) )
        , ( "items", withDefault Encode.null (map (Encode.list << List.map githubRepositoryEncoder) model.items) )
        , ( "lastPage", withDefault Encode.null (map Encode.int model.lastPage) )
        , ( "nextPage", withDefault Encode.null (map Encode.int model.nextPage) )
        , ( "pageSize", withDefault Encode.null (map Encode.int model.pageSize) )
        ]


