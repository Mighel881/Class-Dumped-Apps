//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFPlayerMetalRenderer-Protocol.h"

@class NSString;
@protocol MTLBuffer, MTLCommandQueue, MTLRenderPipelineState, MTLSamplerState;

@interface FNFDefaultMetalRenderer : NSObject <FNFPlayerMetalRenderer>
{
    id <MTLCommandQueue> _commandQueue;
    id <MTLRenderPipelineState> _pipeline;
    id <MTLSamplerState> _sampler;
    id <MTLBuffer> _geometry;
    id <MTLBuffer> _colorConversion[2];
    float _rotation;
}

+ (void)_updateGeometryBufferWithPresentationRect:(struct CGSize)arg1 buffer:(id)arg2;
+ (struct CGSize)_updateVertexArrayWithPresentationRect:(struct CGSize)arg1 videoGravity:(id)arg2 layerBounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4;
- (void).cxx_destruct;
- (_Bool)drawFrame:(_Bool)arg1 presentationRect:(struct CGSize)arg2 lumaTexture:(id)arg3 chromaTexture:(id)arg4 drawable:(id)arg5 videoGravity:(id)arg6 rotation:(double)arg7 transform:(struct CGAffineTransform)arg8 colorConversion:(long long)arg9;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1;
- (_Bool)shouldRenderWhilePlaybackPaused;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
