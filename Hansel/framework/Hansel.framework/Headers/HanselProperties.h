//
//  HanselProperties.h
//  Hansel.io-ios
//
//  Created by Akash Nagar on 10/13/17.
//

#import <Foundation/Foundation.h>

@interface HanselProperties : NSObject

@property (nonatomic,readonly) NSMutableDictionary* propertyMap;

- (instancetype) init;
- (void) setString: (NSString*) aString forKey:(NSString*) aKey NS_SWIFT_NAME(set(_:forKey:));
- (void) setBool: (BOOL) aBool forKey:(NSString*) aKey NS_SWIFT_NAME(set(_:forKey:));
- (void) setDouble: (double) aDouble forKey:(NSString*) aKey NS_SWIFT_NAME(set(_:forKey:));
- (void) addAllFromMap: (NSDictionary*) map NS_SWIFT_NAME(addAll(_:));
    
@end
