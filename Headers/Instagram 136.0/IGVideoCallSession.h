//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGRTCVideoCallControllerParticipantDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallCaptureCoordinatorListener-Protocol.h>

@class IGDirectDataSubscriptionPipe, IGRTCVideoCallJoinInfo, IGVideoCallCallInfoHttpPublisher, IGVideoCallLoggingContext, IGVideoCallParticipantsStateService, IGVideoCallUserKey, NSDate, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol IGUserExperimentSetProviding, IGVideoCallGroupExpansionProvider, IGVideoCallSessionListenerAnnouncer, IGVideoCallThreadDataSource;

@interface IGVideoCallSession : NSObject <IGRTCVideoCallControllerParticipantDelegate, IGVideoCallCaptureCoordinatorListener>
{
    IGVideoCallUserKey *_currentUserPk;
    id <IGUserExperimentSetProviding> _experimentSet;
    NSMutableOrderedSet *_orderedCurrentParticipantsPk;
    _Bool _firstParticipantHasJoined;
    IGVideoCallParticipantsStateService *_participantsStateService;
    IGDirectDataSubscriptionPipe *_participantStateSubscriptionPipe;
    IGVideoCallCallInfoHttpPublisher *_httpGroupExpansionPublisher;
    id <IGVideoCallGroupExpansionProvider> _groupExpansionProvider;
    _Bool _currentUserVideoEnabled;
    id <IGVideoCallSessionListenerAnnouncer> _announcer;
    NSDate *_videoCallStartTime;
    NSMutableSet *_endScreenUserKeys;
    NSMutableDictionary *_participantInfos;
    NSMutableDictionary *_capabilities;
    _Bool _showFeedbackSet;
    _Bool _showFeedback;
    id <IGVideoCallThreadDataSource> _threadDataSource;
    _Bool _isAudioEnabled;
    _Bool _didCallerTimeoutBeforeConnected;
    _Bool _isAnswered;
    _Bool _isCallInitiator;
    IGRTCVideoCallJoinInfo *_videoCallInfo;
    IGVideoCallLoggingContext *_loggingContext;
}

@property(nonatomic) _Bool isCallInitiator; // @synthesize isCallInitiator=_isCallInitiator;
@property(readonly, nonatomic) _Bool isAnswered; // @synthesize isAnswered=_isAnswered;
@property(nonatomic) _Bool didCallerTimeoutBeforeConnected; // @synthesize didCallerTimeoutBeforeConnected=_didCallerTimeoutBeforeConnected;
@property(readonly, nonatomic) _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property(readonly, nonatomic) IGVideoCallLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, copy, nonatomic) IGRTCVideoCallJoinInfo *videoCallInfo; // @synthesize videoCallInfo=_videoCallInfo;
- (void).cxx_destruct;
- (void)_updateSelfAudioVideoStateWithCaptureCoordinator:(id)arg1;
- (void)captureCoordinatorDidResumeVideo:(id)arg1;
- (void)captureCoordinatorDidPauseVideo:(id)arg1;
- (void)captureCoordinatorDidResumeAudio:(id)arg1;
- (void)captureCoordinatorDidPauseAudio:(id)arg1;
- (void)_updateVideoParticipant:(id)arg1 videoEnabled:(_Bool)arg2;
- (void)announceCurrentStates;
- (id)_videoViewFromRTCVideoCallParticipantVideoInfo:(id)arg1;
- (long long)_videoStateFromRTCVideoCallParticipantVideoInfo:(id)arg1;
- (void)videoCallController:(id)arg1 didUpdateParticipantKey:(id)arg2 capabilities:(id)arg3;
- (void)videoCallController:(id)arg1 didRemoveParticipantKey:(id)arg2;
- (void)videoCallController:(id)arg1 didUpdateParticipant:(id)arg2;
- (void)videoCallController:(id)arg1 didAddParticipant:(id)arg2 isExistingParticipant:(_Bool)arg3;
- (id)videoCallId;
- (_Bool)allUsersCoWatchEligible;
- (void)notifyCurrentUserUpdatedAudioState:(_Bool)arg1 videoState:(_Bool)arg2 videoView:(id)arg3;
- (void)notifyCurrentUserDisconnected;
- (void)notifyCurrentUserConnectedWithVideoView:(id)arg1 audioEnabled:(_Bool)arg2;
- (void)notifyConnectedToVideoCallId:(id)arg1 encodedServerDataInfo:(id)arg2;
@property(readonly, nonatomic) _Bool showFeedback;
- (id)currentThreadState;
- (id)threadDataSource;
- (id)subscribeToParticipantUpdates:(CDUnknownBlockType)arg1;
- (id)groupExpansionProvider;
- (double)videoCallDuration;
- (id)endScreenUserKeys;
- (_Bool)currentUserVideoEnabled;
- (id)orderedCurrentParticipantsPk;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)resetParticipants;
- (id)initWithUser:(id)arg1 experimentSet:(id)arg2 launcherSet:(id)arg3 mqttClient:(id)arg4 networker:(id)arg5 analyticsLogger:(id)arg6 entryPoint:(long long)arg7 joinInfo:(id)arg8 threadDataSource:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

