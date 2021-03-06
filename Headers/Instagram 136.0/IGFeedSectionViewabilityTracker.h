//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGItemDiffingDelegate-Protocol.h>

@class IGCollectionViewVisibility, IGItemDiffing, IGListAdapter, IGSponsoredSupportConfiguration, IGUserSession, NSMutableDictionary, NSMutableSet, NSString;
@protocol IGAnalyticsModule, IGFeedItemConfigurationType, IGFeedItemDirectResponseLoggingProviderDelegate;

@interface IGFeedSectionViewabilityTracker : NSObject <IGItemDiffingDelegate>
{
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    IGCollectionViewVisibility *_collectionViewVisibility;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGAnalyticsModule> _analyticsModuleProvider;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingProvider;
    IGItemDiffing *_visibleFeedItemTracker;
    NSMutableSet *_visibleFeedItems;
    NSMutableDictionary *_sessionsLists;
    CDUnknownBlockType _mapToFeedItem;
    _Bool _experimental;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
}

- (void).cxx_destruct;
- (_Bool)_isAd:(id)arg1;
- (id)_feedSectionViewSessionForFeedItem:(id)arg1 visiblePercentageThreshold:(double)arg2 context:(unsigned long long)arg3;
- (void)updateVisibilityForFeedItem:(id)arg1 reason:(unsigned long long)arg2 visiblePercent:(double)arg3 viewportCoveragePercent:(double)arg4;
- (void)_updateSectionVisibilityForFeedItem:(id)arg1 visibleRect:(struct CGRect)arg2 reason:(unsigned long long)arg3;
- (void)_clearVisibilityPercentagesForFeedItem:(id)arg1 reason:(unsigned long long)arg2;
- (void)_clearVisibilityPercentagesForAllVisibleFeedItemsWithReason:(unsigned long long)arg1;
- (void)_onApplicationWillTerminate:(id)arg1;
- (void)_onApplicationWillResignActive:(id)arg1;
- (void)_onApplicationDidBecomeActive:(id)arg1;
- (void)itemDiffing:(id)arg1 didChangeWithItemRemoved:(id)arg2;
- (void)setupSessionListsForFeedItem:(id)arg1;
- (void)itemDiffing:(id)arg1 didChangeWithItemAdded:(id)arg2;
- (void)clearVisibilityWithReason:(unsigned long long)arg1;
- (void)updateVisibilityWithReason:(unsigned long long)arg1;
- (id)initWithListAdapter:(id)arg1 userSession:(id)arg2 collectionViewVisibility:(id)arg3 itemConfiguration:(id)arg4 analyticsModuleProvider:(id)arg5 loggingProvider:(id)arg6 sponsoredSupportConfiguration:(id)arg7 experimental:(_Bool)arg8 observesAppEvents:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

