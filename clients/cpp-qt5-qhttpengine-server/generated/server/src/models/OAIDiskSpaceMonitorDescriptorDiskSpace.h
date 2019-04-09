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
 * OAIDiskSpaceMonitorDescriptorDiskSpace.h
 *
 * 
 */

#ifndef OAIDiskSpaceMonitorDescriptorDiskSpace_H
#define OAIDiskSpaceMonitorDescriptorDiskSpace_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIDiskSpaceMonitorDescriptorDiskSpace: public OAIObject {
public:
    OAIDiskSpaceMonitorDescriptorDiskSpace();
    OAIDiskSpaceMonitorDescriptorDiskSpace(QString json);
    ~OAIDiskSpaceMonitorDescriptorDiskSpace() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    qint32 getTimestamp() const;
    void setTimestamp(const qint32 &timestamp);

    QString getPath() const;
    void setPath(const QString &path);

    qint32 getSize() const;
    void setSize(const qint32 &size);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    qint32 timestamp;
    bool m_timestamp_isSet;

    QString path;
    bool m_path_isSet;

    qint32 size;
    bool m_size_isSet;

};

}

#endif // OAIDiskSpaceMonitorDescriptorDiskSpace_H
