//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>

@class NSNumber, NSString;
@protocol T1StartupReporterNetworkMonitoring, T1StartupReporterUIInspecting, TFSTwitterLegacyScribeLogMethods;

@interface T1StartupReporter : NSObject <TFNViewControllerEventObserver>
{
    NSString *_impressionID;
    long long _waitingState;
    NSNumber *_initialPanelID;
    _Bool _hasLaunched;
    _Bool _hasStayedOnInitialPanelRoot;
    id <T1StartupReporterNetworkMonitoring> _networkMonitor;
    id <T1StartupReporterUIInspecting> _uiInspector;
    long long _appLaunch;
    _Bool _hasLoggedHomeTimelineDeserializationViewControllerUpdate;
    _Bool _hasLoggedHomeTimelineLoadTop;
    _Bool _hasLoggedHomeTimelineLoadTopViewControllerUpdate;
    _Bool _hasLoggedNotificationsTimelineInitialized;
    NSNumber *_homeTimelineDeserializationTimeInterval;
    NSNumber *_homeTimelineDeserializationViewControllerUpdateTimeInterval;
    NSNumber *_homeTimelineLoadTopTimeInterval;
    NSNumber *_homeTimelineLoadTopViewControllerUpdateTimeInterval;
    NSNumber *_notificationsTimelineInitializedTimeInterval;
    _Bool _hasCompletedStartup;
    CDUnknownBlockType _scribeAccess;
}

+ (id)sharedReporter;
@property(copy, nonatomic) CDUnknownBlockType scribeAccess; // @synthesize scribeAccess=_scribeAccess;
- (void).cxx_destruct;
- (void)viewControllerViewWillFullyDisappear:(id)arg1;
- (void)_t1_dataViewControllerDidUpdate:(id)arg1;
- (void)_t1_homeTimelineDidUpdate:(id)arg1;
- (void)_t1_applicationDidBecomeActive:(id)arg1;
- (void)_t1_applicationWillEnterForeground:(id)arg1;
- (void)_t1_applicationDidEnterBackground:(id)arg1;
- (void)_t1_setWaitingState:(long long)arg1 caller:(SEL)arg2;
- (id)_t1_timeInterval;
- (void)_t1_homeTimelineDidUpdateNotification:(id)arg1 getIsFromAPI:(out _Bool *)arg2 hasRealData:(out _Bool *)arg3 hasCompletedApplicationLoadTopRequest:(out _Bool *)arg4;
- (void)_t1_scribeHomeStartupMetrics;
- (void)_t1_scribeNotificationsStartupMetrics;
- (void)_t1_scribeAvailableStartupMetrics;
@property(readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
- (void)homeTimelineWillDisplayItem:(id)arg1;
- (void)timelineInitializedForPanel:(long long)arg1;
- (void)didLaunchDirectlyToRoot:(_Bool)arg1 ofPanel:(long long)arg2;
- (void)willLaunch;
- (id)initWithNetworkMonitor:(id)arg1 uiInspector:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
