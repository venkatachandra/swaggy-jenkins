/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * PipelineRunImpllinks.h
 *
 * 
 */

#ifndef PipelineRunImpllinks_H_
#define PipelineRunImpllinks_H_


#include "ModelBase.h"

#include <string>
#include "Link.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRunImpllinks
    : public ModelBase
{
public:
    PipelineRunImpllinks();
    virtual ~PipelineRunImpllinks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineRunImpllinks members

    /// <summary>
    /// 
    /// </summary>
    Link getNodes() const;
    void setNodes(Link const& value);
    bool nodesIsSet() const;
    void unsetNodes();
    /// <summary>
    /// 
    /// </summary>
    Link getLog() const;
    void setLog(Link const& value);
    bool logIsSet() const;
    void unsetLog();
    /// <summary>
    /// 
    /// </summary>
    Link getSelf() const;
    void setSelf(Link const& value);
    bool selfIsSet() const;
    void unsetSelf();
    /// <summary>
    /// 
    /// </summary>
    Link getActions() const;
    void setActions(Link const& value);
    bool actionsIsSet() const;
    void unsetActions();
    /// <summary>
    /// 
    /// </summary>
    Link getSteps() const;
    void setSteps(Link const& value);
    bool stepsIsSet() const;
    void unsetSteps();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();

protected:
    Link m_Nodes;
    bool m_NodesIsSet;
    Link m_Log;
    bool m_LogIsSet;
    Link m_Self;
    bool m_SelfIsSet;
    Link m_Actions;
    bool m_ActionsIsSet;
    Link m_Steps;
    bool m_StepsIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelineRunImpllinks_H_ */
