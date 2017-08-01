/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGGetPipelines.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGGetPipelines::SWGGetPipelines(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGetPipelines::SWGGetPipelines() {
    init();
}

SWGGetPipelines::~SWGGetPipelines() {
    this->cleanup();
}

void
SWGGetPipelines::init() {
}

void
SWGGetPipelines::cleanup() {
    }

SWGGetPipelines*
SWGGetPipelines::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGetPipelines::fromJsonObject(QJsonObject &pJson) {
}

QString
SWGGetPipelines::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGetPipelines::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    return obj;
}


}
