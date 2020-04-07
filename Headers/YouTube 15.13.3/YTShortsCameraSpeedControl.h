//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, UIView, YTColorPalette, YTShortsSpeedControlSetting;

@interface YTShortsCameraSpeedControl : UIControl
{
    YTShortsSpeedControlSetting *_speedControlSetting;
    NSArray *_segmentLabels;
    UIView *_segmentHighlightView;
    YTColorPalette *_colorPalette;
    unsigned long long _lastSelectedSegmentIndex;
    unsigned long long _selectedSegmentIndex;
}

+ (id)segmentLabelWithTitle:(id)arg1 colorPalette:(id)arg2;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)handleTouchesEnded;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)segmentLabelForIndex:(unsigned long long)arg1;
- (struct CGRect)highlightFrameForIndex:(long long)arg1;
- (struct CGRect)titleFrameForIndex:(long long)arg1;
- (unsigned long long)indexForPosition:(struct CGPoint)arg1;
- (void)selectedSegmentIndexDidChange:(unsigned long long)arg1;
- (void)reset;
@property(readonly, nonatomic) double currentRecordingRate;
@property(readonly, copy, nonatomic) NSString *currentDisplayTitle;
- (id)initWithSpeedControlSetting:(id)arg1;

@end
