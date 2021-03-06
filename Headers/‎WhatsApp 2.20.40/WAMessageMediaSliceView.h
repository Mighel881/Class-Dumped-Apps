//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

#import "WAMessageTrailingCorner-Protocol.h"
#import "WAScrollTracking-Protocol.h"

@class NSString, UIImageView, UIView, WAAutoCropImageView, WAMediaPlayerPlayButtonView, WAMessageMediaSlice;

@interface WAMessageMediaSliceView : WAMessageContainerSliceView <WAScrollTracking, WAMessageTrailingCorner>
{
    UIImageView *_roundedCornersImageView;
    double _parallaxScaleFactor;
    UIImageView *_trailingCornerImageView;
    WAMediaPlayerPlayButtonView *_playButtonView;
    long long _imageQuality;
    WAAutoCropImageView *_imageView;
    UIView *_containerView;
    struct CGSize _trailingCornerShadowSize;
}

+ (double)parallaxScaleFactorForViewableContentHeightInPoints:(double)arg1;
+ (_Bool)pairsWithQuickActionButton;
+ (_Bool)isUserInteractionEnabled;
+ (_Bool)needsProgressView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct CGSize trailingCornerShadowSize; // @synthesize trailingCornerShadowSize=_trailingCornerShadowSize;
@property(readonly, nonatomic) WAAutoCropImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updatePlayButtonViewVisibility;
- (void)didShowProgressViewWithAnimation:(_Bool)arg1;
- (void)didHideProgressViewWithAnimation:(_Bool)arg1;
- (void)configureProgressView:(id)arg1;
- (void)resetProgressViewState:(id)arg1;
- (void)layoutProgressView:(id)arg1;
- (void)adjustProgressView:(id)arg1 forHiddenState:(_Bool)arg2;
- (id)newCompactProgressView;
- (id)newStandardProgressView;
- (_Bool)usesCompactProgressView;
- (void)prepareForPreviewWithContext:(id)arg1;
- (id)dataForPreviewingContext:(id)arg1 location:(struct CGPoint)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateRoundedCornersImageView:(id)arg1;
- (void)setViewFrames:(struct CGRect)arg1;
- (void)reloadHighlightedState;
- (void)layoutTrailingCornerViewIfNeeded;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (void)updateParallaxEffectIfPossible;
- (void)didMoveToWindow;
- (void)setNeedsUpdateScrollOffsetEffects;
- (_Bool)needsParallax;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)activate;
@property(readonly, nonatomic) _Bool isActive;
- (_Bool)isDoubleTapGestureEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WAMessageMediaSlice *slice; // @dynamic slice;
@property(readonly) Class superclass;

@end

