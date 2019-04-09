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
 * OAIHudsonMasterComputer.h
 *
 * 
 */

#ifndef OAIHudsonMasterComputer_H_
#define OAIHudsonMasterComputer_H_

#include <QJsonObject>


#include "OAIOAIHudsonMasterComputerexecutors.h"
#include "OAIOAIHudsonMasterComputermonitorData.h"
#include "OAIOAILabel1.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIHudsonMasterComputer: public OAIObject {
public:
    OAIHudsonMasterComputer();
    OAIHudsonMasterComputer(QString json);
    ~OAIHudsonMasterComputer();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIHudsonMasterComputer* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    QList<OAIHudsonMasterComputerexecutors*>* getExecutors();
    void setExecutors(QList<OAIHudsonMasterComputerexecutors*>* executors);

    QString* getIcon();
    void setIcon(QString* icon);

    QString* getIconClassName();
    void setIconClassName(QString* icon_class_name);

    bool isIdle();
    void setIdle(bool idle);

    bool isJnlpAgent();
    void setJnlpAgent(bool jnlp_agent);

    bool isLaunchSupported();
    void setLaunchSupported(bool launch_supported);

    OAILabel1* getLoadStatistics();
    void setLoadStatistics(OAILabel1* load_statistics);

    bool isManualLaunchAllowed();
    void setManualLaunchAllowed(bool manual_launch_allowed);

    OAIHudsonMasterComputermonitorData* getMonitorData();
    void setMonitorData(OAIHudsonMasterComputermonitorData* monitor_data);

    qint32 getNumExecutors();
    void setNumExecutors(qint32 num_executors);

    bool isOffline();
    void setOffline(bool offline);

    QString* getOfflineCause();
    void setOfflineCause(QString* offline_cause);

    QString* getOfflineCauseReason();
    void setOfflineCauseReason(QString* offline_cause_reason);

    bool isTemporarilyOffline();
    void setTemporarilyOffline(bool temporarily_offline);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    QString* display_name;
    bool m_display_name_isSet;

    QList<OAIHudsonMasterComputerexecutors*>* executors;
    bool m_executors_isSet;

    QString* icon;
    bool m_icon_isSet;

    QString* icon_class_name;
    bool m_icon_class_name_isSet;

    bool idle;
    bool m_idle_isSet;

    bool jnlp_agent;
    bool m_jnlp_agent_isSet;

    bool launch_supported;
    bool m_launch_supported_isSet;

    OAILabel1* load_statistics;
    bool m_load_statistics_isSet;

    bool manual_launch_allowed;
    bool m_manual_launch_allowed_isSet;

    OAIHudsonMasterComputermonitorData* monitor_data;
    bool m_monitor_data_isSet;

    qint32 num_executors;
    bool m_num_executors_isSet;

    bool offline;
    bool m_offline_isSet;

    QString* offline_cause;
    bool m_offline_cause_isSet;

    QString* offline_cause_reason;
    bool m_offline_cause_reason_isSet;

    bool temporarily_offline;
    bool m_temporarily_offline_isSet;

};

}

#endif /* OAIHudsonMasterComputer_H_ */
