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



#include "PipelineRunImpllinks.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelineRunImpllinks::PipelineRunImpllinks()
{
    m_NodesIsSet = false;
    m_LogIsSet = false;
    m_SelfIsSet = false;
    m_ActionsIsSet = false;
    m_StepsIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

PipelineRunImpllinks::~PipelineRunImpllinks()
{
}

void PipelineRunImpllinks::validate()
{
    // TODO: implement validation
}

web::json::value PipelineRunImpllinks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NodesIsSet)
    {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(m_Nodes);
    }
    if(m_LogIsSet)
    {
        val[utility::conversions::to_string_t("log")] = ModelBase::toJson(m_Log);
    }
    if(m_SelfIsSet)
    {
        val[utility::conversions::to_string_t("self")] = ModelBase::toJson(m_Self);
    }
    if(m_ActionsIsSet)
    {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(m_Actions);
    }
    if(m_StepsIsSet)
    {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(m_Steps);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void PipelineRunImpllinks::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("nodes")))
    {
        if(!val[utility::conversions::to_string_t("nodes")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("nodes")]);
            setNodes( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log")))
    {
        if(!val[utility::conversions::to_string_t("log")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("log")]);
            setLog( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("self")))
    {
        if(!val[utility::conversions::to_string_t("self")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("self")]);
            setSelf( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions")))
    {
        if(!val[utility::conversions::to_string_t("actions")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("actions")]);
            setActions( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps")))
    {
        if(!val[utility::conversions::to_string_t("steps")].is_null())
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromJson(val[utility::conversions::to_string_t("steps")]);
            setSteps( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void PipelineRunImpllinks::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_NodesIsSet)
    {
        if (m_Nodes.get())
        {
            m_Nodes->toMultipart(multipart, utility::conversions::to_string_t("nodes."));
        }
    }
    if(m_LogIsSet)
    {
        if (m_Log.get())
        {
            m_Log->toMultipart(multipart, utility::conversions::to_string_t("log."));
        }
    }
    if(m_SelfIsSet)
    {
        if (m_Self.get())
        {
            m_Self->toMultipart(multipart, utility::conversions::to_string_t("self."));
        }
    }
    if(m_ActionsIsSet)
    {
        if (m_Actions.get())
        {
            m_Actions->toMultipart(multipart, utility::conversions::to_string_t("actions."));
        }
    }
    if(m_StepsIsSet)
    {
        if (m_Steps.get())
        {
            m_Steps->toMultipart(multipart, utility::conversions::to_string_t("steps."));
        }
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void PipelineRunImpllinks::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("nodes")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("nodes")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("nodes."));
            setNodes( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("log")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("log")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("log."));
            setLog( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("self")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("self")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("self."));
            setSelf( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("actions")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("actions")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("actions."));
            setActions( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("steps")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("steps")))
        {
            std::shared_ptr<Link> newItem(new Link());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("steps."));
            setSteps( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

std::shared_ptr<Link> PipelineRunImpllinks::getNodes() const
{
    return m_Nodes;
}


void PipelineRunImpllinks::setNodes(std::shared_ptr<Link> value)
{
    m_Nodes = value;
    m_NodesIsSet = true;
}
bool PipelineRunImpllinks::nodesIsSet() const
{
    return m_NodesIsSet;
}

void PipelineRunImpllinks::unsetNodes()
{
    m_NodesIsSet = false;
}

std::shared_ptr<Link> PipelineRunImpllinks::getLog() const
{
    return m_Log;
}


void PipelineRunImpllinks::setLog(std::shared_ptr<Link> value)
{
    m_Log = value;
    m_LogIsSet = true;
}
bool PipelineRunImpllinks::logIsSet() const
{
    return m_LogIsSet;
}

void PipelineRunImpllinks::unsetLog()
{
    m_LogIsSet = false;
}

std::shared_ptr<Link> PipelineRunImpllinks::getSelf() const
{
    return m_Self;
}


void PipelineRunImpllinks::setSelf(std::shared_ptr<Link> value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool PipelineRunImpllinks::selfIsSet() const
{
    return m_SelfIsSet;
}

void PipelineRunImpllinks::unsetSelf()
{
    m_SelfIsSet = false;
}

std::shared_ptr<Link> PipelineRunImpllinks::getActions() const
{
    return m_Actions;
}


void PipelineRunImpllinks::setActions(std::shared_ptr<Link> value)
{
    m_Actions = value;
    m_ActionsIsSet = true;
}
bool PipelineRunImpllinks::actionsIsSet() const
{
    return m_ActionsIsSet;
}

void PipelineRunImpllinks::unsetActions()
{
    m_ActionsIsSet = false;
}

std::shared_ptr<Link> PipelineRunImpllinks::getSteps() const
{
    return m_Steps;
}


void PipelineRunImpllinks::setSteps(std::shared_ptr<Link> value)
{
    m_Steps = value;
    m_StepsIsSet = true;
}
bool PipelineRunImpllinks::stepsIsSet() const
{
    return m_StepsIsSet;
}

void PipelineRunImpllinks::unsetSteps()
{
    m_StepsIsSet = false;
}

utility::string_t PipelineRunImpllinks::getClass() const
{
    return m__class;
}


void PipelineRunImpllinks::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineRunImpllinks::_classIsSet() const
{
    return m__classIsSet;
}

void PipelineRunImpllinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

