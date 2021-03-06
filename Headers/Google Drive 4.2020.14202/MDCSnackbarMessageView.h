//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <drive_extension_framework/CAAnimationDelegate-Protocol.h>
#import <drive_extension_framework/MDCElevatable-Protocol.h>
#import <drive_extension_framework/MDCElevationOverriding-Protocol.h>

@class MDCSnackbarMessage, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIControl, UIFont, UIImageView, UILabel;

@interface MDCSnackbarMessageView : UIView <CAAnimationDelegate, MDCElevatable, MDCElevationOverriding>
{
    UIFont *_messageFont;
    UIFont *_buttonFont;
    NSMutableArray *_actionButtons;
    NSMutableDictionary *_buttonTitleColors;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    _Bool _adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable;
    _Bool _dismissing;
    _Bool _anchoredToScreenBottom;
    double _mdc_overrideBaseElevation;
    CDUnknownBlockType _mdc_elevationDidChangeBlock;
    UIColor *_snackbarMessageViewBackgroundColor;
    UIColor *_snackbarMessageViewShadowColor;
    UIColor *_messageTextColor;
    double _elevation;
    NSString *_accessibilityLabel;
    NSString *_accessibilityHint;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    UIImageView *_imageView;
    NSArray *_buttons;
    UILabel *_label;
    NSArray *_viewConstraints;
    UIControl *_containerView;
    UIView *_buttonView;
    UIView *_contentView;
    UIControl *_buttonGutterTapTarget;
    CDUnknownBlockType _dismissalHandler;
    MDCSnackbarMessage *_message;
}

+ (id)bundlePathWithName:(id)arg1;
+ (id)bundle;
+ (_Bool)requiresConstraintBasedLayout;
+ (Class)layerClass;
@property(nonatomic) _Bool anchoredToScreenBottom; // @synthesize anchoredToScreenBottom=_anchoredToScreenBottom;
@property(readonly, nonatomic) MDCSnackbarMessage *message; // @synthesize message=_message;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(retain, nonatomic) UIControl *buttonGutterTapTarget; // @synthesize buttonGutterTapTarget=_buttonGutterTapTarget;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIControl *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *viewConstraints; // @synthesize viewConstraints=_viewConstraints;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic) _Bool adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable; // @synthesize adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable=_adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable;
@property(copy, nonatomic) NSString *accessibilityHint; // @synthesize accessibilityHint=_accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) double elevation; // @synthesize elevation=_elevation;
@property(retain, nonatomic) NSMutableArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) UIColor *messageTextColor; // @synthesize messageTextColor=_messageTextColor;
@property(retain, nonatomic) UIColor *snackbarMessageViewShadowColor; // @synthesize snackbarMessageViewShadowColor=_snackbarMessageViewShadowColor;
@property(retain, nonatomic) UIColor *snackbarMessageViewBackgroundColor; // @synthesize snackbarMessageViewBackgroundColor=_snackbarMessageViewBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType mdc_elevationDidChangeBlock; // @synthesize mdc_elevationDidChangeBlock=_mdc_elevationDidChangeBlock;
@property(nonatomic) double mdc_overrideBaseElevation; // @synthesize mdc_overrideBaseElevation=_mdc_overrideBaseElevation;
- (void).cxx_destruct;
@property(readonly, nonatomic) double mdc_currentElevation;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory;
- (id)animateSnackbarScaleFrom:(double)arg1 toScale:(double)arg2;
- (id)animateSnackbarOpacityFrom:(double)arg1 to:(double)arg2;
- (void)animateContentOpacityFrom:(double)arg1 to:(double)arg2 duration:(double)arg3 timingFunction:(id)arg4;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)handleButtonTapped:(id)arg1;
- (void)handleButtonGutterTapped:(id)arg1;
- (void)handleBackgroundTapped:(id)arg1;
- (void)handleBackgroundSwipedLeft:(id)arg1;
- (void)handleBackgroundSwipedRight:(id)arg1;
- (struct UIEdgeInsets)safeContentMargin;
- (double)contentSafeBottomInset;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)horizontalButtonLayoutConstraints;
- (id)contentViewConstraints;
- (id)containerViewConstraints;
- (void)updateConstraints;
- (_Bool)shouldWaitForDismissalDuringVoiceover;
- (void)updateButtonFont;
@property(retain, nonatomic) UIFont *buttonFont;
- (void)updateMessageFont;
@property(retain, nonatomic) UIFont *messageFont;
- (void)addColorToMessageLabel:(id)arg1;
- (void)setButtonTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)buttonTitleColorForState:(unsigned long long)arg1;
- (void)setSnackbarShadowColor:(id)arg1;
@property(readonly, nonatomic) double maximumWidth;
@property(readonly, nonatomic) double minimumWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dismissWithAction:(id)arg1 userInitiated:(_Bool)arg2;
- (void)initializeMDCSnackbarMessageViewButtons:(id)arg1 withManager:(id)arg2;
- (id)initWithMessage:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2 snackbarManager:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

