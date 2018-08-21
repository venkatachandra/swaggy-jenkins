/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "PipelineFolderImpl.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelineFolderImpl::PipelineFolderImpl()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_DisplayName = utility::conversions::to_string_t("");
    m_DisplayNameIsSet = false;
    m_FullName = utility::conversions::to_string_t("");
    m_FullNameIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Organization = utility::conversions::to_string_t("");
    m_OrganizationIsSet = false;
    m_NumberOfFolders = 0;
    m_NumberOfFoldersIsSet = false;
    m_NumberOfPipelines = 0;
    m_NumberOfPipelinesIsSet = false;
}

PipelineFolderImpl::~PipelineFolderImpl()
{
}

void PipelineFolderImpl::validate()
{
    // TODO: implement validation
}

web::json::value PipelineFolderImpl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m_DisplayNameIsSet)
    {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_FullNameIsSet)
    {
        val[utility::conversions::to_string_t("fullName")] = ModelBase::toJson(m_FullName);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_OrganizationIsSet)
    {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(m_Organization);
    }
    if(m_NumberOfFoldersIsSet)
    {
        val[utility::conversions::to_string_t("numberOfFolders")] = ModelBase::toJson(m_NumberOfFolders);
    }
    if(m_NumberOfPipelinesIsSet)
    {
        val[utility::conversions::to_string_t("numberOfPipelines")] = ModelBase::toJson(m_NumberOfPipelines);
    }

    return val;
}

void PipelineFolderImpl::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("displayName")]));
    }
    if(val.has_field(utility::conversions::to_string_t("fullName")))
    {
        setFullName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("fullName")]));
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("organization")))
    {
        setOrganization(ModelBase::stringFromJson(val[utility::conversions::to_string_t("organization")]));
    }
    if(val.has_field(utility::conversions::to_string_t("numberOfFolders")))
    {
        setNumberOfFolders(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numberOfFolders")]));
    }
    if(val.has_field(utility::conversions::to_string_t("numberOfPipelines")))
    {
        setNumberOfPipelines(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numberOfPipelines")]));
    }
}

void PipelineFolderImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayName"), m_DisplayName));
    }
    if(m_FullNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fullName"), m_FullName));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_OrganizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("organization"), m_Organization));
    }
    if(m_NumberOfFoldersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numberOfFolders"), m_NumberOfFolders));
    }
    if(m_NumberOfPipelinesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numberOfPipelines"), m_NumberOfPipelines));
    }
}

void PipelineFolderImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fullName")))
    {
        setFullName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fullName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("organization")))
    {
        setOrganization(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("organization"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("numberOfFolders")))
    {
        setNumberOfFolders(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numberOfFolders"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("numberOfPipelines")))
    {
        setNumberOfPipelines(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numberOfPipelines"))));
    }
}

utility::string_t PipelineFolderImpl::getClass() const
{
    return m__class;
}


void PipelineFolderImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineFolderImpl::_classIsSet() const
{
    return m__classIsSet;
}

void PipelineFolderImpl::unset_class()
{
    m__classIsSet = false;
}

utility::string_t PipelineFolderImpl::getDisplayName() const
{
    return m_DisplayName;
}


void PipelineFolderImpl::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool PipelineFolderImpl::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void PipelineFolderImpl::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}

utility::string_t PipelineFolderImpl::getFullName() const
{
    return m_FullName;
}


void PipelineFolderImpl::setFullName(utility::string_t value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool PipelineFolderImpl::fullNameIsSet() const
{
    return m_FullNameIsSet;
}

void PipelineFolderImpl::unsetFullName()
{
    m_FullNameIsSet = false;
}

utility::string_t PipelineFolderImpl::getName() const
{
    return m_Name;
}


void PipelineFolderImpl::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool PipelineFolderImpl::nameIsSet() const
{
    return m_NameIsSet;
}

void PipelineFolderImpl::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t PipelineFolderImpl::getOrganization() const
{
    return m_Organization;
}


void PipelineFolderImpl::setOrganization(utility::string_t value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool PipelineFolderImpl::organizationIsSet() const
{
    return m_OrganizationIsSet;
}

void PipelineFolderImpl::unsetOrganization()
{
    m_OrganizationIsSet = false;
}

int32_t PipelineFolderImpl::getNumberOfFolders() const
{
    return m_NumberOfFolders;
}


void PipelineFolderImpl::setNumberOfFolders(int32_t value)
{
    m_NumberOfFolders = value;
    m_NumberOfFoldersIsSet = true;
}
bool PipelineFolderImpl::numberOfFoldersIsSet() const
{
    return m_NumberOfFoldersIsSet;
}

void PipelineFolderImpl::unsetNumberOfFolders()
{
    m_NumberOfFoldersIsSet = false;
}

int32_t PipelineFolderImpl::getNumberOfPipelines() const
{
    return m_NumberOfPipelines;
}


void PipelineFolderImpl::setNumberOfPipelines(int32_t value)
{
    m_NumberOfPipelines = value;
    m_NumberOfPipelinesIsSet = true;
}
bool PipelineFolderImpl::numberOfPipelinesIsSet() const
{
    return m_NumberOfPipelinesIsSet;
}

void PipelineFolderImpl::unsetNumberOfPipelines()
{
    m_NumberOfPipelinesIsSet = false;
}

}
}
}
}
