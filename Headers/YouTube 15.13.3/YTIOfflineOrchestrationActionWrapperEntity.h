//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIOfflineOrchestrationAction;

@interface YTIOfflineOrchestrationActionWrapperEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIOfflineOrchestrationAction *actionProto; // @dynamic actionProto;
@property(retain, nonatomic) NSMutableArray *childActionIdsArray; // @dynamic childActionIdsArray;
@property(readonly, nonatomic) unsigned long long childActionIdsArray_Count; // @dynamic childActionIdsArray_Count;
@property(nonatomic) long long enqueueTimeSec; // @dynamic enqueueTimeSec;
@property(nonatomic) _Bool hasActionProto; // @dynamic hasActionProto;
@property(nonatomic) _Bool hasEnqueueTimeSec; // @dynamic hasEnqueueTimeSec;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasParentActionId; // @dynamic hasParentActionId;
@property(nonatomic) _Bool hasPrereqActionId; // @dynamic hasPrereqActionId;
@property(nonatomic) _Bool hasRetryScheduleIndex; // @dynamic hasRetryScheduleIndex;
@property(nonatomic) _Bool hasRootActionId; // @dynamic hasRootActionId;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *parentActionId; // @dynamic parentActionId;
@property(retain, nonatomic) NSMutableArray *postreqActionIdsArray; // @dynamic postreqActionIdsArray;
@property(readonly, nonatomic) unsigned long long postreqActionIdsArray_Count; // @dynamic postreqActionIdsArray_Count;
@property(copy, nonatomic) NSString *prereqActionId; // @dynamic prereqActionId;
@property(nonatomic) int retryScheduleIndex; // @dynamic retryScheduleIndex;
@property(copy, nonatomic) NSString *rootActionId; // @dynamic rootActionId;

@end
