//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/PTVModelSessionTask-Protocol.h>
#import <T1Twitter/TNLRequestDelegate-Protocol.h>

@class NSString, TNLRequestConfiguration;
@protocol PTVModelSessionTaskContext;

@interface T1NetworkMonitorSessionTask : NSObject <PTVModelSessionTask, TNLRequestDelegate>
{
    TNLRequestConfiguration *_config;
    id <PTVModelSessionTaskContext> _context;
}

@property(readonly, nonatomic) id <PTVModelSessionTaskContext> ptv_context; // @synthesize ptv_context=_context;
- (void).cxx_destruct;
- (void)tnl_requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)tnl_requestOperation:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3;
- (id)tnl_completionQueueForRequestOperation:(id)arg1;
- (id)tnl_delegateQueueForRequestOperation:(id)arg1;
- (void)ptv_start;
- (id)initWithConfig:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

