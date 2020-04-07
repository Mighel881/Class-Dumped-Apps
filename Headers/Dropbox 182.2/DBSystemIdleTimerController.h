//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface DBSystemIdleTimerController : NSObject
{
    NSHashTable *_delegates;
    _Bool _systemIdleTimerDisabled;
    id _batteryLevelObserver;
    id _batteryStateObserver;
}

- (void).cxx_destruct;
- (void)db_restoreSystemIdleTimerIfNeeded;
- (void)db_periodicallyCheckOnDisabledSystemIdleTimer;
- (void)db_stopMonitoringBatteryLevels;
- (void)db_startMonitoringBatteryLevels;
- (void)db_updateSystemIdleTimerForCurrentState;
- (void)db_delegatesChanged;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (_Bool)db_areAllDelegatesIdle;
- (void)db_setup;
- (void)updateTimerIfNeeded;
- (void)dealloc;
- (id)init;

@end
