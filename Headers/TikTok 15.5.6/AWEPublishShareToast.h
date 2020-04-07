//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEPublishShareToastController, NSLock, UIWindow;

@interface AWEPublishShareToast : NSObject
{
    _Bool _isDelayToShow;
    AWEPublishShareToastController *_controller;
    UIWindow *_overlayWindow;
    NSLock *_dismissLock;
    CDUnknownBlockType _showBlock;
}

+ (void)resume;
+ (void)delayToShow;
+ (void)close;
+ (void)cancelAutomaticDismiss;
+ (void)dismiss;
+ (void)showAweme:(id)arg1 withType:(unsigned long long)arg2 platform:(long long)arg3;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType showBlock; // @synthesize showBlock=_showBlock;
@property(nonatomic) _Bool isDelayToShow; // @synthesize isDelayToShow=_isDelayToShow;
@property(retain, nonatomic) NSLock *dismissLock; // @synthesize dismissLock=_dismissLock;
@property(retain, nonatomic) UIWindow *overlayWindow; // @synthesize overlayWindow=_overlayWindow;
@property(retain, nonatomic) AWEPublishShareToastController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_close;
- (id)init;

@end
