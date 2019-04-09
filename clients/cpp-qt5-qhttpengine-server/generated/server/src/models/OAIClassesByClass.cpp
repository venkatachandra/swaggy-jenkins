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


#include "OAIClassesByClass.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIClassesByClass::OAIClassesByClass(QString json) {
    this->fromJson(json);
}

OAIClassesByClass::OAIClassesByClass() {
    this->init();
}

OAIClassesByClass::~OAIClassesByClass() {
    
}

void
OAIClassesByClass::init() {
    m_classes_isSet = false;
    m__class_isSet = false;
}

void
OAIClassesByClass::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIClassesByClass::fromJsonObject(QJsonObject json) {
    
    ::OpenAPI::fromJsonValue(classes, json[QString("classes")]);
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIClassesByClass::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIClassesByClass::asJsonObject() const {
    QJsonObject obj;
	
    if(classes.size() > 0){
        obj.insert(QString("classes"), ::OpenAPI::toJsonValue(classes));
    } 
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

QList<QString>
OAIClassesByClass::getClasses() const {
    return classes;
}
void
OAIClassesByClass::setClasses(const QList<QString> &classes) {
    this->classes = classes;
    this->m_classes_isSet = true;
}

QString
OAIClassesByClass::getClass() const {
    return _class;
}
void
OAIClassesByClass::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIClassesByClass::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(classes.size() > 0){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

