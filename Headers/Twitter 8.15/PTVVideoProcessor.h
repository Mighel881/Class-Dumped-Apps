//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeSDK/PTVSketchPointReceivable-Protocol.h>
#import <PeriscopeSDK/PTVSwitchboardDisplayable-Protocol.h>

@class NSString, PTVAudioVisualizerModel, PTVVideoProcessorContext, PTVVideoProcessorDisplayLayer, PTVVideoProcessorFramebuffer, PTVVideoProcessorPipeline;
@protocol PTVVideoProcessorDelegate;

@interface PTVVideoProcessor : NSObject <PTVSketchPointReceivable, PTVSwitchboardDisplayable>
{
    PTVVideoProcessor *_weakSelf;
    _Bool _omitVideoDuringFramebufferDisplay;
    _Bool _mirrorVideoPreview;
    _Bool _mirrorRecordedVideo;
    id <PTVVideoProcessorDelegate> _delegate;
    PTVVideoProcessorContext *_context;
    double _videoZoom;
    PTVAudioVisualizerModel *_audioVisualizerModel;
    double _encodedRotation;
    double _viewOrientation;
    PTVVideoProcessorDisplayLayer *_displayLayer;
    PTVVideoProcessorPipeline *_pipeline;
    PTVVideoProcessorFramebuffer *_framebuffer;
    PTVVideoProcessorFramebuffer *_framebufferHQ;
    struct CGSize _targetSize;
}

@property(retain, nonatomic) PTVVideoProcessorFramebuffer *framebufferHQ; // @synthesize framebufferHQ=_framebufferHQ;
@property(retain, nonatomic) PTVVideoProcessorFramebuffer *framebuffer; // @synthesize framebuffer=_framebuffer;
@property(readonly, nonatomic) PTVVideoProcessorPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(retain, nonatomic) PTVVideoProcessorDisplayLayer *displayLayer; // @synthesize displayLayer=_displayLayer;
@property double viewOrientation; // @synthesize viewOrientation=_viewOrientation;
@property(nonatomic) double encodedRotation; // @synthesize encodedRotation=_encodedRotation;
@property(readonly, nonatomic) PTVAudioVisualizerModel *audioVisualizerModel; // @synthesize audioVisualizerModel=_audioVisualizerModel;
@property double videoZoom; // @synthesize videoZoom=_videoZoom;
@property(nonatomic) _Bool mirrorRecordedVideo; // @synthesize mirrorRecordedVideo=_mirrorRecordedVideo;
@property(nonatomic) _Bool mirrorVideoPreview; // @synthesize mirrorVideoPreview=_mirrorVideoPreview;
@property(nonatomic) _Bool omitVideoDuringFramebufferDisplay; // @synthesize omitVideoDuringFramebufferDisplay=_omitVideoDuringFramebufferDisplay;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) PTVVideoProcessorContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <PTVVideoProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backgroundProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 captureContext:(CDStruct_4508418e)arg2;
- (void)processiPhoneCameraMetadataObjects:(id)arg1;
- (void)processiPhoneCameraSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 captureContext:(CDStruct_4508418e)arg2;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)shutdown;
- (void)removeSwitchboardAsset;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes)arg1;
- (void)displaySwitchboardAsset:(id)arg1 withAttributes:(struct PTVSwitchboardAssetAttributes)arg2;
- (void)clearCanvasAnimated:(_Bool)arg1;
- (void)enqueueSketchPoints:(id)arg1;
- (id)initWithDelegate:(id)arg1 targetSize:(struct CGSize)arg2 audioVisualizerModel:(id)arg3 isHighQualityEnabled:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
