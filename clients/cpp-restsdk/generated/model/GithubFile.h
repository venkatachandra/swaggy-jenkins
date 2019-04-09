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
 * GithubFile.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GithubFile_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GithubFile_H_


#include "../ModelBase.h"

#include "GithubContent.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubFile
    : public ModelBase
{
public:
    GithubFile();
    virtual ~GithubFile();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GithubFile members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GithubContent> getContent() const;
    bool contentIsSet() const;
    void unsetContent();
    void setContent(std::shared_ptr<GithubContent> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool _classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);

protected:
    std::shared_ptr<GithubContent> m_Content;
    bool m_ContentIsSet;
    utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GithubFile_H_ */
