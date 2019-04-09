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


#include "QueueLeftItem.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

QueueLeftItem::QueueLeftItem()
{
    m__class = "";
    m__classIsSet = false;
    m_ActionsIsSet = false;
    m_Blocked = false;
    m_BlockedIsSet = false;
    m_Buildable = false;
    m_BuildableIsSet = false;
    m_Id = 0;
    m_IdIsSet = false;
    m_InQueueSince = 0;
    m_InQueueSinceIsSet = false;
    m_Params = "";
    m_ParamsIsSet = false;
    m_Stuck = false;
    m_StuckIsSet = false;
    m_TaskIsSet = false;
    m_Url = "";
    m_UrlIsSet = false;
    m_Why = "";
    m_WhyIsSet = false;
    m_Cancelled = false;
    m_CancelledIsSet = false;
    m_ExecutableIsSet = false;
    
}

QueueLeftItem::~QueueLeftItem()
{
}

void QueueLeftItem::validate()
{
    // TODO: implement validation
}

nlohmann::json QueueLeftItem::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Actions )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["actions"] = jsonArray;
        }
    }
    if(m_BlockedIsSet)
    {
        val["blocked"] = m_Blocked;
    }
    if(m_BuildableIsSet)
    {
        val["buildable"] = m_Buildable;
    }
    if(m_IdIsSet)
    {
        val["id"] = m_Id;
    }
    if(m_InQueueSinceIsSet)
    {
        val["inQueueSince"] = m_InQueueSince;
    }
    if(m_ParamsIsSet)
    {
        val["params"] = ModelBase::toJson(m_Params);
    }
    if(m_StuckIsSet)
    {
        val["stuck"] = m_Stuck;
    }
    if(m_TaskIsSet)
    {
        val["task"] = ModelBase::toJson(m_Task);
    }
    if(m_UrlIsSet)
    {
        val["url"] = ModelBase::toJson(m_Url);
    }
    if(m_WhyIsSet)
    {
        val["why"] = ModelBase::toJson(m_Why);
    }
    if(m_CancelledIsSet)
    {
        val["cancelled"] = m_Cancelled;
    }
    if(m_ExecutableIsSet)
    {
        val["executable"] = ModelBase::toJson(m_Executable);
    }
    

    return val;
}

void QueueLeftItem::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    {
        m_Actions.clear();
        nlohmann::json jsonArray;
        if(val.find("actions") != val.end())
        {
        for( auto& item : val["actions"] )
        {
            
            if(item.is_null())
            {
                m_Actions.push_back( CauseAction() );
            }
            else
            {
                CauseAction newItem;
                newItem.fromJson(item);
                m_Actions.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("blocked") != val.end())
    {
        setBlocked(val.at("blocked"));
    }
    if(val.find("buildable") != val.end())
    {
        setBuildable(val.at("buildable"));
    }
    if(val.find("id") != val.end())
    {
        setId(val.at("id"));
    }
    if(val.find("inQueueSince") != val.end())
    {
        setInQueueSince(val.at("inQueueSince"));
    }
    if(val.find("params") != val.end())
    {
        setParams(val.at("params"));
    }
    if(val.find("stuck") != val.end())
    {
        setStuck(val.at("stuck"));
    }
    if(val.find("task") != val.end())
    {
        if(!val["task"].is_null())
        {
            FreeStyleProject newItem;
            newItem.fromJson(val["task"]);
            setTask( newItem );
        }
        
    }
    if(val.find("url") != val.end())
    {
        setUrl(val.at("url"));
    }
    if(val.find("why") != val.end())
    {
        setWhy(val.at("why"));
    }
    if(val.find("cancelled") != val.end())
    {
        setCancelled(val.at("cancelled"));
    }
    if(val.find("executable") != val.end())
    {
        if(!val["executable"].is_null())
        {
            FreeStyleBuild newItem;
            newItem.fromJson(val["executable"]);
            setExecutable( newItem );
        }
        
    }
    
}


std::string QueueLeftItem::getClass() const
{
    return m__class;
}
void QueueLeftItem::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool QueueLeftItem::classIsSet() const
{
    return m__classIsSet;
}
void QueueLeftItem::unset_class()
{
    m__classIsSet = false;
}
std::vector<CauseAction>& QueueLeftItem::getActions()
{
    return m_Actions;
}
bool QueueLeftItem::actionsIsSet() const
{
    return m_ActionsIsSet;
}
void QueueLeftItem::unsetActions()
{
    m_ActionsIsSet = false;
}
bool QueueLeftItem::isBlocked() const
{
    return m_Blocked;
}
void QueueLeftItem::setBlocked(bool const value)
{
    m_Blocked = value;
    m_BlockedIsSet = true;
}
bool QueueLeftItem::blockedIsSet() const
{
    return m_BlockedIsSet;
}
void QueueLeftItem::unsetBlocked()
{
    m_BlockedIsSet = false;
}
bool QueueLeftItem::isBuildable() const
{
    return m_Buildable;
}
void QueueLeftItem::setBuildable(bool const value)
{
    m_Buildable = value;
    m_BuildableIsSet = true;
}
bool QueueLeftItem::buildableIsSet() const
{
    return m_BuildableIsSet;
}
void QueueLeftItem::unsetBuildable()
{
    m_BuildableIsSet = false;
}
int32_t QueueLeftItem::getId() const
{
    return m_Id;
}
void QueueLeftItem::setId(int32_t const value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool QueueLeftItem::idIsSet() const
{
    return m_IdIsSet;
}
void QueueLeftItem::unsetId()
{
    m_IdIsSet = false;
}
int32_t QueueLeftItem::getInQueueSince() const
{
    return m_InQueueSince;
}
void QueueLeftItem::setInQueueSince(int32_t const value)
{
    m_InQueueSince = value;
    m_InQueueSinceIsSet = true;
}
bool QueueLeftItem::inQueueSinceIsSet() const
{
    return m_InQueueSinceIsSet;
}
void QueueLeftItem::unsetInQueueSince()
{
    m_InQueueSinceIsSet = false;
}
std::string QueueLeftItem::getParams() const
{
    return m_Params;
}
void QueueLeftItem::setParams(std::string const& value)
{
    m_Params = value;
    m_ParamsIsSet = true;
}
bool QueueLeftItem::paramsIsSet() const
{
    return m_ParamsIsSet;
}
void QueueLeftItem::unsetParams()
{
    m_ParamsIsSet = false;
}
bool QueueLeftItem::isStuck() const
{
    return m_Stuck;
}
void QueueLeftItem::setStuck(bool const value)
{
    m_Stuck = value;
    m_StuckIsSet = true;
}
bool QueueLeftItem::stuckIsSet() const
{
    return m_StuckIsSet;
}
void QueueLeftItem::unsetStuck()
{
    m_StuckIsSet = false;
}
FreeStyleProject QueueLeftItem::getTask() const
{
    return m_Task;
}
void QueueLeftItem::setTask(FreeStyleProject const& value)
{
    m_Task = value;
    m_TaskIsSet = true;
}
bool QueueLeftItem::taskIsSet() const
{
    return m_TaskIsSet;
}
void QueueLeftItem::unsetTask()
{
    m_TaskIsSet = false;
}
std::string QueueLeftItem::getUrl() const
{
    return m_Url;
}
void QueueLeftItem::setUrl(std::string const& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool QueueLeftItem::urlIsSet() const
{
    return m_UrlIsSet;
}
void QueueLeftItem::unsetUrl()
{
    m_UrlIsSet = false;
}
std::string QueueLeftItem::getWhy() const
{
    return m_Why;
}
void QueueLeftItem::setWhy(std::string const& value)
{
    m_Why = value;
    m_WhyIsSet = true;
}
bool QueueLeftItem::whyIsSet() const
{
    return m_WhyIsSet;
}
void QueueLeftItem::unsetWhy()
{
    m_WhyIsSet = false;
}
bool QueueLeftItem::isCancelled() const
{
    return m_Cancelled;
}
void QueueLeftItem::setCancelled(bool const value)
{
    m_Cancelled = value;
    m_CancelledIsSet = true;
}
bool QueueLeftItem::cancelledIsSet() const
{
    return m_CancelledIsSet;
}
void QueueLeftItem::unsetCancelled()
{
    m_CancelledIsSet = false;
}
FreeStyleBuild QueueLeftItem::getExecutable() const
{
    return m_Executable;
}
void QueueLeftItem::setExecutable(FreeStyleBuild const& value)
{
    m_Executable = value;
    m_ExecutableIsSet = true;
}
bool QueueLeftItem::executableIsSet() const
{
    return m_ExecutableIsSet;
}
void QueueLeftItem::unsetExecutable()
{
    m_ExecutableIsSet = false;
}

}
}
}
}

