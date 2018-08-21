/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIUser.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIUser::OAIUser(QString json) {
    init();
    this->fromJson(json);
}

OAIUser::OAIUser() {
    init();
}

OAIUser::~OAIUser() {
    this->cleanup();
}

void
OAIUser::init() {
    _class = new QString("");
    m__class_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    full_name = new QString("");
    m_full_name_isSet = false;
    email = new QString("");
    m_email_isSet = false;
    name = new QString("");
    m_name_isSet = false;
}

void
OAIUser::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(full_name != nullptr) { 
        delete full_name;
    }
    if(email != nullptr) { 
        delete email;
    }
    if(name != nullptr) { 
        delete name;
    }
}

OAIUser*
OAIUser::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIUser::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&full_name, pJson["fullName"], "QString", "QString");
    
    ::OpenAPI::setValue(&email, pJson["email"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
}

QString
OAIUser::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIUser::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(full_name != nullptr && *full_name != QString("")){
        toJsonValue(QString("fullName"), full_name, obj, QString("QString"));
    }
    if(email != nullptr && *email != QString("")){
        toJsonValue(QString("email"), email, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIUser::getClass() {
    return _class;
}
void
OAIUser::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString*
OAIUser::getId() {
    return id;
}
void
OAIUser::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
OAIUser::getFullName() {
    return full_name;
}
void
OAIUser::setFullName(QString* full_name) {
    this->full_name = full_name;
    this->m_full_name_isSet = true;
}

QString*
OAIUser::getEmail() {
    return email;
}
void
OAIUser::setEmail(QString* email) {
    this->email = email;
    this->m_email_isSet = true;
}

QString*
OAIUser::getName() {
    return name;
}
void
OAIUser::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}


bool
OAIUser::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(full_name != nullptr && *full_name != QString("")){ isObjectUpdated = true; break;}
        if(email != nullptr && *email != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
