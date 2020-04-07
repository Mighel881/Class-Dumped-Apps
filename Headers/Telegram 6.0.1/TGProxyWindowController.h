//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGOverlayWindowViewController.h>

@class NSString, TGProxySpinnerView, UIImageView, UILabel, UIView, UIVisualEffectView, UIWindow;

@interface TGProxyWindowController : TGOverlayWindowViewController
{
    _Bool _light;
    NSString *_text;
    _Bool _shieldIcon;
    _Bool _starIcon;
    UIVisualEffectView *_effectView;
    UIView *_backgroundView;
    TGProxySpinnerView *_spinner;
    UIImageView *_shield;
    UILabel *_label;
    UIWindow *_weakWindow;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIWindow *weakWindow; // @synthesize weakWindow=_weakWindow;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (void)dismissWithSuccess:(CDUnknownBlockType)arg1 increasedDelay:(_Bool)arg2;
- (void)updateLayout;
- (void)loadView;
- (id)initWithLight:(_Bool)arg1 text:(id)arg2 shield:(_Bool)arg3 star:(_Bool)arg4;
- (id)init;

@end
