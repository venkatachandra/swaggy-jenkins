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
 * OAIExtensionClassContainerImpl1.h
 *
 * 
 */

#ifndef OAIExtensionClassContainerImpl1_H
#define OAIExtensionClassContainerImpl1_H

#include <QJsonObject>


#include "OAIExtensionClassContainerImpl1links.h"
#include "OAIExtensionClassContainerImpl1map.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIExtensionClassContainerImpl1: public OAIObject {
public:
    OAIExtensionClassContainerImpl1();
    OAIExtensionClassContainerImpl1(QString json);
    ~OAIExtensionClassContainerImpl1() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    OAIExtensionClassContainerImpl1links getLinks() const;
    void setLinks(const OAIExtensionClassContainerImpl1links &_links);

    OAIExtensionClassContainerImpl1map getMap() const;
    void setMap(const OAIExtensionClassContainerImpl1map &map);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    OAIExtensionClassContainerImpl1links _links;
    bool m__links_isSet;

    OAIExtensionClassContainerImpl1map map;
    bool m_map_isSet;

};

}

#endif // OAIExtensionClassContainerImpl1_H
