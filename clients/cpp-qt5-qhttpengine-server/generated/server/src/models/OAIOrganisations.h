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
 * OAIOrganisations.h
 *
 * 
 */

#ifndef OAIOrganisations_H
#define OAIOrganisations_H

#include <QJsonObject>


#include "OAIOrganisation.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrganisations: public OAIObject {
public:
    OAIOrganisations();
    OAIOrganisations(QString json);
    ~OAIOrganisations() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    virtual bool isSet() const override;

private:
};

}

#endif // OAIOrganisations_H
