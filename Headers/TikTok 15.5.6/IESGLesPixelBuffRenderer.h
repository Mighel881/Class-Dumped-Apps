//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESGLesBaseMvpRenderer.h"

@interface IESGLesPixelBuffRenderer : IESGLesBaseMvpRenderer
{
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVBuffer *_rgbaTexture;
    float *_preferredConversion;
    _Bool _isFullRange;
}

@property(nonatomic) _Bool isFullRange; // @synthesize isFullRange=_isFullRange;
- (void)deInit;
- (void)renderRgba;
- (void)renderYuv;
- (void)innerRender;
- (void)cleanUpTextures;
- (void)mapRBGA4PixelBuffer:(struct __CVBuffer *)arg1;
- (void)mappingTexture:(unsigned int)arg1 imageBuffer:(struct __CVBuffer *)arg2 textureFormat:(int)arg3 width:(int)arg4 height:(int)arg5 planeIndex:(unsigned long long)arg6;
- (void)colorConversion:(struct __CVBuffer *)arg1;
- (void)loadData:(struct __CVBuffer *)arg1 frameWidth:(int)arg2 frameHeight:(int)arg3;
- (void)render:(struct __CVBuffer *)arg1 outSize:(struct CGSize)arg2;
- (void)setFullYUVRange:(_Bool)arg1;
- (void)doInit;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end
