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
 * PipelineBranches.h
 *
 * 
 */

#ifndef PipelineBranches_H_
#define PipelineBranches_H_



#include "PipelineBranchesitem.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranches
{
public:
    PipelineBranches();
    virtual ~PipelineBranches();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineBranches members
    

protected:
};

}
}
}
}

#endif /* PipelineBranches_H_ */
