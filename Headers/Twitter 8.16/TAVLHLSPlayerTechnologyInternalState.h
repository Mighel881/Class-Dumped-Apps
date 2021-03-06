//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, TAVPlayerTechnologyControlState, TAVPlayerTechnologyState, TAVWallTime;
@protocol LHLSPlayerClient, TAVTimerDispatchSourceProtocol;

@interface TAVLHLSPlayerTechnologyInternalState : NSObject
{
    _Bool _didPlayToEnd;
    _Bool _needsSeekToInitialPlaybackTime;
    _Bool _isEndPending;
    _Bool _audioSessionIsDeactivating;
    unsigned int _baseTimeJumpCount;
    double _rotation;
    TAVPlayerTechnologyControlState *_controlState;
    TAVPlayerTechnologyState *_lastStateSent;
    NSError *_unrecoverableError;
    id <LHLSPlayerClient> _lhls;
    CDUnknownBlockType _seekCompletion;
    id <TAVTimerDispatchSourceProtocol> _stateUpdateTimer;
    TAVWallTime *_livePauseStartTime;
    TAVWallTime *_connectedOrReceivedDataTimestamp;
    struct CGSize _videoResolution;
}

@property(nonatomic) _Bool audioSessionIsDeactivating; // @synthesize audioSessionIsDeactivating=_audioSessionIsDeactivating;
@property(copy, nonatomic) TAVWallTime *connectedOrReceivedDataTimestamp; // @synthesize connectedOrReceivedDataTimestamp=_connectedOrReceivedDataTimestamp;
@property(nonatomic) unsigned int baseTimeJumpCount; // @synthesize baseTimeJumpCount=_baseTimeJumpCount;
@property(copy, nonatomic) TAVWallTime *livePauseStartTime; // @synthesize livePauseStartTime=_livePauseStartTime;
@property(retain, nonatomic) id <TAVTimerDispatchSourceProtocol> stateUpdateTimer; // @synthesize stateUpdateTimer=_stateUpdateTimer;
@property(copy, nonatomic) CDUnknownBlockType seekCompletion; // @synthesize seekCompletion=_seekCompletion;
@property(nonatomic) _Bool isEndPending; // @synthesize isEndPending=_isEndPending;
@property(retain, nonatomic) id <LHLSPlayerClient> lhls; // @synthesize lhls=_lhls;
@property(copy, nonatomic) NSError *unrecoverableError; // @synthesize unrecoverableError=_unrecoverableError;
@property(copy, nonatomic) TAVPlayerTechnologyState *lastStateSent; // @synthesize lastStateSent=_lastStateSent;
@property(copy, nonatomic) TAVPlayerTechnologyControlState *controlState; // @synthesize controlState=_controlState;
@property(nonatomic) _Bool needsSeekToInitialPlaybackTime; // @synthesize needsSeekToInitialPlaybackTime=_needsSeekToInitialPlaybackTime;
@property(nonatomic) _Bool didPlayToEnd; // @synthesize didPlayToEnd=_didPlayToEnd;
@property(nonatomic) struct CGSize videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
- (void).cxx_destruct;

@end

