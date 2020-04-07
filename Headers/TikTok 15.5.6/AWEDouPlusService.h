//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEDouPlusService-Protocol.h"

@class NSString;

@interface AWEDouPlusService : HTSService <AWEDouPlusService>
{
}

+ (id)douplusRNURLStringWithParams:(id)arg1 originURLString:(id)arg2;
+ (void)monitorDouPlusLiveWithSuccess:(_Bool)arg1 isRecharge:(_Bool)arg2 params:(id)arg3;
+ (void)tryPreLoadDouPlusIAPProducts;
+ (_Bool)isLimitDouPlusEntryGuideAnimation;
+ (long long)douPlusEntryGuideStyleAterPostVideo;
+ (void)fetchAdsEntranceWithItemID:(id)arg1 enterFrom:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (_Bool)shouldShowAdsEntryInSlidePanel;
+ (void)closeTopDouPlusWebVCsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)handleDouOrderResult:(_Bool)arg1;
+ (void)queryDouPlusOrderWithParams:(id)arg1 remainCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)monitorDouPlusLiveShowWithURLString:(id)arg1 webViewError:(id)arg2;
+ (void)openLiveDouPlusWithUrlString:(id)arg1 isMonitorLiveShow:(_Bool)arg2;
+ (void)openLiveDouPlusWithUrlString:(id)arg1;
+ (_Bool)canOpenSpecialPayDeskWithOriginUrl:(id)arg1;
+ (_Bool)openSpecialPayDeskWithOriginUrl:(id)arg1;
+ (id)douPlusEntryTitleWithType:(long long)arg1;
+ (_Bool)shouldShowDouPlusEntrance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
