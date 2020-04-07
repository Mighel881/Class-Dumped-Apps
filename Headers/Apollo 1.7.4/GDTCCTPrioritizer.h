//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTCORPrioritizer-Protocol.h"

@class GDTCORClock, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface GDTCCTPrioritizer : NSObject <GDTCORPrioritizer>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_events;
    GDTCORClock *_timeOfLastDailyUpload;
}

+ (id)sharedInstance;
+ (void)load;
@property(retain, nonatomic) GDTCORClock *timeOfLastDailyUpload; // @synthesize timeOfLastDailyUpload=_timeOfLastDailyUpload;
@property(retain, nonatomic) NSMutableSet *events; // @synthesize events=_events;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)packageExpired:(id)arg1;
- (void)packageDelivered:(id)arg1 successful:(_Bool)arg2;
- (id)logEventsOkToSendDaily;
- (id)logEventsOkToSendOnWifi;
- (id)logEventsOkToSendOnMobileData;
- (id)uploadPackageWithConditions:(long long)arg1;
- (void)prioritizeEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
