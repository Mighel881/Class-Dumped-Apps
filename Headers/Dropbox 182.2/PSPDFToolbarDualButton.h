//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFToolbarButton.h>

@class UIImage, UIImageView, UILongPressGestureRecognizer;

@interface PSPDFToolbarDualButton : PSPDFToolbarButton
{
    _Bool _primaryEnabled;
    _Bool _secondaryEnabled;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIImageView *_primaryImageView;
    UIImageView *_secondaryImageView;
}

@property(retain, nonatomic) UIImageView *secondaryImageView; // @synthesize secondaryImageView=_secondaryImageView;
@property(retain, nonatomic) UIImageView *primaryImageView; // @synthesize primaryImageView=_primaryImageView;
@property(nonatomic) _Bool secondaryEnabled; // @synthesize secondaryEnabled=_secondaryEnabled;
@property(nonatomic) _Bool primaryEnabled; // @synthesize primaryEnabled=_primaryEnabled;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
- (void).cxx_destruct;
- (void)setUpLongPressRecognizer;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)styleForHighlightedState:(_Bool)arg1;
@property(retain, nonatomic) UIImage *secondaryImage;
@property(retain, nonatomic) UIImage *primaryImage;
- (void)setUpImageViews;
- (id)init;

@end
