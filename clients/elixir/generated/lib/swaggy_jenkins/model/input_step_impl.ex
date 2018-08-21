# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.InputStepImpl do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"_links",
    :"id",
    :"message",
    :"ok",
    :"parameters",
    :"submitter"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"_links" => InputStepImpllinks,
    :"id" => String.t,
    :"message" => String.t,
    :"ok" => String.t,
    :"parameters" => [StringParameterDefinition],
    :"submitter" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.InputStepImpl do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"_links", :struct, SwaggyJenkins.Model.InputStepImpllinks, options)
    |> deserialize(:"parameters", :list, SwaggyJenkins.Model.StringParameterDefinition, options)
  end
end
