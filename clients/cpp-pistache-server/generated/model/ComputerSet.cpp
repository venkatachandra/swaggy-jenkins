/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ComputerSet.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ComputerSet::ComputerSet()
{
    m__class = "";
    m__classIsSet = false;
    m_BusyExecutors = 0;
    m_BusyExecutorsIsSet = false;
    m_ComputerIsSet = false;
    m_DisplayName = "";
    m_DisplayNameIsSet = false;
    m_TotalExecutors = 0;
    m_TotalExecutorsIsSet = false;
    
}

ComputerSet::~ComputerSet()
{
}

void ComputerSet::validate()
{
    // TODO: implement validation
}

nlohmann::json ComputerSet::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_BusyExecutorsIsSet)
    {
        val["busyExecutors"] = m_BusyExecutors;
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Computer )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["computer"] = jsonArray;
        }
    }
    if(m_DisplayNameIsSet)
    {
        val["displayName"] = ModelBase::toJson(m_DisplayName);
    }
    if(m_TotalExecutorsIsSet)
    {
        val["totalExecutors"] = m_TotalExecutors;
    }
    

    return val;
}

void ComputerSet::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    if(val.find("busyExecutors") != val.end())
    {
        setBusyExecutors(val.at("busyExecutors"));
    }
    {
        m_Computer.clear();
        nlohmann::json jsonArray;
        if(val.find("computer") != val.end())
        {
        for( auto& item : val["computer"] )
        {
            
            if(item.is_null())
            {
                m_Computer.push_back( HudsonMasterComputer() );
            }
            else
            {
                HudsonMasterComputer newItem;
                newItem.fromJson(item);
                m_Computer.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("displayName") != val.end())
    {
        setDisplayName(val.at("displayName"));
    }
    if(val.find("totalExecutors") != val.end())
    {
        setTotalExecutors(val.at("totalExecutors"));
    }
    
}


std::string ComputerSet::getClass() const
{
    return m__class;
}
void ComputerSet::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool ComputerSet::classIsSet() const
{
    return m__classIsSet;
}
void ComputerSet::unset_class()
{
    m__classIsSet = false;
}
int32_t ComputerSet::getBusyExecutors() const
{
    return m_BusyExecutors;
}
void ComputerSet::setBusyExecutors(int32_t const value)
{
    m_BusyExecutors = value;
    m_BusyExecutorsIsSet = true;
}
bool ComputerSet::busyExecutorsIsSet() const
{
    return m_BusyExecutorsIsSet;
}
void ComputerSet::unsetBusyExecutors()
{
    m_BusyExecutorsIsSet = false;
}
std::vector<HudsonMasterComputer>& ComputerSet::getComputer()
{
    return m_Computer;
}
bool ComputerSet::computerIsSet() const
{
    return m_ComputerIsSet;
}
void ComputerSet::unsetComputer()
{
    m_ComputerIsSet = false;
}
std::string ComputerSet::getDisplayName() const
{
    return m_DisplayName;
}
void ComputerSet::setDisplayName(std::string const& value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool ComputerSet::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void ComputerSet::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
int32_t ComputerSet::getTotalExecutors() const
{
    return m_TotalExecutors;
}
void ComputerSet::setTotalExecutors(int32_t const value)
{
    m_TotalExecutors = value;
    m_TotalExecutorsIsSet = true;
}
bool ComputerSet::totalExecutorsIsSet() const
{
    return m_TotalExecutorsIsSet;
}
void ComputerSet::unsetTotalExecutors()
{
    m_TotalExecutorsIsSet = false;
}

}
}
}
}

