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
 * OAIPipelineRun.h
 *
 * 
 */

#ifndef OAIPipelineRun_H
#define OAIPipelineRun_H

#include <QJsonObject>


#include "OAIPipelineRunartifacts.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelineRun: public OAIObject {
public:
    OAIPipelineRun();
    OAIPipelineRun(QString json);
    ~OAIPipelineRun() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    QList<OAIPipelineRunartifacts> getArtifacts() const;
    void setArtifacts(const QList<OAIPipelineRunartifacts> &artifacts);

    qint32 getDurationInMillis() const;
    void setDurationInMillis(const qint32 &duration_in_millis);

    qint32 getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(const qint32 &estimated_duration_in_millis);

    QString getEnQueueTime() const;
    void setEnQueueTime(const QString &en_queue_time);

    QString getEndTime() const;
    void setEndTime(const QString &end_time);

    QString getId() const;
    void setId(const QString &id);

    QString getOrganization() const;
    void setOrganization(const QString &organization);

    QString getPipeline() const;
    void setPipeline(const QString &pipeline);

    QString getResult() const;
    void setResult(const QString &result);

    QString getRunSummary() const;
    void setRunSummary(const QString &run_summary);

    QString getStartTime() const;
    void setStartTime(const QString &start_time);

    QString getState() const;
    void setState(const QString &state);

    QString getType() const;
    void setType(const QString &type);

    QString getCommitId() const;
    void setCommitId(const QString &commit_id);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    QList<OAIPipelineRunartifacts> artifacts;
    bool m_artifacts_isSet;

    qint32 duration_in_millis;
    bool m_duration_in_millis_isSet;

    qint32 estimated_duration_in_millis;
    bool m_estimated_duration_in_millis_isSet;

    QString en_queue_time;
    bool m_en_queue_time_isSet;

    QString end_time;
    bool m_end_time_isSet;

    QString id;
    bool m_id_isSet;

    QString organization;
    bool m_organization_isSet;

    QString pipeline;
    bool m_pipeline_isSet;

    QString result;
    bool m_result_isSet;

    QString run_summary;
    bool m_run_summary_isSet;

    QString start_time;
    bool m_start_time_isSet;

    QString state;
    bool m_state_isSet;

    QString type;
    bool m_type_isSet;

    QString commit_id;
    bool m_commit_id_isSet;

};

}

#endif // OAIPipelineRun_H
