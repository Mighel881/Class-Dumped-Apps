//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@class DCDUserSearchWorker;

@interface DCDUserSearchWorkerManager : RCTEventEmitter
{
    DCDUserSearchWorker *_worker;
}

+ (const struct RCTMethodInfo *)__rct_export__661;
+ (const struct RCTMethodInfo *)__rct_export__580;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) DCDUserSearchWorker *worker; // @synthesize worker=_worker;
- (void).cxx_destruct;
- (void)terminate;
- (void)onmessage:(id)arg1;
- (void)handleReturnResults:(id)arg1;
- (id)supportedEvents;
- (void)stopObserving;
- (void)startObserving;
- (id)methodQueue;

@end
