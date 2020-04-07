//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIPlayabilityStatus, YTIResponseContext;

@interface YTIHeartbeatResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPlayabilityStatus; // @dynamic hasPlayabilityStatus;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasStopHeartbeat; // @dynamic hasStopHeartbeat;
@property(retain, nonatomic) YTIPlayabilityStatus *playabilityStatus; // @dynamic playabilityStatus;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(nonatomic) _Bool stopHeartbeat; // @dynamic stopHeartbeat;

@end
