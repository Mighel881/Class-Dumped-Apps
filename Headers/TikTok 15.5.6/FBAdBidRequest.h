//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdBidRequest : NSObject
{
}

+ (void)getAudienceNetworkTestBidForAppID:(id)arg1 placementID:(id)arg2 platformID:(id)arg3 adFormat:(long long)arg4 maxTimeoutMS:(long long)arg5 responseCallback:(CDUnknownBlockType)arg6;
+ (void)getAudienceNetworkBidForAppID:(id)arg1 placementID:(id)arg2 platformID:(id)arg3 adFormat:(long long)arg4 maxTimeoutMS:(long long)arg5 coppa:(_Bool)arg6 auctionType:(long long)arg7 doNotTrack:(_Bool)arg8 responseCallback:(CDUnknownBlockType)arg9;
+ (void)getAudienceNetworkBidForAppID:(id)arg1 placementID:(id)arg2 platformID:(id)arg3 adFormat:(long long)arg4 responseCallback:(CDUnknownBlockType)arg5;
+ (void)getAudienceNetworkBidForAppID:(id)arg1 placementID:(id)arg2 platformID:(id)arg3 adFormat:(long long)arg4 maxTimeoutMS:(long long)arg5 coppa:(_Bool)arg6 auctionType:(long long)arg7 doNotTrack:(_Bool)arg8 isTestBid:(_Bool)arg9 responseCallback:(CDUnknownBlockType)arg10;
+ (void)fbad_setLogger:(id)arg1;
+ (id)fbad_logger;

@end
