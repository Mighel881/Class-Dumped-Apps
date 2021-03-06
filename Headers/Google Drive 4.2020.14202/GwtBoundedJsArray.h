//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GwtAbstractJsArray.h"

@class GwtBoundsDefinition;

@interface GwtBoundedJsArray : GwtAbstractJsArray
{
    GwtBoundsDefinition *bounds_;
}

- (void)dealloc;
- (id)getType;
- (int)bounds;
- (id)concatWithGwtBoundedJsArray:(id)arg1;
- (id)sliceWithInt:(int)arg1 withInt:(int)arg2;
- (id)spliceWithInt:(int)arg1 withInt:(int)arg2;
- (id)spliceWithInt:(int)arg1 withInt:(int)arg2 withGwtImmutableJsArray:(id)arg3;
- (id)spliceWithInt:(int)arg1 withInt:(int)arg2 withGwtUnmodifiableJsArray:(id)arg3;
- (id)spliceWithInt:(int)arg1 withInt:(int)arg2 withGwtBoundedJsArray:(id)arg3;
- (id)spliceWithInt:(int)arg1 withInt:(int)arg2 withGwtJsArray:(id)arg3;
- (id)spliceWithInt:(int)arg1;
- (id)reverse;
- (id)copy__;
- (void)ensureCapacityWithInt:(int)arg1;
- (void)clear;
- (id)pop;
- (void)removeWithInt:(int)arg1;
- (int)unshiftWithId:(id)arg1;
- (void)setWithInt:(int)arg1 withId:(id)arg2;
- (void)addAllWithJavaLangIterable:(id)arg1;
- (void)addAllWithGwtImmutableJsArray:(id)arg1;
- (void)addAllWithGwtUnmodifiableJsArray:(id)arg1;
- (void)addAllWithGwtBoundedJsArray:(id)arg1;
- (void)addAllWithGwtJsArray:(id)arg1;
- (void)addWithId:(id)arg1;
- (id)initWithGwtBoundsDefinition:(id)arg1 withNSObjectArray:(id)arg2 withInt:(int)arg3;
- (id)initWithGwtBoundsDefinition:(id)arg1 withInt:(int)arg2;
- (id)initWithGwtBoundsDefinition:(id)arg1;

@end

