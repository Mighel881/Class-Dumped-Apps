//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface FBVideoEdits : NSObject <NSCopying>
{
    NSMutableDictionary *_data;
}

- (void).cxx_destruct;
- (void)setIsReversed:(_Bool)arg1;
- (_Bool)isReversed;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMinRequestedResolution:(long long)arg1;
- (long long)minRequestedResolution;
- (void)setShouldApplyPreferredTransformForRendering:(_Bool)arg1;
- (_Bool)shouldApplyPreferredTransformForRendering;
- (void)setOutputVideoAspectRatio:(double)arg1;
- (double)outputVideoAspectRatio;
- (struct CGAffineTransform)transform;
- (_Bool)hasTransform;
- (void)setTransform_DO_NOT_USE:(struct CGAffineTransform)arg1;
- (void)setFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)frameDuration;
- (void)clearCropRectangle;
- (struct CGRect)cropRectangle;
- (void)setCropRectangle:(struct CGRect)arg1;
- (CDStruct_e83c9415)trimRange;
- (void)setTrimRange:(CDStruct_e83c9415)arg1;
- (id)audioMix;
- (void)setAudioMix:(id)arg1;
- (_Bool)isAudioMuted;
- (void)setMuteAudio:(_Bool)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)init;

@end

