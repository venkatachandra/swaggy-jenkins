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

/*
 * PipelineRuns.h
 *
 * 
 */

#ifndef PipelineRuns_H_
#define PipelineRuns_H_



#include "PipelineRun.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRuns
{
public:
    PipelineRuns();
    virtual ~PipelineRuns();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineRuns members
    

protected:
};

}
}
}
}

#endif /* PipelineRuns_H_ */
