/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PipelineActivity.h
 *
 * 
 */

#ifndef PipelineActivity_H_
#define PipelineActivity_H_



#include "PipelineActivityartifacts.h"
#include <string>
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineActivity
{
public:
    PipelineActivity();
    virtual ~PipelineActivity();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineActivity members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<PipelineActivityartifacts>> getArtifacts() const;
    void setArtifacts(std::vector<std::shared_ptr<PipelineActivityartifacts>> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getDurationInMillis() const;
    void setDurationInMillis(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getEnQueueTime() const;
    void setEnQueueTime(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getEndTime() const;
    void setEndTime(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getOrganization() const;
    void setOrganization(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getPipeline() const;
    void setPipeline(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getResult() const;
    void setResult(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getRunSummary() const;
    void setRunSummary(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getStartTime() const;
    void setStartTime(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getState() const;
    void setState(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getCommitId() const;
    void setCommitId(std::string value);

protected:
    std::string m__class;
    std::vector<std::shared_ptr<PipelineActivityartifacts>> m_Artifacts;
    int32_t m_DurationInMillis;
    int32_t m_EstimatedDurationInMillis;
    std::string m_EnQueueTime;
    std::string m_EndTime;
    std::string m_Id;
    std::string m_Organization;
    std::string m_Pipeline;
    std::string m_Result;
    std::string m_RunSummary;
    std::string m_StartTime;
    std::string m_State;
    std::string m_Type;
    std::string m_CommitId;
};

}
}
}
}

#endif /* PipelineActivity_H_ */
