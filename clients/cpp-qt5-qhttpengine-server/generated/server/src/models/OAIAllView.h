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
 * OAIAllView.h
 *
 * 
 */

#ifndef OAIAllView_H
#define OAIAllView_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIAllView: public OAIObject {
public:
    OAIAllView();
    OAIAllView(QString json);
    ~OAIAllView() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    QString getName() const;
    void setName(const QString &name);

    QString getUrl() const;
    void setUrl(const QString &url);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    QString name;
    bool m_name_isSet;

    QString url;
    bool m_url_isSet;

};

}

#endif // OAIAllView_H
