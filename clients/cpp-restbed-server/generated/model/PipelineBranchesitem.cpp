/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "PipelineBranchesitem.h"

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

PipelineBranchesitem::PipelineBranchesitem()
{
    m_DisplayName = "";
    m_EstimatedDurationInMillis = 0;
    m_Name = "";
    m_WeatherScore = 0;
    m_Organization = "";
    m_TotalNumberOfPullRequests = 0;
    m__class = "";
    
}

PipelineBranchesitem::~PipelineBranchesitem()
{
}

std::string PipelineBranchesitem::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("DisplayName", m_DisplayName);
	pt.put("EstimatedDurationInMillis", m_EstimatedDurationInMillis);
	pt.put("Name", m_Name);
	pt.put("WeatherScore", m_WeatherScore);
	pt.put("Organization", m_Organization);
	pt.put("TotalNumberOfPullRequests", m_TotalNumberOfPullRequests);
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void PipelineBranchesitem::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_DisplayName = pt.get("DisplayName", "");
	m_EstimatedDurationInMillis = pt.get("EstimatedDurationInMillis", 0);
	m_Name = pt.get("Name", "");
	m_WeatherScore = pt.get("WeatherScore", 0);
	m_Organization = pt.get("Organization", "");
	m_TotalNumberOfPullRequests = pt.get("TotalNumberOfPullRequests", 0);
	m__class = pt.get("_class", "");
}

std::string PipelineBranchesitem::getDisplayName() const
{
    return m_DisplayName;
}
void PipelineBranchesitem::setDisplayName(std::string value)
{
    m_DisplayName = value;
}
int32_t PipelineBranchesitem::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void PipelineBranchesitem::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
}
std::string PipelineBranchesitem::getName() const
{
    return m_Name;
}
void PipelineBranchesitem::setName(std::string value)
{
    m_Name = value;
}
int32_t PipelineBranchesitem::getWeatherScore() const
{
    return m_WeatherScore;
}
void PipelineBranchesitem::setWeatherScore(int32_t value)
{
    m_WeatherScore = value;
}
std::shared_ptr<PipelineBranchesitemlatestRun> PipelineBranchesitem::getLatestRun() const
{
    return m_LatestRun;
}
void PipelineBranchesitem::setLatestRun(std::shared_ptr<PipelineBranchesitemlatestRun> value)
{
    m_LatestRun = value;
}
std::string PipelineBranchesitem::getOrganization() const
{
    return m_Organization;
}
void PipelineBranchesitem::setOrganization(std::string value)
{
    m_Organization = value;
}
std::shared_ptr<PipelineBranchesitempullRequest> PipelineBranchesitem::getPullRequest() const
{
    return m_PullRequest;
}
void PipelineBranchesitem::setPullRequest(std::shared_ptr<PipelineBranchesitempullRequest> value)
{
    m_PullRequest = value;
}
int32_t PipelineBranchesitem::getTotalNumberOfPullRequests() const
{
    return m_TotalNumberOfPullRequests;
}
void PipelineBranchesitem::setTotalNumberOfPullRequests(int32_t value)
{
    m_TotalNumberOfPullRequests = value;
}
std::string PipelineBranchesitem::getClass() const
{
    return m__class;
}
void PipelineBranchesitem::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}

