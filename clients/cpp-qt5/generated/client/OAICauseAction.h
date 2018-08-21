/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICauseAction.h
 *
 * 
 */

#ifndef OAICauseAction_H_
#define OAICauseAction_H_

#include <QJsonObject>


#include "OAIOAICauseUserIdCause.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAICauseAction: public OAIObject {
public:
    OAICauseAction();
    OAICauseAction(QString json);
    ~OAICauseAction();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAICauseAction* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    QList<OAICauseUserIdCause*>* getCauses();
    void setCauses(QList<OAICauseUserIdCause*>* causes);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    QList<OAICauseUserIdCause*>* causes;
    bool m_causes_isSet;

};

}

#endif /* OAICauseAction_H_ */