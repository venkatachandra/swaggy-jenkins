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



#include "HudsonMasterComputerexecutors.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

HudsonMasterComputerexecutors::HudsonMasterComputerexecutors()
{
    m_CurrentExecutableIsSet = false;
    m_Idle = false;
    m_IdleIsSet = false;
    m_LikelyStuck = false;
    m_LikelyStuckIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
    m_Progress = 0;
    m_ProgressIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

HudsonMasterComputerexecutors::~HudsonMasterComputerexecutors()
{
}

void HudsonMasterComputerexecutors::validate()
{
    // TODO: implement validation
}

web::json::value HudsonMasterComputerexecutors::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CurrentExecutableIsSet)
    {
        val[utility::conversions::to_string_t("currentExecutable")] = ModelBase::toJson(m_CurrentExecutable);
    }
    if(m_IdleIsSet)
    {
        val[utility::conversions::to_string_t("idle")] = ModelBase::toJson(m_Idle);
    }
    if(m_LikelyStuckIsSet)
    {
        val[utility::conversions::to_string_t("likelyStuck")] = ModelBase::toJson(m_LikelyStuck);
    }
    if(m_numberIsSet)
    {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(m_number);
    }
    if(m_ProgressIsSet)
    {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(m_Progress);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void HudsonMasterComputerexecutors::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("currentExecutable")))
    {
        if(!val[utility::conversions::to_string_t("currentExecutable")].is_null())
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromJson(val[utility::conversions::to_string_t("currentExecutable")]);
            setCurrentExecutable( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idle")))
    {
        setIdle(ModelBase::boolFromJson(val[utility::conversions::to_string_t("idle")]));
    }
    if(val.has_field(utility::conversions::to_string_t("likelyStuck")))
    {
        setLikelyStuck(ModelBase::boolFromJson(val[utility::conversions::to_string_t("likelyStuck")]));
    }
    if(val.has_field(utility::conversions::to_string_t("number")))
    {
        setNumber(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("number")]));
    }
    if(val.has_field(utility::conversions::to_string_t("progress")))
    {
        setProgress(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("progress")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void HudsonMasterComputerexecutors::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CurrentExecutableIsSet)
    {
        if (m_CurrentExecutable.get())
        {
            m_CurrentExecutable->toMultipart(multipart, utility::conversions::to_string_t("currentExecutable."));
        }
    }
    if(m_IdleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("idle"), m_Idle));
    }
    if(m_LikelyStuckIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("likelyStuck"), m_LikelyStuck));
    }
    if(m_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("number"), m_number));
    }
    if(m_ProgressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("progress"), m_Progress));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void HudsonMasterComputerexecutors::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("currentExecutable")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("currentExecutable")))
        {
            std::shared_ptr<FreeStyleBuild> newItem(new FreeStyleBuild());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("currentExecutable."));
            setCurrentExecutable( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("idle")))
    {
        setIdle(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("idle"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("likelyStuck")))
    {
        setLikelyStuck(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("likelyStuck"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("number")))
    {
        setNumber(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("number"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("progress")))
    {
        setProgress(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("progress"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

std::shared_ptr<FreeStyleBuild> HudsonMasterComputerexecutors::getCurrentExecutable() const
{
    return m_CurrentExecutable;
}


void HudsonMasterComputerexecutors::setCurrentExecutable(std::shared_ptr<FreeStyleBuild> value)
{
    m_CurrentExecutable = value;
    m_CurrentExecutableIsSet = true;
}
bool HudsonMasterComputerexecutors::currentExecutableIsSet() const
{
    return m_CurrentExecutableIsSet;
}

void HudsonMasterComputerexecutors::unsetCurrentExecutable()
{
    m_CurrentExecutableIsSet = false;
}

bool HudsonMasterComputerexecutors::isIdle() const
{
    return m_Idle;
}


void HudsonMasterComputerexecutors::setIdle(bool value)
{
    m_Idle = value;
    m_IdleIsSet = true;
}
bool HudsonMasterComputerexecutors::idleIsSet() const
{
    return m_IdleIsSet;
}

void HudsonMasterComputerexecutors::unsetIdle()
{
    m_IdleIsSet = false;
}

bool HudsonMasterComputerexecutors::isLikelyStuck() const
{
    return m_LikelyStuck;
}


void HudsonMasterComputerexecutors::setLikelyStuck(bool value)
{
    m_LikelyStuck = value;
    m_LikelyStuckIsSet = true;
}
bool HudsonMasterComputerexecutors::likelyStuckIsSet() const
{
    return m_LikelyStuckIsSet;
}

void HudsonMasterComputerexecutors::unsetLikelyStuck()
{
    m_LikelyStuckIsSet = false;
}

int32_t HudsonMasterComputerexecutors::getNumber() const
{
    return m_number;
}


void HudsonMasterComputerexecutors::setNumber(int32_t value)
{
    m_number = value;
    m_numberIsSet = true;
}
bool HudsonMasterComputerexecutors::numberIsSet() const
{
    return m_numberIsSet;
}

void HudsonMasterComputerexecutors::unsetnumber()
{
    m_numberIsSet = false;
}

int32_t HudsonMasterComputerexecutors::getProgress() const
{
    return m_Progress;
}


void HudsonMasterComputerexecutors::setProgress(int32_t value)
{
    m_Progress = value;
    m_ProgressIsSet = true;
}
bool HudsonMasterComputerexecutors::progressIsSet() const
{
    return m_ProgressIsSet;
}

void HudsonMasterComputerexecutors::unsetProgress()
{
    m_ProgressIsSet = false;
}

utility::string_t HudsonMasterComputerexecutors::getClass() const
{
    return m__class;
}


void HudsonMasterComputerexecutors::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool HudsonMasterComputerexecutors::_classIsSet() const
{
    return m__classIsSet;
}

void HudsonMasterComputerexecutors::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

