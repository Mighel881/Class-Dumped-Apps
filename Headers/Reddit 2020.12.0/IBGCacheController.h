//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IBGCacheController : NSObject
{
    NSMutableArray *_items;
    unsigned long long _sizeLimit;
    double _intervalLimit;
}

@property(nonatomic) double intervalLimit; // @synthesize intervalLimit=_intervalLimit;
@property(nonatomic) unsigned long long sizeLimit; // @synthesize sizeLimit=_sizeLimit;
@property(nonatomic) __weak NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (double)currentCacheSize;
- (void)removeItemsAfterTimeLimit;
- (void)removeLeastRecentlyUsedItems;
- (id)remainingItems;
- (id)initWithItems:(id)arg1 sizeLimit:(unsigned long long)arg2 intervalLimit:(double)arg3;

@end
