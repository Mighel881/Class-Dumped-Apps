//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDuration, NSString;

@interface GHCUpdateThermostatFanModeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBDuration *duration; // @dynamic duration;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(copy, nonatomic) NSString *hgsDeviceId; // @dynamic hgsDeviceId;
@property(nonatomic) int timerSpeed; // @dynamic timerSpeed;

@end

