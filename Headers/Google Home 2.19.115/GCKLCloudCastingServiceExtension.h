//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GCKLCloudCastingServiceExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *castAppId; // @dynamic castAppId;
@property(copy, nonatomic) NSString *clientContextId; // @dynamic clientContextId;
@property(nonatomic) int commandExecutionStatus; // @dynamic commandExecutionStatus;
@property(nonatomic) int commandType; // @dynamic commandType;
@property(copy, nonatomic) NSString *contentDeeplink; // @dynamic contentDeeplink;
@property(nonatomic) _Bool hasCastAppId; // @dynamic hasCastAppId;
@property(nonatomic) _Bool hasClientContextId; // @dynamic hasClientContextId;
@property(nonatomic) _Bool hasCommandExecutionStatus; // @dynamic hasCommandExecutionStatus;
@property(nonatomic) _Bool hasCommandType; // @dynamic hasCommandType;
@property(nonatomic) _Bool hasContentDeeplink; // @dynamic hasContentDeeplink;
@property(nonatomic) _Bool hasMessageId; // @dynamic hasMessageId;
@property(nonatomic) _Bool hasRegionCode; // @dynamic hasRegionCode;
@property(nonatomic) _Bool hasRequestType; // @dynamic hasRequestType;
@property(nonatomic) _Bool hasSourceDeviceId; // @dynamic hasSourceDeviceId;
@property(nonatomic) _Bool hasTargetDeviceId; // @dynamic hasTargetDeviceId;
@property(copy, nonatomic) NSString *messageId; // @dynamic messageId;
@property(copy, nonatomic) NSString *regionCode; // @dynamic regionCode;
@property(nonatomic) int requestType; // @dynamic requestType;
@property(copy, nonatomic) NSString *sourceDeviceId; // @dynamic sourceDeviceId;
@property(copy, nonatomic) NSString *targetDeviceId; // @dynamic targetDeviceId;

@end

