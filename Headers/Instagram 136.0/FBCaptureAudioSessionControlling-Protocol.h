//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@protocol FBCaptureAudioSessionControlling <NSObject>
@property(readonly, nonatomic, getter=isAudioSessionRunning) _Bool audioSessionRunning;
@property(readonly, nonatomic) struct OpaqueCMClock *audioSessionClock;
- (void)enableEditingMicrophoneVolume:(_Bool)arg1 volumeMultiplier:(double)arg2;
- (void)stopAudioSessionWithCompletion:(void (^)(void))arg1;
- (void)startAudioSessionWithEchoCancellationEnabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)deactivateAudioSession;
- (void)activateAudioSession;
@end

