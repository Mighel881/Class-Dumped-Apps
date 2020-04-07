//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKitUI/PSPDFDocumentViewCoordinator-Protocol.h>
#import <PSPDFKitUI/PSPDFDocumentViewSpreadCellDelegate-Protocol.h>
#import <PSPDFKitUI/UICollectionViewDataSource-Protocol.h>
#import <PSPDFKitUI/UICollectionViewDelegate-Protocol.h>

@class NSMutableArray, NSSet, NSString, PSPDFDebouncedTimer, PSPDFDocumentView, PSPDFDocumentViewCollectionView, PSPDFReusableObjectCache;
@protocol PSPDFDocumentViewCoordinatorDelegate;

@interface PSPDFDocumentViewCollectionViewCoordinator : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, PSPDFDocumentViewSpreadCellDelegate, PSPDFDocumentViewCoordinator>
{
    id <PSPDFDocumentViewCoordinatorDelegate> _delegate;
    PSPDFDocumentView *_documentView;
    PSPDFDocumentViewCollectionView *_collectionView;
    PSPDFReusableObjectCache *_pageViewCache;
    NSMutableArray *_configuredCellsInFlight;
    PSPDFDebouncedTimer *_configuredCellsInFlightCleanup;
    NSMutableArray *_visibleCellsInFlight;
    PSPDFDebouncedTimer *_visibleCellsInFlightCleanup;
}

@property(readonly, nonatomic) PSPDFDebouncedTimer *visibleCellsInFlightCleanup; // @synthesize visibleCellsInFlightCleanup=_visibleCellsInFlightCleanup;
@property(readonly, nonatomic) NSMutableArray *visibleCellsInFlight; // @synthesize visibleCellsInFlight=_visibleCellsInFlight;
@property(readonly, nonatomic) PSPDFDebouncedTimer *configuredCellsInFlightCleanup; // @synthesize configuredCellsInFlightCleanup=_configuredCellsInFlightCleanup;
@property(readonly, nonatomic) NSMutableArray *configuredCellsInFlight; // @synthesize configuredCellsInFlight=_configuredCellsInFlight;
@property(retain, nonatomic) PSPDFReusableObjectCache *pageViewCache; // @synthesize pageViewCache=_pageViewCache;
@property(retain, nonatomic) PSPDFDocumentViewCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak PSPDFDocumentView *documentView; // @synthesize documentView=_documentView;
@property(nonatomic) __weak id <PSPDFDocumentViewCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cellDidPrepareForReuse:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(readonly, nonatomic) NSSet *visibleSpreadViews;
@property(readonly, nonatomic) NSSet *spreadViews;
@property(readonly, nonatomic) NSSet *zoomViews;
- (void)scrollToSpreadAtIndex:(long long)arg1 scrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (double)calculateContinuousSpreadIndex;
- (void)setContinuousSpreadIndex:(double)arg1 animated:(_Bool)arg2;
- (void)didMoveToWindow;
- (void)invalidateConfiguration;
- (void)resignFirstRespondersInCellsOffscreenAtOffset:(struct CGPoint)arg1;
- (void)updateForBoundsChange;
- (void)setupViewHierarchyInScrollView:(id)arg1 withLayout:(id)arg2;
- (id)initWithDocumentView:(id)arg1 pageViewCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
