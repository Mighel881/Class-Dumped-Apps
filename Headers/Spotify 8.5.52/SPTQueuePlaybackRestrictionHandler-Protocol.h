//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTPlayerTrack;

@protocol SPTQueuePlaybackRestrictionHandler <NSObject>
- (void)preventPlaybackForAgeRestrictedPlayerTrack:(SPTPlayerTrack *)arg1;
- (void)preventPlaybackForRestrictedPlayerTrack:(SPTPlayerTrack *)arg1 contextURI:(NSURL *)arg2;
- (_Bool)isPlayerTrackContentAgeRestricted:(SPTPlayerTrack *)arg1;
- (_Bool)isPlayerTrackExplicitContentRestricted:(SPTPlayerTrack *)arg1;
- (_Bool)isPlayerTrackContentRestricted:(SPTPlayerTrack *)arg1;
@end

