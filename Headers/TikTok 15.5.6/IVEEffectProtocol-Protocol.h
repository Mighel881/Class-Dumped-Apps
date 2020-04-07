//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAsset, HTSEffectContext, IESMMEffectStickerInfo, NSArray, NSString;

@protocol IVEEffectProtocol <NSObject>
- (_Bool)setMaleMakeupState:(_Bool)arg1;
- (_Bool)getColorFilterIntensity:(NSString *)arg1 outIntensity:(float *)arg2;
- (_Bool)setColorFilterIntensity:(NSString *)arg1 inIntensity:(float)arg2;
- (_Bool)switchColorFilterIntensity:(NSString *)arg1 inFilterPath:(NSString *)arg2 inPosition:(float)arg3 inLeftIntensity:(float)arg4 inRightIntensity:(float)arg5;
- (void)applyEffectIntensity:(struct IESIndensityParam_t)arg1 type:(long long)arg2;
- (void)removeAllEffect;
- (void)removeEffectWithRangeID:(NSString *)arg1;
- (NSString *)applyEffectPath:(NSString *)arg1 withTime:(double)arg2 duration:(double)arg3;
- (void)applyEffectWithInfo:(IESMMEffectStickerInfo *)arg1 type:(long long)arg2;
- (void)setEffectLoadStatusBlock:(void (^)(unsigned long long, long long, NSString *))arg1;
- (void)stopEffectStartTime:(double)arg1;
- (void)startEffectWithPathId:(NSString *)arg1 startTime:(double)arg2;
- (void)switchFilterWithPathOne:(NSString *)arg1 PathTwo:(NSString *)arg2 direction:(long long)arg3 progress:(double)arg4;
- (void)applyFilterWithPath:(NSString *)arg1;

@optional
- (void)reloadEffectFilters;
- (void)updateEffectContext:(HTSEffectContext *)arg1 forAsset:(AVAsset *)arg2;
- (void)updateFeatureInfo:(NSArray *)arg1 forAsset:(AVAsset *)arg2;
- (NSString *)applyEffectPathId:(NSString *)arg1 withTime:(double)arg2 duration:(double)arg3;
@end
