//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFToolbarButton.h>

@class PSPDFToolbarGroupButtonIndicatorView, UILongPressGestureRecognizer;

@interface PSPDFToolbarGroupButton : PSPDFToolbarButton
{
    UILongPressGestureRecognizer *_longPressRecognizer;
    PSPDFToolbarGroupButtonIndicatorView *_indicatorView;
}

@property(retain, nonatomic) PSPDFToolbarGroupButtonIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
- (void).cxx_destruct;
- (void)setUpLongPressRecognizer;
- (void)styleForHighlightedState:(_Bool)arg1;
@property(nonatomic) long long groupIndicatorPosition;
- (void)setUpIndicator;
- (id)initWithFrame:(struct CGRect)arg1;

@end

