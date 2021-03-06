//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TGModernButton, TGPaintSwatch, TGPhotoPaintColorPicker, UIButton;
@protocol LegacyComponentsContext;

@interface TGPhotoPaintSettingsView : UIView
{
    TGPhotoPaintColorPicker *_colorPicker;
    TGModernButton *_settingsButton;
    int _icon;
    id <LegacyComponentsContext> _context;
    CDUnknownBlockType _beganColorPicking;
    CDUnknownBlockType _changedColor;
    CDUnknownBlockType _finishedColorPicking;
    CDUnknownBlockType _settingsPressed;
}

+ (id)portraitBackgroundImage;
+ (id)landscapeRightBackgroundImage;
+ (id)landscapeLeftBackgroundImage;
+ (id)colors;
@property(copy, nonatomic) CDUnknownBlockType settingsPressed; // @synthesize settingsPressed=_settingsPressed;
@property(copy, nonatomic) CDUnknownBlockType finishedColorPicking; // @synthesize finishedColorPicking=_finishedColorPicking;
@property(copy, nonatomic) CDUnknownBlockType changedColor; // @synthesize changedColor=_changedColor;
@property(copy, nonatomic) CDUnknownBlockType beganColorPicking; // @synthesize beganColorPicking=_beganColorPicking;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_imageForIcon:(int)arg1 highlighted:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setIcon:(int)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIButton *settingsButton;
- (void)settingsButtonPressed;
@property(nonatomic) long long interfaceOrientation;
@property(retain, nonatomic) TGPaintSwatch *swatch; // @dynamic swatch;
- (id)initWithContext:(id)arg1;

@end

