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


#include "FreeStyleBuild.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

FreeStyleBuild::FreeStyleBuild()
{
    m__class = "";
    m__classIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
    m_Url = "";
    m_UrlIsSet = false;
    m_ActionsIsSet = false;
    m_Building = false;
    m_BuildingIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_DisplayName = "";
    m_DisplayNameIsSet = false;
    m_Duration = 0;
    m_DurationIsSet = false;
    m_EstimatedDuration = 0;
    m_EstimatedDurationIsSet = false;
    m_Executor = "";
    m_ExecutorIsSet = false;
    m_FullDisplayName = "";
    m_FullDisplayNameIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_KeepLog = false;
    m_KeepLogIsSet = false;
    m_QueueId = 0;
    m_QueueIdIsSet = false;
    m_Result = "";
    m_ResultIsSet = false;
    m_Timestamp = 0;
    m_TimestampIsSet = false;
    m_BuiltOn = "";
    m_BuiltOnIsSet = false;
    m_ChangeSetIsSet = false;
    
}

FreeStyleBuild::~FreeStyleBuild()
{
}

void FreeStyleBuild::validate()
{
    // TODO: implement validation
}

nlohmann::json FreeStyleBuild::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_numberIsSet)
    {
        val["number"] = m_number;
    }
    if(m_UrlIsSet)
    {
        val["url"] = ModelBase::toJson(m_Url);
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
    if(m_BuildingIsSet)
    {
        val["building"] = m_Building;
    }
    if(m_DescriptionIsSet)
    {
        val["description"] = ModelBase::toJson(m_Description);
    }
    if(m_DisplayNameIsSet)
    {
        val["displayName"] = ModelBase::toJson(m_DisplayName);
    }
    if(m_DurationIsSet)
    {
        val["duration"] = m_Duration;
    }
    if(m_EstimatedDurationIsSet)
    {
        val["estimatedDuration"] = m_EstimatedDuration;
    }
    if(m_ExecutorIsSet)
    {
        val["executor"] = ModelBase::toJson(m_Executor);
    }
    if(m_FullDisplayNameIsSet)
    {
        val["fullDisplayName"] = ModelBase::toJson(m_FullDisplayName);
    }
    if(m_IdIsSet)
    {
        val["id"] = ModelBase::toJson(m_Id);
    }
    if(m_KeepLogIsSet)
    {
        val["keepLog"] = m_KeepLog;
    }
    if(m_QueueIdIsSet)
    {
        val["queueId"] = m_QueueId;
    }
    if(m_ResultIsSet)
    {
        val["result"] = ModelBase::toJson(m_Result);
    }
    if(m_TimestampIsSet)
    {
        val["timestamp"] = m_Timestamp;
    }
    if(m_BuiltOnIsSet)
    {
        val["builtOn"] = ModelBase::toJson(m_BuiltOn);
    }
    if(m_ChangeSetIsSet)
    {
        val["changeSet"] = ModelBase::toJson(m_ChangeSet);
    }
    

    return val;
}

void FreeStyleBuild::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    if(val.find("number") != val.end())
    {
        setNumber(val.at("number"));
    }
    if(val.find("url") != val.end())
    {
        setUrl(val.at("url"));
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
    if(val.find("building") != val.end())
    {
        setBuilding(val.at("building"));
    }
    if(val.find("description") != val.end())
    {
        setDescription(val.at("description"));
    }
    if(val.find("displayName") != val.end())
    {
        setDisplayName(val.at("displayName"));
    }
    if(val.find("duration") != val.end())
    {
        setDuration(val.at("duration"));
    }
    if(val.find("estimatedDuration") != val.end())
    {
        setEstimatedDuration(val.at("estimatedDuration"));
    }
    if(val.find("executor") != val.end())
    {
        setExecutor(val.at("executor"));
    }
    if(val.find("fullDisplayName") != val.end())
    {
        setFullDisplayName(val.at("fullDisplayName"));
    }
    if(val.find("id") != val.end())
    {
        setId(val.at("id"));
    }
    if(val.find("keepLog") != val.end())
    {
        setKeepLog(val.at("keepLog"));
    }
    if(val.find("queueId") != val.end())
    {
        setQueueId(val.at("queueId"));
    }
    if(val.find("result") != val.end())
    {
        setResult(val.at("result"));
    }
    if(val.find("timestamp") != val.end())
    {
        setTimestamp(val.at("timestamp"));
    }
    if(val.find("builtOn") != val.end())
    {
        setBuiltOn(val.at("builtOn"));
    }
    if(val.find("changeSet") != val.end())
    {
        if(!val["changeSet"].is_null())
        {
            EmptyChangeLogSet newItem;
            newItem.fromJson(val["changeSet"]);
            setChangeSet( newItem );
        }
        
    }
    
}


std::string FreeStyleBuild::getClass() const
{
    return m__class;
}
void FreeStyleBuild::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool FreeStyleBuild::classIsSet() const
{
    return m__classIsSet;
}
void FreeStyleBuild::unset_class()
{
    m__classIsSet = false;
}
int32_t FreeStyleBuild::getNumber() const
{
    return m_number;
}
void FreeStyleBuild::setNumber(int32_t const value)
{
    m_number = value;
    m_numberIsSet = true;
}
bool FreeStyleBuild::numberIsSet() const
{
    return m_numberIsSet;
}
void FreeStyleBuild::unsetnumber()
{
    m_numberIsSet = false;
}
std::string FreeStyleBuild::getUrl() const
{
    return m_Url;
}
void FreeStyleBuild::setUrl(std::string const& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool FreeStyleBuild::urlIsSet() const
{
    return m_UrlIsSet;
}
void FreeStyleBuild::unsetUrl()
{
    m_UrlIsSet = false;
}
std::vector<CauseAction>& FreeStyleBuild::getActions()
{
    return m_Actions;
}
bool FreeStyleBuild::actionsIsSet() const
{
    return m_ActionsIsSet;
}
void FreeStyleBuild::unsetActions()
{
    m_ActionsIsSet = false;
}
bool FreeStyleBuild::isBuilding() const
{
    return m_Building;
}
void FreeStyleBuild::setBuilding(bool const value)
{
    m_Building = value;
    m_BuildingIsSet = true;
}
bool FreeStyleBuild::buildingIsSet() const
{
    return m_BuildingIsSet;
}
void FreeStyleBuild::unsetBuilding()
{
    m_BuildingIsSet = false;
}
std::string FreeStyleBuild::getDescription() const
{
    return m_Description;
}
void FreeStyleBuild::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool FreeStyleBuild::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void FreeStyleBuild::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::string FreeStyleBuild::getDisplayName() const
{
    return m_DisplayName;
}
void FreeStyleBuild::setDisplayName(std::string const& value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool FreeStyleBuild::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void FreeStyleBuild::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
int32_t FreeStyleBuild::getDuration() const
{
    return m_Duration;
}
void FreeStyleBuild::setDuration(int32_t const value)
{
    m_Duration = value;
    m_DurationIsSet = true;
}
bool FreeStyleBuild::durationIsSet() const
{
    return m_DurationIsSet;
}
void FreeStyleBuild::unsetDuration()
{
    m_DurationIsSet = false;
}
int32_t FreeStyleBuild::getEstimatedDuration() const
{
    return m_EstimatedDuration;
}
void FreeStyleBuild::setEstimatedDuration(int32_t const value)
{
    m_EstimatedDuration = value;
    m_EstimatedDurationIsSet = true;
}
bool FreeStyleBuild::estimatedDurationIsSet() const
{
    return m_EstimatedDurationIsSet;
}
void FreeStyleBuild::unsetEstimatedDuration()
{
    m_EstimatedDurationIsSet = false;
}
std::string FreeStyleBuild::getExecutor() const
{
    return m_Executor;
}
void FreeStyleBuild::setExecutor(std::string const& value)
{
    m_Executor = value;
    m_ExecutorIsSet = true;
}
bool FreeStyleBuild::executorIsSet() const
{
    return m_ExecutorIsSet;
}
void FreeStyleBuild::unsetExecutor()
{
    m_ExecutorIsSet = false;
}
std::string FreeStyleBuild::getFullDisplayName() const
{
    return m_FullDisplayName;
}
void FreeStyleBuild::setFullDisplayName(std::string const& value)
{
    m_FullDisplayName = value;
    m_FullDisplayNameIsSet = true;
}
bool FreeStyleBuild::fullDisplayNameIsSet() const
{
    return m_FullDisplayNameIsSet;
}
void FreeStyleBuild::unsetFullDisplayName()
{
    m_FullDisplayNameIsSet = false;
}
std::string FreeStyleBuild::getId() const
{
    return m_Id;
}
void FreeStyleBuild::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool FreeStyleBuild::idIsSet() const
{
    return m_IdIsSet;
}
void FreeStyleBuild::unsetId()
{
    m_IdIsSet = false;
}
bool FreeStyleBuild::isKeepLog() const
{
    return m_KeepLog;
}
void FreeStyleBuild::setKeepLog(bool const value)
{
    m_KeepLog = value;
    m_KeepLogIsSet = true;
}
bool FreeStyleBuild::keepLogIsSet() const
{
    return m_KeepLogIsSet;
}
void FreeStyleBuild::unsetKeepLog()
{
    m_KeepLogIsSet = false;
}
int32_t FreeStyleBuild::getQueueId() const
{
    return m_QueueId;
}
void FreeStyleBuild::setQueueId(int32_t const value)
{
    m_QueueId = value;
    m_QueueIdIsSet = true;
}
bool FreeStyleBuild::queueIdIsSet() const
{
    return m_QueueIdIsSet;
}
void FreeStyleBuild::unsetQueueId()
{
    m_QueueIdIsSet = false;
}
std::string FreeStyleBuild::getResult() const
{
    return m_Result;
}
void FreeStyleBuild::setResult(std::string const& value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool FreeStyleBuild::resultIsSet() const
{
    return m_ResultIsSet;
}
void FreeStyleBuild::unsetResult()
{
    m_ResultIsSet = false;
}
int32_t FreeStyleBuild::getTimestamp() const
{
    return m_Timestamp;
}
void FreeStyleBuild::setTimestamp(int32_t const value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool FreeStyleBuild::timestampIsSet() const
{
    return m_TimestampIsSet;
}
void FreeStyleBuild::unsetTimestamp()
{
    m_TimestampIsSet = false;
}
std::string FreeStyleBuild::getBuiltOn() const
{
    return m_BuiltOn;
}
void FreeStyleBuild::setBuiltOn(std::string const& value)
{
    m_BuiltOn = value;
    m_BuiltOnIsSet = true;
}
bool FreeStyleBuild::builtOnIsSet() const
{
    return m_BuiltOnIsSet;
}
void FreeStyleBuild::unsetBuiltOn()
{
    m_BuiltOnIsSet = false;
}
EmptyChangeLogSet FreeStyleBuild::getChangeSet() const
{
    return m_ChangeSet;
}
void FreeStyleBuild::setChangeSet(EmptyChangeLogSet const& value)
{
    m_ChangeSet = value;
    m_ChangeSetIsSet = true;
}
bool FreeStyleBuild::changeSetIsSet() const
{
    return m_ChangeSetIsSet;
}
void FreeStyleBuild::unsetChangeSet()
{
    m_ChangeSetIsSet = false;
}

}
}
}
}

