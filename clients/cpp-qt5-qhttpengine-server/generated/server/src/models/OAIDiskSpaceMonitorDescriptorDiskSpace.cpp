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


#include "OAIDiskSpaceMonitorDescriptorDiskSpace.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIDiskSpaceMonitorDescriptorDiskSpace::OAIDiskSpaceMonitorDescriptorDiskSpace(QString json) {
    this->fromJson(json);
}

OAIDiskSpaceMonitorDescriptorDiskSpace::OAIDiskSpaceMonitorDescriptorDiskSpace() {
    this->init();
}

OAIDiskSpaceMonitorDescriptorDiskSpace::~OAIDiskSpaceMonitorDescriptorDiskSpace() {
    
}

void
OAIDiskSpaceMonitorDescriptorDiskSpace::init() {
    m__class_isSet = false;
    m_timestamp_isSet = false;
    m_path_isSet = false;
    m_size_isSet = false;
}

void
OAIDiskSpaceMonitorDescriptorDiskSpace::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIDiskSpaceMonitorDescriptorDiskSpace::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(timestamp, json[QString("timestamp")]);
    
    ::OpenAPI::fromJsonValue(path, json[QString("path")]);
    
    ::OpenAPI::fromJsonValue(size, json[QString("size")]);
    
}

QString
OAIDiskSpaceMonitorDescriptorDiskSpace::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIDiskSpaceMonitorDescriptorDiskSpace::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(m_timestamp_isSet){
        obj.insert(QString("timestamp"), ::OpenAPI::toJsonValue(timestamp));
    }
	if(m_path_isSet){
        obj.insert(QString("path"), ::OpenAPI::toJsonValue(path));
    }
	if(m_size_isSet){
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(size));
    }
    return obj;
}

QString
OAIDiskSpaceMonitorDescriptorDiskSpace::getClass() const {
    return _class;
}
void
OAIDiskSpaceMonitorDescriptorDiskSpace::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

qint32
OAIDiskSpaceMonitorDescriptorDiskSpace::getTimestamp() const {
    return timestamp;
}
void
OAIDiskSpaceMonitorDescriptorDiskSpace::setTimestamp(const qint32 &timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

QString
OAIDiskSpaceMonitorDescriptorDiskSpace::getPath() const {
    return path;
}
void
OAIDiskSpaceMonitorDescriptorDiskSpace::setPath(const QString &path) {
    this->path = path;
    this->m_path_isSet = true;
}

qint32
OAIDiskSpaceMonitorDescriptorDiskSpace::getSize() const {
    return size;
}
void
OAIDiskSpaceMonitorDescriptorDiskSpace::setSize(const qint32 &size) {
    this->size = size;
    this->m_size_isSet = true;
}


bool
OAIDiskSpaceMonitorDescriptorDiskSpace::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(m_timestamp_isSet){ isObjectUpdated = true; break;}
    
        if(m_path_isSet){ isObjectUpdated = true; break;}
    
        if(m_size_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

