//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseFeedController.h>

#import <Module_Framework/YTFeedStatusViewDelegate-Protocol.h>
#import <Module_Framework/YTSectionControllerProtocol-Protocol.h>

@class NSArray, NSString, YTFeedStatusView;
@protocol YTCellFactory, YTCollectionLayoutResponderProvider, YTSectionControllerDelegate;

@interface YTFeedSectionController : YTBaseFeedController <YTSectionControllerProtocol, YTFeedStatusViewDelegate>
{
    id <YTCellFactory> _cellFactory;
    YTFeedStatusView *_footer;
    id <YTCollectionLayoutResponderProvider> _collectionLayoutResponderProvider;
    NSArray *_restoredCellControllers;
    _Bool _footerHidden;
    _Bool _persistCellSelection;
    int _footerStyle;
    id <YTSectionControllerDelegate> _sectionControllerDelegate;
    NSString *_emptyMessage;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    double _numberOfColumns;
    double _numberOfRows;
}

@property(nonatomic) _Bool persistCellSelection; // @synthesize persistCellSelection=_persistCellSelection;
@property(nonatomic) double numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) double numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) int footerStyle; // @synthesize footerStyle=_footerStyle;
@property(nonatomic, getter=isFooterHidden) _Bool footerHidden; // @synthesize footerHidden=_footerHidden;
@property(copy, nonatomic) NSString *emptyMessage; // @synthesize emptyMessage=_emptyMessage;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate=_sectionControllerDelegate;
- (void).cxx_destruct;
- (struct CGSize)availableSizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (struct CGSize)sizeForFooterWithSize:(struct CGSize)arg1 status:(int)arg2;
- (void)didTapSwitchAccountFromView:(id)arg1;
- (void)didTapStatusLink:(id)arg1 fromView:(id)arg2;
- (void)didTapStatusView:(id)arg1;
- (id)implementationForBehavior:(id)arg1;
- (_Bool)shouldUseNodeForItemAtIndex:(long long)arg1;
- (CDStruct_42a63532)constrainedSizeForNodeAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (CDUnknownBlockType)nodeBlockForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (CDUnknownBlockType)nodeBlockForItemAtIndex:(long long)arg1;
- (void)commitStagedChanges;
- (void)cellDidBecomeHiddenAtIndexPath:(id)arg1;
- (void)cellWillBecomeVisibleAtIndexPath:(id)arg1;
- (void)prepareCellForIndex:(long long)arg1;
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1 fromView:(id)arg2;
- (_Bool)shouldHighlightItemAtIndex:(long long)arg1;
- (void)loadMoreWithContinuationType:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)canLoadMore;
- (void)reloadData;
- (struct CGSize)sizeForFooterWithSize:(struct CGSize)arg1;
- (void)updateFooter:(id)arg1;
- (Class)classForFooter;
- (id)cellClassesToRegister;
- (struct CGSize)sizeForCellController:(id)arg1 withSize:(struct CGSize)arg2;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (Class)cellClassForEntry:(id)arg1;
- (Class)cellClassForItemAtIndex:(long long)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)handleContinuationEntries:(id)arg1 withInitialEntries:(id)arg2;
- (id)handleInitialContinuationEntries:(id)arg1;
- (void)onError:(id)arg1 onRefresh:(_Bool)arg2;
- (void)didUpdateStatusFrom:(int)arg1;
- (void)didRemoveEntriesAtIndices:(id)arg1;
- (void)didInsertEntriesAtIndices:(id)arg1;
- (void)didAddEntries:(id)arg1;
- (id)createCellControllerForEntry:(id)arg1;
- (void)updateCell:(id)arg1 forIndex:(long long)arg2;
- (id)cellControllersToRestore;
- (id)itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2;
- (void)restoreWithSelf:(id)arg1;
- (struct CGSize)cellSizeForEntryAtIndex:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)model;
- (void)updateCellForEntry:(id)arg1;
- (id)initWithParentResponder:(id)arg1;
- (id)initWithCellFactory:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
