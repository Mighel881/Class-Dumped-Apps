//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveFeedLayoutPageItem-Protocol.h"
#import "HTSLiveFeedPageProtocol-Protocol.h"

@class HTSLiveFeedDataApi, IESLiveFeedTabConfig, NSArray, NSNumber, NSString;
@protocol HTSLiveFeedPageDelegate, HTSLiveRoomCollectionDataObserver, IESLiveAppInfo, IESLiveEnvironment, IESLiveMonitor, IESLiveSettings, IESLiveTracker;

@interface HTSLiveFeedPageStore : NSObject <HTSLiveFeedLayoutPageItem, HTSLiveFeedPageProtocol>
{
    _Bool _feedEmpty;
    _Bool _empty;
    _Bool _noMoreData;
    _Bool _refreshing;
    _Bool _refreshEndTracked;
    _Bool _loadingMore;
    _Bool _loadmoreEndTracked;
    _Bool _bannerInLine;
    id <HTSLiveRoomCollectionDataObserver> dataObserver;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_reqFrom;
    IESLiveFeedTabConfig *_tabConfig;
    NSString *_gdLabel;
    NSString *_title;
    NSNumber *_itemID;
    double _contentOffsetY;
    NSString *_url;
    unsigned long long _layoutStyle;
    HTSLiveFeedDataApi *_api;
    id <HTSLiveFeedPageDelegate> _delegate;
    NSArray *_mFeedItems;
    NSArray *_mHeaderItems;
    id <IESLiveTracker> _tracker;
    id <IESLiveSettings> _settings;
    id <IESLiveMonitor> _monitor;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveAppInfo> _appInfo;
}

@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(nonatomic) _Bool bannerInLine; // @synthesize bannerInLine=_bannerInLine;
@property(retain, nonatomic) NSArray *mHeaderItems; // @synthesize mHeaderItems=_mHeaderItems;
@property(retain, nonatomic) NSArray *mFeedItems; // @synthesize mFeedItems=_mFeedItems;
@property(nonatomic) _Bool loadmoreEndTracked; // @synthesize loadmoreEndTracked=_loadmoreEndTracked;
@property(nonatomic) _Bool loadingMore; // @synthesize loadingMore=_loadingMore;
@property(nonatomic) _Bool refreshEndTracked; // @synthesize refreshEndTracked=_refreshEndTracked;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) __weak id <HTSLiveFeedPageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HTSLiveFeedDataApi *api; // @synthesize api=_api;
@property(nonatomic, getter=isNoMoreData) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic, getter=isFeedEmpty) _Bool feedEmpty; // @synthesize feedEmpty=_feedEmpty;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double contentOffsetY; // @synthesize contentOffsetY=_contentOffsetY;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *gdLabel; // @synthesize gdLabel=_gdLabel;
@property(retain, nonatomic) IESLiveFeedTabConfig *tabConfig; // @synthesize tabConfig=_tabConfig;
@property(copy, nonatomic) NSString *reqFrom; // @synthesize reqFrom=_reqFrom;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) __weak id <HTSLiveRoomCollectionDataObserver> dataObserver; // @synthesize dataObserver;
- (void).cxx_destruct;
- (id)filterRoomItemWithRoom:(id)arg1 indexPath:(id *)arg2;
- (_Bool)isInvalidRoom:(id)arg1;
- (_Bool)isInnerBanner;
- (_Bool)allowDislike;
- (void)monitorFeedType:(id)arg1 apiStartTime:(double)arg2 withError:(id)arg3;
- (void)monitorFeedLoadMoreWithError:(id)arg1;
- (void)monitorFeedRefreshWithError:(id)arg1;
- (id)enterFromParamWithConfig:(id)arg1;
- (void)trackLoadMoreEnd:(id)arg1 startTime:(double)arg2 successState:(long long)arg3;
- (void)trackLoadMoreBegin:(id)arg1;
- (void)trackRefreshEnd:(id)arg1 startTime:(double)arg2 successState:(long long)arg3;
- (void)trackRefreshBegin:(id)arg1;
- (void)replaceFeedItemModelAtIndex:(unsigned long long)arg1 withModel:(id)arg2;
- (void)deleteFeedItemModel:(id)arg1;
- (void)deleteFeedItemIndexSets:(id)arg1;
- (void)deleteFeedItemModels:(id)arg1;
- (void)appendFeedItemModels:(id)arg1;
- (void)refreshFeedItemModels:(id)arg1;
- (long long)appendBanners:(id)arg1 toFeedItems:(id)arg2;
- (_Bool)canFeedItemsAppendBanner:(id)arg1 withBannerCount:(long long)arg2;
- (void)ajustBannerIndexIfNeeds;
- (void)updateFeedState;
- (void)additional;
- (void)updateFeedRoomEmptyState:(_Bool)arg1;
- (void)trackExtra:(id)arg1;
- (id)toFeedRoomItems:(id)arg1;
- (id)feedItemsToRooms:(id)arg1;
- (void)loadMore:(id)arg1;
- (id)parseFeedItemsFromModel:(id)arg1;
- (void)refresh:(id)arg1;
- (void)changeToIndex:(unsigned long long)arg1;
- (id)rooms;
- (void)didCloseRoom:(id)arg1 originIndexPath:(id)arg2;
- (void)didCloseRoom:(id)arg1;
- (_Bool)deleteIndexPaths:(id)arg1;
- (_Bool)deleteRoom:(id)arg1;
- (_Bool)hasMore;
- (void)loadMore;
- (_Bool)canLoadMore;
- (void)refresh;
- (_Bool)canRefresh;
@property(readonly, nonatomic) _Bool streamingEnable;
@property(readonly, nonatomic) unsigned long long layout;
- (void)changeTo:(_Bool)arg1;
- (id)feedItemsBy:(unsigned long long)arg1;
- (void)hotPatchTabConfig:(id)arg1;
- (id)initWithTabConfig:(id)arg1 track:(id)arg2 trackSource:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
