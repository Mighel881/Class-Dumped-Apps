//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKCastChannel.h"

@class NSTimer;
@protocol GCKHeartbeatChannelDelegate;

@interface GCKHeartbeatChannel : GCKCastChannel
{
    NSTimer *_heartbeatTimer;
    NSTimer *_inactivityTimer;
    double _heartbeatInterval;
    double _inactivityTimeout;
    _Bool _awaitingPong;
    id <GCKHeartbeatChannelDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKHeartbeatChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scheduleInactivityTimer;
- (void)scheduleHeartbeatTimer;
- (void)inactivityTimerDidFire;
- (void)heartbeatTimerDidFire;
- (_Bool)sendPing;
- (_Bool)sendPong;
- (void)didReceiveTextMessage:(id)arg1;
- (void)didDisconnect;
- (void)stopHeartbeat;
- (void)resetHeartbeat;
- (void)dealloc;
- (void)startHeartbeatWithInactivityTimeout:(double)arg1;
- (id)init;
- (id)initWithNamespace:(id)arg1;

@end
