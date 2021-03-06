//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTLicenseCheckerDelegate-Protocol.h"
#import "YTLiveStreamStatusCheckerDelegate-Protocol.h"

@class GIMMe, NSHashTable, NSString, YTHeartbeatService, YTIPlayerResponse, YTLicenseChecker, YTLiveStreamStatusChecker, YTTimedAction;
@protocol YTPlayerHeartbeatControllerDelegate;

@interface YTPlayerHeartbeatController : NSObject <YTLicenseCheckerDelegate, YTLiveStreamStatusCheckerDelegate>
{
    YTHeartbeatService *_heartbeatService;
    YTIPlayerResponse *_playerResponse;
    YTTimedAction *_nextHeartbeatTimedAction;
    NSHashTable *_handlers;
    unsigned long long _currentRequestID;
    YTLicenseChecker *_licenseChecker;
    YTLiveStreamStatusChecker *_liveStreamStatusChecker;
    long long _state;
    GIMMe *_gimme;
    id <YTPlayerHeartbeatControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTPlayerHeartbeatControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)heartbeatTimedAction;
- (_Bool)sendDeviceID;
- (id)populatedHeartbeatRequestParams;
- (void)noOpPendingRequest;
- (void)passPlayabilityStatusToHandlers:(id)arg1;
- (void)sendHeartbeatRequest;
- (void)stopNextStatusCheck;
- (void)sendHeartbeatRequestAfterTimeInterval:(double)arg1;
- (void)scheduleNextStatusCheck;
- (void)stop;
- (void)startIfStopped;
- (void)updateStopOrStart;
- (void)liveStreamStatusCheckerWantstoStopPlayback:(id)arg1;
- (void)liveStreamStatusCheckerWantsToSuspendPlayback:(id)arg1;
- (void)liveStreamStatusCheckerWantsToReloadLiveStream:(id)arg1;
- (void)liveStreamStatusChecker:(id)arg1 wantsToTransitionToStreamEndpoint:(id)arg2;
- (void)licenseChecker:(id)arg1 failedHeartbeatWithError:(id)arg2;
- (void)setLiveStreamOfflineBlock:(CDUnknownBlockType)arg1;
- (_Bool)isRunningLiveStreamStatusChecking;
- (void)stopLiveStreamStatusChecking;
- (void)startLiveStreamStatusCheckingWithContentVideo:(id)arg1;
- (void)stopLicenseChecking;
- (void)startLicenseCheckingWithConfig:(id)arg1 contentVideo:(id)arg2;
- (void)forceHeartbeatPing;
- (void)setPlayerResponse:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

