#import <Foundation/Foundation.h>
#import "OAIObject.h"

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


#import "OAIPipelineBranchesitempullRequestlinks.h"
@protocol OAIPipelineBranchesitempullRequestlinks;
@class OAIPipelineBranchesitempullRequestlinks;



@protocol OAIPipelineBranchesitempullRequest
@end

@interface OAIPipelineBranchesitempullRequest : OAIObject


@property(nonatomic) OAIPipelineBranchesitempullRequestlinks* links;

@property(nonatomic) NSString* author;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* title;

@property(nonatomic) NSString* url;

@property(nonatomic) NSString* _class;

@end