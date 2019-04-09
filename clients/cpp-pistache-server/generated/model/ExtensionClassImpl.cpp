/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ExtensionClassImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ExtensionClassImpl::ExtensionClassImpl()
{
    m__class = "";
    m__classIsSet = false;
    m__linksIsSet = false;
    m_ClassesIsSet = false;
    
}

ExtensionClassImpl::~ExtensionClassImpl()
{
}

void ExtensionClassImpl::validate()
{
    // TODO: implement validation
}

nlohmann::json ExtensionClassImpl::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val["_links"] = ModelBase::toJson(m__links);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Classes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["classes"] = jsonArray;
        }
    }
    

    return val;
}

void ExtensionClassImpl::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    if(val.find("_links") != val.end())
    {
        if(!val["_links"].is_null())
        {
            ExtensionClassImpllinks newItem;
            newItem.fromJson(val["_links"]);
            setLinks( newItem );
        }
        
    }
    {
        m_Classes.clear();
        nlohmann::json jsonArray;
        if(val.find("classes") != val.end())
        {
        for( auto& item : val["classes"] )
        {
            m_Classes.push_back(item);
            
        }
        }
    }
    
}


std::string ExtensionClassImpl::getClass() const
{
    return m__class;
}
void ExtensionClassImpl::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool ExtensionClassImpl::classIsSet() const
{
    return m__classIsSet;
}
void ExtensionClassImpl::unset_class()
{
    m__classIsSet = false;
}
ExtensionClassImpllinks ExtensionClassImpl::getLinks() const
{
    return m__links;
}
void ExtensionClassImpl::setLinks(ExtensionClassImpllinks const& value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool ExtensionClassImpl::linksIsSet() const
{
    return m__linksIsSet;
}
void ExtensionClassImpl::unset_links()
{
    m__linksIsSet = false;
}
std::vector<std::string>& ExtensionClassImpl::getClasses()
{
    return m_Classes;
}
bool ExtensionClassImpl::classesIsSet() const
{
    return m_ClassesIsSet;
}
void ExtensionClassImpl::unsetClasses()
{
    m_ClassesIsSet = false;
}

}
}
}
}

