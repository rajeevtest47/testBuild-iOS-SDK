//
//  User.h
//  Hansel
//
//  Created by Akash Nagar on 8/3/18.
//  Copyright © 2018 Hansel Software Private Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject

- (void) putStringAttribute: (NSString*) attribute forKey: (NSString*) key NS_SWIFT_NAME(putAttribute(_:forKey:));
- (void) putDoubleAttribute: (double) attribute forKey: (NSString*) key NS_SWIFT_NAME(putAttribute(_:forKey:));
- (void) putBoolAttribute: (BOOL) attribute forKey: (NSString*) key NS_SWIFT_NAME(putAttribute(_:forKey:));

- (void) putPrivateStringAttribute: (NSString*) attribute forKey: (NSString*) key NS_SWIFT_NAME(putPrivateAttribute(_:forKey:));
- (void) putPrivateDoubleAttribute: (double) attribute forKey: (NSString*) key NS_SWIFT_NAME(putPrivateAttribute(_:forKey:));
- (void) putPrivateBoolAttribute: (BOOL) attribute forKey: (NSString*) key NS_SWIFT_NAME(putPrivateAttribute(_:forKey:));

- (void) setUserId: (NSString*) userId;
- (void) clear;

@end
