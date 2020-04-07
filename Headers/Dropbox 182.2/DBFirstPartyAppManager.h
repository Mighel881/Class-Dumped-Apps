//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBKeychain;

@interface DBFirstPartyAppManager : NSObject
{
    DBKeychain *_keychain;
}

+ (id)prepareFastSwitchingURLQueryParameterWithSharedPasscodeSupport;
+ (_Bool)isBounceBackURL:(id)arg1;
+ (_Bool)url:(id)arg1 isForApp:(long long)arg2;
+ (id)urlWithScheme:(id)arg1 host:(id)arg2 parameters:(id)arg3 skipPasscode:(_Bool)arg4;
+ (id)urlForOpeningApp:(long long)arg1 host:(id)arg2 parameters:(id)arg3 skipPasscode:(_Bool)arg4;
+ (long long)firstPartyAppFromBundleId:(id)arg1;
+ (id)bundleIdForFirstPartyApp:(long long)arg1;
+ (id)db_appToBundleId;
+ (id)db_firstPartyAppActionToString:(unsigned long long)arg1;
+ (id)globalManager;
- (void).cxx_destruct;
- (void)clearFastSwitchingSharedPasscodeNonceFromKeychain;
- (_Bool)shouldSkipPasscodeVerificationWhenOpeningURL:(id)arg1;
- (void)fastSwitchFromApp:(long long)arg1 toApp:(long long)arg2 skipPasscode:(_Bool)arg3 urlHelper:(id)arg4;
- (_Bool)handleBounceBackURL:(id)arg1 urlHelper:(id)arg2;
- (_Bool)openAppAndBounceBack:(long long)arg1 urlHelper:(id)arg2;
- (void)registerInstallDetectionURLScheme:(id)arg1;
- (id)detectionURLSchemeForAppWithBundleId:(id)arg1;
- (_Bool)areAnyOtherFirstPartyAppsInstalledWithHelper:(id)arg1;
- (void)markCurrentAppAsEverLoggedIn;
- (_Bool)openAppWithBundleId:(id)arg1 host:(id)arg2 parameters:(id)arg3 urlHelper:(id)arg4;
- (_Bool)openApp:(long long)arg1 host:(id)arg2 parameters:(id)arg3 skipPasscode:(_Bool)arg4 urlHelper:(id)arg5;
- (_Bool)hasAppEverLoggedIn:(long long)arg1;
- (_Bool)hasFirstPartyAppBeenRun:(long long)arg1;
- (_Bool)isFirstPartyAppInstalled:(long long)arg1 atLeastVersion:(unsigned long long)arg2 urlHelper:(id)arg3;
- (_Bool)isAppStoreVersionOfRunningAppInstalledWithHelper:(id)arg1;
- (long long)runningApp;
- (void)db_markApp:(long long)arg1 withAction:(unsigned long long)arg2;
- (_Bool)db_hasApp:(long long)arg1 beenMarkedWithAction:(unsigned long long)arg2;
- (id)car_currentAppStates;
- (id)init;

@end
