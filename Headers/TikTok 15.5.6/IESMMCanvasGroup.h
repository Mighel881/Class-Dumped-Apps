//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilterGroup.h"

#import "IESMMCanvasConfigProtocol-Protocol.h"
#import "IESMMCanvasInteractProtocol-Protocol.h"
#import "IESMMCanvasSourceProtocol-Protocol.h"

@class HTSGLPicture, IESEffectVideoAnimatedRenderer, IESMMCanvasBaseFilter, IESMMCanvasConfig, IESMMCanvasSrcManager, NSString;

@interface IESMMCanvasGroup : HTSGLFilterGroup <IESMMCanvasInteractProtocol, IESMMCanvasConfigProtocol, IESMMCanvasSourceProtocol>
{
    IESMMCanvasBaseFilter *_canvaseFilter;
    IESMMCanvasSrcManager *_srcManager;
    IESMMCanvasConfig *_config;
    HTSGLPicture *_canvasPicFilter;
    CDUnknownBlockType _observable;
    IESEffectVideoAnimatedRenderer *_renderer;
    struct CGSize _canvasSize;
}

@property(retain, nonatomic) IESEffectVideoAnimatedRenderer *renderer; // @synthesize renderer=_renderer;
@property(copy, nonatomic) CDUnknownBlockType observable; // @synthesize observable=_observable;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(retain, nonatomic) HTSGLPicture *canvasPicFilter; // @synthesize canvasPicFilter=_canvasPicFilter;
@property(retain, nonatomic) IESMMCanvasConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) IESMMCanvasSrcManager *srcManager; // @synthesize srcManager=_srcManager;
@property(retain, nonatomic) IESMMCanvasBaseFilter *canvaseFilter; // @synthesize canvaseFilter=_canvaseFilter;
- (void).cxx_destruct;
- (void)registerCanvasSourceBlock:(CDUnknownBlockType)arg1;
- (void)removeSourceWithIndex:(long long)arg1;
- (void)insertSourceToIndex:(long long)arg1;
- (void)setCanvasAnimatedRenderer:(id)arg1;
- (_Bool)changeCanvasConfig:(id)arg1 canvasSize:(struct CGSize)arg2;
- (void)transformSource:(long long)arg1 toScale:(double)arg2;
- (void)transformSource:(long long)arg1 toRotation:(double)arg2;
- (void)transformSource:(long long)arg1 toPoint:(struct CGPoint)arg2;
- (id)canvasKey;
- (void)activeVideoAnimation:(id)arg1;
- (id)makeFiltersWith:(id)arg1;
- (void)setVideoTrackId:(long long)arg1;
- (void)setupFilterWithConfig:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 observable:(CDUnknownBlockType)arg2 canvasSize:(struct CGSize)arg3 renderer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
