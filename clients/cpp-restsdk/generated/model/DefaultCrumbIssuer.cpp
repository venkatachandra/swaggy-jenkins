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



#include "DefaultCrumbIssuer.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

DefaultCrumbIssuer::DefaultCrumbIssuer()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_Crumb = utility::conversions::to_string_t("");
    m_CrumbIsSet = false;
    m_CrumbRequestField = utility::conversions::to_string_t("");
    m_CrumbRequestFieldIsSet = false;
}

DefaultCrumbIssuer::~DefaultCrumbIssuer()
{
}

void DefaultCrumbIssuer::validate()
{
    // TODO: implement validation
}

web::json::value DefaultCrumbIssuer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m_CrumbIsSet)
    {
        val[utility::conversions::to_string_t("crumb")] = ModelBase::toJson(m_Crumb);
    }
    if(m_CrumbRequestFieldIsSet)
    {
        val[utility::conversions::to_string_t("crumbRequestField")] = ModelBase::toJson(m_CrumbRequestField);
    }

    return val;
}

void DefaultCrumbIssuer::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("crumb")))
    {
        setCrumb(ModelBase::stringFromJson(val[utility::conversions::to_string_t("crumb")]));
    }
    if(val.has_field(utility::conversions::to_string_t("crumbRequestField")))
    {
        setCrumbRequestField(ModelBase::stringFromJson(val[utility::conversions::to_string_t("crumbRequestField")]));
    }
}

void DefaultCrumbIssuer::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_CrumbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("crumb"), m_Crumb));
    }
    if(m_CrumbRequestFieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("crumbRequestField"), m_CrumbRequestField));
    }
}

void DefaultCrumbIssuer::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("crumb")))
    {
        setCrumb(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("crumb"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("crumbRequestField")))
    {
        setCrumbRequestField(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("crumbRequestField"))));
    }
}

utility::string_t DefaultCrumbIssuer::getClass() const
{
    return m__class;
}


void DefaultCrumbIssuer::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool DefaultCrumbIssuer::_classIsSet() const
{
    return m__classIsSet;
}

void DefaultCrumbIssuer::unset_class()
{
    m__classIsSet = false;
}

utility::string_t DefaultCrumbIssuer::getCrumb() const
{
    return m_Crumb;
}


void DefaultCrumbIssuer::setCrumb(utility::string_t value)
{
    m_Crumb = value;
    m_CrumbIsSet = true;
}
bool DefaultCrumbIssuer::crumbIsSet() const
{
    return m_CrumbIsSet;
}

void DefaultCrumbIssuer::unsetCrumb()
{
    m_CrumbIsSet = false;
}

utility::string_t DefaultCrumbIssuer::getCrumbRequestField() const
{
    return m_CrumbRequestField;
}


void DefaultCrumbIssuer::setCrumbRequestField(utility::string_t value)
{
    m_CrumbRequestField = value;
    m_CrumbRequestFieldIsSet = true;
}
bool DefaultCrumbIssuer::crumbRequestFieldIsSet() const
{
    return m_CrumbRequestFieldIsSet;
}

void DefaultCrumbIssuer::unsetCrumbRequestField()
{
    m_CrumbRequestFieldIsSet = false;
}

}
}
}
}

