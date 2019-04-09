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


#include "OAIBranchImplpermissions.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIBranchImplpermissions::OAIBranchImplpermissions(QString json) {
    init();
    this->fromJson(json);
}

OAIBranchImplpermissions::OAIBranchImplpermissions() {
    init();
}

OAIBranchImplpermissions::~OAIBranchImplpermissions() {
    this->cleanup();
}

void
OAIBranchImplpermissions::init() {
    create = false;
    m_create_isSet = false;
    read = false;
    m_read_isSet = false;
    start = false;
    m_start_isSet = false;
    stop = false;
    m_stop_isSet = false;
    _class = new QString("");
    m__class_isSet = false;
}

void
OAIBranchImplpermissions::cleanup() {




    if(_class != nullptr) { 
        delete _class;
    }
}

OAIBranchImplpermissions*
OAIBranchImplpermissions::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIBranchImplpermissions::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&create, pJson["create"], "bool", "");
    
    ::OpenAPI::setValue(&read, pJson["read"], "bool", "");
    
    ::OpenAPI::setValue(&start, pJson["start"], "bool", "");
    
    ::OpenAPI::setValue(&stop, pJson["stop"], "bool", "");
    
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
}

QString
OAIBranchImplpermissions::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIBranchImplpermissions::asJsonObject() {
    QJsonObject obj;
    if(m_create_isSet){
        obj.insert("create", QJsonValue(create));
    }
    if(m_read_isSet){
        obj.insert("read", QJsonValue(read));
    }
    if(m_start_isSet){
        obj.insert("start", QJsonValue(start));
    }
    if(m_stop_isSet){
        obj.insert("stop", QJsonValue(stop));
    }
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }

    return obj;
}

bool
OAIBranchImplpermissions::isCreate() {
    return create;
}
void
OAIBranchImplpermissions::setCreate(bool create) {
    this->create = create;
    this->m_create_isSet = true;
}

bool
OAIBranchImplpermissions::isRead() {
    return read;
}
void
OAIBranchImplpermissions::setRead(bool read) {
    this->read = read;
    this->m_read_isSet = true;
}

bool
OAIBranchImplpermissions::isStart() {
    return start;
}
void
OAIBranchImplpermissions::setStart(bool start) {
    this->start = start;
    this->m_start_isSet = true;
}

bool
OAIBranchImplpermissions::isStop() {
    return stop;
}
void
OAIBranchImplpermissions::setStop(bool stop) {
    this->stop = stop;
    this->m_stop_isSet = true;
}

QString*
OAIBranchImplpermissions::getClass() {
    return _class;
}
void
OAIBranchImplpermissions::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIBranchImplpermissions::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_create_isSet){ isObjectUpdated = true; break;}
        if(m_read_isSet){ isObjectUpdated = true; break;}
        if(m_start_isSet){ isObjectUpdated = true; break;}
        if(m_stop_isSet){ isObjectUpdated = true; break;}
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

