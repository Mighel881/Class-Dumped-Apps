//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "YTLightweightScrollable-Protocol.h"
#import "YTLightweightScrollableDelegate-Protocol.h"
#import "YTLikeServiceObserver-Protocol.h"
#import "YTMContentViewInsetObserver-Protocol.h"
#import "YTMTabHeaderViewControllerDelegate-Protocol.h"
#import "YTMTabViewDelegate-Protocol.h"
#import "YTPlaylistServiceObserver-Protocol.h"
#import "YTResponseViewController-Protocol.h"
#import "YTTopScrolling-Protocol.h"

@class GIMMe, NSError, NSMutableArray, NSString, UIScrollView, YTISingleColumnBrowseResultsRenderer, YTMBaseInnerTubeViewController, YTMContentViewInsetDispatcher, YTMInnerTubeControllerFactory, YTMSettings, YTMTabHeaderViewController, YTMTabView;
@protocol YTInnerTubeUIService, YTLightweightScrollableDelegate, YTResponder;

@interface YTMTabViewController : UIViewController <UIScrollViewDelegate, YTLightweightScrollable, YTLightweightScrollableDelegate, YTLikeServiceObserver, YTMContentViewInsetObserver, YTMTabHeaderViewControllerDelegate, YTMTabViewDelegate, YTTopScrolling, YTResponseViewController, YTPlaylistServiceObserver>
{
    YTMInnerTubeControllerFactory *_innertubeControllerFactory;
    id <YTInnerTubeUIService> _service;
    YTMTabHeaderViewController *_tabHeaderViewController;
    YTISingleColumnBrowseResultsRenderer *_renderer;
    NSError *_error;
    NSString *_emptyMessage;
    unsigned long long _selectedIndex;
    _Bool _tabsVisible;
    _Bool _viewVisible;
    id <YTResponder> _secondaryLikesViewController;
    UIScrollView *_proxyScrollView;
    double _trackingScrollOffset;
    double _topContentInset;
    _Bool _addHeaderInCollectionView;
    YTMContentViewInsetDispatcher *_contentViewInsetDispatcher;
    YTMSettings *_settings;
    id <YTResponder> _parentResponder;
    id <YTLightweightScrollableDelegate> _scrollableDelegate;
    GIMMe *_gimme;
    NSMutableArray *_contentViewControllers;
    YTMBaseInnerTubeViewController *_baseViewController;
}

@property(nonatomic) __weak YTMBaseInnerTubeViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
@property(retain, nonatomic) NSMutableArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTLightweightScrollableDelegate> scrollableDelegate; // @synthesize scrollableDelegate=_scrollableDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)maybeShowUserEducationDialogInLibrarySecondaryPage:(id)arg1;
- (_Bool)isSecondaryViewControllerValid:(id)arg1;
- (_Bool)isHeaderShiftEnabled;
- (void)updateLikesAndRefresh;
- (struct CGPoint)inactiveContentOffset;
- (void)setCellAnimationsEnabled:(_Bool)arg1 forViewController:(id)arg2;
- (id)selectedViewController;
- (void)setTabsVisible:(_Bool)arg1;
- (void)trackingScrollWillChange;
- (void)updateScrollsToTop;
- (id)scrollViewAtIndex:(unsigned long long)arg1;
- (void)stopObservingViewControllerScroll:(id)arg1;
- (void)observeViewControllerScroll:(id)arg1;
- (void)updateScrollInsets;
- (void)updateNavigationHeader;
- (void)updateContentInsetOfTabContentViews;
- (void)updateTouchForwardingView;
- (void)updateTabHeader;
- (void)updateSelectedTab;
- (void)switchToTab:(unsigned long long)arg1;
- (void)setupDefaultContentViewControllers;
- (void)removeAllContentViewControllers;
- (void)scrollToTopAndPullToRefresh;
- (void)scrollToTop;
- (void)scrollableWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollableWillBeginDragging:(id)arg1;
- (void)scrollableDidScroll:(id)arg1;
- (void)scrollableDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tabViewWillBeginPaging:(id)arg1;
- (void)tabView:(id)arg1 didSetIndicatorPosition:(double)arg2;
- (void)tabView:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (void)tabHeaderController:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (void)willMakeRequest:(id)arg1;
- (void)setEmptyMessage:(id)arg1;
- (void)loadWithError:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)loadWithModel:(id)arg1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didChangePlaylistLikeStatus:(int)arg1 withID:(id)arg2;
- (void)didChangeVideoLikeStatus:(int)arg1 withID:(id)arg2;
- (void)didDeletePlaylist:(id)arg1;
- (void)didCreatePlaylist:(id)arg1 title:(id)arg2;
@property(nonatomic) _Bool scrollableAllowsRefresh;
@property(readonly, nonatomic) UIScrollView *scrollableView;
- (void)contentViewInsetDispatcher:(id)arg1 insetChangedTo:(struct UIEdgeInsets)arg2;
- (_Bool)accessibilityScroll:(long long)arg1;
- (id)tabHeaderViewController;
- (void)setEditing:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;
@property(retain, nonatomic) YTMTabView *view; // @dynamic view;

@end

