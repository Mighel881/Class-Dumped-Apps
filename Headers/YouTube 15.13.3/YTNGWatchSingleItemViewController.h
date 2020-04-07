//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTAutonavCountdownObserver-Protocol.h"
#import "YTNGWatchContainerViewController-Protocol.h"

@class GIMMe, NSHashTable, NSString, UIPanGestureRecognizer, YTNGWatchSingleItemView, YTSlimStatusBarView;
@protocol YTAutonavControllerProtocol, YTNGWatchViewControllerProtocol, YTResponder, YTWatchPlayerViewControllerDelegate;

@interface YTNGWatchSingleItemViewController : UIViewController <YTAutonavCountdownObserver, YTNGWatchContainerViewController>
{
    YTNGWatchSingleItemView *_singleItemView;
    int _playerViewLayout;
    id <YTAutonavControllerProtocol> _autonavController;
    _Bool _activated;
    _Bool _currentlyCastingScreen;
    _Bool _fullscreen;
    _Bool _isTransitioningLayout;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    UIViewController<YTNGWatchViewControllerProtocol> *_currentWatchViewController;
    UIViewController<YTWatchPlayerViewControllerDelegate> *_playerViewController;
    YTSlimStatusBarView *_slimStatusBarView;
    NSHashTable *_eventObservers;
}

@property(readonly, nonatomic) NSHashTable *eventObservers; // @synthesize eventObservers=_eventObservers;
@property(retain, nonatomic) YTSlimStatusBarView *slimStatusBarView; // @synthesize slimStatusBarView=_slimStatusBarView;
@property(nonatomic) __weak UIViewController<YTWatchPlayerViewControllerDelegate> *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) UIViewController<YTNGWatchViewControllerProtocol> *currentWatchViewController; // @synthesize currentWatchViewController=_currentWatchViewController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool isTransitioningLayout; // @synthesize isTransitioningLayout=_isTransitioningLayout;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic, getter=isCurrentlyCastingScreen) _Bool currentlyCastingScreen; // @synthesize currentlyCastingScreen=_currentlyCastingScreen;
@property(nonatomic, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)showOfflineDisabledActionIfNeeded;
- (unsigned long long)allowedFullScreenOrientations;
- (void)connectionStatusDidChange:(_Bool)arg1;
- (void)autonavCountdownDidStopWithEndscreenCancelled:(_Bool)arg1;
- (void)autonavCountdownDidUpdateWithRemainingInterval:(long long)arg1;
- (void)autonavCountdownDidStartWithSeconds:(double)arg1;
- (void)setAutonavController:(id)arg1;
- (void)didCreateWatchViewController:(id)arg1 forIndex:(long long)arg2;
- (void)didClearPlayerViewControllerWithThumbnailView:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)didSetPlayerViewController:(id)arg1 forIndex:(long long)arg2;
- (void)playbackControllerWillFailWithError:(id)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)performQueueUpdateWithInsertionIndexes:(id)arg1 deletionIndexes:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
- (_Bool)isCollectionViewMoving;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (struct CGRect)frameForCurrentPlayerView:(_Bool)arg1;
- (void)setThumbnailForCurrentCell:(id)arg1;
- (void)updatePlayerBar;
- (id)view;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
