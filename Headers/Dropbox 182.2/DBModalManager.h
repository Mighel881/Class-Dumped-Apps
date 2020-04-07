//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBModalManaging-Protocol.h>
#import <DropboxExtensions/UIPopoverPresentationControllerDelegate-Protocol.h>

@class DBTabBarController, DBTakeoverView, NSMutableArray, NSNumber, NSString, UIApplication, UIViewController, UIWindow;

@interface DBModalManager : NSObject <UIPopoverPresentationControllerDelegate, DBModalManaging>
{
    NSMutableArray *_queue;
    _Bool _didAnimateLastRunLoop;
    _Bool _isSettingRootViewController;
    DBTakeoverView *_takeoverView;
    NSMutableArray *_appWindows;
    UIApplication *_application;
    DBTabBarController *_tabBarController;
    UIViewController *_appExtensionRootController;
    UIWindow *_test_window;
    NSNumber *_test_deviceIsIphone;
}

+ (void)db_callDismissalDelegateIfNecessary:(id)arg1;
+ (id)db_presentedViewControllersForParentViewController:(id)arg1;
+ (void)db_callDismissedBlockForViewController:(id)arg1;
+ (void)db_callDismissedBlockForViewControllers:(id)arg1 queueEntry:(id)arg2;
+ (_Bool)db_isModalPresentationSupportedByController:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)test_setDeviceIsIphone:(_Bool)arg1;
- (void)test_setWindow:(id)arg1;
- (void)dismissTakeoverView:(id)arg1 animated:(_Bool)arg2 immediately:(_Bool)arg3;
- (void)dismissTakeoverView:(id)arg1 animated:(_Bool)arg2 delay:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dismissTakeoverView:(id)arg1 animated:(_Bool)arg2 delay:(double)arg3;
- (void)dismissTakeoverView:(id)arg1 animated:(_Bool)arg2;
- (void)flashTakeoverView:(id)arg1;
- (void)showTakeoverView:(id)arg1 animated:(_Bool)arg2;
- (void)showTakeoverView:(id)arg1;
- (void)db_prepareTakeoverViewForPresentation:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)topController;
- (void)db_completionAfterAnimation;
- (void)db_completionForQueueEntry:(id)arg1 didAnimate:(_Bool)arg2;
- (void)db_dismissFrom:(id)arg1 animated:(_Bool)arg2 presentedViewControllers:(id)arg3 queueEntry:(id)arg4;
- (void)db_flushQueue;
- (void)addRunLoopObserver;
- (void)db_presentModalViewController:(id)arg1 fullScreen:(_Bool)arg2 animated:(_Bool)arg3 presentationCompleted:(CDUnknownBlockType)arg4 dismissedBlock:(CDUnknownBlockType)arg5;
- (void)forceFlushQueue;
- (id)presentSimpleAlertControllerWithTitle:(id)arg1 message:(id)arg2 actionText:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)presentSimpleAlertControllerWithTitle:(id)arg1 message:(id)arg2 actionText:(id)arg3;
- (id)presentSimpleOkAlertControllerWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)presentSimpleOkAlertControllerWithTitle:(id)arg1 message:(id)arg2;
- (void)db_performiOS13ModalCheckWithViewController:(id)arg1;
- (void)db_dismissTopViewController:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)db_dismissTopModalViewControllersUpToViewController:(id)arg1 animated:(_Bool)arg2 keepGivenViewController:(_Bool)arg3;
- (void)dismissTopModalViewControllersToRevealViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissTopModalViewControllersUpToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissTopModalViewControllerInteractive:(id)arg1;
- (void)dismissTopModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissTopModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)dismissTopModalViewController:(id)arg1;
- (void)presentModalViewControllerAsPopover:(id)arg1 dismissOnSizeClassChange:(_Bool)arg2 animated:(_Bool)arg3 dismissedBlock:(CDUnknownBlockType)arg4;
- (void)presentFullScreenModalViewController:(id)arg1 animated:(_Bool)arg2 presentationCompletedBlock:(CDUnknownBlockType)arg3 dismissedBlock:(CDUnknownBlockType)arg4;
- (void)presentFullScreenModalViewController:(id)arg1 animated:(_Bool)arg2 dismissedBlock:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2 presentationCompletion:(CDUnknownBlockType)arg3 dismissedBlock:(CDUnknownBlockType)arg4;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2 dismissedBlock:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 dismissedBlock:(CDUnknownBlockType)arg2;
- (id)tabBarController;
- (void)db_immediatelySetRootViewController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)db_setRootViewController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setTabBarController:(id)arg1 rootController:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setTabBarController:(id)arg1 rootController:(id)arg2;
- (id)rootController;
- (_Bool)db_isIphone;
- (void)setAppExtensionRootController:(id)arg1;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
