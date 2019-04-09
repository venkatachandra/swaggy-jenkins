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
 * GithubContent.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GithubContent_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GithubContent_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubContent
    : public ModelBase
{
public:
    GithubContent();
    virtual ~GithubContent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GithubContent members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSha() const;
    bool shaIsSet() const;
    void unsetSha();
    void setSha(utility::string_t value);
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
    utility::string_t getRepo() const;
    bool repoIsSet() const;
    void unsetRepo();
    void setRepo(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetSize();
    void setSize(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOwner() const;
    bool ownerIsSet() const;
    void unsetOwner();
    void setOwner(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPath() const;
    bool pathIsSet() const;
    void unsetPath();
    void setPath(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBase64Data() const;
    bool base64DataIsSet() const;
    void unsetBase64Data();
    void setBase64Data(utility::string_t value);

protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Sha;
    bool m_ShaIsSet;
    utility::string_t m__class;
    bool m__classIsSet;
    utility::string_t m_Repo;
    bool m_RepoIsSet;
    int32_t m_Size;
    bool m_SizeIsSet;
    utility::string_t m_Owner;
    bool m_OwnerIsSet;
    utility::string_t m_Path;
    bool m_PathIsSet;
    utility::string_t m_Base64Data;
    bool m_Base64DataIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GithubContent_H_ */
