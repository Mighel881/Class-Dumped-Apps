//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GVRWidgetView.h"

#import "GVRVideoTextureGeneratorDelegate-Protocol.h"

@class GVRVideoTextureGenerator, NSString, NSURL;

@interface GVRVideoView : GVRWidgetView <GVRVideoTextureGeneratorDelegate>
{
    _Bool _hasVideoTextures;
    int _videoType;
    GVRVideoTextureGenerator *_videoTextureGenerator;
    NSURL *_videoUrl;
    shared_ptr_4ce16c32 _panoVideoRenderer;
    shared_ptr_db9a4e15 _sphericalV2Manager;
}

@property(nonatomic) shared_ptr_db9a4e15 sphericalV2Manager; // @synthesize sphericalV2Manager=_sphericalV2Manager;
@property(nonatomic) _Bool hasVideoTextures; // @synthesize hasVideoTextures=_hasVideoTextures;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) shared_ptr_4ce16c32 panoVideoRenderer; // @synthesize panoVideoRenderer=_panoVideoRenderer;
@property(retain, nonatomic) GVRVideoTextureGenerator *videoTextureGenerator; // @synthesize videoTextureGenerator=_videoTextureGenerator;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
-     // Error parsing type: {SphericalMetadata=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{StereoMeshConfig}iiii}16@0:8, name: getSphericalMetadata
- (void)loadVideoTexture;
- (void)prefetchSphericalV2Data;
- (void)resetRenderer;
- (shared_ptr_4ce16c32)renderer;
- (void)drawAtTime:(double)arg1;
- (void)videoRenderer:(id)arg1 playerItemDidReachEnd:(id)arg2;
- (void)videoRenderer:(id)arg1 observeValueForKeyPath:(id)arg2 ofObject:(id)arg3 change:(id)arg4 context:(void *)arg5;
- (void)videoRenderer:(id)arg1 didUpdatePosition:(double)arg2;
- (void)videoRendererLoaded:(id)arg1;
- (void)resumeRenderer;
- (void)pauseRenderer;
@property(nonatomic) float volume;
- (void)seekTo:(double)arg1;
- (double)playableDuration;
- (double)duration;
- (void)stop;
- (void)play;
- (void)pause;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)loadVideoInRenderLoop;
- (void)loadFromUrl:(id)arg1 ofType:(int)arg2;
- (void)loadFromUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initVideoView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

