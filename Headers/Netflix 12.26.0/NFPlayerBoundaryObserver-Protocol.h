//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class NSString;
@protocol NFPlayerInternal;

@protocol NFPlayerBoundaryObserver <NSObject>
- (void)player:(id <NFPlayerInternal>)arg1 didExitRange:(NSString *)arg2 withContext:(id)arg3;
- (void)player:(id <NFPlayerInternal>)arg1 didEnterRange:(NSString *)arg2 withContext:(id)arg3;
- (void)player:(id <NFPlayerInternal>)arg1 didReachBoundary:(double)arg2 withContext:(id)arg3;
@end

