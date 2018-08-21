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



#include "PipelinelatestRunartifacts.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelinelatestRunartifacts::PipelinelatestRunartifacts()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

PipelinelatestRunartifacts::~PipelinelatestRunartifacts()
{
}

void PipelinelatestRunartifacts::validate()
{
    // TODO: implement validation
}

web::json::value PipelinelatestRunartifacts::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void PipelinelatestRunartifacts::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        setSize(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("size")]));
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        setUrl(ModelBase::stringFromJson(val[utility::conversions::to_string_t("url")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void PipelinelatestRunartifacts::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void PipelinelatestRunartifacts::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        setSize(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("size"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("url"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

utility::string_t PipelinelatestRunartifacts::getName() const
{
    return m_Name;
}


void PipelinelatestRunartifacts::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool PipelinelatestRunartifacts::nameIsSet() const
{
    return m_NameIsSet;
}

void PipelinelatestRunartifacts::unsetName()
{
    m_NameIsSet = false;
}

int32_t PipelinelatestRunartifacts::getSize() const
{
    return m_Size;
}


void PipelinelatestRunartifacts::setSize(int32_t value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool PipelinelatestRunartifacts::sizeIsSet() const
{
    return m_SizeIsSet;
}

void PipelinelatestRunartifacts::unsetSize()
{
    m_SizeIsSet = false;
}

utility::string_t PipelinelatestRunartifacts::getUrl() const
{
    return m_Url;
}


void PipelinelatestRunartifacts::setUrl(utility::string_t value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool PipelinelatestRunartifacts::urlIsSet() const
{
    return m_UrlIsSet;
}

void PipelinelatestRunartifacts::unsetUrl()
{
    m_UrlIsSet = false;
}

utility::string_t PipelinelatestRunartifacts::getClass() const
{
    return m__class;
}


void PipelinelatestRunartifacts::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelinelatestRunartifacts::_classIsSet() const
{
    return m__classIsSet;
}

void PipelinelatestRunartifacts::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
