//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"
#import "DBRecentsMultiSelectCollectionViewCellDelegate-Protocol.h"
#import "DBRecentsMultiSelectCollectionViewDataSourceDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DBActivityViewPresenter, DBObserverHandle, DBRecentsFileEntry, DBRecentsLineLayoutManager, DBRecentsMultiSelectCollectionViewDataSource, DBUserState, NSDictionary, NSMutableSet, NSOrderedSet, NSString, UIBarButtonItem, UICollectionView, UIToolbar;
@protocol DBFileListDataProviderProtocol;

@interface DBRecentsMultiSelectCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, DBRecentsMultiSelectCollectionViewDataSourceDelegate, DBLinkableStateObserverProtocol, DBRecentsMultiSelectCollectionViewCellDelegate>
{
    DBRecentsMultiSelectCollectionViewDataSource *_dataSource;
    DBRecentsLineLayoutManager *_lineLayoutManager;
    NSMutableSet *_selectionModel;
    UIToolbar *_toolbar;
    DBActivityViewPresenter *_activityViewPresenter;
    DBUserState *_userState;
    DBObserverHandle *_observerHandle;
    DBRecentsFileEntry *_selectedEntry;
    UIBarButtonItem *_shareButton;
    UIBarButtonItem *_moveButton;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_enterSelectionButton;
    UIBarButtonItem *_exitSelectionButton;
    UIBarButtonItem *_selectAllButton;
    id <DBFileListDataProviderProtocol> _provider;
    NSDictionary *_analyticsParams;
    UIBarButtonItem *_backBarButtonItem;
    NSOrderedSet *_syncedEntries;
    _Bool _hasPoppedNavigationControler;
    UICollectionView *_collectionView;
}

+ (id)db_numItemsString:(unsigned long long)arg1;
+ (id)db_numSelectedString:(unsigned long long)arg1;
+ (_Bool)canShowMultiselect;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)recentsMultiSelectCollectionViewDataSource:(id)arg1 sizeForThumbnailAtIndex:(unsigned long long)arg2;
- (id)fileEntriesForRecentsMultiSelectCollectionViewDataSource:(id)arg1;
- (void)multiSelectCellDidToggleSelection:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)db_logAction:(id)arg1 userString:(id)arg2 numItems:(unsigned long long)arg3 fullAggregation:(_Bool)arg4;
- (_Bool)db_everythingIsSelected;
- (unsigned long long)db_numItemsPerRowForSize:(struct CGSize)arg1;
- (void)db_handleUpdate;
- (void)db_updateBarsToCurrentState;
- (void)db_filterUnsyncedEntries;
- (void)db_selectAll:(id)arg1;
- (void)db_presentMultiDeleteError;
- (void)db_doDeleteOfPaths:(id)arg1 confirmedFsws:(id)arg2;
- (id)db_presentOperationLoadingView;
- (void)db_delete:(id)arg1;
- (void)db_presentMultiMoveError;
- (void)db_doMoveWithFileEntries:(id)arg1 toPath:(id)arg2 confirmedFsws:(id)arg3;
- (void)db_move:(id)arg1;
- (void)db_shareCompletionNotification:(id)arg1;
- (void)db_share:(id)arg1;
- (_Bool)db_validateAllSelectedAreUploadedErrorTitle:(id)arg1;
- (void)db_handleSizeChange:(struct CGSize)arg1;
- (double)db_collectionViewWidthWithSize:(struct CGSize)arg1;
- (void)db_setupBottomToolbar;
- (void)db_setupNavigationBar;
- (void)db_setupCollectionView;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)hidesBottomBarWhenPushed;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSelectedEntry:(id)arg1 provider:(id)arg2 analyticsParams:(id)arg3 state:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
