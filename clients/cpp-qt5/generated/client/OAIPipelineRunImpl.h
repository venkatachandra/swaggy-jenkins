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
 * OAIPipelineRunImpl.h
 *
 * 
 */

#ifndef OAIPipelineRunImpl_H_
#define OAIPipelineRunImpl_H_

#include <QJsonObject>


#include "OAIOAIPipelineRunImpllinks.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelineRunImpl: public OAIObject {
public:
    OAIPipelineRunImpl();
    OAIPipelineRunImpl(QString json);
    ~OAIPipelineRunImpl();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIPipelineRunImpl* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    OAIPipelineRunImpllinks* getLinks();
    void setLinks(OAIPipelineRunImpllinks* _links);

    qint32 getDurationInMillis();
    void setDurationInMillis(qint32 duration_in_millis);

    QString* getEnQueueTime();
    void setEnQueueTime(QString* en_queue_time);

    QString* getEndTime();
    void setEndTime(QString* end_time);

    qint32 getEstimatedDurationInMillis();
    void setEstimatedDurationInMillis(qint32 estimated_duration_in_millis);

    QString* getId();
    void setId(QString* id);

    QString* getOrganization();
    void setOrganization(QString* organization);

    QString* getPipeline();
    void setPipeline(QString* pipeline);

    QString* getResult();
    void setResult(QString* result);

    QString* getRunSummary();
    void setRunSummary(QString* run_summary);

    QString* getStartTime();
    void setStartTime(QString* start_time);

    QString* getState();
    void setState(QString* state);

    QString* getType();
    void setType(QString* type);

    QString* getCommitId();
    void setCommitId(QString* commit_id);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    OAIPipelineRunImpllinks* _links;
    bool m__links_isSet;

    qint32 duration_in_millis;
    bool m_duration_in_millis_isSet;

    QString* en_queue_time;
    bool m_en_queue_time_isSet;

    QString* end_time;
    bool m_end_time_isSet;

    qint32 estimated_duration_in_millis;
    bool m_estimated_duration_in_millis_isSet;

    QString* id;
    bool m_id_isSet;

    QString* organization;
    bool m_organization_isSet;

    QString* pipeline;
    bool m_pipeline_isSet;

    QString* result;
    bool m_result_isSet;

    QString* run_summary;
    bool m_run_summary_isSet;

    QString* start_time;
    bool m_start_time_isSet;

    QString* state;
    bool m_state_isSet;

    QString* type;
    bool m_type_isSet;

    QString* commit_id;
    bool m_commit_id_isSet;

};

}

#endif /* OAIPipelineRunImpl_H_ */
