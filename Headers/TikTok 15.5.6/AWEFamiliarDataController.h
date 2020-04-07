//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

#import "AWESmartFeedDataControllerProtocol-Protocol.h"

@class AWESmartFeedLastViewModel, NSMutableDictionary, NSMutableSet, NSNumber, NSString;
@protocol AWERecommendUserDataControllerProtocol;

@interface AWEFamiliarDataController : AWEListDataController <AWESmartFeedDataControllerProtocol>
{
    _Bool _isFullscreen;
    _Bool _hasUpdatedItems;
    _Bool _isVCDAuthFirstTime;
    double _lastEnterTabTimeStamp;
    AWESmartFeedLastViewModel *_lastViewModel;
    unsigned long long _freshCount;
    NSString *_blankPanelText;
    unsigned long long _totalCount;
    NSNumber *_cursor;
    NSNumber *_level;
    NSNumber *_fetchCount;
    NSNumber *_recommendCursor;
    NSMutableDictionary *_filteredToRaw;
    NSMutableDictionary *_rawToFiltered;
    NSMutableSet *_recommendUserSet;
    AWEListDataController<AWERecommendUserDataControllerProtocol> *_recommendDataController;
}

+ (CDUnknownBlockType)_didGetDuplicatedArrayBlock;
@property(retain, nonatomic) AWEListDataController<AWERecommendUserDataControllerProtocol> *recommendDataController; // @synthesize recommendDataController=_recommendDataController;
@property(retain, nonatomic) NSMutableSet *recommendUserSet; // @synthesize recommendUserSet=_recommendUserSet;
@property(retain, nonatomic) NSMutableDictionary *rawToFiltered; // @synthesize rawToFiltered=_rawToFiltered;
@property(retain, nonatomic) NSMutableDictionary *filteredToRaw; // @synthesize filteredToRaw=_filteredToRaw;
@property(retain, nonatomic) NSNumber *recommendCursor; // @synthesize recommendCursor=_recommendCursor;
@property(retain, nonatomic) NSNumber *fetchCount; // @synthesize fetchCount=_fetchCount;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool isVCDAuthFirstTime; // @synthesize isVCDAuthFirstTime=_isVCDAuthFirstTime;
@property(copy, nonatomic) NSString *blankPanelText; // @synthesize blankPanelText=_blankPanelText;
@property(nonatomic) unsigned long long freshCount; // @synthesize freshCount=_freshCount;
@property(nonatomic) _Bool hasUpdatedItems; // @synthesize hasUpdatedItems=_hasUpdatedItems;
@property(retain, nonatomic) AWESmartFeedLastViewModel *lastViewModel; // @synthesize lastViewModel=_lastViewModel;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(nonatomic) double lastEnterTabTimeStamp; // @synthesize lastEnterTabTimeStamp=_lastEnterTabTimeStamp;
- (void).cxx_destruct;
- (id)locationAccess;
- (id)addressBookAccess;
- (void)updateConcernCardListInfo:(id)arg1 feedType:(long long)arg2 awemeBlock:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)isEqualBlock;
- (id)URLString;
- (void)trackWhenDeleteDuplicatedItems:(id)arg1 requestId:(id)arg2;
- (long long)dataSourceIndexFromFilteredIndex:(long long)arg1;
- (long long)filteredDataSourceIndexFromIndex:(long long)arg1;
- (void)calculateFilteredDataSource;
- (void)recordRecommendUser:(id)arg1;
- (id)filterDuplicatedRecommendUserWithArray:(id)arg1;
- (id)filterDuplicatedDatasourceWithArray:(id)arg1 requestId:(id)arg2 isEqual:(CDUnknownBlockType)arg3 didGetDuplicatedArray:(CDUnknownBlockType)arg4;
- (id)loadmoreDataSourceWithArray:(id)arg1 requestId:(id)arg2;
- (id)refreshDataSourceWithArray:(id)arg1 cleanRefresh:(_Bool)arg2 requestId:(id)arg3;
- (void)insertEmptyModelIfNeed:(CDUnknownBlockType)arg1;
- (void)reLogin;
- (id)transferAwemeModelForUser:(id)arg1;
- (id)transferAwemeModelForLive:(id)arg1;
- (id)transferAwemeListIfNeededWithArray:(id)arg1;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadListWithPullType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *firstPublishedVideoId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
