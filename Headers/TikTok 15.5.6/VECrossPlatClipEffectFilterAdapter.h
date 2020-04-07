//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEUnitObject.h"

#import "IVEAmazingFeatureProtocol-Protocol.h"
#import "IVEAmazingMaskProtocol-Protocol.h"
#import "IVEClipEffectBinProtocol-Protocol.h"
#import "IVEUnitObject-Protocol.h"
#import "VEProcessSampleDelegate-Protocol.h"

@class HTSGLContext, HTSVideoData, NSObject, NSString, VEModelAdapter, VEReadWriteLock;
@protocol IVEEffectAlgorithmProtocol, IVEEffectPublicProtocol, OS_dispatch_semaphore;

@interface VECrossPlatClipEffectFilterAdapter : VEUnitObject <IVEUnitObject, VEProcessSampleDelegate, IVEClipEffectBinProtocol, IVEAmazingFeatureProtocol, IVEAmazingMaskProtocol>
{
    struct TESmartPtr<VEEditorAdapter> editor_;
    struct VEEffectFilterParamsArray effects_;
    struct VECommonFilterParamsArray filters_;
    struct VEAmazingFilterParamsMap amazingFiltersDic_;
    struct VEAmazingMaskParamsMap amazingMasksDic_;
    struct VECanvasWrapEffectParamsMap canvasWrapEffectDic_;
    struct VEEffectFilterParam effect_;
    struct VEColorFilterParam color_;
    struct VEHDRFilterParam hdr_;
    struct VEBeautyFilterParam beauty_;
    struct VEReshapeFilterParam reshape_;
    struct VEVideoAjustmentFilterParam adjustment_;
    struct Builder composer_;
    struct VEMusicSRTEffectParam srt_;
    NSObject<OS_dispatch_semaphore> *msgSemaphore_;
    struct IVEClipEffectBinAdapter *effectBin_;
    _Bool _bUseFilter;
    id <IVEEffectAlgorithmProtocol> _algorithmImp;
    id <IVEEffectPublicProtocol> _effectImp;
    NSString *_route;
    HTSGLContext *_context;
    HTSVideoData *_videoData;
    VEReadWriteLock *_amazingMasklock;
    VEReadWriteLock *_amazinglock;
    VEModelAdapter *_vemodelAdapter;
    VEReadWriteLock *_canvasWraplock;
    VEReadWriteLock *_videoTransformlock;
    NSString *_colorFilterPath;
}

@property(retain, nonatomic) NSString *colorFilterPath; // @synthesize colorFilterPath=_colorFilterPath;
@property(retain, nonatomic) VEReadWriteLock *videoTransformlock; // @synthesize videoTransformlock=_videoTransformlock;
@property(retain, nonatomic) VEReadWriteLock *canvasWraplock; // @synthesize canvasWraplock=_canvasWraplock;
@property(nonatomic) __weak VEModelAdapter *vemodelAdapter; // @synthesize vemodelAdapter=_vemodelAdapter;
@property(retain, nonatomic) VEReadWriteLock *amazinglock; // @synthesize amazinglock=_amazinglock;
@property(retain, nonatomic) VEReadWriteLock *amazingMasklock; // @synthesize amazingMasklock=_amazingMasklock;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) _Bool bUseFilter; // @synthesize bUseFilter=_bUseFilter;
@property(retain, nonatomic) HTSGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
@property(readonly, nonatomic) id <IVEEffectPublicProtocol> effectImp; // @synthesize effectImp=_effectImp;
@property(readonly, nonatomic) id <IVEEffectAlgorithmProtocol> algorithmImp; // @synthesize algorithmImp=_algorithmImp;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getProcessInfo;
- (void)p_removeAllAmazingMasks;
- (void)p_restoreAmazingMasks:(id)arg1;
- (long long)p_maskIndex:(id)arg1 inAsset:(id)arg2;
- (void)updateMask:(id)arg1 forAsset:(id)arg2;
- (void)deleteMask:(id)arg1 forAsset:(id)arg2;
- (void)addMask:(id)arg1 forAsset:(id)arg2;
- (void)setAlgorithmReplayMmode:(long long)arg1 filePath:(id)arg2;
- (void)setAlgorithmResultsRequirement:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setAlgorithmRequirement:(unsigned long long)arg1 algorithmParam:(unsigned long long)arg2 enableDetect:(_Bool)arg3;
- (void)setAlgorithmExtraParam:(id)arg1;
- (void)setAlgorithmPreConfig:(id)arg1;
- (void)reloadEffectFilters;
- (void)p_postMessage:(struct TEMsg *)arg1;
- (void)p_syncMsgDone;
- (void)p_syncMsgWait;
- (vector_ebb6ef3e)p_getComposerTagsArray:(id)arg1;
- (vector_ebb6ef3e)p_getComposerNodeArray:(id)arg1;
- (int)p_updateComposerFilter:(struct Builder *)arg1;
- (void)p_removeAllAmazingFeatures;
- (void)p_removeAllEffectFilters;
- (struct VECommonFilterParamsArray)p_getCommonFilters;
- (int)p_commonFilterCount;
- (int)p_effectFilterCount;
- (void)p_restoreAmazingFeatures:(id)arg1;
- (void)p_restoreCommonFilters;
- (void)p_restoreEffectFilters:(id)arg1;
- (_Bool)p_updateEffectFilterStopTime:(double)arg1;
- (int)p_effectLoadTime;
- (int)p_updateFilter:(struct VEBaseFilterParam *)arg1;
- (int)p_removeFilter:(struct VEBaseFilterParam *)arg1;
- (int)p_addFilter:(struct VEBaseFilterParam *)arg1 trackIndex:(int)arg2;
- (int)p_addFilter:(struct VEBaseFilterParam *)arg1;
- (void)setRenderCacheTextureWithBufferByKey:(id)arg1 value:(id)arg2;
- (void)setRenderCacheTextureOrientationByKey:(id)arg1 value:(long long)arg2;
- (void)setRenderCacheTextureByKey:(id)arg1 value:(id)arg2;
- (void)setRenderCacheStringByKey:(id)arg1 value:(id)arg2;
- (void)setRenderCacheIntValueByKey:(id)arg1 value:(int)arg2;
- (struct VECanvasWrapEffectParam *)fetchCanasWrapEffect:(id)arg1 finded:(_Bool *)arg2 clipIndex:(int *)arg3;
- (void)updateAssetBlendMode:(id)arg1 blendMode:(id)arg2;
- (void)updateAssetAnimateInfo:(id)arg1 animateInfo:(id)arg2;
- (void)transformSource:(id)arg1 source:(id)arg2;
- (void)rebuildCanvasGroups;
- (void)refreshCanvasGroupsWithKey:(id)arg1 config:(id)arg2;
- (long long)p_featureIndex:(id)arg1 inAsset:(id)arg2;
- (void)updateFeature:(id)arg1 forAsset:(id)arg2;
- (void)deleteFeature:(id)arg1 forAsset:(id)arg2;
- (void)addFeature:(id)arg1 forAsset:(id)arg2;
- (void)removeAllEffect;
- (void)removeEffectWithRangeID:(id)arg1;
- (id)applyEffectPath:(id)arg1 withTime:(double)arg2 duration:(double)arg3;
- (void)switchFilterWithPathOne:(id)arg1 PathTwo:(id)arg2 direction:(long long)arg3 progress:(double)arg4;
- (_Bool)switchColorFilterIntensity:(id)arg1 inFilterPath:(id)arg2 inPosition:(float)arg3 inLeftIntensity:(float)arg4 inRightIntensity:(float)arg5;
- (void)stopEffectStartTime:(double)arg1;
- (void)startEffectWithPathId:(id)arg1 startTime:(double)arg2;
- (_Bool)setMaleMakeupState:(_Bool)arg1;
- (void)setEffectLoadStatusBlock:(CDUnknownBlockType)arg1;
- (_Bool)setColorFilterIntensity:(id)arg1 inIntensity:(float)arg2;
- (_Bool)getColorFilterIntensity:(id)arg1 outIntensity:(float *)arg2;
- (void)applyFilterWithPath:(id)arg1;
- (void)applyEffectWithInfo:(id)arg1 type:(long long)arg2;
- (id)applyEffectPathId:(id)arg1 withTime:(double)arg2 duration:(double)arg3;
- (void)applyEffectIntensity:(struct IESIndensityParam_t)arg1 type:(long long)arg2;
- (id)getCurrentComposerNodes;
- (float)getValueForComposerNode:(id)arg1 key:(id)arg2;
- (_Bool)updateComposerNode:(id)arg1 key:(id)arg2 value:(double)arg3;
- (_Bool)replaceComposerNodesWithTags:(id)arg1 old:(id)arg2;
- (_Bool)operateComposerNodesWithTags:(id)arg1 operation:(long long)arg2;
- (void)setConfig:(id)arg1 updateVideoDataType:(long long)arg2 vemodel:(id)arg3;
- (void)setEditorAdapter:(struct VEEditorAdapter *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
