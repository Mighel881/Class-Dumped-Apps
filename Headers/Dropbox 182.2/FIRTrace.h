//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/FIRPerformanceAttributable-Protocol.h>

@class FPRCounterList, FPRTraceBackgroundActivityTracker, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FIRTrace : NSObject <FIRPerformanceAttributable>
{
    _Bool _isStage;
    _Bool _internal;
    NSString *_name;
    NSMutableDictionary *_customAttributes;
    NSObject<OS_dispatch_queue> *_customAttributesSerialQueue;
    NSDate *_startTime;
    NSDate *_stopTime;
    FPRTraceBackgroundActivityTracker *_backgroundActivityTracker;
    NSMutableArray *_stages;
    FIRTrace *_activeStage;
    FPRCounterList *_counterList;
    NSMutableArray *_activeSessions;
    NSObject<OS_dispatch_queue> *_sessionIdSerialQueue;
}

@property(nonatomic, getter=isInternal) _Bool internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIdSerialQueue; // @synthesize sessionIdSerialQueue=_sessionIdSerialQueue;
@property(retain, nonatomic) NSMutableArray *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(readonly, nonatomic) FPRCounterList *counterList; // @synthesize counterList=_counterList;
@property(retain, nonatomic) FIRTrace *activeStage; // @synthesize activeStage=_activeStage;
@property(retain, nonatomic) NSMutableArray *stages; // @synthesize stages=_stages;
@property(nonatomic) _Bool isStage; // @synthesize isStage=_isStage;
@property(retain, nonatomic) FPRTraceBackgroundActivityTracker *backgroundActivityTracker; // @synthesize backgroundActivityTracker=_backgroundActivityTracker;
@property(retain, nonatomic) NSDate *stopTime; // @synthesize stopTime=_stopTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *customAttributesSerialQueue; // @synthesize customAttributesSerialQueue=_customAttributesSerialQueue;
@property(retain, nonatomic) NSMutableDictionary *customAttributes; // @synthesize customAttributes=_customAttributes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isTraceActive;
- (_Bool)isTraceStopped;
- (_Bool)isTraceStarted;
- (void)updateTraceWithSessionId;
- (void)removeAttribute:(id)arg1;
- (id)valueForAttribute:(id)arg1;
- (void)setValue:(id)arg1 forAttribute:(id)arg2;
@property(readonly, nonatomic) NSDictionary *attributes;
- (void)deleteMetric:(id)arg1;
- (void)incrementMetric:(id)arg1 byInt:(long long)arg2;
- (void)setIntValue:(long long)arg1 forMetric:(id)arg2;
- (long long)valueForIntMetric:(id)arg1;
@property(readonly) unsigned long long numberOfCounters;
@property(readonly) NSDictionary *counters;
- (void)stopActiveStage;
- (void)startStageNamed:(id)arg1;
- (void)startStageNamed:(id)arg1 startTime:(id)arg2;
@property(readonly) NSArray *sessions;
@property(readonly, nonatomic) long long backgroundTraceState;
- (_Bool)isCompleteAndValid;
@property(readonly, nonatomic) double startTimeSinceEpoch;
@property(readonly, nonatomic) double totalTraceTimeInterval;
- (void)cancel;
- (void)stop;
- (void)startWithStartTime:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initTraceWithName:(id)arg1;
- (id)initInternalTraceWithName:(id)arg1;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
