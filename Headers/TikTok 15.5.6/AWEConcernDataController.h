//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSMutableArray, NSMutableDictionary, NSNumber;
@protocol AWERecommendUserDataControllerProtocol;

@interface AWEConcernDataController : AWEListDataController
{
    _Bool _shouldShowUploadAddressNotice;
    _Bool _hasNewDataRefreshed;
    _Bool _isForMainConcern;
    double _lastEnterTabTimeStamp;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSNumber *_fetchRecommend;
    NSNumber *_isRecommed;
    long long _type;
    long long _initFetchCount;
    long long _refreshCount;
    long long _loadmoreCount;
    NSMutableArray *_concernCards;
    NSMutableDictionary *_filteredToRaw;
    NSMutableDictionary *_rawToFiltered;
    AWEListDataController<AWERecommendUserDataControllerProtocol> *_recommendDataController;
}

+ (id)noticeCountLaunchParam;
+ (id)requestFeedMonitorParam;
+ (CDUnknownBlockType)_didGetDuplicatedArrayBlock;
@property(retain, nonatomic) AWEListDataController<AWERecommendUserDataControllerProtocol> *recommendDataController; // @synthesize recommendDataController=_recommendDataController;
@property(retain, nonatomic) NSMutableDictionary *rawToFiltered; // @synthesize rawToFiltered=_rawToFiltered;
@property(retain, nonatomic) NSMutableDictionary *filteredToRaw; // @synthesize filteredToRaw=_filteredToRaw;
@property(retain, nonatomic) NSMutableArray *concernCards; // @synthesize concernCards=_concernCards;
@property(nonatomic) long long loadmoreCount; // @synthesize loadmoreCount=_loadmoreCount;
@property(nonatomic) long long refreshCount; // @synthesize refreshCount=_refreshCount;
@property(nonatomic) long long initFetchCount; // @synthesize initFetchCount=_initFetchCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *isRecommed; // @synthesize isRecommed=_isRecommed;
@property(retain, nonatomic) NSNumber *fetchRecommend; // @synthesize fetchRecommend=_fetchRecommend;
@property(retain, nonatomic) NSNumber *maxCursor; // @synthesize maxCursor=_maxCursor;
@property(retain, nonatomic) NSNumber *minCursor; // @synthesize minCursor=_minCursor;
@property(nonatomic) _Bool isForMainConcern; // @synthesize isForMainConcern=_isForMainConcern;
@property(nonatomic) _Bool hasNewDataRefreshed; // @synthesize hasNewDataRefreshed=_hasNewDataRefreshed;
@property(nonatomic) _Bool shouldShowUploadAddressNotice; // @synthesize shouldShowUploadAddressNotice=_shouldShowUploadAddressNotice;
@property(nonatomic) double lastEnterTabTimeStamp; // @synthesize lastEnterTabTimeStamp=_lastEnterTabTimeStamp;
- (void).cxx_destruct;
- (void)trackWhenDeleteDuplicatedItems:(id)arg1 requestId:(id)arg2;
- (void)trackFollowChannelWithNewItemCount:(id)arg1 newRoomCount:(id)arg2 logPb:(id)arg3;
- (id)transferAwemeModelForLive:(id)arg1;
- (CDUnknownBlockType)isEqualBlock;
- (id)transferAwemeListIfNeededWithArray:(id)arg1;
- (void)updateConcernCardListInfo:(id)arg1 feedType:(long long)arg2 awemeBlock:(CDUnknownBlockType)arg3;
- (id)locationAccess;
- (id)addressBookAccess;
- (_Bool)needUploadHistoryAwemeIds;
- (id)urlString;
- (void)saveConcernCardsWithArray:(id)arg1;
- (void)saveConcernCards;
- (void)compareIfNewDataHasFetched:(id)arg1;
- (long long)dataSourceIndexFromFilteredIndex:(long long)arg1;
- (long long)filteredDataSourceIndexFromIndex:(long long)arg1;
- (void)calculateFilteredDataSource;
- (id)filterDuplicatedDatasourceWithArray:(id)arg1 requestId:(id)arg2 isEqual:(CDUnknownBlockType)arg3 didGetDuplicatedArray:(CDUnknownBlockType)arg4;
- (id)loadmoreDataSourceWithArray:(id)arg1 requestId:(id)arg2;
- (id)refreshDataSourceWithArray:(id)arg1 cleanRefresh:(_Bool)arg2 requestId:(id)arg3;
- (void)insertEmptyModelIfNeed:(CDUnknownBlockType)arg1;
- (void)changeModelTypeIfNeed:(id)arg1;
- (void)updateWithResponse:(id)arg1;
- (_Bool)_isAddressBookUploaded;
- (_Bool)_isValidRequest;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadWithPullType:(long long)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)impressionCardsStorageKey;
- (void)addConcernCardID:(id)arg1;
- (id)impressionIDsArray;
- (id)lastFeedsStorageKey;
- (void)saveLastFeedsWithArray:(id)arg1;
- (void)cleanLastFeedArray;
- (id)lastFeedIDS;
- (void)manageReturnFeedIDs:(id)arg1 andItemIDs:(id)arg2 withResult:(_Bool)arg3;
- (id)attachItemIDsToParam:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

