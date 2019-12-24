//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEInfinateSlidingViewControllerDelegate-Protocol.h"
#import "AWESlidingViewMenuDelegateFlowLayout-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEInfinateSlidingViewController, AWEOneDayInteractionDataController, AWESlidingViewMenuLayout, NSIndexPath, NSString, UICollectionView;
@protocol AWESlidingMenuDataSource, AWESlidingMenuDelegate;

@interface AWESlidingMenuViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEInfinateSlidingViewControllerDelegate, AWESlidingViewMenuDelegateFlowLayout>
{
    _Bool _adjusting;
    _Bool _isLoadingMore;
    id <AWESlidingMenuDataSource> _dataSource;
    id <AWESlidingMenuDelegate> _delegate;
    AWEOneDayInteractionDataController *_dataController;
    AWEInfinateSlidingViewController *_slidingViewController;
    unsigned long long _menuState;
    unsigned long long _slidingVCstate;
    double _draggingStartOffset;
    double _scrollStartOffset;
    AWESlidingViewMenuLayout *_layout;
    double _progress;
    NSIndexPath *_selectedIndexPath;
    NSIndexPath *_upComingIndexPath;
    UICollectionView *_collectionView;
    double _adjustOffset;
    double _dragOffset;
}

@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) double dragOffset; // @synthesize dragOffset=_dragOffset;
@property(nonatomic) double adjustOffset; // @synthesize adjustOffset=_adjustOffset;
@property(nonatomic) _Bool adjusting; // @synthesize adjusting=_adjusting;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSIndexPath *upComingIndexPath; // @synthesize upComingIndexPath=_upComingIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) AWESlidingViewMenuLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) double scrollStartOffset; // @synthesize scrollStartOffset=_scrollStartOffset;
@property(nonatomic) double draggingStartOffset; // @synthesize draggingStartOffset=_draggingStartOffset;
@property(nonatomic) unsigned long long slidingVCstate; // @synthesize slidingVCstate=_slidingVCstate;
@property(nonatomic) unsigned long long menuState; // @synthesize menuState=_menuState;
@property(nonatomic) __weak AWEInfinateSlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
@property(retain, nonatomic) AWEOneDayInteractionDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak id <AWESlidingMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AWESlidingMenuDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 attrs:(id)arg2 adjustProgressAtIndexPath:(id)arg3;
- (unsigned long long)collectionView:(id)arg1 attrs:(id)arg2 selectedTypeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (_Bool)isSlidingVCScrollingToBound;
- (unsigned long long)scrollingDirect;
- (double)itemDistance;
- (double)itemDistanceBetweenSelect:(long long)arg1 To:(long long)arg2;
- (double)offsetWhenItemCenterForIndex:(long long)arg1;
- (void)triggerDidSelectIndexPath:(id)arg1;
- (void)slidingViewController:(id)arg1 willScrollingFromIndex:(long long)arg2 fromViewController:(id)arg3 toIndex:(long long)arg4 toController:(id)arg5;
- (void)slidingViewController:(id)arg1 didFinishScrollingFromIndex:(long long)arg2 fromViewController:(id)arg3 toIndex:(long long)arg4 toVC:(id)arg5 progress:(double)arg6 transitionSuccessful:(_Bool)arg7;
- (void)slidingViewController:(id)arg1 isScrollingFromIndex:(long long)arg2 fromViewController:(id)arg3 toIndex:(long long)arg4 toController:(id)arg5 progress:(double)arg6;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)loadMoreIfNeeded;
- (_Bool)needPrefentchDataWithDragDirect:(unsigned long long *)arg1;
- (void)selectAtIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)updateLayout;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)init;
- (id)initWithSelectIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
