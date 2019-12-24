//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESVideoTransitionFilterBuilder : NSObject
{
}

+ (id)zoomoutBlurTransition;
+ (id)zoominBlurTransition;
+ (id)verticalLineTransition;
+ (id)upWipeTransition;
+ (id)upOffsetTransition;
+ (id)roundMaskTransition;
+ (id)horizonalLineTransition;
+ (id)downWipeTransition;
+ (id)downOffsetTransition;
+ (id)dissolveTransition;
+ (id)whiteTransition;
+ (id)blackTransition;
+ (id)overlapRightMoveTransition;
+ (id)overlapLeftMoveTransition;
+ (id)overlapBlendTransition;
+ (id)picMoviePTransition;
+ (id)picMovieHTransition;
+ (id)buildTransFilter:(id)arg1;
+ (id)buildTransFilter:(id)arg1 renderer:(id)arg2;
+ (_Bool)isNeedProgressForType:(long long)arg1;
+ (void)addProgressForTransFilter:(id)arg1 mediaInfo:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
+ (_Bool)isOverlapType:(long long)arg1;
+ (double)getOverLapDurationForType:(long long)arg1 transDuration:(double)arg2;

@end
