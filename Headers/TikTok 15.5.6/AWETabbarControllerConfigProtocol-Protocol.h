//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UITabBarController, UIViewController;
@protocol AWEFeedRootViewControllerProtocol, AWEFriendTabViewControllerProtocol, AWETabBarControllerProtocol;

@protocol AWETabbarControllerConfigProtocol <NSObject>
@property(retain, nonatomic) UIViewController *userHomeController;
@property(nonatomic) _Bool shouldShowLiveGuideBubble;
@property(nonatomic) _Bool messageBubbleIsShowing;
@property(nonatomic) _Bool isShowingConcernBubble;
@property(nonatomic) _Bool liveTabTagHasShowed;
@property(nonatomic) _Bool isFriendYellowDotShowing;
@property(retain, nonatomic) UIViewController<AWEFriendTabViewControllerProtocol> *friendController;
@property(retain, nonatomic) UIViewController<AWEFeedRootViewControllerProtocol> *feedController;
@property(readonly, nonatomic) UITabBarController<AWETabBarControllerProtocol> *tabBarController;
- (_Bool)isFollowTabCountShowing;
- (_Bool)isFollowTabPointShowing;
- (_Bool)isFollowTabAvatarShowing;
- (_Bool)isFollowTabLiveShowing;
- (NSString *)pageReferStringForButtonType:(unsigned long long)arg1;
- (void)sendMainPageToFrontForTab:(unsigned long long)arg1;
- (NSArray *)tabbarButtonArray;
- (void)setTabBarBlur:(_Bool)arg1;
- (void)showSeparatorLine:(_Bool)arg1;
- (_Bool)canShowConcernBubble;
- (void)removeLiveGuideBubbleIfNeeded;
- (void)showLiveGuideBubbleIfNeeded;
- (_Bool)isFirstLevelPage;
- (_Bool)isFriendAvatarShown;
- (void)updateUnreadCount;
- (void)updateUnreadCountForConcernTab;
- (void)dismissMessageBubbleIfNeed;
- (void)dismissFriendTabUnreadTips;
- (void)showTabbarAnimationOnItem:(unsigned long long)arg1;
- (void)tabBarBackgroundColorFillAlpha:(double)arg1;
- (void)tabBarBackgroundColorFillAnimation:(_Bool)arg1;
- (UIViewController *)secondTabViewControllerForD;
- (UIViewController *)controllerForTabType:(unsigned long long)arg1;
@end

