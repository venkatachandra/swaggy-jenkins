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
 * HudsonmodelComputerSet.h
 *
 * 
 */

#ifndef HudsonmodelComputerSet_H_
#define HudsonmodelComputerSet_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "HudsonmodelHudsonMasterComputer.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonmodelComputerSet
    : public ModelBase
{
public:
    HudsonmodelComputerSet();
    virtual ~HudsonmodelComputerSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// HudsonmodelComputerSet members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    void setClass(utility::string_t value);
    bool _classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    int32_t getBusyExecutors() const;
    void setBusyExecutors(int32_t value);
    bool busyExecutorsIsSet() const;
    void unsetBusyExecutors();
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<HudsonmodelHudsonMasterComputer>>& getComputer();
    bool computerIsSet() const;
    void unsetComputer();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisplayName() const;
    void setDisplayName(utility::string_t value);
    bool displayNameIsSet() const;
    void unsetDisplayName();
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalExecutors() const;
    void setTotalExecutors(int32_t value);
    bool totalExecutorsIsSet() const;
    void unsetTotalExecutors();

protected:
    utility::string_t m__class;
    bool m__classIsSet;
int32_t m_BusyExecutors;
    bool m_BusyExecutorsIsSet;
std::vector<std::shared_ptr<HudsonmodelHudsonMasterComputer>> m_Computer;
    bool m_ComputerIsSet;
utility::string_t m_DisplayName;
    bool m_DisplayNameIsSet;
int32_t m_TotalExecutors;
    bool m_TotalExecutorsIsSet;
};

}
}
}
}

#endif /* HudsonmodelComputerSet_H_ */