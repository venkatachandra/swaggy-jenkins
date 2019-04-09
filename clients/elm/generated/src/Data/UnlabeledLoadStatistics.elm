{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.UnlabeledLoadStatistics exposing (UnlabeledLoadStatistics, unlabeledLoadStatisticsDecoder, unlabeledLoadStatisticsEncoder)

import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias UnlabeledLoadStatistics =
    { class : Maybe String
    }


unlabeledLoadStatisticsDecoder : Decoder UnlabeledLoadStatistics
unlabeledLoadStatisticsDecoder =
    decode UnlabeledLoadStatistics
        |> optional "_class" (Decode.nullable Decode.string) Nothing



unlabeledLoadStatisticsEncoder : UnlabeledLoadStatistics -> Encode.Value
unlabeledLoadStatisticsEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]


