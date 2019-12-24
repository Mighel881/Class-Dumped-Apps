//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class NSMutableArray, VEVideoEffectUnit;

@interface VEVideoReaderUnit : IESMMObject
{
    _Bool _pauseAndStillRender;
    _Bool _useForPlayer;
    NSMutableArray *_clipArray;
    long long _playerStatus;
    VEVideoEffectUnit *_effectUnit;
    double _maxTrackDuration;
    struct __CVBuffer *_lastPixelBuffer;
    CDStruct_1b6d18a9 _currentTime;
}

@property(nonatomic) struct __CVBuffer *lastPixelBuffer; // @synthesize lastPixelBuffer=_lastPixelBuffer;
@property(nonatomic) double maxTrackDuration; // @synthesize maxTrackDuration=_maxTrackDuration;
@property(retain, nonatomic) VEVideoEffectUnit *effectUnit; // @synthesize effectUnit=_effectUnit;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) long long playerStatus; // @synthesize playerStatus=_playerStatus;
@property(nonatomic) _Bool useForPlayer; // @synthesize useForPlayer=_useForPlayer;
@property(retain, nonatomic) NSMutableArray *clipArray; // @synthesize clipArray=_clipArray;
@property(nonatomic) _Bool pauseAndStillRender; // @synthesize pauseAndStillRender=_pauseAndStillRender;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isBeforeRange:(id)arg1 atTime:(double)arg2 tolerance:(double)arg3;
- (_Bool)isContainsInRange:(id)arg1 atTime:(double)arg2;
- (void)createClipArray:(id)arg1;
- (void)resetClipArray;
- (struct opaqueCMSampleBuffer *)createSampleBuffer:(struct __CVBuffer *)arg1 sampleTime:(CDStruct_1b6d18a9)arg2;
- (void)releaseLastPixelBuffer;
- (id)createReader:(id)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (id)copyVideoSampleBuffers:(CDStruct_1b6d18a9)arg1 nextVSync:(double)arg2 forceFrame:(_Bool)arg3;
- (struct opaqueCMSampleBuffer *)copyNextSampleBufferWithError:(id *)arg1;
- (void)updateMediaInfo:(id)arg1;
- (id)createEffectUnit:(id)arg1;
- (id)initWithMediaInfo:(id)arg1 lvEffectUnit:(id)arg2 useForPlayer:(_Bool)arg3;

@end
