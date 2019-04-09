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
 * PipelineImpllinks.h
 *
 * 
 */

#ifndef PipelineImpllinks_H_
#define PipelineImpllinks_H_



#include <string>
#include "Link.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineImpllinks
{
public:
    PipelineImpllinks();
    virtual ~PipelineImpllinks();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineImpllinks members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getRuns() const;
    void setRuns(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getSelf() const;
    void setSelf(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getQueue() const;
    void setQueue(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getActions() const;
    void setActions(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::shared_ptr<Link> m_Runs;
    std::shared_ptr<Link> m_Self;
    std::shared_ptr<Link> m_Queue;
    std::shared_ptr<Link> m_Actions;
    std::string m__class;
};

}
}
}
}

#endif /* PipelineImpllinks_H_ */
