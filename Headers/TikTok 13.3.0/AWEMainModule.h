//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSModule-Protocol.h"

@class NSDictionary, NSString, UIWindow;

@interface AWEMainModule : NSObject <HTSModule>
{
    _Bool _hadRegisterFireBase;
    long long _badgeNumberAfterSplash;
    NSDictionary *_launchOptions;
}

+ (void)load;
+ (unsigned long long)priority;
@property(nonatomic) _Bool hadRegisterFireBase; // @synthesize hadRegisterFireBase=_hadRegisterFireBase;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(nonatomic) long long badgeNumberAfterSplash; // @synthesize badgeNumberAfterSplash=_badgeNumberAfterSplash;
- (void).cxx_destruct;
- (void)autoCleanCacheForLowStorageUser;
- (void)cleanMusicallyCache;
- (void)p_registerFireBaseAsyncDisable:(_Bool)arg1;
- (void)p_fetchPrivacySetting;
- (void)uploadLastFollowFeedImpressionIDs;
- (void)uploadAddressBookAndLocationAccess;
- (void)showRecommendToastWithNumber:(long long)arg1;
- (void)onSplashDisappeared;
- (void)startUploadAddressBook;
- (void)showAlertViewIfNeeded;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationRootViewDidAppear:(id)arg1;
- (void)applicationRootWindowVisible:(id)arg1;
- (void)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
