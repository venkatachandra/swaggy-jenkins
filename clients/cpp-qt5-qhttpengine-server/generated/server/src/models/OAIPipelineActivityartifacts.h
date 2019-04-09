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
 * OAIPipelineActivityartifacts.h
 *
 * 
 */

#ifndef OAIPipelineActivityartifacts_H
#define OAIPipelineActivityartifacts_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelineActivityartifacts: public OAIObject {
public:
    OAIPipelineActivityartifacts();
    OAIPipelineActivityartifacts(QString json);
    ~OAIPipelineActivityartifacts() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);

    qint32 getSize() const;
    void setSize(const qint32 &size);

    QString getUrl() const;
    void setUrl(const QString &url);

    QString getClass() const;
    void setClass(const QString &_class);

    virtual bool isSet() const override;

private:
    QString name;
    bool m_name_isSet;

    qint32 size;
    bool m_size_isSet;

    QString url;
    bool m_url_isSet;

    QString _class;
    bool m__class_isSet;

};

}

#endif // OAIPipelineActivityartifacts_H
