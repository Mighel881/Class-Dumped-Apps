//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFairPlayConfig;

@interface YTIDrmLicenseEntityActionMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientOfflineTransferNonce; // @dynamic clientOfflineTransferNonce;
@property(copy, nonatomic) NSString *drmParams; // @dynamic drmParams;
@property(copy, nonatomic) NSString *drmSessionId; // @dynamic drmSessionId;
@property(retain, nonatomic) YTIFairPlayConfig *fairPlayConfig; // @dynamic fairPlayConfig;
@property(nonatomic) _Bool hasClientOfflineTransferNonce; // @dynamic hasClientOfflineTransferNonce;
@property(nonatomic) _Bool hasDrmParams; // @dynamic hasDrmParams;
@property(nonatomic) _Bool hasDrmSessionId; // @dynamic hasDrmSessionId;
@property(nonatomic) _Bool hasFairPlayConfig; // @dynamic hasFairPlayConfig;
@property(nonatomic) _Bool hasPlaybackStartSeconds; // @dynamic hasPlaybackStartSeconds;
@property(nonatomic) long long playbackStartSeconds; // @dynamic playbackStartSeconds;

@end
