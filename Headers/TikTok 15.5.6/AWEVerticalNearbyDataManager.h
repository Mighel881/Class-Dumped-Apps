//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

#import "AWEAwemeDeletionMessage-Protocol.h"

@class AWEPOIBannerListDataController, AWERxProperty, NSMutableDictionary, NSNumber, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface AWEVerticalNearbyDataManager : AWEListDataController <AWEAwemeDeletionMessage>
{
    _Bool _isAwemeFirstRequested;
    _Bool _isBannerAndRecommendedPoiLoaded;
    AWERxProperty *_awemeList;
    AWERxProperty *_bannerList;
    NSNumber *_cursor;
    NSNumber *_classCode;
    NSMutableDictionary *_filteredToRaw;
    NSMutableDictionary *_rawToFiltered;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_semaphore> *_sourceLock;
    AWEPOIBannerListDataController *_bannerDataController;
}

@property(nonatomic) _Bool isBannerAndRecommendedPoiLoaded; // @synthesize isBannerAndRecommendedPoiLoaded=_isBannerAndRecommendedPoiLoaded;
@property(nonatomic) _Bool isAwemeFirstRequested; // @synthesize isAwemeFirstRequested=_isAwemeFirstRequested;
@property(retain, nonatomic) AWEPOIBannerListDataController *bannerDataController; // @synthesize bannerDataController=_bannerDataController;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sourceLock; // @synthesize sourceLock=_sourceLock;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(retain, nonatomic) NSMutableDictionary *rawToFiltered; // @synthesize rawToFiltered=_rawToFiltered;
@property(retain, nonatomic) NSMutableDictionary *filteredToRaw; // @synthesize filteredToRaw=_filteredToRaw;
@property(retain, nonatomic) NSNumber *classCode; // @synthesize classCode=_classCode;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) AWERxProperty *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) AWERxProperty *awemeList; // @synthesize awemeList=_awemeList;
- (void).cxx_destruct;
- (void)deleteAwemeWithIDs:(id)arg1;
- (long long)dataSourceIndexFromFilteredIndex:(long long)arg1;
- (long long)filteredDataSourceIndexFromIndex:(long long)arg1;
- (void)calculateFilteredDataSource;
- (void)_calculateFilteredWithSource:(id)arg1 filteded:(id *)arg2 row:(id *)arg3 raw:(id *)arg4;
- (id)_filterDuplicatedDatasourceWithSource:(id)arg1 array:(id)arg2;
- (id)urlString;
- (id)requestParameter;
- (void)requestWithCount:(long long)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDataListWithType:(long long)arg1 resp:(id)arg2 dataList:(id)arg3 filteded:(id)arg4 row:(id)arg5 raw:(id)arg6;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *cityCode;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)deleteEndedLivedRoomWithRoomID:(id)arg1;
- (id)initWithClassCode:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

