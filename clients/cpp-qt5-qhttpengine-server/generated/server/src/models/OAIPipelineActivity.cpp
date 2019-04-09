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


#include "OAIPipelineActivity.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineActivity::OAIPipelineActivity(QString json) {
    this->fromJson(json);
}

OAIPipelineActivity::OAIPipelineActivity() {
    this->init();
}

OAIPipelineActivity::~OAIPipelineActivity() {
    
}

void
OAIPipelineActivity::init() {
    m__class_isSet = false;
    m_artifacts_isSet = false;
    m_duration_in_millis_isSet = false;
    m_estimated_duration_in_millis_isSet = false;
    m_en_queue_time_isSet = false;
    m_end_time_isSet = false;
    m_id_isSet = false;
    m_organization_isSet = false;
    m_pipeline_isSet = false;
    m_result_isSet = false;
    m_run_summary_isSet = false;
    m_start_time_isSet = false;
    m_state_isSet = false;
    m_type_isSet = false;
    m_commit_id_isSet = false;
}

void
OAIPipelineActivity::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineActivity::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    
    ::OpenAPI::fromJsonValue(artifacts, json[QString("artifacts")]);
    ::OpenAPI::fromJsonValue(duration_in_millis, json[QString("durationInMillis")]);
    
    ::OpenAPI::fromJsonValue(estimated_duration_in_millis, json[QString("estimatedDurationInMillis")]);
    
    ::OpenAPI::fromJsonValue(en_queue_time, json[QString("enQueueTime")]);
    
    ::OpenAPI::fromJsonValue(end_time, json[QString("endTime")]);
    
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(organization, json[QString("organization")]);
    
    ::OpenAPI::fromJsonValue(pipeline, json[QString("pipeline")]);
    
    ::OpenAPI::fromJsonValue(result, json[QString("result")]);
    
    ::OpenAPI::fromJsonValue(run_summary, json[QString("runSummary")]);
    
    ::OpenAPI::fromJsonValue(start_time, json[QString("startTime")]);
    
    ::OpenAPI::fromJsonValue(state, json[QString("state")]);
    
    ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    
    ::OpenAPI::fromJsonValue(commit_id, json[QString("commitId")]);
    
}

QString
OAIPipelineActivity::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineActivity::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	
    if(artifacts.size() > 0){
        obj.insert(QString("artifacts"), ::OpenAPI::toJsonValue(artifacts));
    } 
	if(m_duration_in_millis_isSet){
        obj.insert(QString("durationInMillis"), ::OpenAPI::toJsonValue(duration_in_millis));
    }
	if(m_estimated_duration_in_millis_isSet){
        obj.insert(QString("estimatedDurationInMillis"), ::OpenAPI::toJsonValue(estimated_duration_in_millis));
    }
	if(m_en_queue_time_isSet){
        obj.insert(QString("enQueueTime"), ::OpenAPI::toJsonValue(en_queue_time));
    }
	if(m_end_time_isSet){
        obj.insert(QString("endTime"), ::OpenAPI::toJsonValue(end_time));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_organization_isSet){
        obj.insert(QString("organization"), ::OpenAPI::toJsonValue(organization));
    }
	if(m_pipeline_isSet){
        obj.insert(QString("pipeline"), ::OpenAPI::toJsonValue(pipeline));
    }
	if(m_result_isSet){
        obj.insert(QString("result"), ::OpenAPI::toJsonValue(result));
    }
	if(m_run_summary_isSet){
        obj.insert(QString("runSummary"), ::OpenAPI::toJsonValue(run_summary));
    }
	if(m_start_time_isSet){
        obj.insert(QString("startTime"), ::OpenAPI::toJsonValue(start_time));
    }
	if(m_state_isSet){
        obj.insert(QString("state"), ::OpenAPI::toJsonValue(state));
    }
	if(m_type_isSet){
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
	if(m_commit_id_isSet){
        obj.insert(QString("commitId"), ::OpenAPI::toJsonValue(commit_id));
    }
    return obj;
}

QString
OAIPipelineActivity::getClass() const {
    return _class;
}
void
OAIPipelineActivity::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QList<OAIPipelineActivityartifacts>
OAIPipelineActivity::getArtifacts() const {
    return artifacts;
}
void
OAIPipelineActivity::setArtifacts(const QList<OAIPipelineActivityartifacts> &artifacts) {
    this->artifacts = artifacts;
    this->m_artifacts_isSet = true;
}

qint32
OAIPipelineActivity::getDurationInMillis() const {
    return duration_in_millis;
}
void
OAIPipelineActivity::setDurationInMillis(const qint32 &duration_in_millis) {
    this->duration_in_millis = duration_in_millis;
    this->m_duration_in_millis_isSet = true;
}

qint32
OAIPipelineActivity::getEstimatedDurationInMillis() const {
    return estimated_duration_in_millis;
}
void
OAIPipelineActivity::setEstimatedDurationInMillis(const qint32 &estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
    this->m_estimated_duration_in_millis_isSet = true;
}

QString
OAIPipelineActivity::getEnQueueTime() const {
    return en_queue_time;
}
void
OAIPipelineActivity::setEnQueueTime(const QString &en_queue_time) {
    this->en_queue_time = en_queue_time;
    this->m_en_queue_time_isSet = true;
}

QString
OAIPipelineActivity::getEndTime() const {
    return end_time;
}
void
OAIPipelineActivity::setEndTime(const QString &end_time) {
    this->end_time = end_time;
    this->m_end_time_isSet = true;
}

QString
OAIPipelineActivity::getId() const {
    return id;
}
void
OAIPipelineActivity::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString
OAIPipelineActivity::getOrganization() const {
    return organization;
}
void
OAIPipelineActivity::setOrganization(const QString &organization) {
    this->organization = organization;
    this->m_organization_isSet = true;
}

QString
OAIPipelineActivity::getPipeline() const {
    return pipeline;
}
void
OAIPipelineActivity::setPipeline(const QString &pipeline) {
    this->pipeline = pipeline;
    this->m_pipeline_isSet = true;
}

QString
OAIPipelineActivity::getResult() const {
    return result;
}
void
OAIPipelineActivity::setResult(const QString &result) {
    this->result = result;
    this->m_result_isSet = true;
}

QString
OAIPipelineActivity::getRunSummary() const {
    return run_summary;
}
void
OAIPipelineActivity::setRunSummary(const QString &run_summary) {
    this->run_summary = run_summary;
    this->m_run_summary_isSet = true;
}

QString
OAIPipelineActivity::getStartTime() const {
    return start_time;
}
void
OAIPipelineActivity::setStartTime(const QString &start_time) {
    this->start_time = start_time;
    this->m_start_time_isSet = true;
}

QString
OAIPipelineActivity::getState() const {
    return state;
}
void
OAIPipelineActivity::setState(const QString &state) {
    this->state = state;
    this->m_state_isSet = true;
}

QString
OAIPipelineActivity::getType() const {
    return type;
}
void
OAIPipelineActivity::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

QString
OAIPipelineActivity::getCommitId() const {
    return commit_id;
}
void
OAIPipelineActivity::setCommitId(const QString &commit_id) {
    this->commit_id = commit_id;
    this->m_commit_id_isSet = true;
}


bool
OAIPipelineActivity::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(artifacts.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_duration_in_millis_isSet){ isObjectUpdated = true; break;}
    
        if(m_estimated_duration_in_millis_isSet){ isObjectUpdated = true; break;}
    
        if(m_en_queue_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_end_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_organization_isSet){ isObjectUpdated = true; break;}
    
        if(m_pipeline_isSet){ isObjectUpdated = true; break;}
    
        if(m_result_isSet){ isObjectUpdated = true; break;}
    
        if(m_run_summary_isSet){ isObjectUpdated = true; break;}
    
        if(m_start_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_state_isSet){ isObjectUpdated = true; break;}
    
        if(m_type_isSet){ isObjectUpdated = true; break;}
    
        if(m_commit_id_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

