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


#include "OAIGithubRepository.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIGithubRepository::OAIGithubRepository(QString json) {
    init();
    this->fromJson(json);
}

OAIGithubRepository::OAIGithubRepository() {
    init();
}

OAIGithubRepository::~OAIGithubRepository() {
    this->cleanup();
}

void
OAIGithubRepository::init() {
    _class = new QString("");
    m__class_isSet = false;
    _links = new OAIGithubRepositorylinks();
    m__links_isSet = false;
    default_branch = new QString("");
    m_default_branch_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    permissions = new OAIGithubRepositorypermissions();
    m_permissions_isSet = false;
    _private = false;
    m__private_isSet = false;
    full_name = new QString("");
    m_full_name_isSet = false;
}

void
OAIGithubRepository::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(_links != nullptr) { 
        delete _links;
    }
    if(default_branch != nullptr) { 
        delete default_branch;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(permissions != nullptr) { 
        delete permissions;
    }

    if(full_name != nullptr) { 
        delete full_name;
    }
}

OAIGithubRepository*
OAIGithubRepository::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIGithubRepository::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&_links, pJson["_links"], "OAIGithubRepositorylinks", "OAIGithubRepositorylinks");
    
    ::OpenAPI::setValue(&default_branch, pJson["defaultBranch"], "QString", "QString");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&permissions, pJson["permissions"], "OAIGithubRepositorypermissions", "OAIGithubRepositorypermissions");
    
    ::OpenAPI::setValue(&_private, pJson["private"], "bool", "");
    
    ::OpenAPI::setValue(&full_name, pJson["fullName"], "QString", "QString");
    
}

QString
OAIGithubRepository::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIGithubRepository::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if((_links != nullptr) && (_links->isSet())){
        toJsonValue(QString("_links"), _links, obj, QString("OAIGithubRepositorylinks"));
    }
    if(default_branch != nullptr && *default_branch != QString("")){
        toJsonValue(QString("defaultBranch"), default_branch, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if((permissions != nullptr) && (permissions->isSet())){
        toJsonValue(QString("permissions"), permissions, obj, QString("OAIGithubRepositorypermissions"));
    }
    if(m__private_isSet){
        obj.insert("private", QJsonValue(_private));
    }
    if(full_name != nullptr && *full_name != QString("")){
        toJsonValue(QString("fullName"), full_name, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIGithubRepository::getClass() {
    return _class;
}
void
OAIGithubRepository::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

OAIGithubRepositorylinks*
OAIGithubRepository::getLinks() {
    return _links;
}
void
OAIGithubRepository::setLinks(OAIGithubRepositorylinks* _links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

QString*
OAIGithubRepository::getDefaultBranch() {
    return default_branch;
}
void
OAIGithubRepository::setDefaultBranch(QString* default_branch) {
    this->default_branch = default_branch;
    this->m_default_branch_isSet = true;
}

QString*
OAIGithubRepository::getDescription() {
    return description;
}
void
OAIGithubRepository::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QString*
OAIGithubRepository::getName() {
    return name;
}
void
OAIGithubRepository::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

OAIGithubRepositorypermissions*
OAIGithubRepository::getPermissions() {
    return permissions;
}
void
OAIGithubRepository::setPermissions(OAIGithubRepositorypermissions* permissions) {
    this->permissions = permissions;
    this->m_permissions_isSet = true;
}

bool
OAIGithubRepository::isPrivate() {
    return _private;
}
void
OAIGithubRepository::setPrivate(bool _private) {
    this->_private = _private;
    this->m__private_isSet = true;
}

QString*
OAIGithubRepository::getFullName() {
    return full_name;
}
void
OAIGithubRepository::setFullName(QString* full_name) {
    this->full_name = full_name;
    this->m_full_name_isSet = true;
}


bool
OAIGithubRepository::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(_links != nullptr && _links->isSet()){ isObjectUpdated = true; break;}
        if(default_branch != nullptr && *default_branch != QString("")){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(permissions != nullptr && permissions->isSet()){ isObjectUpdated = true; break;}
        if(m__private_isSet){ isObjectUpdated = true; break;}
        if(full_name != nullptr && *full_name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

