//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBTakeoverView.h"

@class NSLayoutConstraint, UIAlertController, UIImageView;

@interface DBNotificationPermissionBackdrop : DBTakeoverView
{
    UIImageView *_blinkingArrow;
    NSLayoutConstraint *_blinkingArrowYConstraint;
    UIAlertController *_weakAlertController;
}

- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)didRegisterForNotifications:(id)arg1;
- (void)show;
- (void)db_animateUp;
- (void)db_animateDown;
- (void)db_startAnimations;
- (void)db_setupConstraints;
- (void)db_setupView;
- (void)dealloc;
- (id)init;

@end
