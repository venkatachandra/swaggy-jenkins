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


#include "OAIQueue.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIQueue::OAIQueue(QString json) {
    this->fromJson(json);
}

OAIQueue::OAIQueue() {
    this->init();
}

OAIQueue::~OAIQueue() {
    
}

void
OAIQueue::init() {
    m__class_isSet = false;
    m_items_isSet = false;
}

void
OAIQueue::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIQueue::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    
    ::OpenAPI::fromJsonValue(items, json[QString("items")]);
}

QString
OAIQueue::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIQueue::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	
    if(items.size() > 0){
        obj.insert(QString("items"), ::OpenAPI::toJsonValue(items));
    } 
    return obj;
}

QString
OAIQueue::getClass() const {
    return _class;
}
void
OAIQueue::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QList<OAIQueueBlockedItem>
OAIQueue::getItems() const {
    return items;
}
void
OAIQueue::setItems(const QList<OAIQueueBlockedItem> &items) {
    this->items = items;
    this->m_items_isSet = true;
}


bool
OAIQueue::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(items.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

