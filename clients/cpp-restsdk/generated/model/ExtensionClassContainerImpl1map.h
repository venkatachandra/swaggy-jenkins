/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ExtensionClassContainerImpl1map.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ExtensionClassContainerImpl1map_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ExtensionClassContainerImpl1map_H_


#include "../ModelBase.h"

#include "ExtensionClassImpl.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
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

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExtensionClassContainerImpl1map members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExtensionClassImpl> getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl() const;
    bool ioJenkinsBlueoceanServiceEmbeddedRestPipelineImplIsSet() const;
    void unsetIo_jenkins_blueocean_service_embedded_rest_PipelineImpl();
    void setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(std::shared_ptr<ExtensionClassImpl> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExtensionClassImpl> getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl() const;
    bool ioJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImplIsSet() const;
    void unsetIo_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl();
    void setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(std::shared_ptr<ExtensionClassImpl> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool _classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);

protected:
    std::shared_ptr<ExtensionClassImpl> m_Io_jenkins_blueocean_service_embedded_rest_PipelineImpl;
    bool m_Io_jenkins_blueocean_service_embedded_rest_PipelineImplIsSet;
    std::shared_ptr<ExtensionClassImpl> m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImpl;
    bool m_Io_jenkins_blueocean_service_embedded_rest_MultiBranchPipelineImplIsSet;
    utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ExtensionClassContainerImpl1map_H_ */