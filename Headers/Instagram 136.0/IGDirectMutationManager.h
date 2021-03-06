//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectMutationManagerOffProcessNetworkResponseHandling-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectMutationRequestStateStoreListener-Protocol.h>
#import <InstagramAppCoreFramework/IGUserSessionEndingObject-Protocol.h>

@class IGDirectMutationExternalSystemEventHandler, IGDirectMutationManagerOffProcessResponseHandler, IGDirectMutationOptimisticUpdateInfoCache, IGDirectMutationRealtimeDeltaHandlingDelayer, IGDirectMutationRequestCoordinationCache, IGDirectMutationRequestInitiator, IGDirectMutationRequestPreparer, IGDirectMutationRequestStateStore, IGDirectMutationRequestStateStoreListeningForwarder, IGDirectMutationRequestStoreHistoricalDebugLogger, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGDirectMutationManagerListenerAnnouncer, IGDirectMutationOptimisticStateUpdatingListenerAnnouncer, IGDirectMutationRequestStateDiskRestoring, OS_dispatch_queue;

@interface IGDirectMutationManager : NSObject <IGDirectMutationRequestStateStoreListener, IGDirectMutationManagerOffProcessNetworkResponseHandling, IGUserSessionEndingObject>
{
    IGDirectMutationRequestPreparer *_preparer;
    IGDirectMutationRequestInitiator *_initiator;
    id <IGDirectMutationManagerListenerAnnouncer> _mutationManagerAnnouncer;
    id <IGDirectMutationOptimisticStateUpdatingListenerAnnouncer> _optimisicStateUpdateAnnouncer;
    IGDirectMutationRequestStateStoreListeningForwarder *_requestStateStoreListeningForwarder;
    id <IGDirectMutationRequestStateDiskRestoring> _diskRestorer;
    IGDirectMutationRequestCoordinationCache *_requestCoordinationCache;
    IGDirectMutationOptimisticUpdateInfoCache *_optimisticStateCache;
    IGDirectMutationRequestStateStore *_requestStateStore;
    IGDirectMutationExternalSystemEventHandler *_externalEventHandler;
    IGDirectMutationRequestStoreHistoricalDebugLogger *_requestStoreHistoricalDebugLogger;
    IGDirectMutationRealtimeDeltaHandlingDelayer *_realtimeDeltaHandlerDelayer;
    IGDirectMutationManagerOffProcessResponseHandler *_offProcessResponseHandler;
    id <IGAnalyticsEventLoggingProtocol> _logger;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_mutationsRestoredFromDisk:(id)arg1;
- (void)_shutdown;
- (void)userSessionWillEnd;
- (void)mutationRequestStoreDidDropMutationWithId:(id)arg1 withReason:(unsigned long long)arg2;
- (void)mutationRequestStoreDidEnqueueMutation:(id)arg1 withInitialExecutionState:(id)arg2;
- (void)mutationRequestStoreDidUpdateMutation:(id)arg1 fromExecutionState:(id)arg2 toExecutionState:(id)arg3;
- (void)handleOffProcessResponseFromPreviousAppSession:(id)arg1 forMutationId:(id)arg2;
- (id)serializableLogPackage;
- (void)removeOptimisticStateUpdateListener:(id)arg1;
- (void)addOptimisticStateUpdateListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (struct NSDictionary *)optimisticUpdateInfos;
- (void)startService;
- (void)manuallyRetryMutationWithId:(id)arg1;
- (void)cancelMutationWithId:(id)arg1;
- (id)runMutationWithData:(id)arg1;
- (id)initWithMutationProcessingToolboxProvider:(id)arg1 diskHandler:(id)arg2 notificationCenter:(id)arg3 networkConnectionManager:(id)arg4 directCache:(id)arg5 logger:(id)arg6 featureSets:(id)arg7 networker:(id)arg8 diskManager:(id)arg9 inboxService:(id)arg10 realtimeServiceAnnouncer:(id)arg11 userPk:(id)arg12 queue:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

