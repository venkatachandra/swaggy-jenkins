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

#ifndef OAI_OAIBlueOceanApiHandler_H
#define OAI_OAIBlueOceanApiHandler_H

#include <QObject>

#include "OAIBody.h"
#include "OAIBranchImpl.h"
#include "OAIFavoriteImpl.h"
#include "OAIGithubScm.h"
#include "OAIMultibranchPipeline.h"
#include "OAIOrganisation.h"
#include "OAIOrganisations.h"
#include "OAIPipeline.h"
#include "OAIPipelineActivities.h"
#include "OAIPipelineFolderImpl.h"
#include "OAIPipelineImpl.h"
#include "OAIPipelineQueue.h"
#include "OAIPipelineRun.h"
#include "OAIPipelineRunNode.h"
#include "OAIPipelineRunNodeSteps.h"
#include "OAIPipelineRunNodes.h"
#include "OAIPipelineRuns.h"
#include "OAIPipelineStepImpl.h"
#include "OAIPipelines.h"
#include "OAIQueueItemImpl.h"
#include "OAIScmOrganisations.h"
#include "OAIUser.h"
#include "OAIUserFavorites.h"
#include <QString>

namespace OpenAPI {

class OAIBlueOceanApiHandler : public QObject
{
    Q_OBJECT
    
public:
    OAIBlueOceanApiHandler();
    virtual ~OAIBlueOceanApiHandler();


public slots:
    virtual void deletePipelineQueueItem(QString organization, QString pipeline, QString queue);
    virtual void getAuthenticatedUser(QString organization);
    virtual void getClasses(QString _class);
    virtual void getJsonWebKey(qint32 key);
    virtual void getJsonWebToken(qint32 expiry_time_in_mins, qint32 max_expiry_time_in_mins);
    virtual void getOrganisation(QString organization);
    virtual void getOrganisations();
    virtual void getPipeline(QString organization, QString pipeline);
    virtual void getPipelineActivities(QString organization, QString pipeline);
    virtual void getPipelineBranch(QString organization, QString pipeline, QString branch);
    virtual void getPipelineBranchRun(QString organization, QString pipeline, QString branch, QString run);
    virtual void getPipelineBranches(QString organization, QString pipeline);
    virtual void getPipelineFolder(QString organization, QString folder);
    virtual void getPipelineFolderPipeline(QString organization, QString pipeline, QString folder);
    virtual void getPipelineQueue(QString organization, QString pipeline);
    virtual void getPipelineRun(QString organization, QString pipeline, QString run);
    virtual void getPipelineRunLog(QString organization, QString pipeline, QString run, qint32 start, bool download);
    virtual void getPipelineRunNode(QString organization, QString pipeline, QString run, QString node);
    virtual void getPipelineRunNodeStep(QString organization, QString pipeline, QString run, QString node, QString step);
    virtual void getPipelineRunNodeStepLog(QString organization, QString pipeline, QString run, QString node, QString step);
    virtual void getPipelineRunNodeSteps(QString organization, QString pipeline, QString run, QString node);
    virtual void getPipelineRunNodes(QString organization, QString pipeline, QString run);
    virtual void getPipelineRuns(QString organization, QString pipeline);
    virtual void getPipelines(QString organization);
    virtual void getSCM(QString organization, QString scm);
    virtual void getSCMOrganisationRepositories(QString organization, QString scm, QString scm_organisation, QString credential_id, qint32 page_size, qint32 page_number);
    virtual void getSCMOrganisationRepository(QString organization, QString scm, QString scm_organisation, QString repository, QString credential_id);
    virtual void getSCMOrganisations(QString organization, QString scm, QString credential_id);
    virtual void getUser(QString organization, QString user);
    virtual void getUserFavorites(QString user);
    virtual void getUsers(QString organization);
    virtual void postPipelineRun(QString organization, QString pipeline, QString run);
    virtual void postPipelineRuns(QString organization, QString pipeline);
    virtual void putPipelineFavorite(QString organization, QString pipeline, OAIBody oai_body);
    virtual void putPipelineRun(QString organization, QString pipeline, QString run, QString blocking, qint32 time_out_in_secs);
    virtual void search(QString q);
    virtual void searchClasses(QString q);
    

};

}

#endif // OAI_OAIBlueOceanApiHandler_H
