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
 * FreeStyleBuild.h
 *
 * 
 */

#ifndef FreeStyleBuild_H_
#define FreeStyleBuild_H_


#include "ModelBase.h"

#include "EmptyChangeLogSet.h"
#include <string>
#include "CauseAction.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  FreeStyleBuild
    : public ModelBase
{
public:
    FreeStyleBuild();
    virtual ~FreeStyleBuild();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// FreeStyleBuild members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumber() const;
    void setNumber(int32_t const value);
    bool numberIsSet() const;
    void unsetnumber();
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string const& value);
    bool urlIsSet() const;
    void unsetUrl();
    /// <summary>
    /// 
    /// </summary>
    std::vector<CauseAction>& getActions();
    bool actionsIsSet() const;
    void unsetActions();
    /// <summary>
    /// 
    /// </summary>
    bool isBuilding() const;
    void setBuilding(bool const value);
    bool buildingIsSet() const;
    void unsetBuilding();
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string const& value);
    bool descriptionIsSet() const;
    void unsetDescription();
    /// <summary>
    /// 
    /// </summary>
    std::string getDisplayName() const;
    void setDisplayName(std::string const& value);
    bool displayNameIsSet() const;
    void unsetDisplayName();
    /// <summary>
    /// 
    /// </summary>
    int32_t getDuration() const;
    void setDuration(int32_t const value);
    bool durationIsSet() const;
    void unsetDuration();
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDuration() const;
    void setEstimatedDuration(int32_t const value);
    bool estimatedDurationIsSet() const;
    void unsetEstimatedDuration();
    /// <summary>
    /// 
    /// </summary>
    std::string getExecutor() const;
    void setExecutor(std::string const& value);
    bool executorIsSet() const;
    void unsetExecutor();
    /// <summary>
    /// 
    /// </summary>
    std::string getFullDisplayName() const;
    void setFullDisplayName(std::string const& value);
    bool fullDisplayNameIsSet() const;
    void unsetFullDisplayName();
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    bool isKeepLog() const;
    void setKeepLog(bool const value);
    bool keepLogIsSet() const;
    void unsetKeepLog();
    /// <summary>
    /// 
    /// </summary>
    int32_t getQueueId() const;
    void setQueueId(int32_t const value);
    bool queueIdIsSet() const;
    void unsetQueueId();
    /// <summary>
    /// 
    /// </summary>
    std::string getResult() const;
    void setResult(std::string const& value);
    bool resultIsSet() const;
    void unsetResult();
    /// <summary>
    /// 
    /// </summary>
    int32_t getTimestamp() const;
    void setTimestamp(int32_t const value);
    bool timestampIsSet() const;
    void unsetTimestamp();
    /// <summary>
    /// 
    /// </summary>
    std::string getBuiltOn() const;
    void setBuiltOn(std::string const& value);
    bool builtOnIsSet() const;
    void unsetBuiltOn();
    /// <summary>
    /// 
    /// </summary>
    EmptyChangeLogSet getChangeSet() const;
    void setChangeSet(EmptyChangeLogSet const& value);
    bool changeSetIsSet() const;
    void unsetChangeSet();

protected:
    std::string m__class;
    bool m__classIsSet;
    int32_t m_number;
    bool m_numberIsSet;
    std::string m_Url;
    bool m_UrlIsSet;
    std::vector<CauseAction> m_Actions;
    bool m_ActionsIsSet;
    bool m_Building;
    bool m_BuildingIsSet;
    std::string m_Description;
    bool m_DescriptionIsSet;
    std::string m_DisplayName;
    bool m_DisplayNameIsSet;
    int32_t m_Duration;
    bool m_DurationIsSet;
    int32_t m_EstimatedDuration;
    bool m_EstimatedDurationIsSet;
    std::string m_Executor;
    bool m_ExecutorIsSet;
    std::string m_FullDisplayName;
    bool m_FullDisplayNameIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    bool m_KeepLog;
    bool m_KeepLogIsSet;
    int32_t m_QueueId;
    bool m_QueueIdIsSet;
    std::string m_Result;
    bool m_ResultIsSet;
    int32_t m_Timestamp;
    bool m_TimestampIsSet;
    std::string m_BuiltOn;
    bool m_BuiltOnIsSet;
    EmptyChangeLogSet m_ChangeSet;
    bool m_ChangeSetIsSet;
};

}
}
}
}

#endif /* FreeStyleBuild_H_ */
