//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/WAPaymentManager.h>

@class _TtC14MainAppLibrary16WAPaymentFactory;

@interface WAPaymentManager (Factory)
@property(readonly, nonatomic) _TtC14MainAppLibrary16WAPaymentFactory *factory;
- (_Bool)cancelIncomingCollectRequestWithTransaction:(id)arg1;
- (_Bool)declineOutgoingCollectRequestWithTransaction:(id)arg1;
- (void)checkFutureproofPaymentMessage:(id)arg1;
- (void)checkCollectRequestTransactionForIncomingPaymentMessage:(id)arg1;
- (void)addOrUpdatePaymentTransactionForIncomingCollectRequestMessage:(id)arg1;
- (void)reloadPaymentMessageBubbleAfterTransactionUpdate:(id)arg1;
- (void)reloadMessageBubblesAfterPaymentTransactionsUpdate:(id)arg1;
@end

