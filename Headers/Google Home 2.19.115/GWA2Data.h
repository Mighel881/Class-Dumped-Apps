//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWA2ConditionChecker-Protocol.h"
#import "GWA2ResultingActionRunner-Protocol.h"

@class GWA2PageContext, NSArray, NSMutableDictionary, NSMutableSet, NSString, ORCH2Data, ORCH2DataAccessibilityAttributes, ORCH2DataState, ORCH2DataToken, ORCH2DataValue;

@interface GWA2Data : NSObject <GWA2ConditionChecker, GWA2ResultingActionRunner>
{
    NSMutableDictionary *_triggers;
    ORCH2DataState *_dataState;
    ORCH2DataToken *_dataToken;
    NSString *_errorText;
    ORCH2DataAccessibilityAttributes *_dataAccessibilityAttributes;
    NSMutableSet *_associatedNodeReferences;
    _Bool _enablement;
    ORCH2DataValue *_dataValue;
    ORCH2Data *_proto;
    GWA2PageContext *_pageContext;
    long long _dataReference;
    NSArray *_loggingConfigurations;
}

@property(retain, nonatomic) NSArray *loggingConfigurations; // @synthesize loggingConfigurations=_loggingConfigurations;
@property(nonatomic) _Bool enablement; // @synthesize enablement=_enablement;
@property(readonly, nonatomic) long long dataReference; // @synthesize dataReference=_dataReference;
@property(readonly, nonatomic) __weak GWA2PageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(readonly, nonatomic) ORCH2Data *proto; // @synthesize proto=_proto;
@property(readonly, nonatomic) ORCH2DataValue *dataValue; // @synthesize dataValue=_dataValue;
- (void).cxx_destruct;
- (id)dataToAssociatedNodesMap;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)enablementFromEnablementState:(int)arg1;
- (unsigned long long)dataExecutionStateFromProtoState:(int)arg1;
- (id)dataAccessibilityLabel;
- (_Bool)isLoggingEnabledForEventType:(int)arg1;
- (id)logEventForDataTriggerType:(unsigned long long)arg1;
- (void)runResultingAction:(id)arg1;
- (void)initializeDataResultingActions;
- (_Bool)conditionMatched:(id)arg1;
- (void)initializeDataConditions;
- (void)updateDataValue:(id)arg1;
- (void)sendActionForDataTriggerType:(unsigned long long)arg1;
- (unsigned long long)triggerTypeFromTrigger:(id)arg1;
- (void)initializeDataTriggers;
- (void)focusOnDataWithValidationError;
- (void)focusOnData;
- (void)focusShouldFallbackToSelf:(_Bool)arg1 withInstruction:(id)arg2;
@property(readonly, nonatomic) NSArray *activeDataValues;
- (void)associateDataWithNode:(long long)arg1;
- (id)initWithData:(id)arg1 pageContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

