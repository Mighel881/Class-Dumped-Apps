//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistSortingFiltering-Protocol.h"
#import "SPTSortingFilteringFilterableModel-Protocol.h"
#import "SPTSortingFilteringSortableModel-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTCollectionSortingEntityManager, SPTFreeTierPlaylistSortingFilteringDelegate, SPTSortingFilteringPreferences, SPTSortingFilteringSortRule;

@interface SPTFreeTierPlaylistSortingFilteringAdapter : NSObject <SPTFreeTierPlaylistSortingFiltering, SPTSortingFilteringFilterableModel, SPTSortingFilteringSortableModel>
{
    _Bool _sorted;
    id <SPTFreeTierPlaylistSortingFilteringDelegate> _delegate;
    id <SPTSortingFilteringSortRule> _selectedSortRule;
    NSString *_textFilter;
    NSArray *_availableSortRules;
    id <SPTSortingFilteringPreferences> _sortingFilteringPreferences;
    NSURL *_playlistURL;
    id <SPTCollectionSortingEntityManager> _sortingEntityManager;
}

@property(readonly, nonatomic) id <SPTCollectionSortingEntityManager> sortingEntityManager; // @synthesize sortingEntityManager=_sortingEntityManager;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
@property(readonly, nonatomic) id <SPTSortingFilteringPreferences> sortingFilteringPreferences; // @synthesize sortingFilteringPreferences=_sortingFilteringPreferences;
@property(nonatomic, getter=isSorted) _Bool sorted; // @synthesize sorted=_sorted;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(copy, nonatomic) id <SPTSortingFilteringSortRule> selectedSortRule; // @synthesize selectedSortRule=_selectedSortRule;
@property(nonatomic) __weak id <SPTFreeTierPlaylistSortingFilteringDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)recentlyAddedSortRule;
- (id)albumSortRule;
- (id)artistSortRule;
- (id)titleSortRule;
- (id)unsortedSortRule;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
- (void)loadSavedSettings;
- (void)applySortingAndFilteringToFetchOptions:(id)arg1;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
@property(readonly, copy, nonatomic) NSArray *availableSortRules; // @synthesize availableSortRules=_availableSortRules;
@property(copy, nonatomic) NSArray *activeFilters;
@property(readonly, copy, nonatomic) NSArray *availableFilters;
- (id)initWithSortingFilteringPreferences:(id)arg1 playlistURL:(id)arg2 sortingEntityManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
