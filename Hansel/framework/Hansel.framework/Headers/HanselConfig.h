//
//  HanselConfig.h
//  Hansel
//
//  Created by Akash Nagar on 1/12/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum{
    k1X,
    k2X,
    k3X
}SCALE_FACTOR;

@interface HanselConfig : NSObject

+ (NSString* _Nullable) getString: (NSString* _Nonnull) key withDefaultValue: (NSString* _Nullable) defaultValue;
+ (NSString* _Nullable) getString: (NSString* _Nonnull) key;

+ (double) getDouble: (NSString* _Nonnull) key withDefaultValue: (double) defaultValue;
+ (double) getDouble: (NSString* _Nonnull) key;

+ (BOOL) getBool: (NSString* _Nonnull) key withDefaultValue: (BOOL) defaultValue;
+ (BOOL) getBool: (NSString* _Nonnull) key;

+ (NSDictionary* _Nullable) getJSON: (NSString* _Nonnull) key withDefaultValue: (NSDictionary* _Nullable) defaultValue;
+ (NSDictionary* _Nullable) getJSON: (NSString* _Nonnull) key;

+ (NSArray* _Nullable) getJSONArray: (NSString* _Nonnull) key withDefaultValue: (NSArray* _Nullable) defaultValue;
+ (NSArray* _Nullable) getJSONArray: (NSString* _Nonnull) key;

+ (NSArray* _Nullable) getList: (NSString* _Nonnull) key withDefaultValue: (NSArray* _Nullable) defaultValue;
+ (NSArray* _Nullable) getList: (NSString* _Nonnull) key;

+ (UIColor* _Nullable) getColor: (NSString* _Nonnull) key withDefaultValue: (UIColor* _Nullable) defaultValue;
+ (UIColor* _Nullable) getColor: (NSString* _Nonnull) key;

+ (NSAttributedString* _Nullable) getRichText: (NSString* _Nonnull) key withDefaultValue: (NSAttributedString* _Nullable) defaultValue;
+ (NSAttributedString* _Nullable) getRichText: (NSString* _Nonnull) key;

+ (NSString* _Nullable) getImage: (NSString* _Nonnull) key forScale: (SCALE_FACTOR) scale withDefaultValue: (NSString* _Nullable) defaultValue;
+ (NSString* _Nullable) getImage: (NSString* _Nonnull) key forScale: (SCALE_FACTOR) scale;

@end
