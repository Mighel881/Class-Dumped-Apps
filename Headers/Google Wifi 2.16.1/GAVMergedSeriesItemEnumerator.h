//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSArray;

@interface GAVMergedSeriesItemEnumerator : NSEnumerator
{
    NSArray *_items;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (id)nextObject;
@property(readonly, copy) NSArray *allObjects;
- (id)animatedOutItemFromItem:(id)arg1 progress:(double)arg2;
- (id)animatedInItemFromItem:(id)arg1 progress:(double)arg2;
- (id)mergedItemsWithInitialItems:(id)arg1 finalItems:(id)arg2 progress:(double)arg3;
- (id)initWithInitialSeries:(id)arg1 finalSeries:(id)arg2 progress:(double)arg3;

@end

