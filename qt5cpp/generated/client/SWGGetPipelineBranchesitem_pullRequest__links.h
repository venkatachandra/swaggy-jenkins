/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGGetPipelineBranchesitem_pullRequest__links.h
 * 
 * 
 */

#ifndef SWGGetPipelineBranchesitem_pullRequest__links_H_
#define SWGGetPipelineBranchesitem_pullRequest__links_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGGetPipelineBranchesitem_pullRequest__links: public SWGObject {
public:
    SWGGetPipelineBranchesitem_pullRequest__links();
    SWGGetPipelineBranchesitem_pullRequest__links(QString* json);
    virtual ~SWGGetPipelineBranchesitem_pullRequest__links();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGGetPipelineBranchesitem_pullRequest__links* fromJson(QString &jsonString);

    QString* getSelf();
    void setSelf(QString* self);

    QString* getClass();
    void setClass(QString* _class);


private:
    QString* self;
    QString* _class;
};

}

#endif /* SWGGetPipelineBranchesitem_pullRequest__links_H_ */