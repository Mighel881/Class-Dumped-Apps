//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableIndexSet, NSMutableSet, NSSet;

@interface DBCollatedEntriesDelta : NSObject
{
    NSMutableSet *_indexPaths;
    NSMutableIndexSet *_sectionIndexes;
}

+ (void)db_extendMutableIndexSetArray:(id)arg1 toLength:(unsigned long long)arg2;
+ (id)db_arrayOfEmptyMutableIndexSetsWithCount:(unsigned long long)arg1;
+ (id)db_indexPathsFromEntryIndexes:(id)arg1;
+ (id)db_entryIndexesBySectionFromIndexPaths:(id)arg1;
+ (void)db_shiftIndexes:(id)arg1 byGapIndexes:(id)arg2;
+ (void)db_addDisjointIndexesFromSet:(id)arg1 toIndexSet:(id)arg2;
+ (void)db_mergeIndexesFromSet:(id)arg1 shiftAndInsertToIndexes:(id)arg2;
+ (id)mergedDelta:(id)arg1 byShiftingDelta:(id)arg2;
- (void).cxx_destruct;
- (id)printableDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSIndexSet *sectionIndexes;
@property(readonly, nonatomic) NSSet *entryIndexPaths;
- (void)addEntryIndexPaths:(id)arg1;
- (void)addSectionIndexes:(id)arg1;
- (void)addSectionIndex:(unsigned long long)arg1;
- (void)addEntryIndexPath:(id)arg1;
- (id)initWithIndexPaths:(id)arg1 sectionIndexes:(id)arg2;
- (id)init;

@end

