QT += network

HEADERS += \
# Models
    $${PWD}/OAIAllView.h \
    $${PWD}/OAIBody.h \
    $${PWD}/OAIBranchImpl.h \
    $${PWD}/OAIBranchImpllinks.h \
    $${PWD}/OAIBranchImplpermissions.h \
    $${PWD}/OAICauseAction.h \
    $${PWD}/OAICauseUserIdCause.h \
    $${PWD}/OAIClassesByClass.h \
    $${PWD}/OAIClockDifference.h \
    $${PWD}/OAIComputerSet.h \
    $${PWD}/OAIDefaultCrumbIssuer.h \
    $${PWD}/OAIDiskSpaceMonitorDescriptorDiskSpace.h \
    $${PWD}/OAIEmptyChangeLogSet.h \
    $${PWD}/OAIExtensionClassContainerImpl1.h \
    $${PWD}/OAIExtensionClassContainerImpl1links.h \
    $${PWD}/OAIExtensionClassContainerImpl1map.h \
    $${PWD}/OAIExtensionClassImpl.h \
    $${PWD}/OAIExtensionClassImpllinks.h \
    $${PWD}/OAIFavoriteImpl.h \
    $${PWD}/OAIFavoriteImpllinks.h \
    $${PWD}/OAIFreeStyleBuild.h \
    $${PWD}/OAIFreeStyleProject.h \
    $${PWD}/OAIFreeStyleProjectactions.h \
    $${PWD}/OAIFreeStyleProjecthealthReport.h \
    $${PWD}/OAIGenericResource.h \
    $${PWD}/OAIGithubContent.h \
    $${PWD}/OAIGithubFile.h \
    $${PWD}/OAIGithubOrganization.h \
    $${PWD}/OAIGithubOrganizationlinks.h \
    $${PWD}/OAIGithubRepositories.h \
    $${PWD}/OAIGithubRepositorieslinks.h \
    $${PWD}/OAIGithubRepository.h \
    $${PWD}/OAIGithubRepositorylinks.h \
    $${PWD}/OAIGithubRepositorypermissions.h \
    $${PWD}/OAIGithubRespositoryContainer.h \
    $${PWD}/OAIGithubRespositoryContainerlinks.h \
    $${PWD}/OAIGithubScm.h \
    $${PWD}/OAIGithubScmlinks.h \
    $${PWD}/OAIHudson.h \
    $${PWD}/OAIHudsonMasterComputer.h \
    $${PWD}/OAIHudsonMasterComputerexecutors.h \
    $${PWD}/OAIHudsonMasterComputermonitorData.h \
    $${PWD}/OAIHudsonassignedLabels.h \
    $${PWD}/OAIInputStepImpl.h \
    $${PWD}/OAIInputStepImpllinks.h \
    $${PWD}/OAILabel1.h \
    $${PWD}/OAILink.h \
    $${PWD}/OAIListView.h \
    $${PWD}/OAIMultibranchPipeline.h \
    $${PWD}/OAINullSCM.h \
    $${PWD}/OAIOrganisation.h \
    $${PWD}/OAIOrganisations.h \
    $${PWD}/OAIPipeline.h \
    $${PWD}/OAIPipelineActivities.h \
    $${PWD}/OAIPipelineActivity.h \
    $${PWD}/OAIPipelineActivityartifacts.h \
    $${PWD}/OAIPipelineBranches.h \
    $${PWD}/OAIPipelineBranchesitem.h \
    $${PWD}/OAIPipelineBranchesitemlatestRun.h \
    $${PWD}/OAIPipelineBranchesitempullRequest.h \
    $${PWD}/OAIPipelineBranchesitempullRequestlinks.h \
    $${PWD}/OAIPipelineFolderImpl.h \
    $${PWD}/OAIPipelineImpl.h \
    $${PWD}/OAIPipelineImpllinks.h \
    $${PWD}/OAIPipelineQueue.h \
    $${PWD}/OAIPipelineRun.h \
    $${PWD}/OAIPipelineRunImpl.h \
    $${PWD}/OAIPipelineRunImpllinks.h \
    $${PWD}/OAIPipelineRunNode.h \
    $${PWD}/OAIPipelineRunNodeSteps.h \
    $${PWD}/OAIPipelineRunNodeedges.h \
    $${PWD}/OAIPipelineRunNodes.h \
    $${PWD}/OAIPipelineRunSteps.h \
    $${PWD}/OAIPipelineRunartifacts.h \
    $${PWD}/OAIPipelineRuns.h \
    $${PWD}/OAIPipelineStepImpl.h \
    $${PWD}/OAIPipelineStepImpllinks.h \
    $${PWD}/OAIPipelinelatestRun.h \
    $${PWD}/OAIPipelinelatestRunartifacts.h \
    $${PWD}/OAIPipelines.h \
    $${PWD}/OAIQueue.h \
    $${PWD}/OAIQueueBlockedItem.h \
    $${PWD}/OAIQueueItemImpl.h \
    $${PWD}/OAIQueueLeftItem.h \
    $${PWD}/OAIResponseTimeMonitorData.h \
    $${PWD}/OAIScmOrganisations.h \
    $${PWD}/OAIStringParameterDefinition.h \
    $${PWD}/OAIStringParameterValue.h \
    $${PWD}/OAISwapSpaceMonitorMemoryUsage2.h \
    $${PWD}/OAIUnlabeledLoadStatistics.h \
    $${PWD}/OAIUser.h \
    $${PWD}/OAIUserFavorites.h \
    $${PWD}/OAIUsers.h \
# APIs
    $${PWD}/OAIBaseRemoteAccessApi.h \
    $${PWD}/OAIBlueOceanApi.h \
    $${PWD}/OAIRemoteAccessApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIModelFactory.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIQObjectWrapper.h

SOURCES += \
# Models
    $${PWD}/OAIAllView.cpp \
    $${PWD}/OAIBody.cpp \
    $${PWD}/OAIBranchImpl.cpp \
    $${PWD}/OAIBranchImpllinks.cpp \
    $${PWD}/OAIBranchImplpermissions.cpp \
    $${PWD}/OAICauseAction.cpp \
    $${PWD}/OAICauseUserIdCause.cpp \
    $${PWD}/OAIClassesByClass.cpp \
    $${PWD}/OAIClockDifference.cpp \
    $${PWD}/OAIComputerSet.cpp \
    $${PWD}/OAIDefaultCrumbIssuer.cpp \
    $${PWD}/OAIDiskSpaceMonitorDescriptorDiskSpace.cpp \
    $${PWD}/OAIEmptyChangeLogSet.cpp \
    $${PWD}/OAIExtensionClassContainerImpl1.cpp \
    $${PWD}/OAIExtensionClassContainerImpl1links.cpp \
    $${PWD}/OAIExtensionClassContainerImpl1map.cpp \
    $${PWD}/OAIExtensionClassImpl.cpp \
    $${PWD}/OAIExtensionClassImpllinks.cpp \
    $${PWD}/OAIFavoriteImpl.cpp \
    $${PWD}/OAIFavoriteImpllinks.cpp \
    $${PWD}/OAIFreeStyleBuild.cpp \
    $${PWD}/OAIFreeStyleProject.cpp \
    $${PWD}/OAIFreeStyleProjectactions.cpp \
    $${PWD}/OAIFreeStyleProjecthealthReport.cpp \
    $${PWD}/OAIGenericResource.cpp \
    $${PWD}/OAIGithubContent.cpp \
    $${PWD}/OAIGithubFile.cpp \
    $${PWD}/OAIGithubOrganization.cpp \
    $${PWD}/OAIGithubOrganizationlinks.cpp \
    $${PWD}/OAIGithubRepositories.cpp \
    $${PWD}/OAIGithubRepositorieslinks.cpp \
    $${PWD}/OAIGithubRepository.cpp \
    $${PWD}/OAIGithubRepositorylinks.cpp \
    $${PWD}/OAIGithubRepositorypermissions.cpp \
    $${PWD}/OAIGithubRespositoryContainer.cpp \
    $${PWD}/OAIGithubRespositoryContainerlinks.cpp \
    $${PWD}/OAIGithubScm.cpp \
    $${PWD}/OAIGithubScmlinks.cpp \
    $${PWD}/OAIHudson.cpp \
    $${PWD}/OAIHudsonMasterComputer.cpp \
    $${PWD}/OAIHudsonMasterComputerexecutors.cpp \
    $${PWD}/OAIHudsonMasterComputermonitorData.cpp \
    $${PWD}/OAIHudsonassignedLabels.cpp \
    $${PWD}/OAIInputStepImpl.cpp \
    $${PWD}/OAIInputStepImpllinks.cpp \
    $${PWD}/OAILabel1.cpp \
    $${PWD}/OAILink.cpp \
    $${PWD}/OAIListView.cpp \
    $${PWD}/OAIMultibranchPipeline.cpp \
    $${PWD}/OAINullSCM.cpp \
    $${PWD}/OAIOrganisation.cpp \
    $${PWD}/OAIOrganisations.cpp \
    $${PWD}/OAIPipeline.cpp \
    $${PWD}/OAIPipelineActivities.cpp \
    $${PWD}/OAIPipelineActivity.cpp \
    $${PWD}/OAIPipelineActivityartifacts.cpp \
    $${PWD}/OAIPipelineBranches.cpp \
    $${PWD}/OAIPipelineBranchesitem.cpp \
    $${PWD}/OAIPipelineBranchesitemlatestRun.cpp \
    $${PWD}/OAIPipelineBranchesitempullRequest.cpp \
    $${PWD}/OAIPipelineBranchesitempullRequestlinks.cpp \
    $${PWD}/OAIPipelineFolderImpl.cpp \
    $${PWD}/OAIPipelineImpl.cpp \
    $${PWD}/OAIPipelineImpllinks.cpp \
    $${PWD}/OAIPipelineQueue.cpp \
    $${PWD}/OAIPipelineRun.cpp \
    $${PWD}/OAIPipelineRunImpl.cpp \
    $${PWD}/OAIPipelineRunImpllinks.cpp \
    $${PWD}/OAIPipelineRunNode.cpp \
    $${PWD}/OAIPipelineRunNodeSteps.cpp \
    $${PWD}/OAIPipelineRunNodeedges.cpp \
    $${PWD}/OAIPipelineRunNodes.cpp \
    $${PWD}/OAIPipelineRunSteps.cpp \
    $${PWD}/OAIPipelineRunartifacts.cpp \
    $${PWD}/OAIPipelineRuns.cpp \
    $${PWD}/OAIPipelineStepImpl.cpp \
    $${PWD}/OAIPipelineStepImpllinks.cpp \
    $${PWD}/OAIPipelinelatestRun.cpp \
    $${PWD}/OAIPipelinelatestRunartifacts.cpp \
    $${PWD}/OAIPipelines.cpp \
    $${PWD}/OAIQueue.cpp \
    $${PWD}/OAIQueueBlockedItem.cpp \
    $${PWD}/OAIQueueItemImpl.cpp \
    $${PWD}/OAIQueueLeftItem.cpp \
    $${PWD}/OAIResponseTimeMonitorData.cpp \
    $${PWD}/OAIScmOrganisations.cpp \
    $${PWD}/OAIStringParameterDefinition.cpp \
    $${PWD}/OAIStringParameterValue.cpp \
    $${PWD}/OAISwapSpaceMonitorMemoryUsage2.cpp \
    $${PWD}/OAIUnlabeledLoadStatistics.cpp \
    $${PWD}/OAIUser.cpp \
    $${PWD}/OAIUserFavorites.cpp \
    $${PWD}/OAIUsers.cpp \
# APIs
    $${PWD}/OAIBaseRemoteAccessApi.cpp \
    $${PWD}/OAIBlueOceanApi.cpp \
    $${PWD}/OAIRemoteAccessApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp

