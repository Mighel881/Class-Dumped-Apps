//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilterGaussianBlur.h"

@interface HTSGLFilterBilateral : HTSGLFilterGaussianBlur
{
    double _distanceNormalizationFactor;
}

@property(nonatomic) double distanceNormalizationFactor; // @synthesize distanceNormalizationFactor=_distanceNormalizationFactor;
- (void)initializeRenderer:(id)arg1;
- (id)init;

@end
