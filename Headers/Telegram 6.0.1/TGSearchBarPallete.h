//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface TGSearchBarPallete : NSObject
{
    _Bool _isDark;
    UIColor *_backgroundColor;
    UIColor *_highContrastBackgroundColor;
    UIColor *_textColor;
    UIColor *_placeholderColor;
    UIImage *_clearIcon;
    UIColor *_barBackgroundColor;
    UIColor *_barSeparatorColor;
    UIColor *_plainBackgroundColor;
    UIColor *_accentColor;
    UIColor *_accentContrastColor;
    UIColor *_menuBackgroundColor;
    UIImage *_segmentedControlBackgroundImage;
    UIImage *_segmentedControlSelectedImage;
    UIImage *_segmentedControlHighlightedImage;
    UIImage *_segmentedControlDividerImage;
}

+ (id)palleteWithDark:(_Bool)arg1 backgroundColor:(id)arg2 highContrastBackgroundColor:(id)arg3 textColor:(id)arg4 placeholderColor:(id)arg5 clearIcon:(id)arg6 barBackgroundColor:(id)arg7 barSeparatorColor:(id)arg8 plainBackgroundColor:(id)arg9 accentColor:(id)arg10 accentContrastColor:(id)arg11 menuBackgroundColor:(id)arg12 segmentedControlBackgroundImage:(id)arg13 segmentedControlSelectedImage:(id)arg14 segmentedControlHighlightedImage:(id)arg15 segmentedControlDividerImage:(id)arg16;
@property(readonly, nonatomic) UIImage *segmentedControlDividerImage; // @synthesize segmentedControlDividerImage=_segmentedControlDividerImage;
@property(readonly, nonatomic) UIImage *segmentedControlHighlightedImage; // @synthesize segmentedControlHighlightedImage=_segmentedControlHighlightedImage;
@property(readonly, nonatomic) UIImage *segmentedControlSelectedImage; // @synthesize segmentedControlSelectedImage=_segmentedControlSelectedImage;
@property(readonly, nonatomic) UIImage *segmentedControlBackgroundImage; // @synthesize segmentedControlBackgroundImage=_segmentedControlBackgroundImage;
@property(readonly, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
@property(readonly, nonatomic) UIColor *accentContrastColor; // @synthesize accentContrastColor=_accentContrastColor;
@property(readonly, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(readonly, nonatomic) UIColor *plainBackgroundColor; // @synthesize plainBackgroundColor=_plainBackgroundColor;
@property(readonly, nonatomic) UIColor *barSeparatorColor; // @synthesize barSeparatorColor=_barSeparatorColor;
@property(readonly, nonatomic) UIColor *barBackgroundColor; // @synthesize barBackgroundColor=_barBackgroundColor;
@property(readonly, nonatomic) UIImage *clearIcon; // @synthesize clearIcon=_clearIcon;
@property(readonly, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIColor *highContrastBackgroundColor; // @synthesize highContrastBackgroundColor=_highContrastBackgroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
- (void).cxx_destruct;

@end

