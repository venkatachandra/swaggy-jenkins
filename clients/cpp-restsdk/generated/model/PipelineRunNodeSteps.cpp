/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "PipelineRunNodeSteps.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelineRunNodeSteps::PipelineRunNodeSteps()
{
}

PipelineRunNodeSteps::~PipelineRunNodeSteps()
{
}

void PipelineRunNodeSteps::validate()
{
    // TODO: implement validation
}

web::json::value PipelineRunNodeSteps::toJson() const
{
    web::json::value val = this->null<PipelineStepImpl>::toJson();


    return val;
}

void PipelineRunNodeSteps::fromJson(web::json::value& val)
{
    this->null<PipelineStepImpl>::fromJson(val);

}

void PipelineRunNodeSteps::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

void PipelineRunNodeSteps::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

}
}
}
}

