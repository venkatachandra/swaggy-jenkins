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
/*
 * AllView.h
 *
 * 
 */

#ifndef AllView_H_
#define AllView_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  AllView
    : public ModelBase
{
public:
    AllView();
    virtual ~AllView();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// AllView members

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
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string const& value);
    bool urlIsSet() const;
    void unsetUrl();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Url;
    bool m_UrlIsSet;
};

}
}
}
}

#endif /* AllView_H_ */
