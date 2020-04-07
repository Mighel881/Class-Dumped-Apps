//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBCollectionModelObserving-Protocol.h"

@class DBObserverHandle, NSArray, NSString;
@protocol DBCollectionModel><DBCollectionModelEnumerable, DBFileListEntryCounterDelegate;

@interface DBFileListEntryCounter : NSObject <DBCollectionModelObserving>
{
    DBObserverHandle *_modelObserverHandle;
    id <DBCollectionModel><DBCollectionModelEnumerable> _model;
    NSArray *_counts;
    id <DBFileListEntryCounterDelegate> _delegate;
    NSString *_stringForEmptyModel;
}

+ (id)db_formatStringForItemSummaryForSection:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
+ (id)db_stringForItemSummaryForSection:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
+ (id)db_stringForFilesWithCount:(long long)arg1;
+ (id)db_stringForFoldersWithCount:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *stringForEmptyModel; // @synthesize stringForEmptyModel=_stringForEmptyModel;
@property(nonatomic) __weak id <DBFileListEntryCounterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *counts; // @synthesize counts=_counts;
@property(retain, nonatomic) id <DBCollectionModel><DBCollectionModelEnumerable> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)collectionModel:(id)arg1 willEnterState:(long long)arg2;
- (void)collectionModelDidRefresh:(id)arg1;
- (void)collectionModel:(id)arg1 didUpdateWithChanges:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)db_filesAndFoldersCountsArray;
- (void)db_countItemsAndNotify;
- (id)userReadableStringFromCounts:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
