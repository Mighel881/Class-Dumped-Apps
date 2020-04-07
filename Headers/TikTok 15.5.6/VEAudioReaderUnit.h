//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, VEAudioQueueUnit, VEAudioReaderUnitConfig;
@protocol OS_dispatch_queue;

@interface VEAudioReaderUnit : IESMMObject
{
    _Bool _useForPlayer;
    _Bool _isSeeking;
    _Bool _stopThread;
    _Bool _paused;
    _Bool _resetBeforePlay;
    _Bool _reEnqueueFailedBuffer;
    unsigned int _numOfFramesToProcess;
    double _playRate;
    NSMutableArray *_clipArray;
    VEAudioQueueUnit *_audioQueueUnit;
    struct AudioBufferList *_outBufferList;
    double _maxDuration;
    double _currentTime;
    NSObject<OS_dispatch_queue> *_playerQueue;
    NSObject<OS_dispatch_queue> *_readerQueue;
    NSMutableDictionary *_assetClipLookupMap;
    VEAudioReaderUnitConfig *_config;
}

@property(retain, nonatomic) VEAudioReaderUnitConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableDictionary *assetClipLookupMap; // @synthesize assetClipLookupMap=_assetClipLookupMap;
@property(readonly, nonatomic) unsigned int numOfFramesToProcess; // @synthesize numOfFramesToProcess=_numOfFramesToProcess;
@property(nonatomic) _Bool reEnqueueFailedBuffer; // @synthesize reEnqueueFailedBuffer=_reEnqueueFailedBuffer;
@property(nonatomic) _Bool resetBeforePlay; // @synthesize resetBeforePlay=_resetBeforePlay;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readerQueue; // @synthesize readerQueue=_readerQueue;
@property(nonatomic) _Bool stopThread; // @synthesize stopThread=_stopThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) struct AudioBufferList *outBufferList; // @synthesize outBufferList=_outBufferList;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool useForPlayer; // @synthesize useForPlayer=_useForPlayer;
@property(retain, nonatomic) VEAudioQueueUnit *audioQueueUnit; // @synthesize audioQueueUnit=_audioQueueUnit;
@property(retain, nonatomic) NSMutableArray *clipArray; // @synthesize clipArray=_clipArray;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) struct AudioStreamBasicDescription asbd;
- (_Bool)isBeforeRange:(id)arg1 atTime:(double)arg2 tolerance:(double)arg3;
- (_Bool)isAfterRange:(id)arg1 atTime:(double)arg2;
- (_Bool)isContainsInRange:(id)arg1 atTime:(double)arg2;
- (void)mixAudioInterleavingBufferList:(struct AudioBufferList *)arg1 inBufferList:(struct AudioBufferList *)arg2;
- (void)seekAudioReader:(id)arg1;
- (void)appendVideoAudioClip:(id)arg1 clipRange:(id)arg2 videoData:(id)arg3;
- (id)p_getCurveConfig:(id)arg1;
- (void)updateVideoAudioClips:(id)arg1;
- (void)updateSubTrackVideoAudioClips:(id)arg1;
- (void)p_doAppendClip:(id)arg1;
- (float)p_rateByApplyingPlayRate:(float)arg1;
- (void)p_reloadClipRate;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
- (void)seekToTime:(double)arg1;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (struct AudioBufferList *)renderAudioDataAtTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (void)hotReloadClipRangeForAssets:(id)arg1 inRangeMap:(id)arg2 currentPlayingTime:(double)arg3;
- (void)hotReloadFilterForAssets:(id)arg1 inFilterMap:(id)arg2;
- (void)hotRemoveAudioAssets:(id)arg1;
- (void)hotAppendAudioAsset:(id)arg1 filterArray:(id)arg2 withClipRange:(id)arg3 currentPlayingTime:(double)arg4;
- (void)updateClipArray:(id)arg1;
- (void)releaseClip:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playCMTime;
- (void)setupAudioQueue;
- (id)initWithVideoData:(id)arg1 withConfig:(id)arg2;
@property(readonly, nonatomic) NSArray *assets;

@end
