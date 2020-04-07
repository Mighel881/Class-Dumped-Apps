//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/HAMFrameSourceDelegate-Protocol.h>

@class AVSampleBufferDisplayLayer, AVSampleBufferRenderSynchronizer, NSObject, NSString;
@protocol HAMFrameSource, OS_dispatch_queue;

@interface HAMSBDLSampleBufferRenderingView : UIView <HAMFrameSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    AVSampleBufferDisplayLayer *_layer;
    id <HAMFrameSource> _frameSource;
    AVSampleBufferRenderSynchronizer *_synchronizer;
    int _layerRenderFailures;
    // Error parsing type: {atomic<CGSize>="__a_"A{CGSize}}, name: _lastEnqueuedFrameSize
    _Bool _waitingForSeek;
    struct OpaqueCMTimebase *_timebase;
}

+ (Class)layerClass;
@property(readonly, nonatomic) struct OpaqueCMTimebase *timebase; // @synthesize timebase=_timebase;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layerFailedToDecode:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)deactivateFrameSource;
- (void)willMoveToWindow:(id)arg1;
- (void)frameSource:(id)arg1 didProduceSampleBuffer:(id)arg2;
- (void)frameSourceDidSeek:(id)arg1;
- (void)frameSourceDidUnpause:(id)arg1;
- (void)frameSourceDidPause:(id)arg1;
- (void)frameSourceDidDeactivate:(id)arg1;
- (void)frameSourceDidActivate:(id)arg1;
@property(readonly, nonatomic) int sampleBufferQueueCapacity;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
