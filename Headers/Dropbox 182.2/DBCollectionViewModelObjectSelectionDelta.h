//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBCollectionModelDelta-Protocol.h"

@class NSArray, NSIndexSet, NSSet, NSString;

@interface DBCollectionViewModelObjectSelectionDelta : NSObject <DBCollectionModelDelta>
{
    _Bool _containsFirstAddInSection;
    _Bool _containsLastRemoveInSection;
    NSSet *_updatedEntryIndexPaths;
    NSSet *_removedEntryIndexPaths;
    NSIndexSet *_removedSectionIndexes;
    NSSet *_addedEntryIndexPaths;
    NSIndexSet *_addedSectionIndexes;
    NSArray *_addedUniqueIds;
    NSArray *_removedUniqueIds;
}

+ (id)db_setOfIndexPathsInSection:(long long)arg1 withIndexes:(id)arg2;
+ (id)deltaWithRemovedIndexes:(id)arg1 removedUniqueIds:(id)arg2;
+ (id)deltaWithAddedIndexes:(id)arg1 addedUniqueIds:(id)arg2;
+ (id)deltaWithAddedIndexes:(id)arg1 addedUniqueIds:(id)arg2 removedIndexes:(id)arg3 removedUniqueIds:(id)arg4;
+ (id)emptyDelta;
@property(readonly, nonatomic) NSArray *removedUniqueIds; // @synthesize removedUniqueIds=_removedUniqueIds;
@property(readonly, nonatomic) NSArray *addedUniqueIds; // @synthesize addedUniqueIds=_addedUniqueIds;
@property(readonly, nonatomic) _Bool containsLastRemoveInSection; // @synthesize containsLastRemoveInSection=_containsLastRemoveInSection;
@property(readonly, nonatomic) _Bool containsFirstAddInSection; // @synthesize containsFirstAddInSection=_containsFirstAddInSection;
@property(readonly, nonatomic) NSIndexSet *addedSectionIndexes; // @synthesize addedSectionIndexes=_addedSectionIndexes;
@property(readonly, nonatomic) NSSet *addedEntryIndexPaths; // @synthesize addedEntryIndexPaths=_addedEntryIndexPaths;
@property(readonly, nonatomic) NSIndexSet *removedSectionIndexes; // @synthesize removedSectionIndexes=_removedSectionIndexes;
@property(readonly, nonatomic) NSSet *removedEntryIndexPaths; // @synthesize removedEntryIndexPaths=_removedEntryIndexPaths;
@property(readonly, nonatomic) NSSet *updatedEntryIndexPaths; // @synthesize updatedEntryIndexPaths=_updatedEntryIndexPaths;
- (void).cxx_destruct;
- (_Bool)isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
