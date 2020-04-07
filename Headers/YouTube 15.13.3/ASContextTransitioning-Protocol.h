//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class ASDisplayNode, ASLayout, NSArray, NSString;

@protocol ASContextTransitioning <NSObject>
- (void)completeTransition:(_Bool)arg1;
- (struct CGRect)finalFrameForNode:(ASDisplayNode *)arg1;
- (struct CGRect)initialFrameForNode:(ASDisplayNode *)arg1;
- (NSArray *)removedSubnodes;
- (NSArray *)insertedSubnodes;
- (NSArray *)subnodesForKey:(NSString *)arg1;
- (CDStruct_42a63532)constrainedSizeForKey:(NSString *)arg1;
- (ASLayout *)layoutForKey:(NSString *)arg1;
- (_Bool)isAnimated;
@end
