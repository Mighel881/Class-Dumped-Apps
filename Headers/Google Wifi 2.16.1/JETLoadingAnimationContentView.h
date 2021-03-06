//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class MDCActivityIndicator, UIImageView;

@interface JETLoadingAnimationContentView : GOOBaseContentView
{
    _Bool _loadingFailed;
    MDCActivityIndicator *_spinner;
    UIImageView *_failedImageView;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(nonatomic) _Bool loadingFailed; // @synthesize loadingFailed=_loadingFailed;
@property(retain, nonatomic) UIImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
@property(retain, nonatomic) MDCActivityIndicator *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

