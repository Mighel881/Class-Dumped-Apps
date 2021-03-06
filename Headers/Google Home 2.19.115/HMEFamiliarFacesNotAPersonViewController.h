//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupCollectionLayoutViewController.h"

#import "HMEFamiliarFacesProviderDelegate-Protocol.h"

@class CADisplayLink, HMEFamiliarFacesErrorViewController, HMEFamiliarFacesProvider, HMEStatusViewController, NSArray, NSIndexPath, NSMutableOrderedSet, NSString, UIBarButtonItem, UILabel;
@protocol HMEFamiliarFacesNotAPersonViewControllerDelegate;

@interface HMEFamiliarFacesNotAPersonViewController : HMESetupCollectionLayoutViewController <HMEFamiliarFacesProviderDelegate>
{
    _Bool _editing;
    id <HMEFamiliarFacesNotAPersonViewControllerDelegate> _delegate;
    UILabel *_selectionCountLabel;
    UIBarButtonItem *_selectionCountLabelItem;
    HMEStatusViewController *_statusViewController;
    HMEFamiliarFacesErrorViewController *_errorViewController;
    NSArray *_leftBarButtonItems;
    NSArray *_editModeLeftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSArray *_emptyStateRightBarButtons;
    NSArray *_singleSelectionRightBarButtons;
    NSArray *_multiSelectionRightBarButtons;
    HMEFamiliarFacesProvider *_familiarFacesProvider;
    NSMutableOrderedSet *_selectedIndexPaths;
    NSIndexPath *_longPressBeginIndexPath;
    NSIndexPath *_longPressEndIndexPath;
    CADisplayLink *_longPressScrollDisplayLink;
    struct CGPoint _longPressViewPoint;
}

+ (void)showSnackbarWithMessage:(id)arg1;
+ (id)mergeNonPersonFacesMessageWithError:(id)arg1;
+ (id)deleteNonPersonFacesFailureMessage;
+ (id)deleteAllNonPersonFacesMessageWithError:(id)arg1;
+ (id)deleteNonPersonFacesMessageForSelectedFacesCount:(unsigned long long)arg1 withError:(id)arg2;
@property(retain, nonatomic) CADisplayLink *longPressScrollDisplayLink; // @synthesize longPressScrollDisplayLink=_longPressScrollDisplayLink;
@property(nonatomic) struct CGPoint longPressViewPoint; // @synthesize longPressViewPoint=_longPressViewPoint;
@property(retain, nonatomic) NSIndexPath *longPressEndIndexPath; // @synthesize longPressEndIndexPath=_longPressEndIndexPath;
@property(retain, nonatomic) NSIndexPath *longPressBeginIndexPath; // @synthesize longPressBeginIndexPath=_longPressBeginIndexPath;
@property(readonly, nonatomic) NSMutableOrderedSet *selectedIndexPaths; // @synthesize selectedIndexPaths=_selectedIndexPaths;
@property(readonly, nonatomic) HMEFamiliarFacesProvider *familiarFacesProvider; // @synthesize familiarFacesProvider=_familiarFacesProvider;
@property(readonly, nonatomic) NSArray *multiSelectionRightBarButtons; // @synthesize multiSelectionRightBarButtons=_multiSelectionRightBarButtons;
@property(readonly, nonatomic) NSArray *singleSelectionRightBarButtons; // @synthesize singleSelectionRightBarButtons=_singleSelectionRightBarButtons;
@property(readonly, nonatomic) NSArray *emptyStateRightBarButtons; // @synthesize emptyStateRightBarButtons=_emptyStateRightBarButtons;
@property(readonly, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(readonly, nonatomic) NSArray *editModeLeftBarButtonItems; // @synthesize editModeLeftBarButtonItems=_editModeLeftBarButtonItems;
@property(readonly, nonatomic) NSArray *leftBarButtonItems; // @synthesize leftBarButtonItems=_leftBarButtonItems;
@property(retain, nonatomic) HMEFamiliarFacesErrorViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(readonly, nonatomic) HMEStatusViewController *statusViewController; // @synthesize statusViewController=_statusViewController;
@property(readonly, nonatomic) UIBarButtonItem *selectionCountLabelItem; // @synthesize selectionCountLabelItem=_selectionCountLabelItem;
@property(readonly, nonatomic) UILabel *selectionCountLabel; // @synthesize selectionCountLabel=_selectionCountLabel;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <HMEFamiliarFacesNotAPersonViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)bundle;
- (id)facesFromIndexPaths:(id)arg1;
- (void)showError;
- (void)configureFooter:(id)arg1;
- (_Bool)shouldShowEmptyState;
- (id)indexPathSetFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)changeSelectedFaceInstanceCellsFromIndexPath:(id)arg1 toDeselectIndexPath:(id)arg2 toSelectIndexPath:(id)arg3;
- (void)updateVisibleItemCells;
- (void)deselectFaceCellAtIndexPath:(id)arg1;
- (void)selectFaceCellAtIndexPath:(id)arg1;
- (void)updateNavigationRightBarButtonsForUserInteractionEnabled:(_Bool)arg1;
- (void)showSpinnerAndDisableNavigationRightBarButtons;
- (void)handleFamiliarFacesProviderMergeAndDeleteAllCallbackForSelector:(SEL)arg1 error:(id)arg2;
- (void)handleFamiliarFacesProviderUpdateCallbackForError:(id)arg1;
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2;
- (id)selectedFaces;
- (void)deleteAllNonPersonFaces;
- (void)deleteSelectedFaces;
- (void)mergeSelectedFaces;
- (void)loadNonPersonFaces;
- (id)deleteActionWithHandler:(CDUnknownBlockType)arg1;
- (id)cancelAction;
- (id)mergeNonPersonFacesAlert;
- (id)deleteAllNonPersonFacesAlert;
- (id)deleteMultipleNonPersonFacesAlert;
- (id)deleteSingleNonPersonFaceAlert;
- (void)updateNavigationBarButtons;
- (void)handleDisplayLinkUpdate:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)didTapMergeButton;
- (void)didTapOverflowButton;
- (void)didTapDeleteButton;
- (void)didTapEditButton;
- (void)didTapCloseButton;
- (void)didTapBackButton;
- (_Bool)collectionView:(id)arg1 hidesInkViewAtIndexPath:(id)arg2;
- (void)didUpdateFaces:(id)arg1 updatedFaceIndices:(id)arg2 addFaces:(id)arg3 addedFaceIndices:(id)arg4 removeFaces:(id)arg5 removedFaceIndices:(id)arg6 forProvider:(id)arg7;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)confirmAndDeleteAllNonPersonFaces;
- (id)initWithFamiliarFacesProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

