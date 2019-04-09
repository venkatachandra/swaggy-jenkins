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
 * OAIFreeStyleProjecthealthReport.h
 *
 * 
 */

#ifndef OAIFreeStyleProjecthealthReport_H_
#define OAIFreeStyleProjecthealthReport_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIFreeStyleProjecthealthReport: public OAIObject {
public:
    OAIFreeStyleProjecthealthReport();
    OAIFreeStyleProjecthealthReport(QString json);
    ~OAIFreeStyleProjecthealthReport();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIFreeStyleProjecthealthReport* fromJson(QString jsonString) override;

    QString* getDescription();
    void setDescription(QString* description);

    QString* getIconClassName();
    void setIconClassName(QString* icon_class_name);

    QString* getIconUrl();
    void setIconUrl(QString* icon_url);

    qint32 getScore();
    void setScore(qint32 score);

    QString* getClass();
    void setClass(QString* _class);


    virtual bool isSet() override;

private:
    QString* description;
    bool m_description_isSet;

    QString* icon_class_name;
    bool m_icon_class_name_isSet;

    QString* icon_url;
    bool m_icon_url_isSet;

    qint32 score;
    bool m_score_isSet;

    QString* _class;
    bool m__class_isSet;

};

}

#endif /* OAIFreeStyleProjecthealthReport_H_ */
