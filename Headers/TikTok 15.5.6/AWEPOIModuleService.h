//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEPOIModuleService-Protocol.h"

@class AWEPOIRecommendDataController, NSString;

@interface AWEPOIModuleService : HTSService <AWEPOIModuleService>
{
    AWEPOIRecommendDataController *_poiRecommendDataController;
}

@property(retain, nonatomic) AWEPOIRecommendDataController *poiRecommendDataController; // @synthesize poiRecommendDataController=_poiRecommendDataController;
- (void).cxx_destruct;
- (_Bool)isForceInTheSameCityEnabled;
- (void)setForceInTheSameCityEnabled:(_Bool)arg1;
- (id)createPOICollectView;
- (id)cityInfo;
- (id)ratingSnapshotWithRating:(double)arg1 textFont:(id)arg2 textColor:(id)arg3;
- (void)showSubmitRatingPanelFromViewController:(id)arg1 poiID:(id)arg2 poiName:(id)arg3 objectID:(id)arg4 objectType:(long long)arg5 couponID:(long long)arg6 spuID:(id)arg7 trackerData:(id)arg8;
- (void)notifyPOIDetailPageVideoFinishedPlay;
- (id)displayCountForPOIInfo:(id)arg1;
- (id)baseTrackerParamsForPOIInfo:(id)arg1 enterFrom:(id)arg2;
- (id)baseTrackerParamsForPOIInfo:(id)arg1;
- (void)trackEnterPOIDetailWithPOIID:(id)arg1 enterFrom:(id)arg2 enterMethod:(id)arg3 extraParams:(id)arg4;
- (id)nearbyLocationPromptDateKey;
- (long long)nearbyLocationPromptInterval;
- (void)ironManpreviewImageWithThumbnailURLs:(id)arg1 imageURLs:(id)arg2 startIndex:(long long)arg3;
- (id)currentCityCode;
- (void)checkMerchantEntry;
- (void)handleMerchantEntryTapped;
- (void)requestPOIRecommendWithLocation:(id)arg1 selectedPOIs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestPOIRecommendWithLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showPOIPickerWithLocationInfos:(id)arg1 splitDomains:(_Bool)arg2 isOversea:(_Bool)arg3 entrance:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
- (void)showPOIPickerWithLocationInfos:(id)arg1 splitDomains:(_Bool)arg2 isOversea:(_Bool)arg3 entrance:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)pageOfPOIPickerWithLocationInfos:(id)arg1 splitDomains:(_Bool)arg2 isOversea:(_Bool)arg3 entrance:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
- (id)pageOfPOIPickerWithLocationInfos:(id)arg1 splitDomains:(_Bool)arg2 isOversea:(_Bool)arg3 entrance:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)isCurrentPageIsPOIRating:(id)arg1;
- (_Bool)hasUnreadCouponStatusChanged;
- (id)poiFilteringViewControllerWithCityCode:(id)arg1 poiClassCode:(id)arg2 referString:(id)arg3;
- (void)handleEnterCouponPage;
- (void)handleReceiveCoupon;
- (void)handleBubbleDisplayed;
- (_Bool)shouldShowCouponGuideInSideBar;
- (_Bool)shouldShowUnusedCounponsBubble;
- (void)handleReserveMessage:(id)arg1;
- (id)createLiveLocationManagerViewControllerWithScene:(unsigned long long)arg1 viewControllerWillHideBlock:(CDUnknownBlockType)arg2 poiIDDidChangeBlock:(CDUnknownBlockType)arg3 room:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
