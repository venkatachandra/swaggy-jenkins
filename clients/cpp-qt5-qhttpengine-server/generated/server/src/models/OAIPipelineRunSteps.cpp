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


#include "OAIPipelineRunSteps.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineRunSteps::OAIPipelineRunSteps(QString json) {
    this->fromJson(json);
}

OAIPipelineRunSteps::OAIPipelineRunSteps() {
    this->init();
}

OAIPipelineRunSteps::~OAIPipelineRunSteps() {
    
}

void
OAIPipelineRunSteps::init() {
}

void
OAIPipelineRunSteps::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineRunSteps::fromJsonObject(QJsonObject json) {
}

QString
OAIPipelineRunSteps::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineRunSteps::asJsonObject() const {
    QJsonObject obj;
    return obj;
}


bool
OAIPipelineRunSteps::isSet() const {
    bool isObjectUpdated = false;
    do{ }while(false);
    return isObjectUpdated;
}

}

