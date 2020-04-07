//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class DBSinglePrefetcherThumbnailProvider, NSString, UICollectionView;
@protocol DBRecentsMultiSelectCollectionViewDataSourceDelegate;

@interface DBRecentsMultiSelectCollectionViewDataSource : NSObject <UICollectionViewDataSource>
{
    id <DBRecentsMultiSelectCollectionViewDataSourceDelegate> _delegate;
    UICollectionView *_collectionView;
    DBSinglePrefetcherThumbnailProvider *_lowresThumbnailProvider;
    DBSinglePrefetcherThumbnailProvider *_thumbnailProvider;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)clearThumbnailCache;
- (void)pingPrefetchers;
- (id)db_fileEntryAtIndexPath:(id)arg1;
- (id)db_fileEntries;
- (void)db_configureThumbnailProvider:(id)arg1;
- (void)db_initWithUserState:(id)arg1;
- (id)initWithUserState:(id)arg1 collectionView:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
