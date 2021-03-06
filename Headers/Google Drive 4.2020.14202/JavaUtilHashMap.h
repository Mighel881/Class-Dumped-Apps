//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "NSCopying-Protocol.h"

@class IOSObjectArray, NSString;
@protocol JavaUtilSet;

@interface JavaUtilHashMap : JavaUtilAbstractMap <JavaUtilMap, NSCopying, JavaIoSerializable>
{
    IOSObjectArray *table_;
    id <JavaUtilSet> entrySet_;
    int size_;
    int modCount_;
    int threshold_;
    float loadFactor_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)tableSizeForWithInt:(int)arg1;
+ (int)compareComparablesWithIOSClass:(id)arg1 withId:(id)arg2 withId:(id)arg3;
+ (id)comparableClassForWithId:(id)arg1;
+ (int)hash__WithId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)enumerateEntriesWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)internalWriteEntriesWithJavaIoObjectOutputStream:(id)arg1;
- (void)afterNodeRemovalWithJavaUtilHashMap_Node:(id)arg1;
- (void)afterNodeInsertionWithBoolean:(_Bool)arg1;
- (void)afterNodeAccessWithJavaUtilHashMap_Node:(id)arg1;
- (void)reinitialize;
- (id)replacementTreeNodeWithJavaUtilHashMap_Node:(id)arg1 withJavaUtilHashMap_Node:(id)arg2;
- (id)newTreeNodeWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3 withJavaUtilHashMap_Node:(id)arg4;
- (id)replacementNodeWithJavaUtilHashMap_Node:(id)arg1 withJavaUtilHashMap_Node:(id)arg2;
- (id)newNodeWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3 withJavaUtilHashMap_Node:(id)arg4;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (int)capacity;
- (float)loadFactor;
- (id)java_clone;
- (void)replaceAllWithJavaUtilFunctionBiFunction:(id)arg1;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)mergeWithId:(id)arg1 withId:(id)arg2 withJavaUtilFunctionBiFunction:(id)arg3;
- (id)computeWithId:(id)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)computeIfPresentWithId:(id)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)computeIfAbsentWithId:(id)arg1 withJavaUtilFunctionFunction:(id)arg2;
- (id)replaceWithId:(id)arg1 withId:(id)arg2;
- (_Bool)replaceWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (_Bool)removeWithId:(id)arg1 withId:(id)arg2;
- (id)putIfAbsentWithId:(id)arg1 withId:(id)arg2;
- (id)getOrDefaultWithId:(id)arg1 withId:(id)arg2;
- (id)entrySet;
- (id)values;
- (id)keySet;
- (_Bool)containsValueWithId:(id)arg1;
- (void)clear;
- (id)removeNodeWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4 withBoolean:(_Bool)arg5;
- (id)removeWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (void)treeifyBinWithJavaUtilHashMap_NodeArray:(id)arg1 withInt:(int)arg2;
- (id)resize;
- (id)putValWithInt:(int)arg1 withId:(id)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4 withBoolean:(_Bool)arg5;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (_Bool)containsKeyWithId:(id)arg1;
- (id)getNodeWithInt:(int)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (void)putMapEntriesWithJavaUtilMap:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithJavaUtilMap:(id)arg1;
- (id)init;
- (id)initWithInt:(int)arg1;
- (id)initWithInt:(int)arg1 withFloat:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

