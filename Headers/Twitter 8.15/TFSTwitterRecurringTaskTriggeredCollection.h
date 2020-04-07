//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TFSTwitterRecurringTaskTriggeredCollection : NSObject
{
    NSMutableArray *_pendingTaskInfos;
    NSMutableArray *_activeTaskItems;
    unsigned long long _concurrentActiveTasks;
    double _maximumTaskBlockingDuration;
}

@property(nonatomic) double maximumTaskBlockingDuration; // @synthesize maximumTaskBlockingDuration=_maximumTaskBlockingDuration;
@property(nonatomic) unsigned long long concurrentActiveTasks; // @synthesize concurrentActiveTasks=_concurrentActiveTasks;
- (void).cxx_destruct;
- (void)clearAllTimeouts;
- (void)clearPendingTriggeredTask:(id)arg1;
- (_Bool)completeActivatedTask:(id)arg1;
- (id)activateNextTriggeredTask:(id)arg1 timeoutBlock:(CDUnknownBlockType)arg2;
- (_Bool)addTriggeredTask:(id)arg1 event:(id)arg2 priority:(long long)arg3;
- (void)dealloc;
- (id)init;

@end
