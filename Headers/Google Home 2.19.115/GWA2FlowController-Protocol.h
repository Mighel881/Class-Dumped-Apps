//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ORCH2FinishAction, ORCH2SubmitRequest;

@protocol GWA2FlowController <NSObject>
- (void)finishWithAction:(ORCH2FinishAction *)arg1;
- (void)submitWithRequest:(ORCH2SubmitRequest *)arg1 completion:(void (^)(GWA2Result *))arg2;
@end

