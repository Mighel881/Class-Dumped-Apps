//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTInstallUtil : NSObject
{
}

+ (id)platformString;
+ (id)platform;
+ (_Bool)isJailBroken;
+ (id)resolutionString;
+ (id)connectMethodName;
+ (id)loadUserDefaultsStringForKey:(id)arg1;
+ (_Bool)isUpgradeUser;
+ (id)buildQueryFromDictionary:(id)arg1;
+ (id)commonURLParameters;
+ (_Bool)isInHouseVersion;
+ (id)onTheFlyParameter;
+ (id)uuid;
+ (void)load;
+ (void)clearAllUserDefaultsData;
+ (_Bool)isAutoReset;
+ (void)setAutoReset:(_Bool)arg1;
+ (_Bool)isResetMode;
+ (void)setResetMode:(_Bool)arg1;
+ (void)generateMockDeviceInfo;

@end
