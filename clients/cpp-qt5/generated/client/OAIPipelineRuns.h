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

/*
 * OAIPipelineRuns.h
 *
 * 
 */

#ifndef OAIPipelineRuns_H_
#define OAIPipelineRuns_H_

#include <QJsonObject>


#include "OAIOAIPipelineRun.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelineRuns: public OAIObject {
public:
    OAIPipelineRuns();
    OAIPipelineRuns(QString json);
    ~OAIPipelineRuns();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIPipelineRuns* fromJson(QString jsonString) override;


    virtual bool isSet() override;

private:
};

}

#endif /* OAIPipelineRuns_H_ */
