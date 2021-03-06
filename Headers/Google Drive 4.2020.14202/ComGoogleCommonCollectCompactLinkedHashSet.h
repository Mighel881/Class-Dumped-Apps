//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectCompactHashSet.h"

@class IOSIntArray;

@interface ComGoogleCommonCollectCompactLinkedHashSet : ComGoogleCommonCollectCompactHashSet
{
    IOSIntArray *predecessor_;
    IOSIntArray *successor_;
    int firstEntry_;
    int lastEntry_;
}

+ (id)createWithExpectedSizeWithInt:(int)arg1;
+ (id)createWithNSObjectArray:(id)arg1;
+ (id)createWithJavaUtilCollection:(id)arg1;
+ (id)create;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)clear;
- (id)spliterator;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (int)adjustAfterRemoveWithInt:(int)arg1 withInt:(int)arg2;
- (int)firstEntryIndex;
- (void)resizeEntriesWithInt:(int)arg1;
- (void)moveLastEntryWithInt:(int)arg1 withInt:(int)arg2;
- (void)insertEntryWithInt:(int)arg1 withId:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (int)getSuccessorWithInt:(int)arg1;
- (id)convertToHashFloodingResistantImplementation;
- (int)allocArrays;
- (void)init__WithInt:(int)arg1;
- (id)initWithInt:(int)arg1;
- (id)init;

@end

