//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGNavigationController, UIViewController;

@protocol IGNavigationControllerDelegate <NSObject>
- (void)navigationController:(IGNavigationController *)arg1 didPopViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)navigationController:(IGNavigationController *)arg1 didNavigateToViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)navigationController:(IGNavigationController *)arg1 willNavigateToViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end

