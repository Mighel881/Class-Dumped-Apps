//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SCSDKCoreKit/AnalyticsEventsQueueDelegate-Protocol.h>

@class AnalyticsEventsQueue, NSString;
@protocol OS_dispatch_queue;

@interface SCSDKHeartbeatEventsQueue : NSObject <AnalyticsEventsQueueDelegate>
{
    AnalyticsEventsQueue *_eventsQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)_heartbeatEmitPeriod;
- (id)_hearbeatKeyForKitType:(int)arg1;
- (_Bool)_isTimeForHeartbeatForKitType:(int)arg1;
- (id)eventsQueue:(id)arg1 parseEvents:(id)arg2 maxSequenceId:(long long)arg3;
- (void)addEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

