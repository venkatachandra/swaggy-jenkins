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


#include "Organisation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

Organisation::Organisation()
{
    m__class = "";
    m__classIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    
}

Organisation::~Organisation()
{
}

void Organisation::validate()
{
    // TODO: implement validation
}

nlohmann::json Organisation::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    

    return val;
}

void Organisation::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
    }
    
}


std::string Organisation::getClass() const
{
    return m__class;
}
void Organisation::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool Organisation::classIsSet() const
{
    return m__classIsSet;
}
void Organisation::unset_class()
{
    m__classIsSet = false;
}
std::string Organisation::getName() const
{
    return m_Name;
}
void Organisation::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Organisation::nameIsSet() const
{
    return m_NameIsSet;
}
void Organisation::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

