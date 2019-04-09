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



#include "GithubContent.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

GithubContent::GithubContent()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Sha = utility::conversions::to_string_t("");
    m_ShaIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_Repo = utility::conversions::to_string_t("");
    m_RepoIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_Owner = utility::conversions::to_string_t("");
    m_OwnerIsSet = false;
    m_Path = utility::conversions::to_string_t("");
    m_PathIsSet = false;
    m_Base64Data = utility::conversions::to_string_t("");
    m_Base64DataIsSet = false;
}

GithubContent::~GithubContent()
{
}

void GithubContent::validate()
{
    // TODO: implement validation
}

web::json::value GithubContent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ShaIsSet)
    {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(m_Sha);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m_RepoIsSet)
    {
        val[utility::conversions::to_string_t("repo")] = ModelBase::toJson(m_Repo);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(m_Owner);
    }
    if(m_PathIsSet)
    {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(m_Path);
    }
    if(m_Base64DataIsSet)
    {
        val[utility::conversions::to_string_t("base64Data")] = ModelBase::toJson(m_Base64Data);
    }

    return val;
}

void GithubContent::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("sha")))
    {
        setSha(ModelBase::stringFromJson(val[utility::conversions::to_string_t("sha")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("repo")))
    {
        setRepo(ModelBase::stringFromJson(val[utility::conversions::to_string_t("repo")]));
    }
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        setSize(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("size")]));
    }
    if(val.has_field(utility::conversions::to_string_t("owner")))
    {
        setOwner(ModelBase::stringFromJson(val[utility::conversions::to_string_t("owner")]));
    }
    if(val.has_field(utility::conversions::to_string_t("path")))
    {
        setPath(ModelBase::stringFromJson(val[utility::conversions::to_string_t("path")]));
    }
    if(val.has_field(utility::conversions::to_string_t("base64Data")))
    {
        setBase64Data(ModelBase::stringFromJson(val[utility::conversions::to_string_t("base64Data")]));
    }
}

void GithubContent::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_ShaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sha"), m_Sha));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
    if(m_RepoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("repo"), m_Repo));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("owner"), m_Owner));
    }
    if(m_PathIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("path"), m_Path));
    }
    if(m_Base64DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("base64Data"), m_Base64Data));
    }
}

void GithubContent::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sha")))
    {
        setSha(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sha"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("repo")))
    {
        setRepo(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("repo"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        setSize(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("size"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("owner")))
    {
        setOwner(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("owner"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("path")))
    {
        setPath(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("path"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("base64Data")))
    {
        setBase64Data(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("base64Data"))));
    }
}

utility::string_t GithubContent::getName() const
{
    return m_Name;
}


void GithubContent::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool GithubContent::nameIsSet() const
{
    return m_NameIsSet;
}

void GithubContent::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t GithubContent::getSha() const
{
    return m_Sha;
}


void GithubContent::setSha(utility::string_t value)
{
    m_Sha = value;
    m_ShaIsSet = true;
}
bool GithubContent::shaIsSet() const
{
    return m_ShaIsSet;
}

void GithubContent::unsetSha()
{
    m_ShaIsSet = false;
}

utility::string_t GithubContent::getClass() const
{
    return m__class;
}


void GithubContent::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubContent::_classIsSet() const
{
    return m__classIsSet;
}

void GithubContent::unset_class()
{
    m__classIsSet = false;
}

utility::string_t GithubContent::getRepo() const
{
    return m_Repo;
}


void GithubContent::setRepo(utility::string_t value)
{
    m_Repo = value;
    m_RepoIsSet = true;
}
bool GithubContent::repoIsSet() const
{
    return m_RepoIsSet;
}

void GithubContent::unsetRepo()
{
    m_RepoIsSet = false;
}

int32_t GithubContent::getSize() const
{
    return m_Size;
}


void GithubContent::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool GithubContent::sizeIsSet() const
{
    return m_SizeIsSet;
}

void GithubContent::unsetSize()
{
    m_SizeIsSet = false;
}

utility::string_t GithubContent::getOwner() const
{
    return m_Owner;
}


void GithubContent::setOwner(utility::string_t value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}
bool GithubContent::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void GithubContent::unsetOwner()
{
    m_OwnerIsSet = false;
}

utility::string_t GithubContent::getPath() const
{
    return m_Path;
}


void GithubContent::setPath(utility::string_t value)
{
    m_Path = value;
    m_PathIsSet = true;
}
bool GithubContent::pathIsSet() const
{
    return m_PathIsSet;
}

void GithubContent::unsetPath()
{
    m_PathIsSet = false;
}

utility::string_t GithubContent::getBase64Data() const
{
    return m_Base64Data;
}


void GithubContent::setBase64Data(utility::string_t value)
{
    m_Base64Data = value;
    m_Base64DataIsSet = true;
}
bool GithubContent::base64DataIsSet() const
{
    return m_Base64DataIsSet;
}

void GithubContent::unsetBase64Data()
{
    m_Base64DataIsSet = false;
}

}
}
}
}

