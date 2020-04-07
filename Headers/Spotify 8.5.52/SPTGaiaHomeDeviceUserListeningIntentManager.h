//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaHomeDeviceUserListeningIntentProvider-Protocol.h"

@class AVAudioSession, NSNotificationCenter, NSString, SPTObserverManager;

@interface SPTGaiaHomeDeviceUserListeningIntentManager : NSObject <SPTGaiaHomeDeviceUserListeningIntentProvider>
{
    unsigned long long _currentListeningIntent;
    AVAudioSession *_audioSession;
    NSNotificationCenter *_notificationCenter;
    SPTObserverManager *_observers;
}

@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(nonatomic) unsigned long long currentListeningIntent; // @synthesize currentListeningIntent=_currentListeningIntent;
- (void).cxx_destruct;
- (unsigned long long)listeningIntentFromAudioSessionRoute:(id)arg1;
- (void)setListeningIntentAndNotifyObservers:(unsigned long long)arg1;
- (void)updateCurrentListeningIntent;
- (void)audioRouteChangedNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeAudioSessionNotificationListening;
- (void)setupAudioSessionNotificationListening;
- (void)dealloc;
- (id)initWithAudioSession:(id)arg1 notificationCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
