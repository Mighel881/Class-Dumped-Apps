//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEPOIRankTopBannerModel, AWEPoiRankBackendTypeFirstOptionModel, AWEPoiRankCityOptionModel, NSArray, NSNumber;

@interface AWEPOIRankFilteredListResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    AWEPOIRankTopBannerModel *_topBanner;
    NSNumber *_cursor;
    NSArray *_filteredList;
    NSArray *_rankItemList;
    AWEPoiRankCityOptionModel *_poiCityOption;
    AWEPoiRankBackendTypeFirstOptionModel *_poiBackendOption;
}

+ (id)rankItemListJSONTransformer;
+ (id)filteredListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEPoiRankBackendTypeFirstOptionModel *poiBackendOption; // @synthesize poiBackendOption=_poiBackendOption;
@property(retain, nonatomic) AWEPoiRankCityOptionModel *poiCityOption; // @synthesize poiCityOption=_poiCityOption;
@property(copy, nonatomic) NSArray *rankItemList; // @synthesize rankItemList=_rankItemList;
@property(copy, nonatomic) NSArray *filteredList; // @synthesize filteredList=_filteredList;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) AWEPOIRankTopBannerModel *topBanner; // @synthesize topBanner=_topBanner;
- (void).cxx_destruct;

@end
