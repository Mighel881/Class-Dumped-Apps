//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSArray, NSMapTable, NSMutableSet;

@interface FBMPRawTouchGestureRecognizer : UIGestureRecognizer
{
    NSMapTable *_UUIDsForTouches;
    NSMapTable *_touchesForUUIDs;
    NSMutableSet *_recentlyUpdatedUUIDs;
}

- (void).cxx_destruct;
- (struct FBMPRawTouchSnapshot)popSnapshotForWithUUID:(id)arg1 inView:(id)arg2;
- (_Bool)_areRecentlyUpdatedTouchesEnding;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *latestTouchUUIDs;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

