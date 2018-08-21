/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.0.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * User.h
 *
 * 
 */

#ifndef User_H_
#define User_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  User
    : public ModelBase
{
public:
    User();
    virtual ~User();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// User members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    std::string getFullName() const;
    void setFullName(std::string const& value);
    bool fullNameIsSet() const;
    void unsetFullName();
    /// <summary>
    /// 
    /// </summary>
    std::string getEmail() const;
    void setEmail(std::string const& value);
    bool emailIsSet() const;
    void unsetEmail();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::string m_Id;
    bool m_IdIsSet;
    std::string m_FullName;
    bool m_FullNameIsSet;
    std::string m_Email;
    bool m_EmailIsSet;
    std::string m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* User_H_ */