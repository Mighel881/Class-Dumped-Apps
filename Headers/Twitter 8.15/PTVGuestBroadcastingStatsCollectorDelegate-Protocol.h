//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVGuestBroadcastingEndOfStreamStats, PTVGuestBroadcastingPeriodicPlaybackStats, PTVGuestBroadcastingPeriodicPublishingStats, PTVGuestBroadcastingStatsCollector;

@protocol PTVGuestBroadcastingStatsCollectorDelegate <NSObject>
- (void)guestBroadcastingStatsCollector:(PTVGuestBroadcastingStatsCollector *)arg1 didCollectPeriodicPublishingStats:(PTVGuestBroadcastingPeriodicPublishingStats *)arg2;
- (void)guestBroadcastingStatsCollector:(PTVGuestBroadcastingStatsCollector *)arg1 didCollectEndOfStreamStats:(PTVGuestBroadcastingEndOfStreamStats *)arg2;
- (void)guestBroadcastingStatsCollector:(PTVGuestBroadcastingStatsCollector *)arg1 didCollectPeriodicPlaybackStats:(PTVGuestBroadcastingPeriodicPlaybackStats *)arg2;
@end
