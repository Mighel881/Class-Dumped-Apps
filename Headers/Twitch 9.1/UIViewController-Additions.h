//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TwitchCoreUI/_TtP12TwitchCoreUI28TWDeduplicatedViewController_-Protocol.h>

@interface UIViewController (Additions) <_TtP12TwitchCoreUI28TWDeduplicatedViewController_>
+ (void)notifyFloatingViewLayoutInsetsUpdate;
@property(readonly, nonatomic) long long tw_interfaceOrientation;
- (_Bool)tw_shouldPushViewControllerOnTop:(id)arg1;
- (void)tw_setNeedsFloatingViewLayoutInsetsUpdate;
- (void)insertToRightBarButtonItems:(id)arg1 atLeftPosition:(_Bool)arg2;
- (void)insertToRightBarButtonItems:(id)arg1;
- (void)tw_scrollToTopAnimated:(_Bool)arg1;
@property(nonatomic, readonly) _Bool tw_isPopover;
@property(nonatomic, readonly) UIViewController *tw_presentedViewControllerAffectingFloatingViewLayoutInsets;
@property(nonatomic, readonly) UIViewController *tw_presentedViewControllerAffectingStatusBarAppearance;
@property(nonatomic, readonly) UIViewController *tw_topMostPresentedViewController;
@property(nonatomic, readonly) UIViewController *tw_rootParentViewController;
@property(nonatomic, readonly) struct UIEdgeInsets tw_floatingViewLayoutInsets;
@end

