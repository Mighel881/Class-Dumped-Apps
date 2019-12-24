//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

#import "VECompileStageProtocol-Protocol.h"
#import "VEProcessSampleDelegate-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, NSError, NSMutableArray, NSObject, NSString, VETransData;
@protocol OS_dispatch_queue, VEProcessSampleDelegate;

@interface VECompileWriterUnit : IESMMObject <VEProcessSampleDelegate, VECompileStageProtocol>
{
    _Bool _isVideoWriterFinish;
    _Bool _isAudioWriterFinish;
    NSString *_route;
    long long _curVideoStage;
    long long _curAudioStage;
    CDUnknownBlockType _completeBlock;
    id <VEProcessSampleDelegate> _downstream;
    id <VEProcessSampleDelegate> _audioDataProvider;
    id <VEProcessSampleDelegate> _videoDataProvider;
    NSError *_error;
    VETransData *_transData;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    NSMutableArray *_metaData;
    unsigned long long _videoWriteStatus;
    unsigned long long _audioWriteStatus;
    unsigned long long _transStatus;
    long long _writeVideoBufCount;
    double _writerVideoProcessTime;
    double _writerVideoCostTime;
    NSObject<OS_dispatch_queue> *_videoQueue;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _lastVideoFrameTime;
    CDStruct_1b6d18a9 _lastAudioFrameTime;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
@property(nonatomic) double writerVideoCostTime; // @synthesize writerVideoCostTime=_writerVideoCostTime;
@property(nonatomic) double writerVideoProcessTime; // @synthesize writerVideoProcessTime=_writerVideoProcessTime;
@property(nonatomic) long long writeVideoBufCount; // @synthesize writeVideoBufCount=_writeVideoBufCount;
@property(nonatomic) _Bool isAudioWriterFinish; // @synthesize isAudioWriterFinish=_isAudioWriterFinish;
@property(nonatomic) _Bool isVideoWriterFinish; // @synthesize isVideoWriterFinish=_isVideoWriterFinish;
@property(nonatomic) unsigned long long transStatus; // @synthesize transStatus=_transStatus;
@property(nonatomic) unsigned long long audioWriteStatus; // @synthesize audioWriteStatus=_audioWriteStatus;
@property(nonatomic) unsigned long long videoWriteStatus; // @synthesize videoWriteStatus=_videoWriteStatus;
@property(nonatomic) CDStruct_1b6d18a9 lastAudioFrameTime; // @synthesize lastAudioFrameTime=_lastAudioFrameTime;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoFrameTime; // @synthesize lastVideoFrameTime=_lastVideoFrameTime;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *metaData; // @synthesize metaData=_metaData;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) VETransData *transData; // @synthesize transData=_transData;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <VEProcessSampleDelegate> videoDataProvider; // @synthesize videoDataProvider=_videoDataProvider;
@property(nonatomic) __weak id <VEProcessSampleDelegate> audioDataProvider; // @synthesize audioDataProvider=_audioDataProvider;
@property(nonatomic) __weak id <VEProcessSampleDelegate> downstream; // @synthesize downstream=_downstream;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) long long curAudioStage; // @synthesize curAudioStage=_curAudioStage;
@property(nonatomic) long long curVideoStage; // @synthesize curVideoStage=_curVideoStage;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (_Bool)processAudioSamplebuf:(struct opaqueCMSampleBuffer *)arg1;
- (void)packerSampleBuf:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)processSampleData:(id)arg1;
- (void)setConfig:(id)arg1;
- (double)getCompileProgress;
- (CDStruct_1b6d18a9)getWritedDuration;
- (_Bool)isAudioVideoComplete;
- (id)getAudioSetting;
- (id)getMetadataItem;
- (void)setMetadata:(id)arg1;
- (_Bool)completeWriterWithBlock:(CDUnknownBlockType)arg1;
- (void)completeVideoWriterInput;
- (void)completeAudioWriterInput;
- (_Bool)cancelWriterWithError:(id)arg1;
- (_Bool)startVideoWriter;
- (_Bool)startAudioWriter;
- (_Bool)prepareAudioWriter;
- (_Bool)prepareVideoWriter;
- (_Bool)prepareWriter;
- (_Bool)startLoopWriter;
- (_Bool)startWriter;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
