/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GetPipelineBranches.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GetPipelineBranches::GetPipelineBranches()
{
    
}

GetPipelineBranches::~GetPipelineBranches()
{
}

void GetPipelineBranches::validate()
{
    // TODO: implement validation
}

web::json::value GetPipelineBranches::toJson() const
{
    web::json::value val = web::json::value::object();

    

    return val;
}

void GetPipelineBranches::fromJson(web::json::value& val)
{
    
}

void GetPipelineBranches::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    
}

void GetPipelineBranches::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    
}



}
}
}
}
