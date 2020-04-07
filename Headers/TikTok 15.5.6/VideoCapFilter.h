//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAGLContext, VideoProcessAlphaBlendFilter, VideoProcessBilateralFilter, VideoProcessCustomizedFilter, VideoProcessGaussianBlurFilter, VideoProcessPassThroughFilter, VideoProcessSharpenFilter, VideoProcessSkinDetectFilter, VideoProcessWhitenFilter;

@interface VideoCapFilter : NSObject
{
    EAGLContext *m_pGLContext;
    struct __CVOpenGLESTextureCache *m_pTexCache;
    unsigned int m_hFrameBufferPool[2];
    int m_nCurrentFrameIndex;
    struct __CVPixelBufferPool *_pool;
    struct __CVBuffer *m_pRenderPixelBuffer;
    struct __CVBuffer *m_pRenderPixelBuffer2;
    int m_nImgWidth;
    int m_nImgHeight;
    int m_nEnableBeautifying;
    int m_nEnableBeautifyingLastUpdate;
    int m_nCustomizedFilterIndex;
    int m_nCustomizedFilterIndexLastUpdate;
    float polish_step_;
    float polish_color_distance_factor_;
    float whiten_factor_;
    float sharpen_factor_;
    VideoProcessGaussianBlurFilter *m_pGaussianBlurFilter;
    VideoProcessAlphaBlendFilter *m_pAlphaBlendFilter;
    VideoProcessSkinDetectFilter *m_pSkinDetectFilter;
    VideoProcessBilateralFilter *m_pBilateralFilter;
    VideoProcessPassThroughFilter *m_pPassThroughFilter;
    VideoProcessWhitenFilter *m_pWhitenFilter;
    VideoProcessSharpenFilter *m_pSharpenFilter;
    VideoProcessCustomizedFilter *m_pCustomizedFilter;
    _Bool _isCreated;
}

@property(readonly, nonatomic) _Bool isCreated; // @synthesize isCreated=_isCreated;
- (void).cxx_destruct;
- (int)createTexture:(struct __CVBuffer **)arg1 FromPixelBuffer:(struct __CVBuffer *)arg2;
- (void)uninitCustomizedFilter;
- (void)initCustomizedFilter;
- (void)uninitBeautifying;
- (void)initBeautifying;
- (int)changeFormat:(int)arg1 width:(int)arg2 height:(int)arg3 strides:(int *)arg4;
- (int)getCurrentFrameBuffer;
- (struct __CVBuffer *)doRender:(struct __CVBuffer *)arg1;
- (void)doRenderWithFilter:(struct __CVBuffer *)arg1 secondInput:(struct __CVBuffer *)arg2 targetTexture:(struct __CVBuffer *)arg3 filter:(id)arg4 whichPass:(int)arg5;
- (int)doSetSharpenFactor:(float)arg1;
- (int)doSetWhitenFactor:(float)arg1;
- (int)doSetPolishFactor:(float)arg1;
- (int)doSetPolishStep:(float)arg1;
- (int)setCustomizedFilter:(int)arg1;
- (int)doSetCustomizedFilter:(int)arg1;
- (int)enableBeautifying:(int)arg1;
- (int)doEnableBeautifying:(int)arg1;
- (int)destroy;
- (int)create:(id)arg1;
- (id)init;

@end
