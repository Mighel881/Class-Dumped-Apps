//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SKPayment, SKPaymentQueue, SKPaymentTransaction, SKProduct;

@protocol IESStoreObserver <NSObject>
- (_Bool)storeShouldAddAppStorePayment:(SKPaymentQueue *)arg1 payment:(SKPayment *)arg2 forProduct:(SKProduct *)arg3;
- (void)storeFirstLoadTransaction:(SKPaymentTransaction *)arg1 fromObserver:(_Bool)arg2;
- (void)storeDidPurchaseTransactionAbnormally:(SKPaymentTransaction *)arg1;
- (void)storeDidUpdatedTransaction:(SKPaymentTransaction *)arg1;
- (void)storeDidResumeTransaction:(SKPaymentTransaction *)arg1;
@end
