//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, YTTimedAction;
@protocol YTEditCameraTimerSource;

@interface YTEditCameraTimerLabel : UIView
{
    UILabel *_label;
    YTTimedAction *_timer;
    UIView *_redCircleView;
    _Bool _hasHours;
    _Bool _active;
    _Bool _visible;
    id <YTEditCameraTimerSource> _timerSource;
    double _duration;
}

@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <YTEditCameraTimerSource> timerSource; // @synthesize timerSource=_timerSource;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)timerFired;
- (void)stopTimer;
- (void)startTimer;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)applyShadowToView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
