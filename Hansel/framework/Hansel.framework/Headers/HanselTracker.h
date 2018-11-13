//
//  HanselTracker.h
//  Pods
//
//  Created by Akash Nagar on 8/7/17.
//
//

#import <Foundation/Foundation.h>

@class HanselProperties;

@interface HanselTracker : NSObject

+ (void) trackEvent: (NSString*) eventName withProperties: (HanselProperties*) properties NS_SWIFT_NAME(track(_:withProps:));
+ (NSDictionary*) getExperienceDataForEvent: (NSString*) eventName andVendor: (NSString*) vendor withProperties: (NSDictionary*) properties NS_SWIFT_NAME(getExperienceData(_:vendor:withProperties:));
+ (BOOL) isAttachedToExperienceEvent: (NSString*) event andVendor: (NSString*) vendor NS_SWIFT_NAME(isAttachedToExperience(_:vendor:));
+ (void) syncEvents;

@end

