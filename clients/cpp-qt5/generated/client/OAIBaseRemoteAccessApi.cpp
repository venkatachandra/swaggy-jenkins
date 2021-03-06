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

#include "OAIBaseRemoteAccessApi.h"
#include "OAIHelpers.h"
#include "OAIModelFactory.h"
#include "OAIQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIBaseRemoteAccessApi::OAIBaseRemoteAccessApi() {}

OAIBaseRemoteAccessApi::~OAIBaseRemoteAccessApi() {}

OAIBaseRemoteAccessApi::OAIBaseRemoteAccessApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAIBaseRemoteAccessApi::getCrumb() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/crumbIssuer/api/json");



    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIBaseRemoteAccessApi::getCrumbCallback);

    worker->execute(&input);
}

void
OAIBaseRemoteAccessApi::getCrumbCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIDefaultCrumbIssuer* output = static_cast<OAIDefaultCrumbIssuer*>(create(json, QString("OAIDefaultCrumbIssuer")));
    auto wrapper = new OAIQObjectWrapper<OAIDefaultCrumbIssuer*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getCrumbSignal(output);
    } else {
        emit getCrumbSignalE(output, error_type, error_str);
        emit getCrumbSignalEFull(worker, error_type, error_str);
    }
}


}
