//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ByteRtcEngineKit/RTCVideoRenderer-Protocol.h>

@class ByteRtcEngineKit, NSString;
@protocol ByteRtcEngineDelegate;

@interface ByteRtcVideoRenderBase : NSObject <RTCVideoRenderer>
{
    int lockVar;
    int unlockVar;
    _Bool _firstReached;
    _Bool _isLocal;
    _Bool _isScreen;
    _Bool _mirrored;
    int _stallCount;
    int _stallCountStrict;
    // Error parsing type: Ai, name: _stallMutex
    id <ByteRtcEngineDelegate> _delegate;
    NSString *_uid;
    NSString *_streamId;
    long long _createStartTs;
    ByteRtcEngineKit *_engine;
    NSString *_sessionId;
    long long _subscribeStart;
    long long _lastTime;
    long long _stallTime;
    unsigned long long _videoState;
    struct CGSize _lastRenderSize;
}

@property(nonatomic) struct CGSize lastRenderSize; // @synthesize lastRenderSize=_lastRenderSize;
@property(nonatomic) unsigned long long videoState; // @synthesize videoState=_videoState;
// Error parsing type for property stallMutex:
// Property attributes: TAi,N,V_stallMutex

@property(nonatomic) int stallCountStrict; // @synthesize stallCountStrict=_stallCountStrict;
@property(nonatomic) int stallCount; // @synthesize stallCount=_stallCount;
@property(nonatomic) long long stallTime; // @synthesize stallTime=_stallTime;
@property(nonatomic) long long lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) long long subscribeStart; // @synthesize subscribeStart=_subscribeStart;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak ByteRtcEngineKit *engine; // @synthesize engine=_engine;
@property(nonatomic) long long createStartTs; // @synthesize createStartTs=_createStartTs;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) __weak id <ByteRtcEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(nonatomic) _Bool isScreen; // @synthesize isScreen=_isScreen;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) _Bool firstReached; // @synthesize firstReached=_firstReached;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)updateStatsWithLock;
- (void)updateStats;
- (id)getStatsAndReset;
- (void)reportFirstReachedWithWidth:(long long)arg1 Height:(long long)arg2 Rotation:(long long)arg3;
- (void)reportVideoSizeChanged:(long long)arg1 height:(long long)arg2;
- (void)onFirstScreenFrame:(struct CGSize)arg1;
- (void)onFirstVideoFrame:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
