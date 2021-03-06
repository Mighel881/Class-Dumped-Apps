//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGeneratedIntentTarget.h>

@class IGFeedItem, IGProductItem, IGSessionTracker, IGShoppingPDPPerformanceLogger, IGShoppingPDPPresentationContext, IGSponsoredSupportConfiguration, IGUser, IGUserSession, NSDictionary, NSString;
@protocol IGShoppingPDPViewControllerDelegate;

@interface IGShoppingPDPIntentTarget : FBGeneratedIntentTarget
{
    IGUserSession *_userSession;
    IGProductItem *_productItem;
    IGFeedItem *_feedItem;
    IGUser *_user;
    IGShoppingPDPPresentationContext *_presentationContext;
    id <IGShoppingPDPViewControllerDelegate> _delegate;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGSessionTracker *_sessionTracker;
    IGShoppingPDPPerformanceLogger *_performanceLogger;
    NSString *_priorModule;
    NSDictionary *_loggingExtras;
}

@property(readonly, nonatomic) NSDictionary *loggingExtras; // @synthesize loggingExtras=_loggingExtras;
@property(readonly, nonatomic) NSString *priorModule; // @synthesize priorModule=_priorModule;
@property(readonly, nonatomic) IGShoppingPDPPerformanceLogger *performanceLogger; // @synthesize performanceLogger=_performanceLogger;
@property(readonly, nonatomic) IGSessionTracker *sessionTracker; // @synthesize sessionTracker=_sessionTracker;
@property(readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration; // @synthesize sponsoredSupportConfiguration=_sponsoredSupportConfiguration;
@property(readonly, nonatomic) id <IGShoppingPDPViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGShoppingPDPPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGProductItem *productItem; // @synthesize productItem=_productItem;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 productItem:(id)arg2 feedItem:(id)arg3 user:(id)arg4 presentationContext:(id)arg5 delegate:(id)arg6 sponsoredSupportConfiguration:(id)arg7 sessionTracker:(id)arg8 performanceLogger:(id)arg9 priorModule:(id)arg10 loggingExtras:(id)arg11;

@end

