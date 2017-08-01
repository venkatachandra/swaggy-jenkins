/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "Hudsonnode_monitorsResponseTimeMonitorData.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Hudsonnode_monitorsResponseTimeMonitorData::Hudsonnode_monitorsResponseTimeMonitorData()
{
    m__class = U("");
    m__classIsSet = false;
    m_Timestamp = 0;
    m_TimestampIsSet = false;
    m_Average = 0;
    m_AverageIsSet = false;
    
}

Hudsonnode_monitorsResponseTimeMonitorData::~Hudsonnode_monitorsResponseTimeMonitorData()
{
}

void Hudsonnode_monitorsResponseTimeMonitorData::validate()
{
    // TODO: implement validation
}

web::json::value Hudsonnode_monitorsResponseTimeMonitorData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m_TimestampIsSet)
    {
        val[U("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_AverageIsSet)
    {
        val[U("average")] = ModelBase::toJson(m_Average);
    }
    

    return val;
}

void Hudsonnode_monitorsResponseTimeMonitorData::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
        
    }
    if(val.has_field(U("timestamp")))
    {
        setTimestamp(ModelBase::int32_tFromJson(val[U("timestamp")]));
    }
    if(val.has_field(U("average")))
    {
        setAverage(ModelBase::int32_tFromJson(val[U("average")]));
    }
    
}

void Hudsonnode_monitorsResponseTimeMonitorData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("timestamp"), m_Timestamp));
    }
    if(m_AverageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("average"), m_Average));
    }
    
}

void Hudsonnode_monitorsResponseTimeMonitorData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
        
    }
    if(multipart->hasContent(U("timestamp")))
    {
        setTimestamp(ModelBase::int32_tFromHttpContent(multipart->getContent(U("timestamp"))));
    }
    if(multipart->hasContent(U("average")))
    {
        setAverage(ModelBase::int32_tFromHttpContent(multipart->getContent(U("average"))));
    }
    
}


utility::string_t Hudsonnode_monitorsResponseTimeMonitorData::getClass() const
{
    return m__class;
}
void Hudsonnode_monitorsResponseTimeMonitorData::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool Hudsonnode_monitorsResponseTimeMonitorData::_classIsSet() const
{
    return m__classIsSet;
}
void Hudsonnode_monitorsResponseTimeMonitorData::unset_class()
{
    m__classIsSet = false;
}
int32_t Hudsonnode_monitorsResponseTimeMonitorData::getTimestamp() const
{
    return m_Timestamp;
}
void Hudsonnode_monitorsResponseTimeMonitorData::setTimestamp(int32_t value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool Hudsonnode_monitorsResponseTimeMonitorData::timestampIsSet() const
{
    return m_TimestampIsSet;
}
void Hudsonnode_monitorsResponseTimeMonitorData::unsetTimestamp()
{
    m_TimestampIsSet = false;
}
int32_t Hudsonnode_monitorsResponseTimeMonitorData::getAverage() const
{
    return m_Average;
}
void Hudsonnode_monitorsResponseTimeMonitorData::setAverage(int32_t value)
{
    m_Average = value;
    m_AverageIsSet = true;
}
bool Hudsonnode_monitorsResponseTimeMonitorData::averageIsSet() const
{
    return m_AverageIsSet;
}
void Hudsonnode_monitorsResponseTimeMonitorData::unsetAverage()
{
    m_AverageIsSet = false;
}

}
}
}
}
