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
 * OAIUsers.h
 *
 * 
 */

#ifndef OAIUsers_H_
#define OAIUsers_H_

#include <QJsonObject>


#include "OAIOAIUser.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIUsers: public OAIObject {
public:
    OAIUsers();
    OAIUsers(QString json);
    ~OAIUsers();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIUsers* fromJson(QString jsonString) override;


    virtual bool isSet() override;

private:
};

}

#endif /* OAIUsers_H_ */
