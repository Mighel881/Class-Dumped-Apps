//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUITitleTreatmentView, NSString, UIColor, UIImageView;

@interface NFUIPreviewsBookmarkTitleImageView : UIView
{
    _Bool _isForwardAnimation;
    _Bool _showBranding;
    _Bool _isLayoutDirty;
    UIColor *_color;
    double _progress;
    long long _index;
    double _animationProgress;
    NSString *_accessibilityProgressTime;
    UIView *_bookmarkBackgroundView;
    UIView *_bookmarkProgressView;
    NFUITitleTreatmentView *_titleTreatmentView;
    UIImageView *_brandingImageView;
    NSString *_accessibilityTitle;
    NSString *_brandingUrl;
}

@property(copy, nonatomic) NSString *brandingUrl; // @synthesize brandingUrl=_brandingUrl;
@property(nonatomic) _Bool isLayoutDirty; // @synthesize isLayoutDirty=_isLayoutDirty;
@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property(retain, nonatomic) UIImageView *brandingImageView; // @synthesize brandingImageView=_brandingImageView;
@property(retain, nonatomic) NFUITitleTreatmentView *titleTreatmentView; // @synthesize titleTreatmentView=_titleTreatmentView;
@property(retain, nonatomic) UIView *bookmarkProgressView; // @synthesize bookmarkProgressView=_bookmarkProgressView;
@property(retain, nonatomic) UIView *bookmarkBackgroundView; // @synthesize bookmarkBackgroundView=_bookmarkBackgroundView;
@property(copy, nonatomic) NSString *accessibilityProgressTime; // @synthesize accessibilityProgressTime=_accessibilityProgressTime;
@property(nonatomic) _Bool showBranding; // @synthesize showBranding=_showBranding;
@property(nonatomic) _Bool isForwardAnimation; // @synthesize isForwardAnimation=_isForwardAnimation;
@property(nonatomic) double animationProgress; // @synthesize animationProgress=_animationProgress;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setTitleTreatmentAlpha:(double)arg1;
- (void)setProgressBarHidden:(_Bool)arg1;
- (void)setTitleImageUrl:(id)arg1 withVideoTitle:(id)arg2 andBrandingUrl:(id)arg3;
- (void)layoutSubviews;
- (void)renderBrandingAndLogo;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (void)initSubviews;
- (id)init;

@end

