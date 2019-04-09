#import <Foundation/Foundation.h>
#import "OAIObject.h"

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


#import "OAIAllView.h"
#import "OAIFreeStyleProject.h"
#import "OAIHudsonassignedLabels.h"
#import "OAIUnlabeledLoadStatistics.h"
@protocol OAIAllView;
@class OAIAllView;
@protocol OAIFreeStyleProject;
@class OAIFreeStyleProject;
@protocol OAIHudsonassignedLabels;
@class OAIHudsonassignedLabels;
@protocol OAIUnlabeledLoadStatistics;
@class OAIUnlabeledLoadStatistics;



@protocol OAIHudson
@end

@interface OAIHudson : OAIObject


@property(nonatomic) NSString* _class;

@property(nonatomic) NSArray<OAIHudsonassignedLabels>* assignedLabels;

@property(nonatomic) NSString* mode;

@property(nonatomic) NSString* nodeDescription;

@property(nonatomic) NSString* nodeName;

@property(nonatomic) NSNumber* numExecutors;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSArray<OAIFreeStyleProject>* jobs;

@property(nonatomic) OAIAllView* primaryView;

@property(nonatomic) NSNumber* quietingDown;

@property(nonatomic) NSNumber* slaveAgentPort;

@property(nonatomic) OAIUnlabeledLoadStatistics* unlabeledLoad;

@property(nonatomic) NSNumber* useCrumbs;

@property(nonatomic) NSNumber* useSecurity;

@property(nonatomic) NSArray<OAIAllView>* views;

@end
