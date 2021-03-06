//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBPaymentsOfferProvider-Protocol.h"
#import "DBPaymentsPricing-Protocol.h"
#import "DBPaymentsProducts-Protocol.h"
#import "DBPaymentsPurchase-Protocol.h"
#import "DBPaymentsReceipts-Protocol.h"
#import "DBPaymentsSubscription-Protocol.h"
#import "DBPaymentsUpgrading-Protocol.h"
#import "DBStoreKitPurchaseDelegate-Protocol.h"

@class DBDropboxSubscription, DBLegacyAnalyticsLogger, DBStoreKit, DBStoreKitPaymentsPricing, NSBundle, NSDictionary, NSNotificationCenter, NSString, NSTimer, UIApplication, UIDevice;
@protocol DBAnalyticsLogger, DBModalManaging, DBPaymentsAlertDelegate, DBPaymentsUpdateDelegate;

@interface DBPayments : NSObject <DBStoreKitPurchaseDelegate, DBPaymentsUpgrading, DBPaymentsProducts, DBPaymentsPricing, DBPaymentsPurchase, DBPaymentsSubscription, DBPaymentsReceipts, DBPaymentsOfferProvider>
{
    NSString *_userId;
    DBLegacyAnalyticsLogger *_legacyLogger;
    id <DBAnalyticsLogger> _logger;
    NSNotificationCenter *_notificationCenter;
    UIDevice *_device;
    UIApplication *_application;
    NSBundle *_mainBundle;
    id <DBModalManaging> _modalManager;
    _Bool _isStopped;
    NSTimer *_purchaseRetryTimer;
    double _purchaseRetryTimeInterval;
    unsigned long long _purchaseBackgroundTask;
    long long _transitionType;
    _Bool _receiptRefreshing;
    DBDropboxSubscription *_dropboxSubscription;
    DBStoreKit *_storeKit;
    NSDictionary *_storeKitProducts;
    DBStoreKitPaymentsPricing *_storeKitPricing;
    _Bool _isLoadingPlans;
    _Bool _isPurchasing;
    _Bool _hasPendingSubscriptionReload;
    id <DBPaymentsUpdateDelegate> _updateDelegate;
    id <DBPaymentsAlertDelegate> _alertDelegate;
}

+ (id)shortBillingFrequencyStringForProduct:(id)arg1;
+ (id)billingFrequencyStringForProduct:(id)arg1;
+ (id)db_purchasableProductWithId:(id)arg1 fromPlans:(id)arg2;
+ (_Bool)db_hasPurchasableProductWithId:(id)arg1 fromPlans:(id)arg2 transitionType:(long long)arg3;
+ (id)db_getProductWithId:(id)arg1 fromPlans:(id)arg2 restrictToTrialsOnly:(_Bool)arg3;
+ (id)db_getProductWithId:(id)arg1 fromPlans:(id)arg2;
@property(readonly, nonatomic) DBStoreKitPaymentsPricing *storeKitPricing; // @synthesize storeKitPricing=_storeKitPricing;
@property(readonly, nonatomic) _Bool hasPendingSubscriptionReload; // @synthesize hasPendingSubscriptionReload=_hasPendingSubscriptionReload;
@property(readonly, nonatomic) _Bool isPurchasing; // @synthesize isPurchasing=_isPurchasing;
@property(readonly, nonatomic) _Bool isLoadingPlans; // @synthesize isLoadingPlans=_isLoadingPlans;
@property(nonatomic) __weak id <DBPaymentsAlertDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
@property(nonatomic) __weak id <DBPaymentsUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
- (void).cxx_destruct;
- (void)db_alertWithTitle:(id)arg1 message:(id)arg2;
- (void)db_alertForUpgradeError:(id)arg1;
- (void)db_alertForLoadPlansError:(id)arg1;
- (void)db_alertForInvalidProductError;
- (void)db_alertWithMessage:(id)arg1;
- (void)storeKitDidDeferPurchase:(id)arg1;
- (void)storeKit:(id)arg1 didFailPurchaseWithError:(id)arg2;
- (void)storeKit:(id)arg1 didCancelPurchaseWithError:(id)arg2;
- (void)storeKit:(id)arg1 didPurchaseProductWithProductId:(id)arg2 transactionIdentifier:(id)arg3 receiptData:(id)arg4 replay:(_Bool)arg5;
- (void)db_completeRefreshReceipt:(id)arg1 processedReceipt:(_Bool)arg2 error:(id)arg3;
- (void)db_retryRefreshReceipt:(id)arg1;
- (void)db_scheduleRefreshReceiptRetry:(id)arg1;
- (void)db_refreshReceipt:(id)arg1;
@property(readonly, nonatomic) _Bool isRefreshingReceipt;
- (void)db_completeRefreshReceiptWithError:(id)arg1 loadingView:(id)arg2;
- (void)refreshReceipt;
- (void)db_subscriptionDidChange;
- (id)scheduledSubscription;
- (id)currentSubscription;
- (_Bool)canManageSubscriptions;
- (void)db_invalidatePurchaseBackgroundTaskIfNeeded;
- (void)db_retrySubmitReceipt:(id)arg1;
- (void)db_scheduleSubmitReceiptRetry:(id)arg1;
- (void)db_schedulePaymentPlanRefresh;
- (void)db_submitReceipt:(id)arg1;
- (void)db_startStoreKitPurchaseOfProductId:(id)arg1 withPlans:(id)arg2 existingPayment:(id)arg3 transitionType:(long long)arg4;
- (id)db_productIdsFromPlans:(id)arg1;
- (void)db_purchaseDidEnd;
- (void)db_purchaseDidBegin:(long long)arg1;
- (void)db_purchaseProductId:(id)arg1 existingPayment:(id)arg2 errorKind:(id)arg3 transitionType:(long long)arg4;
- (void)transitionToProduct:(id)arg1;
- (void)purchaseProduct:(id)arg1;
- (void)continueAppStorePurchase:(id)arg1;
- (void)db_loadPlansWithCompletion:(CDUnknownBlockType)arg1 shouldClearCachedPlans:(_Bool)arg2 shouldRefreshCachedPlans:(_Bool)arg3;
- (void)promotedAppStorePurchaseWithPayment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fullPriceInformationForProducts:(id)arg1 abbreviateDuration:(_Bool)arg2;
- (id)markdownStringForProduct:(id)arg1 inProducts:(id)arg2;
- (id)savingsPercentageStringForProduct:(id)arg1 inProducts:(id)arg2;
- (id)monthlyPriceStringAndAccessibilityLabelForProduct:(id)arg1;
- (id)priceStringAndAccessibilityLabelForProduct:(id)arg1 abbreviateDuration:(_Bool)arg2;
- (id)mostExpensiveProductInProducts:(id)arg1;
- (id)db_downgradablePlans;
- (id)db_upgradablePlansForPlanOfferType:(unsigned long long)arg1;
- (_Bool)db_hasDowngradablePlan;
- (_Bool)db_hasUpgradablePlanForOfferType:(unsigned long long)arg1;
- (_Bool)canPurchaseProduct:(id)arg1;
- (id)test_firstPurchasableOfferWithTrial:(_Bool)arg1;
- (id)firstPurchasableOfferWithProductMatcher:(id)arg1;
- (id)productsInPlan:(unsigned long long)arg1;
- (_Bool)isDowngradeScheduled;
- (_Bool)isOnPlan:(unsigned long long)arg1;
- (_Bool)shouldShowPlusCrossgradeProducts;
- (_Bool)shouldShowCrossgradeProducts;
- (_Bool)shouldShowTrialUpgradeToPlan:(unsigned long long)arg1;
- (_Bool)shouldShowDowngradeToPlan:(unsigned long long)arg1;
- (_Bool)shouldShowUpgradeToPlan:(unsigned long long)arg1;
- (_Bool)isTrialEligible;
- (id)db_crossgradableProductsWithOfferType:(unsigned long long)arg1;
- (id)crossgradableProducts;
- (id)plusCrossgradableProducts;
- (id)allPlans;
- (void)db_finishLoadingStoreKitProducts:(id)arg1 error:(id)arg2;
- (void)db_loadStoreKitProductsForPlans:(id)arg1;
- (void)db_finishLoadingPlans:(id)arg1 error:(id)arg2;
- (void)db_loadPlansClearCachedPlans:(_Bool)arg1 refreshCachedPlans:(_Bool)arg2;
- (void)refreshPlans;
- (void)loadPlans;
- (void)reloadPlans;
- (void)dealloc;
- (void)stop;
- (void)db_commonInitWithUserId:(id)arg1 storeKit:(id)arg2 apiClient:(id)arg3 boltClient:(id)arg4 legacyLogger:(id)arg5 logger:(id)arg6 notificationCenter:(id)arg7 requestsTestManager:(id)arg8 device:(id)arg9 application:(id)arg10 mainBundle:(id)arg11 noauthStormcrow:(id)arg12 modalManager:(id)arg13;
- (id)initWithUserId:(id)arg1 storeKit:(id)arg2 apiClient:(id)arg3 boltClient:(id)arg4 modalManager:(id)arg5 legacyLogger:(id)arg6 logger:(id)arg7 notificationCenter:(id)arg8 requestsTestManager:(id)arg9 device:(id)arg10 application:(id)arg11 mainBundle:(id)arg12 noauthStormcrow:(id)arg13;
- (id)initWithUserId:(id)arg1 storeKit:(id)arg2 apiClient:(id)arg3 boltClient:(id)arg4 noauthStormcrow:(id)arg5 modalManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

