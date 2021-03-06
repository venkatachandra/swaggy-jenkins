/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Hudson.h
 *
 * 
 */

#ifndef Hudson_H_
#define Hudson_H_



#include "AllView.h"
#include "UnlabeledLoadStatistics.h"
#include <string>
#include "FreeStyleProject.h"
#include <vector>
#include "HudsonassignedLabels.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Hudson
{
public:
    Hudson();
    virtual ~Hudson();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// Hudson members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<HudsonassignedLabels>> getAssignedLabels() const;
    void setAssignedLabels(std::vector<std::shared_ptr<HudsonassignedLabels>> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getMode() const;
    void setMode(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getNodeDescription() const;
    void setNodeDescription(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getNodeName() const;
    void setNodeName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumExecutors() const;
    void setNumExecutors(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<FreeStyleProject>> getJobs() const;
    void setJobs(std::vector<std::shared_ptr<FreeStyleProject>> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<AllView> getPrimaryView() const;
    void setPrimaryView(std::shared_ptr<AllView> value);
    /// <summary>
    /// 
    /// </summary>
    bool isQuietingDown() const;
    void setQuietingDown(bool value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getSlaveAgentPort() const;
    void setSlaveAgentPort(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UnlabeledLoadStatistics> getUnlabeledLoad() const;
    void setUnlabeledLoad(std::shared_ptr<UnlabeledLoadStatistics> value);
    /// <summary>
    /// 
    /// </summary>
    bool isUseCrumbs() const;
    void setUseCrumbs(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isUseSecurity() const;
    void setUseSecurity(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<AllView>> getViews() const;
    void setViews(std::vector<std::shared_ptr<AllView>> value);

protected:
    std::string m__class;
    std::vector<std::shared_ptr<HudsonassignedLabels>> m_AssignedLabels;
    std::string m_Mode;
    std::string m_NodeDescription;
    std::string m_NodeName;
    int32_t m_NumExecutors;
    std::string m_Description;
    std::vector<std::shared_ptr<FreeStyleProject>> m_Jobs;
    std::shared_ptr<AllView> m_PrimaryView;
    bool m_QuietingDown;
    int32_t m_SlaveAgentPort;
    std::shared_ptr<UnlabeledLoadStatistics> m_UnlabeledLoad;
    bool m_UseCrumbs;
    bool m_UseSecurity;
    std::vector<std::shared_ptr<AllView>> m_Views;
};

}
}
}
}

#endif /* Hudson_H_ */
