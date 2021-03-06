//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIVisualEffectView;

@interface YTShortsCameraViewfinderView : UIView
{
    UIView *_previewView;
    UIView *_snapshotView;
    UIVisualEffectView *_blurView;
    unsigned long long _blurInvocationCounter;
    _Bool _blurred;
}

@property(nonatomic, getter=isBlurred) _Bool blurred; // @synthesize blurred=_blurred;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBlurred:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) CALayer *previewLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

