//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/OAStackView.h>

@class GOOTextField, GWAAttributedLabel, GWAImageWithCaptionView, GWATintedImageView, GWAToolTipAlertView, NSAttributedString, NSString, OrchTooltip, UIColor, UIImage, UIImageView;
@protocol GWASummaryViewDelegate;

@interface GWASummaryView : OAStackView
{
    OAStackView *_textFieldContainerView;
    GOOTextField *_textField;
    GWAAttributedLabel *_primaryTitleLabel;
    GWAAttributedLabel *_secondaryTitleLabel;
    GWAImageWithCaptionView *_tooltipImageView;
    GWAToolTipAlertView *_tooltipAlertView;
    GWATintedImageView *_leftImageView;
    UIImageView *_rightImageView;
    _Bool _submittable;
    id <GWASummaryViewDelegate> _summaryViewDelegate;
    NSString *_sectionName;
    UIImage *_leftIcon;
    UIColor *_leftIconColor;
    OrchTooltip *_tooltip;
    unsigned long long _displayType;
    UIColor *_lightModePrimaryTitleLabelTextColor;
    UIColor *_lightModeSecondaryTitleLabelTextColor;
    UIColor *_darkModePrimaryTitleLabelTextColor;
    UIColor *_darkModeSecondaryTitleLabelTextColor;
}

+ (id)viewWithTextComponents:(id)arg1 image:(id)arg2 accessibiltySectionName:(id)arg3;
+ (id)viewWithText:(id)arg1 image:(id)arg2 accessibiltySectionName:(id)arg3;
@property(retain, nonatomic) UIColor *darkModeSecondaryTitleLabelTextColor; // @synthesize darkModeSecondaryTitleLabelTextColor=_darkModeSecondaryTitleLabelTextColor;
@property(retain, nonatomic) UIColor *darkModePrimaryTitleLabelTextColor; // @synthesize darkModePrimaryTitleLabelTextColor=_darkModePrimaryTitleLabelTextColor;
@property(retain, nonatomic) UIColor *lightModeSecondaryTitleLabelTextColor; // @synthesize lightModeSecondaryTitleLabelTextColor=_lightModeSecondaryTitleLabelTextColor;
@property(retain, nonatomic) UIColor *lightModePrimaryTitleLabelTextColor; // @synthesize lightModePrimaryTitleLabelTextColor=_lightModePrimaryTitleLabelTextColor;
@property(nonatomic, getter=isSubmittable) _Bool submittable; // @synthesize submittable=_submittable;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) OrchTooltip *tooltip; // @synthesize tooltip=_tooltip;
@property(retain, nonatomic) UIColor *leftIconColor; // @synthesize leftIconColor=_leftIconColor;
@property(retain, nonatomic) UIImage *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(copy, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(nonatomic) __weak id <GWASummaryViewDelegate> summaryViewDelegate; // @synthesize summaryViewDelegate=_summaryViewDelegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)stringValue;
- (void)tapAction;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)imageTapped:(id)arg1;
@property(retain, nonatomic) UIImage *rightIcon;
@property(copy, nonatomic) NSString *placeholder;
- (void)applyDarkMode;
- (void)applyLightMode;
@property(copy, nonatomic) NSAttributedString *secondaryTitle;
@property(copy, nonatomic) NSAttributedString *primaryTitle;
@property(copy, nonatomic) NSString *text;
- (id)textField;
- (id)init;

@end
