//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBDuration;

@interface GMSx_LOGGMMNStopRecordingEvent : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GPBDuration *duration; // @dynamic duration;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasNumBytes; // @dynamic hasNumBytes;
@property(nonatomic) _Bool hasNumClientEvents; // @dynamic hasNumClientEvents;
@property(nonatomic) _Bool hasNumLocationSamples; // @dynamic hasNumLocationSamples;
@property(nonatomic) int numBytes; // @dynamic numBytes;
@property(nonatomic) int numClientEvents; // @dynamic numClientEvents;
@property(nonatomic) int numLocationSamples; // @dynamic numLocationSamples;

@end

