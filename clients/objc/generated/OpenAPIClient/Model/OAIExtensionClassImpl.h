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


#import "OAIExtensionClassImpllinks.h"
@protocol OAIExtensionClassImpllinks;
@class OAIExtensionClassImpllinks;



@protocol OAIExtensionClassImpl
@end

@interface OAIExtensionClassImpl : OAIObject


@property(nonatomic) NSString* _class;

@property(nonatomic) OAIExtensionClassImpllinks* links;

@property(nonatomic) NSArray<NSString*>* classes;

@end
