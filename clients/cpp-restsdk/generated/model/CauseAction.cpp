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



#include "CauseAction.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

CauseAction::CauseAction()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_CausesIsSet = false;
}

CauseAction::~CauseAction()
{
}

void CauseAction::validate()
{
    // TODO: implement validation
}

web::json::value CauseAction::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Causes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("causes")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void CauseAction::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    {
        m_Causes.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("causes")))
        {
        for( auto& item : val[utility::conversions::to_string_t("causes")].as_array() )
        {
            if(item.is_null())
            {
                m_Causes.push_back( std::shared_ptr<CauseUserIdCause>(nullptr) );
            }
            else
            {
                std::shared_ptr<CauseUserIdCause> newItem(new CauseUserIdCause());
                newItem->fromJson(item);
                m_Causes.push_back( newItem );
            }
        }
        }
    }
}

void CauseAction::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Causes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("causes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void CauseAction::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_Causes.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("causes")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("causes"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Causes.push_back( std::shared_ptr<CauseUserIdCause>(nullptr) );
            }
            else
            {
                std::shared_ptr<CauseUserIdCause> newItem(new CauseUserIdCause());
                newItem->fromJson(item);
                m_Causes.push_back( newItem );
            }
        }
        }
    }
}

utility::string_t CauseAction::getClass() const
{
    return m__class;
}


void CauseAction::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool CauseAction::_classIsSet() const
{
    return m__classIsSet;
}

void CauseAction::unset_class()
{
    m__classIsSet = false;
}

std::vector<std::shared_ptr<CauseUserIdCause>>& CauseAction::getCauses()
{
    return m_Causes;
}

void CauseAction::setCauses(std::vector<std::shared_ptr<CauseUserIdCause>> value)
{
    m_Causes = value;
    m_CausesIsSet = true;
}
bool CauseAction::causesIsSet() const
{
    return m_CausesIsSet;
}

void CauseAction::unsetCauses()
{
    m_CausesIsSet = false;
}

}
}
}
}

