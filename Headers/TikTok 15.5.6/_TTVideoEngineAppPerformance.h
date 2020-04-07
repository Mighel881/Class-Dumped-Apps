//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSTimer;
@protocol OS_dispatch_queue;

@interface _TTVideoEngineAppPerformance : NSObject
{
    NSObject<OS_dispatch_queue> *_collectorQueue;
    NSHashTable *_observers;
    NSTimer *_scheduledTimer;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSTimer *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_didEnterBackground;
- (void)_willEnterForeground;
- (void)_scheduledTimerEvent;
- (void)_tryToStopScheduledTimer;
- (void)_tryToStartScheduledTimer;
- (void)_resetScheduledTimer;
- (id)init;
- (void)dealloc;

@end
