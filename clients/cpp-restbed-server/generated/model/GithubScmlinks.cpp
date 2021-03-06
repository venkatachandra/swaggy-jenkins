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



#include "GithubScmlinks.h"

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

GithubScmlinks::GithubScmlinks()
{
    m__class = "";
    
}

GithubScmlinks::~GithubScmlinks()
{
}

std::string GithubScmlinks::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void GithubScmlinks::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m__class = pt.get("_class", "");
}

std::shared_ptr<Link> GithubScmlinks::getSelf() const
{
    return m_Self;
}
void GithubScmlinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
}
std::string GithubScmlinks::getClass() const
{
    return m__class;
}
void GithubScmlinks::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}

