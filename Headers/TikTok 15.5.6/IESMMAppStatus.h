//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class NSPointerArray;

@interface IESMMAppStatus : IESMMObject
{
    _Bool _audioSessionPortChange;
    long long _appStatus;
    NSPointerArray *_delegateArray;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)resetContext;
+ (void)decreaseContextCacheRef;
+ (void)addContextCacheRef;
@property(nonatomic) _Bool audioSessionPortChange; // @synthesize audioSessionPortChange=_audioSessionPortChange;
@property(retain, nonatomic) NSPointerArray *delegateArray; // @synthesize delegateArray=_delegateArray;
@property(nonatomic) long long appStatus; // @synthesize appStatus=_appStatus;
- (void).cxx_destruct;
- (void)registerMemoryWarningNotify;
- (void)registerEnterBackgroundNotify;
- (void)registerResignActiveNotify;
- (void)registerEnterForegroundNotify;
- (void)registerBecomeActiveNotify;
- (_Bool)stopAudioPortListen;
- (void)startAudioPortListen;
- (_Bool)currentPortIsHeadphonesOrBluetooth;
- (void)appAudioRouteStatusChangeListenerCallback:(id)arg1;
- (void)playerItemPlaybackStalledNotificationdListener:(id)arg1;
- (void)playerItemFailedToPlayToEndTimeListener:(id)arg1;
- (void)unregisterAppStatusDelegate:(id)arg1;
- (void)registerAppStatusDelegate:(id)arg1;
- (void)registerAudioNotify;
- (id)init;

@end
