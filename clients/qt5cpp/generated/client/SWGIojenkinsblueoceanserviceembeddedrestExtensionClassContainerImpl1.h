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
 * SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1.h
 * 
 * 
 */

#ifndef SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_H_
#define SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_H_

#include <QJsonObject>


#include "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links.h"
#include "SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1: public SWGObject {
public:
    SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1();
    SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1(QString* json);
    virtual ~SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links* getLinks();
    void setLinks(SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links* _links);

    SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map* getMap();
    void setMap(SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map* map);


private:
    QString* _class;
    SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1__links* _links;
    SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_map* map;
};

}

#endif /* SWGIojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1_H_ */