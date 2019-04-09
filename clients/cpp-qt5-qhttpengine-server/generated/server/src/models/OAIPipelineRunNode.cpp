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


#include "OAIPipelineRunNode.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineRunNode::OAIPipelineRunNode(QString json) {
    this->fromJson(json);
}

OAIPipelineRunNode::OAIPipelineRunNode() {
    this->init();
}

OAIPipelineRunNode::~OAIPipelineRunNode() {
    
}

void
OAIPipelineRunNode::init() {
    m__class_isSet = false;
    m_display_name_isSet = false;
    m_duration_in_millis_isSet = false;
    m_edges_isSet = false;
    m_id_isSet = false;
    m_result_isSet = false;
    m_start_time_isSet = false;
    m_state_isSet = false;
}

void
OAIPipelineRunNode::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineRunNode::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    
    ::OpenAPI::fromJsonValue(duration_in_millis, json[QString("durationInMillis")]);
    
    
    ::OpenAPI::fromJsonValue(edges, json[QString("edges")]);
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(result, json[QString("result")]);
    
    ::OpenAPI::fromJsonValue(start_time, json[QString("startTime")]);
    
    ::OpenAPI::fromJsonValue(state, json[QString("state")]);
    
}

QString
OAIPipelineRunNode::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineRunNode::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(m_display_name_isSet){
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
	if(m_duration_in_millis_isSet){
        obj.insert(QString("durationInMillis"), ::OpenAPI::toJsonValue(duration_in_millis));
    }
	
    if(edges.size() > 0){
        obj.insert(QString("edges"), ::OpenAPI::toJsonValue(edges));
    } 
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_result_isSet){
        obj.insert(QString("result"), ::OpenAPI::toJsonValue(result));
    }
	if(m_start_time_isSet){
        obj.insert(QString("startTime"), ::OpenAPI::toJsonValue(start_time));
    }
	if(m_state_isSet){
        obj.insert(QString("state"), ::OpenAPI::toJsonValue(state));
    }
    return obj;
}

QString
OAIPipelineRunNode::getClass() const {
    return _class;
}
void
OAIPipelineRunNode::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString
OAIPipelineRunNode::getDisplayName() const {
    return display_name;
}
void
OAIPipelineRunNode::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

qint32
OAIPipelineRunNode::getDurationInMillis() const {
    return duration_in_millis;
}
void
OAIPipelineRunNode::setDurationInMillis(const qint32 &duration_in_millis) {
    this->duration_in_millis = duration_in_millis;
    this->m_duration_in_millis_isSet = true;
}

QList<OAIPipelineRunNodeedges>
OAIPipelineRunNode::getEdges() const {
    return edges;
}
void
OAIPipelineRunNode::setEdges(const QList<OAIPipelineRunNodeedges> &edges) {
    this->edges = edges;
    this->m_edges_isSet = true;
}

QString
OAIPipelineRunNode::getId() const {
    return id;
}
void
OAIPipelineRunNode::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString
OAIPipelineRunNode::getResult() const {
    return result;
}
void
OAIPipelineRunNode::setResult(const QString &result) {
    this->result = result;
    this->m_result_isSet = true;
}

QString
OAIPipelineRunNode::getStartTime() const {
    return start_time;
}
void
OAIPipelineRunNode::setStartTime(const QString &start_time) {
    this->start_time = start_time;
    this->m_start_time_isSet = true;
}

QString
OAIPipelineRunNode::getState() const {
    return state;
}
void
OAIPipelineRunNode::setState(const QString &state) {
    this->state = state;
    this->m_state_isSet = true;
}


bool
OAIPipelineRunNode::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(m_display_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_duration_in_millis_isSet){ isObjectUpdated = true; break;}
    
        if(edges.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_result_isSet){ isObjectUpdated = true; break;}
    
        if(m_start_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_state_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

