//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilterGroup.h"

@class HTSDivideFilter, HTSGLFilter, HTSGLFilterLookupBase, HTSGLPicture;

@interface IESImageFilterSwitchFilter : HTSGLFilterGroup
{
    double _leftIntensity;
    double _rightIntensity;
    double _switchProgress;
    HTSGLFilterLookupBase *_leftLookupFilter;
    HTSGLFilterLookupBase *_rightLookupFilter;
    HTSGLPicture *_leftLookupImageSource;
    HTSGLPicture *_rightLookupImageSource;
    HTSDivideFilter *_divideFilter;
    HTSGLFilter *_inputFilter;
}

@property(retain, nonatomic) HTSGLFilter *inputFilter; // @synthesize inputFilter=_inputFilter;
@property(retain, nonatomic) HTSDivideFilter *divideFilter; // @synthesize divideFilter=_divideFilter;
@property(retain, nonatomic) HTSGLPicture *rightLookupImageSource; // @synthesize rightLookupImageSource=_rightLookupImageSource;
@property(retain, nonatomic) HTSGLPicture *leftLookupImageSource; // @synthesize leftLookupImageSource=_leftLookupImageSource;
@property(retain, nonatomic) HTSGLFilterLookupBase *rightLookupFilter; // @synthesize rightLookupFilter=_rightLookupFilter;
@property(retain, nonatomic) HTSGLFilterLookupBase *leftLookupFilter; // @synthesize leftLookupFilter=_leftLookupFilter;
@property(nonatomic) double switchProgress; // @synthesize switchProgress=_switchProgress;
@property(nonatomic) double rightIntensity; // @synthesize rightIntensity=_rightIntensity;
@property(nonatomic) double leftIntensity; // @synthesize leftIntensity=_leftIntensity;
- (void).cxx_destruct;
- (void)resetFilters;
- (id)createGLFilterTwoInputWithType:(unsigned long long)arg1;
- (id)initWithLeftLookupImage:(id)arg1 RightLookupImage:(id)arg2 LeftImageType:(unsigned long long)arg3 RightImageType:(unsigned long long)arg4;
- (id)initWithLeftLookupImage:(id)arg1 RightLookupImage:(id)arg2;

@end
