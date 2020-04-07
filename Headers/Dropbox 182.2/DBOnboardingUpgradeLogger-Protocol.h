//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DBPROMPTCampaignResultCustom, DBUpgradePlan, DBUpgradeProduct, NSString;
@protocol DBAnalyticsLogger;

@protocol DBOnboardingUpgradeLogger <NSObject>
- (void)logPageLoad;
- (void)logProductSelectorCancelled;
- (void)logProductSelectorShown;
- (void)logUpgradeFailed;
- (void)logUpgradeSucceeded:(DBUpgradeProduct *)arg1;
- (void)logTapCancelButton;
- (void)logTapSkip;
- (void)logTapBuy;
- (void)logPageImageUrlLoadError;
- (void)logCampaignLoadError;
- (void)logUpgradePageLoadError;
- (void)logProductUnexpectedCountError;
- (void)logPageViewFailed;
- (void)logPageView;
- (void)setUpgradePageType:(unsigned long long)arg1;
- (void)setTrigger:(NSString *)arg1;
- (void)setUpgradePlan:(DBUpgradePlan *)arg1;
- (void)setUpgradeProduct:(DBUpgradeProduct *)arg1;
- (void)setCampaignName:(NSString *)arg1;
- (void)setCampaign:(DBPROMPTCampaignResultCustom *)arg1;
- (void)setLogger:(id <DBAnalyticsLogger>)arg1;
@end
