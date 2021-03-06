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
 * PipelineRun.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_PipelineRun_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_PipelineRun_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "PipelineRunartifacts.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRun
    : public ModelBase
{
public:
    PipelineRun();
    virtual ~PipelineRun();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PipelineRun members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool _classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<PipelineRunartifacts>>& getArtifacts();
    bool artifactsIsSet() const;
    void unsetArtifacts();
    void setArtifacts(std::vector<std::shared_ptr<PipelineRunartifacts>> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getDurationInMillis() const;
    bool durationInMillisIsSet() const;
    void unsetDurationInMillis();
    void setDurationInMillis(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDurationInMillis() const;
    bool estimatedDurationInMillisIsSet() const;
    void unsetEstimatedDurationInMillis();
    void setEstimatedDurationInMillis(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnQueueTime() const;
    bool enQueueTimeIsSet() const;
    void unsetEnQueueTime();
    void setEnQueueTime(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetEndTime();
    void setEndTime(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrganization() const;
    bool organizationIsSet() const;
    void unsetOrganization();
    void setOrganization(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPipeline() const;
    bool pipelineIsSet() const;
    void unsetPipeline();
    void setPipeline(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResult() const;
    bool resultIsSet() const;
    void unsetResult();
    void setResult(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRunSummary() const;
    bool runSummaryIsSet() const;
    void unsetRunSummary();
    void setRunSummary(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetStartTime();
    void setStartTime(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();
    void setState(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCommitId() const;
    bool commitIdIsSet() const;
    void unsetCommitId();
    void setCommitId(utility::string_t value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    std::vector<std::shared_ptr<PipelineRunartifacts>> m_Artifacts;
    bool m_ArtifactsIsSet;
    int32_t m_DurationInMillis;
    bool m_DurationInMillisIsSet;
    int32_t m_EstimatedDurationInMillis;
    bool m_EstimatedDurationInMillisIsSet;
    utility::string_t m_EnQueueTime;
    bool m_EnQueueTimeIsSet;
    utility::string_t m_EndTime;
    bool m_EndTimeIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Organization;
    bool m_OrganizationIsSet;
    utility::string_t m_Pipeline;
    bool m_PipelineIsSet;
    utility::string_t m_Result;
    bool m_ResultIsSet;
    utility::string_t m_RunSummary;
    bool m_RunSummaryIsSet;
    utility::string_t m_StartTime;
    bool m_StartTimeIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_CommitId;
    bool m_CommitIdIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_PipelineRun_H_ */
