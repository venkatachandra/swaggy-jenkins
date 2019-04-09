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



#include "PipelineRunImpl.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

PipelineRunImpl::PipelineRunImpl()
{
    m__class = "";
    m_DurationInMillis = 0;
    m_EnQueueTime = "";
    m_EndTime = "";
    m_EstimatedDurationInMillis = 0;
    m_Id = "";
    m_Organization = "";
    m_Pipeline = "";
    m_Result = "";
    m_RunSummary = "";
    m_StartTime = "";
    m_State = "";
    m_Type = "";
    m_CommitId = "";
    
}

PipelineRunImpl::~PipelineRunImpl()
{
}

std::string PipelineRunImpl::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("DurationInMillis", m_DurationInMillis);
	pt.put("EnQueueTime", m_EnQueueTime);
	pt.put("EndTime", m_EndTime);
	pt.put("EstimatedDurationInMillis", m_EstimatedDurationInMillis);
	pt.put("Id", m_Id);
	pt.put("Organization", m_Organization);
	pt.put("Pipeline", m_Pipeline);
	pt.put("Result", m_Result);
	pt.put("RunSummary", m_RunSummary);
	pt.put("StartTime", m_StartTime);
	pt.put("State", m_State);
	pt.put("Type", m_Type);
	pt.put("CommitId", m_CommitId);
	write_json(ss, pt, false);
	return ss.str();
}

void PipelineRunImpl::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_DurationInMillis = pt.get("DurationInMillis", 0);
	m_EnQueueTime = pt.get("EnQueueTime", "");
	m_EndTime = pt.get("EndTime", "");
	m_EstimatedDurationInMillis = pt.get("EstimatedDurationInMillis", 0);
	m_Id = pt.get("Id", "");
	m_Organization = pt.get("Organization", "");
	m_Pipeline = pt.get("Pipeline", "");
	m_Result = pt.get("Result", "");
	m_RunSummary = pt.get("RunSummary", "");
	m_StartTime = pt.get("StartTime", "");
	m_State = pt.get("State", "");
	m_Type = pt.get("Type", "");
	m_CommitId = pt.get("CommitId", "");
}

std::string PipelineRunImpl::getClass() const
{
    return m__class;
}
void PipelineRunImpl::setClass(std::string value)
{
    m__class = value;
}
std::shared_ptr<PipelineRunImpllinks> PipelineRunImpl::getLinks() const
{
    return m__links;
}
void PipelineRunImpl::setLinks(std::shared_ptr<PipelineRunImpllinks> value)
{
    m__links = value;
}
int32_t PipelineRunImpl::getDurationInMillis() const
{
    return m_DurationInMillis;
}
void PipelineRunImpl::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
}
std::string PipelineRunImpl::getEnQueueTime() const
{
    return m_EnQueueTime;
}
void PipelineRunImpl::setEnQueueTime(std::string value)
{
    m_EnQueueTime = value;
}
std::string PipelineRunImpl::getEndTime() const
{
    return m_EndTime;
}
void PipelineRunImpl::setEndTime(std::string value)
{
    m_EndTime = value;
}
int32_t PipelineRunImpl::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void PipelineRunImpl::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
}
std::string PipelineRunImpl::getId() const
{
    return m_Id;
}
void PipelineRunImpl::setId(std::string value)
{
    m_Id = value;
}
std::string PipelineRunImpl::getOrganization() const
{
    return m_Organization;
}
void PipelineRunImpl::setOrganization(std::string value)
{
    m_Organization = value;
}
std::string PipelineRunImpl::getPipeline() const
{
    return m_Pipeline;
}
void PipelineRunImpl::setPipeline(std::string value)
{
    m_Pipeline = value;
}
std::string PipelineRunImpl::getResult() const
{
    return m_Result;
}
void PipelineRunImpl::setResult(std::string value)
{
    m_Result = value;
}
std::string PipelineRunImpl::getRunSummary() const
{
    return m_RunSummary;
}
void PipelineRunImpl::setRunSummary(std::string value)
{
    m_RunSummary = value;
}
std::string PipelineRunImpl::getStartTime() const
{
    return m_StartTime;
}
void PipelineRunImpl::setStartTime(std::string value)
{
    m_StartTime = value;
}
std::string PipelineRunImpl::getState() const
{
    return m_State;
}
void PipelineRunImpl::setState(std::string value)
{
    m_State = value;
}
std::string PipelineRunImpl::getType() const
{
    return m_Type;
}
void PipelineRunImpl::setType(std::string value)
{
    m_Type = value;
}
std::string PipelineRunImpl::getCommitId() const
{
    return m_CommitId;
}
void PipelineRunImpl::setCommitId(std::string value)
{
    m_CommitId = value;
}

}
}
}
}

