//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, PSPDFDispatchQueue;
@protocol PSPDFCustomConcurrentQueue;

@interface PSPDFRenderQueue : NSObject
{
    unsigned long long _stats_requestsProcessed;
    unsigned long long _stats_jobsProcessed;
    NSLock *_scheduledTasksLock;
    _Bool onJobAccessQueue_applicationIsTerminating;
    PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *_renderQueue;
    PSPDFDispatchQueue *_jobAccessQueue;
    NSMutableOrderedSet *_pendingJobs;
    NSMutableArray *_runningJobs;
    NSMutableDictionary *_scheduledTasksByRequest;
}

+ (unsigned long long)maximumConcurrentJobCount;
@property(readonly, nonatomic) NSMutableDictionary *scheduledTasksByRequest; // @synthesize scheduledTasksByRequest=_scheduledTasksByRequest;
@property(readonly, nonatomic) NSMutableArray *runningJobs; // @synthesize runningJobs=_runningJobs;
@property(readonly, nonatomic) NSMutableOrderedSet *pendingJobs; // @synthesize pendingJobs=_pendingJobs;
@property(readonly, nonatomic) PSPDFDispatchQueue *jobAccessQueue; // @synthesize jobAccessQueue=_jobAccessQueue;
@property(readonly, nonatomic) PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *renderQueue; // @synthesize renderQueue=_renderQueue;
- (void).cxx_destruct;
- (void)markRunningJobsOutdatedWithDocument:(id)arg1 pages:(id)arg2;
- (void)dequeueJob;
- (void)__printStats;
- (unsigned long long)numberOfRunningJobs;
- (unsigned long long)numberOfQueuedJobs;
- (void)onJobAccessQueue_cancelAllJobs;
- (void)onJobAccessQueue_updatePendingJobs:(id)arg1 byProcessingTasks:(id)arg2 forScheduledRequest:(id)arg3;
- (void)withIntermediateTaskLock_scheduleTask:(id)arg1;
- (void)scheduleTask:(id)arg1;
- (void)scheduleTasks:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)cancelAllTasks;

@end
