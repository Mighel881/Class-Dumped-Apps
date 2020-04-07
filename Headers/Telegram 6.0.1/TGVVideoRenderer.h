//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSampleBufferDisplayLayer;
@protocol TGVVideoRendererDelegate;

@interface TGVVideoRenderer : NSObject
{
    AVSampleBufferDisplayLayer *layer;
    id <TGVVideoRendererDelegate> delegate;
    struct SampleBufferDisplayLayerRenderer *nativeRenderer;
}

- (void).cxx_destruct;
- (void)_enqueueBuffer:(struct opaqueCMSampleBuffer *)arg1 reset:(_Bool)arg2;
- (struct VideoRenderer *)nativeVideoRenderer;
- (void)dealloc;
- (id)initWithDisplayLayer:(id)arg1 delegate:(id)arg2;

@end
