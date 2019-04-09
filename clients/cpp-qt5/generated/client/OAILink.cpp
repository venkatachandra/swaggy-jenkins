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


#include "OAILink.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAILink::OAILink(QString json) {
    init();
    this->fromJson(json);
}

OAILink::OAILink() {
    init();
}

OAILink::~OAILink() {
    this->cleanup();
}

void
OAILink::init() {
    _class = new QString("");
    m__class_isSet = false;
    href = new QString("");
    m_href_isSet = false;
}

void
OAILink::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(href != nullptr) { 
        delete href;
    }
}

OAILink*
OAILink::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAILink::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&href, pJson["href"], "QString", "QString");
    
}

QString
OAILink::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAILink::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(href != nullptr && *href != QString("")){
        toJsonValue(QString("href"), href, obj, QString("QString"));
    }

    return obj;
}

QString*
OAILink::getClass() {
    return _class;
}
void
OAILink::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString*
OAILink::getHref() {
    return href;
}
void
OAILink::setHref(QString* href) {
    this->href = href;
    this->m_href_isSet = true;
}


bool
OAILink::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(href != nullptr && *href != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

