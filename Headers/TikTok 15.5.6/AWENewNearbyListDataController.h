//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

#import "AWEAwemeDeletionMessage-Protocol.h"
#import "AWELiveVideoFeedUpdateMessage-Protocol.h"

@class AWERxObservable, AWERxProperty, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface AWENewNearbyListDataController : AWEListDataController <AWEAwemeDeletionMessage, AWELiveVideoFeedUpdateMessage>
{
    _Bool _isCacheLoaded;
    _Bool _isFirstRequest;
    AWERxProperty *_isRequesting;
    AWERxObservable *_cityChanged;
    AWERxProperty *_poiEntries;
    AWERxProperty *_bannderData;
    AWERxProperty *_feedList;
    NSString *_insertFreshAwemeIds;
    long long _insertFreshType;
    NSMutableArray *_needInsertCards;
    NSMutableDictionary *_filteredToRaw;
    NSMutableDictionary *_rawToFiltered;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_semaphore> *_sourceLock;
}

@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(nonatomic) _Bool isCacheLoaded; // @synthesize isCacheLoaded=_isCacheLoaded;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sourceLock; // @synthesize sourceLock=_sourceLock;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSMutableDictionary *rawToFiltered; // @synthesize rawToFiltered=_rawToFiltered;
@property(retain, nonatomic) NSMutableDictionary *filteredToRaw; // @synthesize filteredToRaw=_filteredToRaw;
@property(retain) NSMutableArray *needInsertCards; // @synthesize needInsertCards=_needInsertCards;
@property(nonatomic) long long insertFreshType; // @synthesize insertFreshType=_insertFreshType;
@property(copy, nonatomic) NSString *insertFreshAwemeIds; // @synthesize insertFreshAwemeIds=_insertFreshAwemeIds;
@property(retain, nonatomic) AWERxProperty *feedList; // @synthesize feedList=_feedList;
@property(retain, nonatomic) AWERxProperty *bannderData; // @synthesize bannderData=_bannderData;
@property(retain, nonatomic) AWERxProperty *poiEntries; // @synthesize poiEntries=_poiEntries;
@property(retain, nonatomic) AWERxObservable *cityChanged; // @synthesize cityChanged=_cityChanged;
@property(retain, nonatomic) AWERxProperty *isRequesting; // @synthesize isRequesting=_isRequesting;
- (void).cxx_destruct;
- (void)deleteEndedLivedRoomWithUserIDs:(id)arg1;
- (void)updateLiveStatusForCurrentVideo;
- (void)updateLiveListOfVideoWaterFallWithData:(id)arg1;
- (void)_storeLiveWaterfallListWithData:(id)arg1 isFetch:(_Bool)arg2;
- (void)p_fetchVideoRankDataWithResp:(id)arg1;
- (id)p_generateInsertCardsWithResp:(id)arg1;
- (id)p_generateFeedListWithAwemes:(id)arg1 startIndex:(long long)arg2;
- (void)deleteAwemeWithIDs:(id)arg1 animation:(_Bool)arg2;
- (void)deleteAwemeWithIDs:(id)arg1;
- (void)fetchPOIBannerDataWithCompletion:(CDUnknownBlockType)arg1;
- (long long)dataSourceIndexFromFilteredIndex:(long long)arg1;
- (long long)filteredDataSourceIndexFromIndex:(long long)arg1;
- (void)calculateFilteredDataSource;
- (void)p_calculateFilteredWithSource:(id)arg1 filteded:(id *)arg2 row:(id *)arg3 raw:(id *)arg4;
- (id)_filterDuplicatedDatasourceWithSource:(id)arg1 array:(id)arg2;
- (void)requestWithCount:(long long)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDataListWithType:(long long)arg1 resp:(id)arg2 dataList:(id)arg3 filteded:(id)arg4 row:(id)arg5 raw:(id)arg6;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteFeedItemInAwemeDetailWithItemID:(id)arg1;
- (void)deleteFeedItemWithItemID:(id)arg1 animation:(_Bool)arg2;
- (void)deleteEndedLivedRoomWithRoomID:(id)arg1;
- (void)tryLoadCache;
- (id)currentFilterDistance;
- (id)currentCityCode;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
