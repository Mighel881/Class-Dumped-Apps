//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "DBFileEntryListUpdateObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DBFileListThumbnailProvider, DBObserverHandle, DBPeekPreviewManager, DBRecentsTimeGroupedEntry, NSString;
@protocol DBFileEntry;

@interface DBFileThumbnailGridCollectionView : UICollectionView <DBFileEntryListUpdateObserver, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    DBRecentsTimeGroupedEntry *_groupEntry;
    DBObserverHandle *_providerObserver;
    DBFileListThumbnailProvider *_thumbnailProvider;
    DBPeekPreviewManager *_peekPreviewManager;
    id <DBFileEntry> _fileEntryToMatchForSelection;
    double _currentLayoutWidth;
    _Bool _scrollHorizontally;
    _Bool _shouldAutomaticallySelectTappedFileEntries;
    CDUnknownBlockType _didTapOnEntry;
    CDUnknownBlockType _didTapOnExpandToggle;
}

+ (_Bool)entry:(id)arg1 matchesEntry:(id)arg2;
+ (struct CGSize)db_photoItemSizeForBoundsWidth:(double)arg1;
+ (unsigned long long)db_numPhotosPerRowForBoundsWidth:(double)arg1;
+ (unsigned long long)db_numPhotosToShowForGroupedEntry:(id)arg1 forBoundsWidth:(double)arg2;
+ (struct CGSize)maxThumbnailSize;
+ (unsigned long long)db_indexOfRowContainingYOffset:(double)arg1 forBoundingWidth:(double)arg2;
+ (double)db_bottomOfRow:(unsigned long long)arg1 forWidth:(double)arg2;
+ (unsigned long long)numberOfEntriesShownIfCollapsedForWidth:(double)arg1;
+ (struct _NSRange)indexesOfEntriesDisplayedInRect:(struct CGRect)arg1 width:(double)arg2 expanded:(_Bool)arg3;
+ (struct CGRect)rectDisplayingEntryAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
+ (double)heightNeededForVerticalViewOfGroupEntry:(id)arg1 forWidth:(double)arg2;
+ (double)heightNeededForHorizontalViewForWidth:(double)arg1;
+ (id)db_layoutHorizontalScrollDirection:(_Bool)arg1;
@property(nonatomic) _Bool shouldAutomaticallySelectTappedFileEntries; // @synthesize shouldAutomaticallySelectTappedFileEntries=_shouldAutomaticallySelectTappedFileEntries;
@property(copy, nonatomic) CDUnknownBlockType didTapOnExpandToggle; // @synthesize didTapOnExpandToggle=_didTapOnExpandToggle;
@property(copy, nonatomic) CDUnknownBlockType didTapOnEntry; // @synthesize didTapOnEntry=_didTapOnEntry;
@property(readonly, nonatomic) _Bool scrollHorizontally; // @synthesize scrollHorizontally=_scrollHorizontally;
- (void).cxx_destruct;
- (struct CGSize)db_sizeForEntry:(id)arg1 isExpandToggle:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)db_loadThumbnailForEntry:(id)arg1 toCell:(id)arg2 isExpandToggle:(_Bool)arg3;
- (long long)db_indexOfExpandToggleCell;
- (long long)db_currentNumPhotosToShow;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)db_enumerateCellsWithEntriesMatchingEntry:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)db_updateSelectionAnimated:(_Bool)arg1 deselectingEntry:(id)arg2;
- (void)setSelectEntryMatchingFileEntry:(id)arg1 animated:(_Bool)arg2;
- (void)setThumbnailImage:(id)arg1 forFileEntry:(id)arg2;
- (void)groupedEntryDidEndUpdates:(id)arg1;
- (void)groupedEntryWillBeginUpdates:(id)arg1;
- (void)groupedEntry:(id)arg1 didSetExpanded:(_Bool)arg2;
- (void)groupedEntry:(id)arg1 didRemoveEntry:(id)arg2 fromIndex:(unsigned long long)arg3;
- (void)groupedEntry:(id)arg1 willRemoveEntry:(id)arg2 fromIndex:(unsigned long long)arg3;
- (void)groupedEntry:(id)arg1 didAddEntry:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)groupedEntry:(id)arg1 willAddEntry:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)layoutSubviews;
- (id)initWithFileGroupEntry:(id)arg1 thumbnailProvider:(id)arg2 peekPreviewManager:(id)arg3 scrollHorizontally:(_Bool)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
