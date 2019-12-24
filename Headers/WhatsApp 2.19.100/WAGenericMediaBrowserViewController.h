//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "UICollectionViewDelegate-Protocol.h"
#import "WACalloutViewPresenterDelegate-Protocol.h"
#import "WAGenericMediaBrowserToolbarDelegate-Protocol.h"
#import "WAImageToImagePanPopGestureRecognizerDelegate-Protocol.h"
#import "WAMediaBrowserCollectionViewCellDelegate-Protocol.h"
#import "WANavigationControllerPopFromAnimating-Protocol.h"
#import "WANoOpGestureRecognizerTouchDelegate-Protocol.h"

@class NSIndexPath, NSNumber, NSString, UIActivityIndicatorView, UIBarButtonItem, UICollectionViewFlowLayout, UINavigationController, UIView, WAGenericMediaBrowserToolbar, WAGenericMediaManager, WAImageToImagePanPopGestureRecognizer, WAMediaBrowserCollectionView, WAMediaBrowserCollectionViewCell, WAMediaBrowserTitleView, WAMediaCaptionView, WANoOpGestureRecognizer;

@interface WAGenericMediaBrowserViewController : WAViewController <UICollectionViewDelegate, WACalloutViewPresenterDelegate, WAMediaBrowserCollectionViewCellDelegate, WANoOpGestureRecognizerTouchDelegate, WAGenericMediaBrowserToolbarDelegate, WANavigationControllerPopFromAnimating, WAImageToImagePanPopGestureRecognizerDelegate>
{
    NSIndexPath *_indexPathBeforeChangingContent;
    _Bool _isCollectionViewLoaded;
    WAMediaBrowserCollectionView *_collectionView;
    long long _lastDisplayedPageIndex;
    WAMediaCaptionView *_captionView;
    NSIndexPath *_autoplayItemAtIndexPath;
    CDStruct_1b6d18a9 _currentPlayingTimeBeforeReload;
    UINavigationController *_lastNavigationController;
    UIBarButtonItem *_playButton;
    UIBarButtonItem *_pauseButton;
    WAGenericMediaBrowserToolbar *_toolbar;
    WAMediaBrowserTitleView *_titleView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    WAGenericMediaManager *_genericMediaManager;
    long long _initialPageIndex;
    _Bool _needsAdjustCaptionViewAfterLayout;
    WAImageToImagePanPopGestureRecognizer *_panPopGesture;
    long long _presentationStateBeforePan;
    UIView *_busySpinnerView;
    UIActivityIndicatorView *_busySpinner;
    _Bool _suppressToolbarUpdate;
    _Bool _ignoreToolbarScrolling;
    WANoOpGestureRecognizer *_touchTracker;
    _Bool _isInterfaceOrientationPinned;
    _Bool _needsUpdateInterfaceOnViewDidLayoutSubviews;
    struct CGSize _lastViewWillLayoutSubviewsSize;
    double _nonFullscreenTopLayoutInset;
    WAMediaBrowserCollectionViewCell *_lastFullyVisibleCell;
    _Bool _sendingWithForwardPicker;
    _Bool _shouldHideCellViewForTransition;
    _Bool _fullScreen;
    NSNumber *_initializationTime;
}

@property(readonly, nonatomic) _Bool sendingWithForwardPicker; // @synthesize sendingWithForwardPicker=_sendingWithForwardPicker;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) NSNumber *initializationTime; // @synthesize initializationTime=_initializationTime;
@property(nonatomic) _Bool shouldHideCellViewForTransition; // @synthesize shouldHideCellViewForTransition=_shouldHideCellViewForTransition;
@property(readonly, nonatomic) WAGenericMediaManager *genericMediaManager; // @synthesize genericMediaManager=_genericMediaManager;
- (void).cxx_destruct;
- (void)calloutViewPresenterDidFinish:(id)arg1;
- (struct UIEdgeInsets)overlayInsetsForCalloutViewPresenter:(id)arg1;
- (void)showBackupSettings;
- (void)toolbarDidEndScrubbing:(id)arg1;
- (void)toolbarDidBeginScrubbing:(id)arg1;
- (void)toolbar:(id)arg1 didScrollToIndexPath:(id)arg2;
- (void)toolbarDidActivatePauseButton:(id)arg1;
- (void)toolbarDidActivatePlayButton:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)gestureRecognizerShouldPopViewController:(id)arg1;
- (void)gestureRecognizerWillFinishManagingInteractivePopTransition:(id)arg1;
- (void)gestureRecognizerDidBeginManagingInteractivePopTransition:(id)arg1;
- (void)gestureRecognizerWillBeginManagingInteractivePopTransition:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)finishTransitionWithContext:(id)arg1;
- (id)nonTransitioningContainerView;
- (id)viewForTransitionAnimationWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (_Bool)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4;
- (id)preferredPopFromInteractionController;
- (id)popFromAnimationIdentifier;
- (_Bool)usesScreenEdgePanGestureRecognizerForCustomPopTransition;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)changedFullyVisibleCellFromCell:(id)arg1 toCell:(id)arg2;
- (void)updatePresentationStateForNewCell:(id)arg1 atIndexPath:(id)arg2;
- (id)newCellForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidRequestGoToChat:(id)arg1;
- (_Bool)shouldShowGoToChatFromMediaBrowserCollectionViewCell:(id)arg1;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didSelectInteractiveAnnotation:(id)arg2 atPoint:(struct CGPoint)arg3 inInteractiveAnnotationView:(id)arg4;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didUpdateProgress:(double)arg2;
- (double)rateOfChangeForMediaBrowserCollectionViewCell:(id)arg1;
- (id)fastThumbnailForMediaBrowserCollectionViewCell:(id)arg1;
- (void)mediaBrowserCollectionViewCell:(id)arg1 didReceiveSingleTapAtPoint:(struct CGPoint)arg2;
- (void)mediaBrowserCollectionViewCell:(id)arg1 prefersFullScreen:(_Bool)arg2;
- (_Bool)isDisplayingMediaBrowserCollectionViewCellInFullScreen:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidRequestPresentBackupSettings:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidChangePresentationState:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidEndChangingVisibleContentViewFrame:(id)arg1;
- (void)mediaBrowserCollectionViewCellDidChangeVisibleContentViewFrame:(id)arg1;
- (void)mediaBrowserCollectionViewCellWillBeginChangingVisibleContentViewFrame:(id)arg1;
- (_Bool)isPreviewingMediaBrowserCollectionViewCell:(id)arg1;
- (double)topLayoutInsetForMediaBrowserCollectionViewCell:(id)arg1;
- (void)mediaManagerWillReloadCollectionView:(id)arg1;
- (void)mediaManagerDidChangeContentWithNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mediaManagerDidChangeContent:(id)arg1;
- (void)mediaManagerWillChangeContent:(id)arg1;
- (void)noOpGestureRecognizerDidEndTrackingTouches:(id)arg1;
- (void)noOpGestureRecognizerDidUpdateTrackedTouches:(id)arg1;
- (void)noOpGestureRecognizerDidBeginTrackingTouches:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)deviceOrientationDidChange:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)updateCaptionView;
- (void)setUpBusySpinnerView;
@property(nonatomic, getter=isBusySpinnerHidden) _Bool busySpinnerHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)setFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isFullscreen;
- (void)updatePresentationState;
- (void)updateTitleView;
- (void)updateNavigationBarItems;
- (id)navigationBarItems;
- (_Bool)shouldAddActionButtonsToNavbar;
- (void)updateFullyVisibleCellForNewCell:(id)arg1;
- (void)updateInterfaceForCurrentState;
- (void)updateToolbar;
- (id)currentCell;
@property(nonatomic) long long currentPageIndex;
@property(nonatomic) double currentFractionalIndex;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)updateSavedContentBrowserBeforeDisappearing;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)wa_fontSizeDidChange;
- (_Bool)wa_prefersMinimalBackButton;
- (void)dealloc;
- (id)initWithGenericMediaManager:(id)arg1 toolbar:(id)arg2 sendingWithForwardPicker:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
