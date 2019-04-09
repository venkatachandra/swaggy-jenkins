/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ExtensionClassImpl.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ExtensionClassImpl_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ExtensionClassImpl_H_


#include "../ModelBase.h"

#include "ExtensionClassImpllinks.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ExtensionClassImpl
    : public ModelBase
{
public:
    ExtensionClassImpl();
    virtual ~ExtensionClassImpl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExtensionClassImpl members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool _classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExtensionClassImpllinks> getLinks() const;
    bool linksIsSet() const;
    void unset_links();
    void setLinks(std::shared_ptr<ExtensionClassImpllinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getClasses();
    bool classesIsSet() const;
    void unsetClasses();
    void setClasses(std::vector<utility::string_t> value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    std::shared_ptr<ExtensionClassImpllinks> m__links;
    bool m__linksIsSet;
    std::vector<utility::string_t> m_Classes;
    bool m_ClassesIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ExtensionClassImpl_H_ */
