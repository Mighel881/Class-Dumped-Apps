//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEPreviewable-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEUserProfileTabBaseMethod-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AWEUILoadingView, AWEUserPrivatePostsDataManager, NSDictionary, NSHashTable, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol AWEUserProfileTabVCDelegate;

@interface AWEPrivatePostWorkViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWEPreviewable, AWEUserMessage, AWEZoomTransitionOuterContextProvider, AWEUserProfileTabBaseMethod>
{
    _Bool _isCurrentUser;
    _Bool _fromHome;
    _Bool _isProfileDidAppear;
    _Bool _isUserCover;
    _Bool _initialLoadMoreEnabled;
    _Bool _shouldReloadDataAfterAppear;
    _Bool _needRefreshData;
    _Bool _selecting;
    UICollectionView *_collectionView;
    NSString *_userID;
    NSString *_enterFrom;
    NSString *_originEntryEnterMethod;
    id <AWEUserProfileTabVCDelegate> _delegate;
    AWEUserPrivatePostsDataManager *_dataManager;
    NSString *_referString;
    NSDictionary *_userTrackAttributes;
    NSDictionary *_logPassback;
    NSString *_currentItemID;
    NSDictionary *_logExtraDict;
    AWEUILoadingView *_loadingView;
    NSString *_coverUrl;
    NSHashTable *_animatedCoverCells;
    AWEUILoadingView *_donwloadLoadingView;
    UICollectionViewFlowLayout *_layout;
    struct CGPoint _savedContentOffset;
}

@property(nonatomic) _Bool selecting; // @synthesize selecting=_selecting;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool needRefreshData; // @synthesize needRefreshData=_needRefreshData;
@property(retain, nonatomic) AWEUILoadingView *donwloadLoadingView; // @synthesize donwloadLoadingView=_donwloadLoadingView;
@property(retain, nonatomic) NSHashTable *animatedCoverCells; // @synthesize animatedCoverCells=_animatedCoverCells;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) struct CGPoint savedContentOffset; // @synthesize savedContentOffset=_savedContentOffset;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(nonatomic) _Bool shouldReloadDataAfterAppear; // @synthesize shouldReloadDataAfterAppear=_shouldReloadDataAfterAppear;
@property(nonatomic) _Bool initialLoadMoreEnabled; // @synthesize initialLoadMoreEnabled=_initialLoadMoreEnabled;
@property(nonatomic) _Bool isUserCover; // @synthesize isUserCover=_isUserCover;
@property(retain, nonatomic) NSString *currentItemID; // @synthesize currentItemID=_currentItemID;
@property(copy, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(copy, nonatomic) NSDictionary *userTrackAttributes; // @synthesize userTrackAttributes=_userTrackAttributes;
@property(nonatomic) _Bool isProfileDidAppear; // @synthesize isProfileDidAppear=_isProfileDidAppear;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) AWEUserPrivatePostsDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) __weak id <AWEUserProfileTabVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *originEntryEnterMethod; // @synthesize originEntryEnterMethod=_originEntryEnterMethod;
@property(nonatomic) _Bool fromHome; // @synthesize fromHome=_fromHome;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)tabName;
- (id)contentView;
- (double)contentSizeHeight;
- (void)adjustContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (double)contentOffsetY;
- (void)resetEdgeInsets;
- (void)reloadData;
- (void)refreshData;
- (void)_startTimingForTrack;
- (void)_trackEventForStayTime;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (struct CGRect)previewingSourceRectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)removePrivatePostsTipIfNeeded;
- (long long)p_sectionIndexForAwemes;
- (void)backBtnClicked;
- (void)viewWillLayoutSubviews;
- (void)p_setupNavBar;
- (void)_setupUI;
- (double)footerInset;
- (_Bool)shouldHideNoMoreText;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)p_endRefreshingWithMore:(_Bool)arg1 list:(id)arg2 error:(id)arg3;
- (void)_loadMoreData;
- (void)initDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_refreshDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_refreshDataWithCompletionAB:(CDUnknownBlockType)arg1;
- (void)reloadEmptyPage;
- (void)refreshDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteAwemeWithID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateLogExtraDict:(id)arg1;
- (void)removeAll;
- (void)didFinishLogout;
- (void)dealloc;
- (void)didChangeVideoPrivacy:(id)arg1;
- (void)applicationWillResignActive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserID:(id)arg1 isUserCover:(_Bool)arg2;
- (id)initWithUserID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
