//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <TelegramUI/UIGestureRecognizerDelegate-Protocol.h>
#import <TelegramUI/UINavigationBarDelegate-Protocol.h>
#import <TelegramUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, TGAutorotationLock, TGNavigationGestureDelegateProxy, UITapGestureRecognizer;
@protocol SDisposable;

@interface TGNavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate, UINavigationBarDelegate>
{
    UITapGestureRecognizer *_dimmingTapRecognizer;
    struct CGSize _preferredContentSize;
    id <SDisposable> _playerStatusDisposable;
    double _currentAdditionalStatusBarHeight;
    TGNavigationGestureDelegateProxy *_gestureDelegate;
    _Bool _animatingControllerPush;
    _Bool _fixNextInteractiveTransition;
    id _enterBackgroundObserver;
    id _becomeActiveObserver;
    _Bool _didFirstLayout;
    _Bool _restrictLandscape;
    _Bool _disableInteractiveKeyboardTransition;
    _Bool _isInPopTransition;
    _Bool _isInControllerTransition;
    _Bool _detachFromPresentingControllerInCompactMode;
    _Bool _displayPlayer;
    _Bool _minimizePlayer;
    _Bool _showCallStatusBar;
    _Bool _forceAdditionalNavigationBarHeight;
    _Bool _wasShowingNavigationBar;
    int _presentationStyle;
    CDUnknownBlockType _shouldPopController;
    double _currentAdditionalNavigationBarHeight;
    CDUnknownBlockType _customDismissSelf;
    TGAutorotationLock *_autorotationLock;
}

+ (id)makeWithRootController:(id)arg1;
+ (id)navigationControllerWithControllers:(id)arg1 navigationBarClass:(Class)arg2 inhibitPresentation:(_Bool)arg3;
+ (id)navigationControllerWithControllers:(id)arg1 navigationBarClass:(Class)arg2;
+ (id)navigationControllerWithControllers:(id)arg1;
+ (id)navigationControllerWithRootController:(id)arg1;
@property(retain, nonatomic) TGAutorotationLock *autorotationLock; // @synthesize autorotationLock=_autorotationLock;
@property(nonatomic) _Bool wasShowingNavigationBar; // @synthesize wasShowingNavigationBar=_wasShowingNavigationBar;
@property(copy, nonatomic) CDUnknownBlockType customDismissSelf; // @synthesize customDismissSelf=_customDismissSelf;
@property(nonatomic) _Bool forceAdditionalNavigationBarHeight; // @synthesize forceAdditionalNavigationBarHeight=_forceAdditionalNavigationBarHeight;
@property(nonatomic) double currentAdditionalNavigationBarHeight; // @synthesize currentAdditionalNavigationBarHeight=_currentAdditionalNavigationBarHeight;
@property(nonatomic) _Bool showCallStatusBar; // @synthesize showCallStatusBar=_showCallStatusBar;
@property(nonatomic) _Bool minimizePlayer; // @synthesize minimizePlayer=_minimizePlayer;
@property(nonatomic) _Bool displayPlayer; // @synthesize displayPlayer=_displayPlayer;
@property(nonatomic) _Bool detachFromPresentingControllerInCompactMode; // @synthesize detachFromPresentingControllerInCompactMode=_detachFromPresentingControllerInCompactMode;
@property(nonatomic) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) _Bool isInControllerTransition; // @synthesize isInControllerTransition=_isInControllerTransition;
@property(nonatomic) _Bool isInPopTransition; // @synthesize isInPopTransition=_isInPopTransition;
@property(nonatomic) _Bool disableInteractiveKeyboardTransition; // @synthesize disableInteractiveKeyboardTransition=_disableInteractiveKeyboardTransition;
@property(nonatomic) _Bool restrictLandscape; // @synthesize restrictLandscape=_restrictLandscape;
@property(copy, nonatomic) CDUnknownBlockType shouldPopController; // @synthesize shouldPopController=_shouldPopController;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (struct CGSize)preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (double)myNominalTransitionAnimationDuration;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)updatePlayerOnControllers;
- (void)setupPlayerOnControllers:(id)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)releaseRotationLock;
- (void)acquireRotationLock;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setupNavigationBarForController:(id)arg1 animated:(_Bool)arg2;
- (void)updateControllerLayout:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dimmingViewTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateStatusBarOnControllers;
- (void)setupStatusBarOnControllers:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
