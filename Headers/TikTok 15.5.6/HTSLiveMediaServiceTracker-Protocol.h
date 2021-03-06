//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSNumber, NSString, TTInteractVideoStats;

@protocol HTSLiveMediaServiceTracker <NSObject>
- (void)trackWithMonitorData:(NSDictionary *)arg1 logTypeStr:(NSString *)arg2;
- (void)setVideoStats:(TTInteractVideoStats *)arg1;
- (void)trackWithVideoDelay:(NSNumber *)arg1;
- (void)trackWithErrorOccur:(NSError *)arg1;
- (void)trackWithJoinChannelFailed;
- (void)trackWithJoinChannelSuccess;
@end

