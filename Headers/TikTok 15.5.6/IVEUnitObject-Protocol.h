//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexSet, NSMutableArray;
@protocol VEProcessSampleDelegate;

@protocol IVEUnitObject <NSObject>
- (NSMutableArray *)downStreamsCopy;
- (void)removeAllDwonStreams;
- (void)removeDownStreamAtIndexs:(NSIndexSet *)arg1;
- (void)removeDownStream:(id <VEProcessSampleDelegate>)arg1;
- (void)addDownStream:(id <VEProcessSampleDelegate>)arg1;
- (id)init;
@end
