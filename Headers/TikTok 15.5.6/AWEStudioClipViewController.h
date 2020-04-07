//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEReorderableForIOS8CollectionViewDataSource-Protocol.h"
#import "AWEReorderableForIOS8CollectionViewDelegateFlowLayout-Protocol.h"
#import "AWEVideoRangeSliderDelegate-Protocol.h"
#import "HTSVideoSpeedControlDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ACCButton, AVPlayer, AWEClipNormalViewModel, AWEClipPlayerViewModel, AWEClipSliderViewModel, AWEPlaybackView, AWESegmentedClipFooterView, AWEStudioClipViewModel, AWEVideoSegmentedClipAdapter, NSArray, NSString, UIButton, UIImageView, UINavigationController, UIView;

@interface AWEStudioClipViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIScrollViewDelegate, UIGestureRecognizerDelegate, AWEReorderableForIOS8CollectionViewDataSource, AWEReorderableForIOS8CollectionViewDelegateFlowLayout, AWEVideoRangeSliderDelegate, HTSVideoSpeedControlDelegate>
{
    _Bool _forceUpdateVideoIndicator;
    _Bool _screenGestureEnabled;
    double _initialContentOffset;
    UIButton *_backButton;
    ACCButton *_completeButton;
    AWESegmentedClipFooterView *_footerView;
    AVPlayer *_avPlayer;
    AWEPlaybackView *_playerView;
    UIImageView *_pauseIcon;
    UIImageView *_playerBgView;
    UIView *_playerSnap;
    UINavigationController *_backupedNavigationController;
    NSArray *_observers;
    AWEStudioClipViewModel *_viewModel;
}

@property(retain, nonatomic) AWEStudioClipViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool screenGestureEnabled; // @synthesize screenGestureEnabled=_screenGestureEnabled;
@property(nonatomic) __weak UINavigationController *backupedNavigationController; // @synthesize backupedNavigationController=_backupedNavigationController;
@property(nonatomic) _Bool forceUpdateVideoIndicator; // @synthesize forceUpdateVideoIndicator=_forceUpdateVideoIndicator;
@property(retain, nonatomic) UIView *playerSnap; // @synthesize playerSnap=_playerSnap;
@property(retain, nonatomic) UIImageView *playerBgView; // @synthesize playerBgView=_playerBgView;
@property(retain, nonatomic) UIImageView *pauseIcon; // @synthesize pauseIcon=_pauseIcon;
@property(retain, nonatomic) AWEPlaybackView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AWESegmentedClipFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) ACCButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) double initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
- (void).cxx_destruct;
@property(readonly, nonatomic) AWEVideoSegmentedClipAdapter *clipAdapter;
@property(readonly, nonatomic) AWEClipSliderViewModel *sliderViewModel;
@property(readonly, nonatomic) AWEClipNormalViewModel *normalViewModel;
@property(readonly, nonatomic) AWEClipPlayerViewModel *playerViewModel;
- (void)dismiss;
- (_Bool)isBeingPresentedModally;
- (void)handleExport;
- (void)animationWithDragging:(_Bool)arg1 thumbType:(unsigned long long)arg2;
- (void)reloadFramesCollectionView;
- (void)updateUIAfterEditSegmentWithChange:(_Bool)arg1 forSave:(_Bool)arg2;
- (void)updateFooterViewUIForSingleVideo;
- (void)updateMaskView;
- (void)aniOkButtonClicked:(id)arg1;
- (void)aniCloseButtonClicked:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)rotateButtonClicked:(id)arg1;
- (void)speedControlButtonClicked:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (void)videoPlayerTapped:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (void)updateVideosCollectionCursorWithIndex:(unsigned long long)arg1;
- (void)updateFramesCollectionCursorWithPosition:(double)arg1;
- (double)currentlyValidDelta;
- (void)videoRangeHasReachedMaxDuration;
- (void)videoRangeHasReachedMinDuration;
- (_Bool)checkVideoRangeHasReachedMaxDuration;
- (_Bool)videoRangeSliderShouldShowExpandAnimationByType:(unsigned long long)arg1;
- (void)videoRangeDidHoldToChangeByOffset:(double)arg1 movedType:(unsigned long long)arg2;
- (void)videoRangeDidTransferHoldDragToInnerDragByType:(unsigned long long)arg1;
- (void)videoRangeDidEndHoldToChangeByType:(unsigned long long)arg1;
- (void)videoRangeDidBeginHoldToChangeByType:(unsigned long long)arg1 offset:(double)arg2;
- (void)videoRangeDidChangByPosition:(double)arg1 movedType:(unsigned long long)arg2;
- (void)videoRangeDidEndByType:(unsigned long long)arg1;
- (void)videoRangeDidBeginByType:(unsigned long long)arg1;
- (_Bool)videoRangeIgnoreGesture;
- (void)speedControl:(id)arg1 didSelectedIndex:(long long)arg2 oldIndex:(long long)arg3;
- (_Bool)speedControl:(id)arg1 shouldSelectSpeed:(double)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)aweReorderableCollectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)aweReorderableCollectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (_Bool)aweReorderableCollectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (_Bool)aweReorderableCollectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)aweReorderableCollectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)aweReorderableCollectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)bindViewModel;
- (void)configViewModel;
- (void)setupVideoPlayer;
- (void)buildViews;
- (void)addNotificationObservers;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
