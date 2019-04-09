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


#include "OAIGithubFile.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIGithubFile::OAIGithubFile(QString json) {
    init();
    this->fromJson(json);
}

OAIGithubFile::OAIGithubFile() {
    init();
}

OAIGithubFile::~OAIGithubFile() {
    this->cleanup();
}

void
OAIGithubFile::init() {
    content = new OAIGithubContent();
    m_content_isSet = false;
    _class = new QString("");
    m__class_isSet = false;
}

void
OAIGithubFile::cleanup() {
    if(content != nullptr) { 
        delete content;
    }
    if(_class != nullptr) { 
        delete _class;
    }
}

OAIGithubFile*
OAIGithubFile::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIGithubFile::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&content, pJson["content"], "OAIGithubContent", "OAIGithubContent");
    
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
}

QString
OAIGithubFile::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIGithubFile::asJsonObject() {
    QJsonObject obj;
    if((content != nullptr) && (content->isSet())){
        toJsonValue(QString("content"), content, obj, QString("OAIGithubContent"));
    }
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }

    return obj;
}

OAIGithubContent*
OAIGithubFile::getContent() {
    return content;
}
void
OAIGithubFile::setContent(OAIGithubContent* content) {
    this->content = content;
    this->m_content_isSet = true;
}

QString*
OAIGithubFile::getClass() {
    return _class;
}
void
OAIGithubFile::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIGithubFile::isSet(){
    bool isObjectUpdated = false;
    do{
        if(content != nullptr && content->isSet()){ isObjectUpdated = true; break;}
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

