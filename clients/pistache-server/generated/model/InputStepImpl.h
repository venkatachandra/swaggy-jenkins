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
/*
 * InputStepImpl.h
 *
 * 
 */

#ifndef InputStepImpl_H_
#define InputStepImpl_H_


#include "ModelBase.h"

#include "InputStepImpllinks.h"
#include <string>
#include "StringParameterDefinition.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  InputStepImpl
    : public ModelBase
{
public:
    InputStepImpl();
    virtual ~InputStepImpl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// InputStepImpl members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<InputStepImpllinks> getLinks() const;
    void setLinks(std::shared_ptr<InputStepImpllinks> value);
    bool linksIsSet() const;
    void unset_links();
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getMessage() const;
    void setMessage(std::string value);
    bool messageIsSet() const;
    void unsetMessage();
    /// <summary>
    /// 
    /// </summary>
    std::string getOk() const;
    void setOk(std::string value);
    bool okIsSet() const;
    void unsetOk();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<StringParameterDefinition>>& getParameters();
    bool parametersIsSet() const;
    void unsetParameters();
    /// <summary>
    /// 
    /// </summary>
    std::string getSubmitter() const;
    void setSubmitter(std::string value);
    bool submitterIsSet() const;
    void unsetSubmitter();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::shared_ptr<InputStepImpllinks> m__links;
    bool m__linksIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_Message;
    bool m_MessageIsSet;
    std::string m_Ok;
    bool m_OkIsSet;
    std::vector<std::shared_ptr<StringParameterDefinition>> m_Parameters;
    bool m_ParametersIsSet;
    std::string m_Submitter;
    bool m_SubmitterIsSet;
};

}
}
}
}

#endif /* InputStepImpl_H_ */