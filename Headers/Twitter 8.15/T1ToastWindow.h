//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class T1ToastViewController;

@interface T1ToastWindow : UIWindow
{
    T1ToastViewController *_toastViewController;
}

@property(readonly, nonatomic) T1ToastViewController *toastViewController; // @synthesize toastViewController=_toastViewController;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 toaster:(id)arg2;

@end

