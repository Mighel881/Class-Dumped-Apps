//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADJUserDefaults : NSObject
{
}

+ (void)clearAdjustStuff;
+ (void)removeDisableThirdPartySharing;
+ (_Bool)getDisableThirdPartySharing;
+ (void)setDisableThirdPartySharing;
+ (void)removeDeeplink;
+ (id)getDeeplinkClickTime;
+ (id)getDeeplinkUrl;
+ (void)saveDeeplinkUrl:(id)arg1 andClickTime:(id)arg2;
+ (void)removeGdprForgetMe;
+ (_Bool)getGdprForgetMe;
+ (void)setGdprForgetMe;
+ (_Bool)getInstallTracked;
+ (void)setInstallTracked;
+ (void)removePushToken;
+ (id)getPushTokenString;
+ (id)getPushTokenData;
+ (void)savePushTokenString:(id)arg1;
+ (void)savePushTokenData:(id)arg1;

@end

