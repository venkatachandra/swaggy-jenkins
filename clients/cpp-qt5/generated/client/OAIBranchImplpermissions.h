/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBranchImplpermissions.h
 *
 * 
 */

#ifndef OAIBranchImplpermissions_H_
#define OAIBranchImplpermissions_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBranchImplpermissions: public OAIObject {
public:
    OAIBranchImplpermissions();
    OAIBranchImplpermissions(QString json);
    ~OAIBranchImplpermissions();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIBranchImplpermissions* fromJson(QString jsonString) override;

    bool isCreate();
    void setCreate(bool create);

    bool isRead();
    void setRead(bool read);

    bool isStart();
    void setStart(bool start);

    bool isStop();
    void setStop(bool stop);

    QString* getClass();
    void setClass(QString* _class);


    virtual bool isSet() override;

private:
    bool create;
    bool m_create_isSet;

    bool read;
    bool m_read_isSet;

    bool start;
    bool m_start_isSet;

    bool stop;
    bool m_stop_isSet;

    QString* _class;
    bool m__class_isSet;

};

}

#endif /* OAIBranchImplpermissions_H_ */
