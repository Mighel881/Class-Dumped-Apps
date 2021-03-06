//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class NSSet;

@interface NSArray (NSArray_MessagePack)
- (id)createMessagePackedData;
- (id)deepImmutableCopy;
- (id)fb_indexByValueMap;
- (id)subarrayToIndex:(unsigned long long)arg1;
- (id)subarrayFromIndex:(unsigned long long)arg1;
- (_Bool)allObjectsPassTest:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)newArrayWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)newDictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlockWithKey:(CDUnknownBlockType)arg2;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlockWithKey:(CDUnknownBlockType)arg2;
- (id)newDictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1 valueBlock:(CDUnknownBlockType)arg2;
- (id)newDictionaryWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryByGroupingWithKeyBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryWithKeyPath:(id)arg1;
- (id)dictionaryWithKey:(id)arg1;
- (id)indexesOfObjectsIdenticalTo:(id)arg1;
- (id)indexesOfObjects:(id)arg1;
- (id)arrayByPerformingInRange:(struct _NSRange)arg1 block:(CDUnknownBlockType)arg2;
- (id)arrayByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingIndexedBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)arrayByPerformingSelector:(SEL)arg1;
- (id)countedSetByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)orderedSetByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)orderedSetByPerformingSelector:(SEL)arg1;
- (id)setByPerformingBlock:(CDUnknownBlockType)arg1;
- (id)setByPerformingSelector:(SEL)arg1;
@property(readonly, nonatomic) NSSet *set;
- (unsigned long long)countObjectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)containsObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)firstObjectPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id onlyObject;
- (id)arrayByRemovingObjectAtIndex:(unsigned long long)arg1;
- (id)arrayByRemovingObject:(id)arg1;
- (id)arrayByInsertingObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)JSONStringWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingDelegate:(id)arg2 selector:(SEL)arg3 error:(id *)arg4;
- (id)JSONStringWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)JSONString;
- (id)JSONDataWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingDelegate:(id)arg2 selector:(SEL)arg3 error:(id *)arg4;
- (id)JSONDataWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)JSONData;
- (id)fb_JSONStringWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingDelegate:(id)arg2 selector:(SEL)arg3 error:(id *)arg4;
- (id)fb_JSONStringWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)fb_JSONString;
- (id)fb_JSONDataWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingDelegate:(id)arg2 selector:(SEL)arg3 error:(id *)arg4;
- (id)fb_JSONDataWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)fb_JSONData;
- (id)JSONStringWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)JSONDataWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)fb_JSONStringWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)fb_JSONDataWithOptions:(unsigned long long)arg1 serializeUnsupportedClassesUsingBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)ig_first:(CDUnknownBlockType)arg1;
- (_Bool)ig_all:(CDUnknownBlockType)arg1;
- (_Bool)ig_any:(CDUnknownBlockType)arg1;
- (id)ig_filter:(CDUnknownBlockType)arg1;
- (id)ig_flattenMap:(CDUnknownBlockType)arg1;
- (id)ig_compactMap:(CDUnknownBlockType)arg1;
- (id)ig_map:(CDUnknownBlockType)arg1;
- (id)ig_arrayBySlicingFirstNObjects:(long long)arg1;
- (id)ig_arrayBySlicingOnMedianIndex:(long long)arg1 withMaximumCount:(long long)arg2;
- (id)ig_sorted_by_username;
- (id)ig_user_names;
- (id)ig_user_ids;
@end

