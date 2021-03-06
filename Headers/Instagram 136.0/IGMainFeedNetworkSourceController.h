//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedItemPostedListener-Protocol.h>
#import <FBSharedFramework/IGFeedNetworkSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGMainFeedLightweightDeliveryNetworkSourceDelegate-Protocol.h>
#import <FBSharedFramework/IGMainFeedNetworkSourceDefermentDelegate-Protocol.h>
#import <FBSharedFramework/IGTVUploadStatusListener-Protocol.h>
#import <FBSharedFramework/IGWarmStartListener-Protocol.h>

@class IGMainFeedLightweightDeliveryNetworkSource, IGMainFeedLocalDeliveryManager, IGMainFeedLogger, IGMainFeedNetworkSource, IGMainFeedRequestLoggingInfo, IGStoryDataController, IGUserSession, NSDate, NSString;
@protocol IGFeedNetworkSourceDelegate, IGMainFeedNetworkSourceControllerDelegate;

@interface IGMainFeedNetworkSourceController : NSObject <IGFeedItemPostedListener, IGFeedNetworkSourceDelegate, IGMainFeedLightweightDeliveryNetworkSourceDelegate, IGMainFeedNetworkSourceDefermentDelegate, IGTVUploadStatusListener, IGWarmStartListener>
{
    IGMainFeedNetworkSource *_feedNetworkSource;
    IGMainFeedLightweightDeliveryNetworkSource *_lightweightDeliveryNetworkSource;
    IGMainFeedLogger *_logger;
    IGMainFeedRequestLoggingInfo *_blockedRequestInfo;
    NSDate *_lastBackgroundDate;
    _Bool _useBackgroundIntervalForColdStart;
    IGMainFeedLocalDeliveryManager *_localDeliveryManager;
    _Bool _forceHeadloadOnWarmstart;
    id <IGMainFeedNetworkSourceControllerDelegate> _delegate;
    id <IGFeedNetworkSourceDelegate> _feedDelegate;
    IGStoryDataController *_storyDataController;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
}

@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool forceHeadloadOnWarmstart; // @synthesize forceHeadloadOnWarmstart=_forceHeadloadOnWarmstart;
@property(readonly, nonatomic) IGStoryDataController *storyDataController; // @synthesize storyDataController=_storyDataController;
@property(readonly, nonatomic) IGMainFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(nonatomic) __weak id <IGFeedNetworkSourceDelegate> feedDelegate; // @synthesize feedDelegate=_feedDelegate;
@property(nonatomic) __weak id <IGMainFeedNetworkSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mainFeedLightweightDeliveryNetworkSource:(id)arg1 requestFailedWithError:(id)arg2;
- (void)mainFeedLightweightDeliveryNetworkSource:(id)arg1 requestSucceededWithNewPostsAvailable:(_Bool)arg2;
- (void)feedNetworkSourceDidDiscardDeferredResponse:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didDeferLoadingObjects:(id)arg2 message:(id)arg3;
- (_Bool)feedNetworkSource:(id)arg1 shouldDeferResponseForFetchReason:(long long)arg2 hasNewObjects:(_Bool)arg3 newFirstObject:(_Bool)arg4;
- (void)feedNetworkSource:(id)arg1 willLoadItemsFromResponse:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)uploadStatusDidChange:(long long)arg1;
- (void)uploadStatusDidSucceedWithFeedItem:(id)arg1 didSharePreviewToFeed:(_Bool)arg2;
- (void)feedItemPostFailed;
- (void)feedItemPosted:(id)arg1 postId:(id)arg2;
- (void)_onAppDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForegroundWithTimeIntervalSinceBackground:(double)arg1 warmStartInitializedFromNotification:(_Bool)arg2;
- (double)timeIntervalSinceLastBackground;
- (void)_fetchDataOnStoryTray;
- (_Bool)_shouldRefreshWithReason:(long long)arg1;
- (_Bool)isLoadingWithNoPosts;
- (void)appendCachedUnseenItems;
- (void)fetchLightweightResponseForNewPosts;
- (_Bool)fetchDataWithMainFeedFetchReason:(long long)arg1 additionalParameters:(id)arg2;
- (void)fetchDataFromDisk;
@property(readonly, nonatomic) _Bool hasNewLightweightDeliveryPostsReported;
@property(readonly, nonatomic) _Bool needsLoad;
- (id)initWithUserSession:(id)arg1 posts:(id)arg2 nextMaxID:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

