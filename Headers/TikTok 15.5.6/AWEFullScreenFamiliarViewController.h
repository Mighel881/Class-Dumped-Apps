//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEFamiliarViewControllerProtocol-Protocol.h"
#import "AWEFeedTableViewControllerDelegate-Protocol.h"
#import "AWEViewControllerRefreshable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEFamiliarDataController, AWEFamiliarNavView, AWEFeedTableViewController, NSString, UILabel, UIPanGestureRecognizer;
@protocol AWEFeedRefreshAnimationProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFullScreenFamiliarViewController : UIViewController <AWEViewControllerRefreshable, UIGestureRecognizerDelegate, AWEFeedTableViewControllerDelegate, AWEFamiliarViewControllerProtocol>
{
    _Bool _tapticEngineTapped;
    _Bool _isViewAppearing;
    _Bool _verticalPanActive;
    AWEFeedTableViewController<AWEFeedTabItemViewControllerProtocol> *_feedTableVC;
    AWEFamiliarNavView *_familiarNavView;
    UILabel *_refreshLabel;
    id <AWEFeedRefreshAnimationProtocol> _refreshAnimation;
    UIPanGestureRecognizer *_verticalPan;
    AWEFamiliarDataController *_dataController;
    long long _refreshState;
    unsigned long long _verticalPanType;
    NSString *_refreshMethod;
}

@property(copy, nonatomic) NSString *refreshMethod; // @synthesize refreshMethod=_refreshMethod;
@property(nonatomic) unsigned long long verticalPanType; // @synthesize verticalPanType=_verticalPanType;
@property(nonatomic) long long refreshState; // @synthesize refreshState=_refreshState;
@property(nonatomic) _Bool verticalPanActive; // @synthesize verticalPanActive=_verticalPanActive;
@property(nonatomic) _Bool isViewAppearing; // @synthesize isViewAppearing=_isViewAppearing;
@property(nonatomic) _Bool tapticEngineTapped; // @synthesize tapticEngineTapped=_tapticEngineTapped;
@property(retain, nonatomic) AWEFamiliarDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UIPanGestureRecognizer *verticalPan; // @synthesize verticalPan=_verticalPan;
@property(retain, nonatomic) id <AWEFeedRefreshAnimationProtocol> refreshAnimation; // @synthesize refreshAnimation=_refreshAnimation;
@property(retain, nonatomic) UILabel *refreshLabel; // @synthesize refreshLabel=_refreshLabel;
@property(retain, nonatomic) AWEFamiliarNavView *familiarNavView; // @synthesize familiarNavView=_familiarNavView;
@property(retain, nonatomic) AWEFeedTableViewController<AWEFeedTabItemViewControllerProtocol> *feedTableVC; // @synthesize feedTableVC=_feedTableVC;
- (void).cxx_destruct;
- (void)willDisplayCell:(id)arg1;
- (void)p_track2TabAppear;
- (void)trackPageRefresh;
- (_Bool)transition_enableCustomActionForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)transition_didStartTransitionWithContext:(id)arg1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)refreshWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animatedRefreshWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dragCancellation:(_Bool)arg1;
- (_Bool)canRefresh;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)dragWithProgress:(double)arg1;
- (unsigned long long)directionForPan:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)topTapRefreshDataList;
- (_Bool)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)enterFindFriend;
- (void)enterPrivacyDetail;
- (void)refreshWhenYellowDotShowingWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldHideNaviBar;
- (void)p_trackPushIfNeed;
- (_Bool)isActive;
- (void)pause;
- (void)playIfActive;
- (void)_onAwemeDeleteNotification:(id)arg1;
- (void)handleCommentShrinkVideo:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)tabBarDidChangeNotification:(id)arg1;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)addObservers;
- (void)p_configRefreshLabel;
- (void)p_configRefreshAnimation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)p_setUpUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (void)removeMaskIfCurrentCellHasFeedTableViewCellMaskView;
- (void)p_toFeedTab;
- (id)getBackToFeedMaskViewWithCell:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
