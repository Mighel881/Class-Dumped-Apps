//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWESlidingViewController, UIScrollView, UIViewController;

@protocol AWESlidingViewControllerDelegate <NSObject>
- (UIViewController *)slidingViewController:(AWESlidingViewController *)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(AWESlidingViewController *)arg1;

@optional
- (void)slidingViewControllerDidFinishScrollAnimation;
- (void)slidingViewControllerDidScroll:(UIScrollView *)arg1;
- (void)slidingViewController:(AWESlidingViewController *)arg1 didFinishTransitionFromPreviousIndex:(long long)arg2 currentIndex:(long long)arg3 transitionType:(long long)arg4;
- (void)slidingViewController:(AWESlidingViewController *)arg1 didFinishTransitionFromPreviousViewController:(UIViewController *)arg2 currentViewController:(UIViewController *)arg3;
- (void)slidingViewController:(AWESlidingViewController *)arg1 willTransitionToViewController:(UIViewController *)arg2 transitionType:(long long)arg3;
- (void)slidingViewController:(AWESlidingViewController *)arg1 willTransitionToViewController:(UIViewController *)arg2;
- (void)slidingViewController:(AWESlidingViewController *)arg1 didSelectIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)slidingViewController:(AWESlidingViewController *)arg1 didSelectIndex:(long long)arg2;
@end

