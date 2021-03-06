/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ComputerSet.h
 *
 * 
 */

#ifndef ComputerSet_H_
#define ComputerSet_H_


#include "ModelBase.h"

#include <string>
#include "HudsonMasterComputer.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComputerSet
    : public ModelBase
{
public:
    ComputerSet();
    virtual ~ComputerSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ComputerSet members

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
    int32_t getBusyExecutors() const;
    void setBusyExecutors(int32_t const value);
    bool busyExecutorsIsSet() const;
    void unsetBusyExecutors();
    /// <summary>
    /// 
    /// </summary>
    std::vector<HudsonMasterComputer>& getComputer();
    bool computerIsSet() const;
    void unsetComputer();
    /// <summary>
    /// 
    /// </summary>
    std::string getDisplayName() const;
    void setDisplayName(std::string const& value);
    bool displayNameIsSet() const;
    void unsetDisplayName();
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalExecutors() const;
    void setTotalExecutors(int32_t const value);
    bool totalExecutorsIsSet() const;
    void unsetTotalExecutors();

protected:
    std::string m__class;
    bool m__classIsSet;
    int32_t m_BusyExecutors;
    bool m_BusyExecutorsIsSet;
    std::vector<HudsonMasterComputer> m_Computer;
    bool m_ComputerIsSet;
    std::string m_DisplayName;
    bool m_DisplayNameIsSet;
    int32_t m_TotalExecutors;
    bool m_TotalExecutorsIsSet;
};

}
}
}
}

#endif /* ComputerSet_H_ */
