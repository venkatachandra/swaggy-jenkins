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
 * Organisations.h
 *
 * 
 */

#ifndef Organisations_H_
#define Organisations_H_


#include "ModelBase.h"

#include "Organisation.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Organisations
    : public ModelBase
{
public:
    Organisations();
    virtual ~Organisations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Organisations members


protected:
};

}
}
}
}

#endif /* Organisations_H_ */