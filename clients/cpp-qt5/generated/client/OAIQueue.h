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
 * OAIQueue.h
 *
 * 
 */

#ifndef OAIQueue_H_
#define OAIQueue_H_

#include <QJsonObject>


#include "OAIOAIQueueBlockedItem.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIQueue: public OAIObject {
public:
    OAIQueue();
    OAIQueue(QString json);
    ~OAIQueue();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIQueue* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    QList<OAIQueueBlockedItem*>* getItems();
    void setItems(QList<OAIQueueBlockedItem*>* items);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    QList<OAIQueueBlockedItem*>* items;
    bool m_items_isSet;

};

}

#endif /* OAIQueue_H_ */
