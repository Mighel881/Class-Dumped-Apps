//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "TWAnalyticsControllerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "_TtP6PMHTTP23HTTPManagerConfigurable_-Protocol.h"

@class NSSet, NSString, NSURL, UIWindow, _TtC6Twitch13DiscoveryPath, _TtC6Twitch17ChromecastManager, _TtC9TwitchKit8Identity;
@protocol _TtP12TwitchCoreUI14TWThemeManager_;

__attribute__((visibility("hidden")))
@interface TWAppDelegate : UIResponder <TWAnalyticsControllerDelegate, _TtP6PMHTTP23HTTPManagerConfigurable_, MFMailComposeViewControllerDelegate, UIApplicationDelegate>
{
    unsigned long long _receiveRemoteControlEventsReferenceCount;
    id <_TtP12TwitchCoreUI14TWThemeManager_> _themeManager;
    NSURL *_maybeURLForAnalytics;
    _Bool _activatedFromBackground;
    _TtC6Twitch13DiscoveryPath *_branchDiscoveryPath;
    NSSet *_cookieNamesToKeep;
    _Bool _isFreshInstall;
    UIWindow *_window;
    _TtC6Twitch17ChromecastManager *_chromecastManager;
}

+ (_Bool)useMockChromecastManager;
+ (_Bool)isInUITestEnvironment;
+ (id)saveableCookieNames;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFreshInstall; // @synthesize isFreshInstall=_isFreshInstall;
@property(readonly, nonatomic) _TtC6Twitch17ChromecastManager *chromecastManager; // @synthesize chromecastManager=_chromecastManager;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)recordBranchFirstOpenIfNeeded;
- (void)stopReceivingRemoteControlEvents;
- (void)startReceivingRemoteControlEvents;
- (void)presentToastForWhisperWithThreadId:(id)arg1 chatMessage:(id)arg2 analyticsContext:(id)arg3;
- (void)presentInAppNotificationForFriendRequest:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createDynamicApplicationShortcutItems;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
- (void)deferredLaunchingBehavior;
- (id)init;
- (void)setupGameBroadcastingSettings;
@property(nonatomic, readonly) struct CGRect windowFrame;
@property(nonatomic, readonly) _TtC9TwitchKit8Identity *currentUserIdentity;
@property(nonatomic, readonly) _Bool isTurbo;
@property(nonatomic, readonly) _Bool hasSavedAccessToken;
- (void)analyticsController:(id)arg1 eventOccurred:(id)arg2 withProperties:(id)arg3;
- (id)analyticsControllerWantsSupplementalProperties:(id)arg1;
- (void)registerRemoteSettingsManagerDataSource;
- (void)registerMiniExperimentManagerDelegate;
@property(nonatomic, readonly) _Bool isRunningUnitTests;
- (void)configureWithHttpManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

