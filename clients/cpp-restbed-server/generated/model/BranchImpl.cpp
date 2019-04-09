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



#include "BranchImpl.h"

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

BranchImpl::BranchImpl()
{
    m__class = "";
    m_DisplayName = "";
    m_EstimatedDurationInMillis = 0;
    m_FullDisplayName = "";
    m_FullName = "";
    m_Name = "";
    m_Organization = "";
    m_WeatherScore = 0;
    m_PullRequest = "";
    
}

BranchImpl::~BranchImpl()
{
}

std::string BranchImpl::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	pt.put("DisplayName", m_DisplayName);
	pt.put("EstimatedDurationInMillis", m_EstimatedDurationInMillis);
	pt.put("FullDisplayName", m_FullDisplayName);
	pt.put("FullName", m_FullName);
	pt.put("Name", m_Name);
	pt.put("Organization", m_Organization);
	pt.put("WeatherScore", m_WeatherScore);
	pt.put("PullRequest", m_PullRequest);
	write_json(ss, pt, false);
	return ss.str();
}

void BranchImpl::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
	m_DisplayName = pt.get("DisplayName", "");
	m_EstimatedDurationInMillis = pt.get("EstimatedDurationInMillis", 0);
	m_FullDisplayName = pt.get("FullDisplayName", "");
	m_FullName = pt.get("FullName", "");
	m_Name = pt.get("Name", "");
	m_Organization = pt.get("Organization", "");
	m_WeatherScore = pt.get("WeatherScore", 0);
	m_PullRequest = pt.get("PullRequest", "");
}

std::string BranchImpl::getClass() const
{
    return m__class;
}
void BranchImpl::setClass(std::string value)
{
    m__class = value;
}
std::string BranchImpl::getDisplayName() const
{
    return m_DisplayName;
}
void BranchImpl::setDisplayName(std::string value)
{
    m_DisplayName = value;
}
int32_t BranchImpl::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void BranchImpl::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
}
std::string BranchImpl::getFullDisplayName() const
{
    return m_FullDisplayName;
}
void BranchImpl::setFullDisplayName(std::string value)
{
    m_FullDisplayName = value;
}
std::string BranchImpl::getFullName() const
{
    return m_FullName;
}
void BranchImpl::setFullName(std::string value)
{
    m_FullName = value;
}
std::string BranchImpl::getName() const
{
    return m_Name;
}
void BranchImpl::setName(std::string value)
{
    m_Name = value;
}
std::string BranchImpl::getOrganization() const
{
    return m_Organization;
}
void BranchImpl::setOrganization(std::string value)
{
    m_Organization = value;
}
std::vector<std::shared_ptr<StringParameterDefinition>> BranchImpl::getParameters() const
{
    return m_Parameters;
}
void BranchImpl::setParameters(std::vector<std::shared_ptr<StringParameterDefinition>> value)
{
    m_Parameters = value;
}
std::shared_ptr<BranchImplpermissions> BranchImpl::getPermissions() const
{
    return m_Permissions;
}
void BranchImpl::setPermissions(std::shared_ptr<BranchImplpermissions> value)
{
    m_Permissions = value;
}
int32_t BranchImpl::getWeatherScore() const
{
    return m_WeatherScore;
}
void BranchImpl::setWeatherScore(int32_t value)
{
    m_WeatherScore = value;
}
std::string BranchImpl::getPullRequest() const
{
    return m_PullRequest;
}
void BranchImpl::setPullRequest(std::string value)
{
    m_PullRequest = value;
}
std::shared_ptr<BranchImpllinks> BranchImpl::getLinks() const
{
    return m__links;
}
void BranchImpl::setLinks(std::shared_ptr<BranchImpllinks> value)
{
    m__links = value;
}
std::shared_ptr<PipelineRunImpl> BranchImpl::getLatestRun() const
{
    return m_LatestRun;
}
void BranchImpl::setLatestRun(std::shared_ptr<PipelineRunImpl> value)
{
    m_LatestRun = value;
}

}
}
}
}

