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
 * EmptyChangeLogSet.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_EmptyChangeLogSet_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_EmptyChangeLogSet_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  EmptyChangeLogSet
    : public ModelBase
{
public:
    EmptyChangeLogSet();
    virtual ~EmptyChangeLogSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EmptyChangeLogSet members

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
    utility::string_t getKind() const;
    bool kindIsSet() const;
    void unsetKind();
    void setKind(utility::string_t value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    utility::string_t m_Kind;
    bool m_KindIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_EmptyChangeLogSet_H_ */
