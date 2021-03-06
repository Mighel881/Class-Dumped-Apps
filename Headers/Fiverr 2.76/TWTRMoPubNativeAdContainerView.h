//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MPNativeAdRendering-Protocol.h"

@class NSString, TWTRMoPubAdDisclaimerView, TWTRMoPubNativeAdView, UIColor;

@interface TWTRMoPubNativeAdContainerView : UIView <MPNativeAdRendering>
{
    _Bool _doneInitializing;
    unsigned long long _theme;
    UIColor *_backgroundColor;
    UIColor *_adBackgroundColor;
    UIColor *_primaryTextColor;
    UIColor *_buttonBackgroundColor;
    TWTRMoPubNativeAdView *_adView;
    TWTRMoPubAdDisclaimerView *_disclaimerView;
}

+ (id)callToActionTextColorFromBackgroundColor:(id)arg1;
+ (id)borderColorForTheme:(unsigned long long)arg1;
+ (id)defaultButtonBackgroundColor;
+ (id)primaryTextColorForTheme:(unsigned long long)arg1;
+ (id)adBackgroundColorForTheme:(unsigned long long)arg1;
+ (id)backgroundColorForTheme:(unsigned long long)arg1;
+ (void)initialize;
@property(nonatomic) _Bool doneInitializing; // @synthesize doneInitializing=_doneInitializing;
@property(readonly, nonatomic) TWTRMoPubAdDisclaimerView *disclaimerView; // @synthesize disclaimerView=_disclaimerView;
@property(readonly, nonatomic) TWTRMoPubNativeAdView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UIColor *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(retain, nonatomic) UIColor *adBackgroundColor; // @synthesize adBackgroundColor=_adBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsUpdateComputedColors;
- (id)nativePrivacyInformationIconImageView;
- (id)nativeMainImageView;
- (id)nativeIconImageView;
- (id)nativeCallToActionTextLabel;
- (id)nativeTitleTextLabel;
- (id)nativeMainTextLabel;
- (void)setUpAccessibility;
- (void)prepareLayout;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

