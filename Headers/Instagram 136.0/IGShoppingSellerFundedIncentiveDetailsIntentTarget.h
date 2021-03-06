//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGeneratedIntentTarget.h>

@class IGSessionTracker, IGUserSession, NSString;

@interface IGShoppingSellerFundedIncentiveDetailsIntentTarget : FBGeneratedIntentTarget
{
    _Bool _disablePullToRefresh;
    IGUserSession *_userSession;
    NSString *_incentiveId;
    NSString *_merchantId;
    NSString *_merchantUsername;
    NSString *_priorModule;
    NSString *_priorSubmodule;
    IGSessionTracker *_shoppingSessionTracker;
}

@property(readonly, nonatomic) IGSessionTracker *shoppingSessionTracker; // @synthesize shoppingSessionTracker=_shoppingSessionTracker;
@property(readonly, nonatomic) _Bool disablePullToRefresh; // @synthesize disablePullToRefresh=_disablePullToRefresh;
@property(readonly, nonatomic) NSString *priorSubmodule; // @synthesize priorSubmodule=_priorSubmodule;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) NSString *merchantUsername; // @synthesize merchantUsername=_merchantUsername;
@property(readonly, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(readonly, nonatomic) NSString *incentiveId; // @synthesize incentiveId=_incentiveId;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 incentiveId:(id)arg2 merchantId:(id)arg3 merchantUsername:(id)arg4 priorModule:(id)arg5 priorSubmodule:(id)arg6 disablePullToRefresh:(_Bool)arg7 shoppingSessionTracker:(id)arg8;

@end

