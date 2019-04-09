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


#include "OAIResponseTimeMonitorData.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseTimeMonitorData::OAIResponseTimeMonitorData(QString json) {
    this->fromJson(json);
}

OAIResponseTimeMonitorData::OAIResponseTimeMonitorData() {
    this->init();
}

OAIResponseTimeMonitorData::~OAIResponseTimeMonitorData() {
    
}

void
OAIResponseTimeMonitorData::init() {
    m__class_isSet = false;
    m_timestamp_isSet = false;
    m_average_isSet = false;
}

void
OAIResponseTimeMonitorData::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeMonitorData::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(timestamp, json[QString("timestamp")]);
    
    ::OpenAPI::fromJsonValue(average, json[QString("average")]);
    
}

QString
OAIResponseTimeMonitorData::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeMonitorData::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(m_timestamp_isSet){
        obj.insert(QString("timestamp"), ::OpenAPI::toJsonValue(timestamp));
    }
	if(m_average_isSet){
        obj.insert(QString("average"), ::OpenAPI::toJsonValue(average));
    }
    return obj;
}

QString
OAIResponseTimeMonitorData::getClass() const {
    return _class;
}
void
OAIResponseTimeMonitorData::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

qint32
OAIResponseTimeMonitorData::getTimestamp() const {
    return timestamp;
}
void
OAIResponseTimeMonitorData::setTimestamp(const qint32 &timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

qint32
OAIResponseTimeMonitorData::getAverage() const {
    return average;
}
void
OAIResponseTimeMonitorData::setAverage(const qint32 &average) {
    this->average = average;
    this->m_average_isSet = true;
}


bool
OAIResponseTimeMonitorData::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(m_timestamp_isSet){ isObjectUpdated = true; break;}
    
        if(m_average_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

