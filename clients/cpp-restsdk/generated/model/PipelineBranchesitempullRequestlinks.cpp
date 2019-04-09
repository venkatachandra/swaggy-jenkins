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



#include "PipelineBranchesitempullRequestlinks.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelineBranchesitempullRequestlinks::PipelineBranchesitempullRequestlinks()
{
    m_Self = utility::conversions::to_string_t("");
    m_SelfIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

PipelineBranchesitempullRequestlinks::~PipelineBranchesitempullRequestlinks()
{
}

void PipelineBranchesitempullRequestlinks::validate()
{
    // TODO: implement validation
}

web::json::value PipelineBranchesitempullRequestlinks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SelfIsSet)
    {
        val[utility::conversions::to_string_t("self")] = ModelBase::toJson(m_Self);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void PipelineBranchesitempullRequestlinks::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("self")))
    {
        setSelf(ModelBase::stringFromJson(val[utility::conversions::to_string_t("self")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void PipelineBranchesitempullRequestlinks::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_SelfIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("self"), m_Self));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void PipelineBranchesitempullRequestlinks::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("self")))
    {
        setSelf(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("self"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

utility::string_t PipelineBranchesitempullRequestlinks::getSelf() const
{
    return m_Self;
}


void PipelineBranchesitempullRequestlinks::setSelf(utility::string_t value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool PipelineBranchesitempullRequestlinks::selfIsSet() const
{
    return m_SelfIsSet;
}

void PipelineBranchesitempullRequestlinks::unsetSelf()
{
    m_SelfIsSet = false;
}

utility::string_t PipelineBranchesitempullRequestlinks::getClass() const
{
    return m__class;
}


void PipelineBranchesitempullRequestlinks::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineBranchesitempullRequestlinks::_classIsSet() const
{
    return m__classIsSet;
}

void PipelineBranchesitempullRequestlinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

