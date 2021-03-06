//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NFCWObject.h>

@class NFCWApplicationMetadata, NFCWDevice, NFCWDeviceManagerDelegateWrapper, NSString;
@protocol NFCWDeviceManagerDelegate;

@interface NFCWDeviceManager : NFCWObject
{
    NFCWDeviceManagerDelegateWrapper *_delegateWrapper;
}

@property(retain, nonatomic) NFCWDeviceManagerDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
- (void).cxx_destruct;
- (long long)requestDeviceStatus;
- (long long)setMuted:(_Bool)arg1;
- (long long)setVolume:(float)arg1;
- (long long)stopApplicationWithSessionID:(id)arg1;
- (long long)stopApplication;
- (_Bool)leaveApplication;
- (long long)joinApplication:(id)arg1 sessionID:(id)arg2;
- (long long)joinApplication:(id)arg1;
- (long long)launchApplication:(id)arg1 relaunchIfRunning:(_Bool)arg2;
- (long long)launchApplication:(id)arg1 withLaunchOptions:(id)arg2;
- (long long)launchApplication:(id)arg1;
- (_Bool)removeChannel:(id)arg1;
- (_Bool)addChannel:(id)arg1;
- (void)disconnectWithLeave:(_Bool)arg1;
- (void)disconnect;
- (void)connect;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2 ignoreAppStateNotifications:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2;
@property(readonly, copy, nonatomic) NSString *applicationStatusText;
@property(readonly, copy, nonatomic) NFCWApplicationMetadata *applicationMetadata;
@property(readonly, copy, nonatomic) NSString *applicationSessionID;
@property(readonly, nonatomic) long long standbyStatus;
@property(readonly, nonatomic) long long activeInputStatus;
@property(readonly, nonatomic) _Bool deviceMuted;
@property(readonly, nonatomic) float deviceVolume;
@property(nonatomic) __weak id <NFCWDeviceManagerDelegate> delegate;
@property(readonly, nonatomic) NFCWDevice *device;
@property(nonatomic) double reconnectTimeout;
@property(readonly, nonatomic) _Bool isReconnecting;
@property(readonly, nonatomic) _Bool isConnectedToApp;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) unsigned long long applicationConnectionState;
@property(readonly, nonatomic) unsigned long long connectionState;
@property(readonly, nonatomic) _Bool ignoreAppStateNotifications;

@end

