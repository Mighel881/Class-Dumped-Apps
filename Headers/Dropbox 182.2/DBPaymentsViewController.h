//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DBLoadingView, DBPayments, DBPromptCampaignManager, DBUpgradeTrigger, NSString;
@protocol DBAnalyticsLogger, DBAuthLegacyStormcrow;

@interface DBPaymentsViewController : UIViewController
{
    DBLoadingView *_loadingView;
    _Bool _hasCheckedTrialPricingStormcrow;
    long long _trialPricingVariant;
    DBPayments *_payments;
    NSString *_userId;
    id <DBAnalyticsLogger> _adlLogger;
    id <DBAuthLegacyStormcrow> _stormcrow;
    DBPromptCampaignManager *_campaignManager;
    DBUpgradeTrigger *_trigger;
}

+ (_Bool)db_shouldPreventUpgradingWithStormcrow:(id)arg1;
@property(readonly, nonatomic) DBUpgradeTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) DBPromptCampaignManager *campaignManager; // @synthesize campaignManager=_campaignManager;
@property(readonly, nonatomic) id <DBAuthLegacyStormcrow> stormcrow; // @synthesize stormcrow=_stormcrow;
@property(readonly, nonatomic) id <DBAnalyticsLogger> adlLogger; // @synthesize adlLogger=_adlLogger;
@property(readonly, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) DBPayments *payments; // @synthesize payments=_payments;
- (void).cxx_destruct;
- (long long)db_trialPricingVariant;
- (id)upgradeOffer;
- (id)db_trialPricingFormatString:(id)arg1;
- (id)trialPricingLabelWithFont:(id)arg1;
- (void)showProductSelectorForProducts:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 upgradeBlock:(CDUnknownBlockType)arg3 style:(long long)arg4;
- (id)subscriptionDetailsViewV2WithTermsView:(id)arg1 backgroundColor:(id)arg2;
- (void)db_paymentsUpgradeFailed:(id)arg1;
- (void)db_paymentsTransitionSucceeded:(id)arg1;
- (void)db_paymentsStatusChanged:(id)arg1;
- (void)db_didBecomeActive:(id)arg1;
- (void)db_willResignActive:(id)arg1;
- (id)upgradeButtonTextOverride;
- (_Bool)shouldShowTermsView;
- (void)dismissController:(CDUnknownBlockType)arg1;
- (void)dismissController;
- (void)handleUpgradeFailed;
- (void)handleCrossgradeSucceeded:(id)arg1;
- (void)handleDowngradeSucceeded:(id)arg1;
- (void)handleUpgradeSucceeded:(id)arg1;
- (void)handlePaymentStatusChanged;
- (void)setLoadingViewVisible:(_Bool)arg1 withTitle:(id)arg2;
- (void)setLoadingViewVisible:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initForPurchaseWithUserId:(id)arg1 trigger:(id)arg2 payments:(id)arg3 stormcrow:(id)arg4 campaignManager:(id)arg5 logger:(id)arg6;
- (id)initForTransitionWithUserId:(id)arg1 payments:(id)arg2;

@end
