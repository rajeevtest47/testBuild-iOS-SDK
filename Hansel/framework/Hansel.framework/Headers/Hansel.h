//
//  Hansel.h
//  pebbletraceiossdk
//
//  Created by Prabodh Prakash on 25/05/16.
//  Copyright © 2016 Hansel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface Hansel : NSObject

+ (void) initializeSDKWithAppID: (NSString*) appId andAppKey: (NSString*) appKey NS_SWIFT_NAME(initializeSDK(_:_:));
+ (BOOL) isPushFromHansel: (NSDictionary*) pushPayload NS_SWIFT_NAME(isHanselPush(userInfo:));
+ (BOOL) handlePushPayload: (NSDictionary*) pushPayload NS_SWIFT_NAME(handlePushPayload(userInfo:));
+ (void) setNewToken: (NSData*) token;
+ (NSDictionary*) getExperiences;

+ (User*) getUser;
+ (NSString*) getTestString;
+ (NSDictionary*) getTestDictionary;
@end
