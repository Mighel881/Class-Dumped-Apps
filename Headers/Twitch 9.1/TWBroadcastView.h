//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TWVideoPreviewView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface TWBroadcastView : UIView
{
    TWVideoPreviewView *_videoPreviewView;
    UIVisualEffectView *_blurEffectView;
}

- (void).cxx_destruct;
- (void)removeBlur;
- (void)applyBlur;
- (void)flipViewAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)captureVideoPreviewLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

