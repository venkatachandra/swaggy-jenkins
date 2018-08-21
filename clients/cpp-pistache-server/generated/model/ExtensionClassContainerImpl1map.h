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
 * ExtensionClassContainerImpl1map.h
 *
 * 
 */

#ifndef ExtensionClassContainerImpl1map_H_
#define ExtensionClassContainerImpl1map_H_


#include "ModelBase.h"

#include <string>
#include "ExtensionClassImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ExtensionClassContainerImpl1map
    : public ModelBase
{
public:
    ExtensionClassContainerImpl1map();
    virtual ~ExtensionClassContainerImpl1map();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ExtensionClassContainerImpl1map members

    /// <summary>
    /// 
    /// </summary>
    ExtensionClassImpl getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl() const;
    void setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(ExtensionClassImpl const& value);
    bool ioJenkinsBlueoceanServiceEmbeddedRestPipelineImplIsSet() const;
    void unsetIo_jenkins_blueocean_service_embedded_rest_PipelineImpl();
    /// <summary>
    /// 
    /// </summary>
    ExtensionClassImpl getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl() const;
    void setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(ExtensionClassImpl const& value);
    bool ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImplIsSet() const;
    void unsetIo_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();

protected:
    ExtensionClassImpl m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl;
    bool m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet;
    ExtensionClassImpl m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl;
    bool m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* ExtensionClassContainerImpl1map_H_ */