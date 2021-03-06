//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCAssistantDeviceSettings_GuestAccessOutput, GHCAssistantDeviceSettings_PoliteMode, NSString;

@interface GHCAssistantDeviceSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool faceMatchEnabled; // @dynamic faceMatchEnabled;
@property(nonatomic) int googlePhotoContent; // @dynamic googlePhotoContent;
@property(retain, nonatomic) GHCAssistantDeviceSettings_GuestAccessOutput *guestAccessOutput; // @dynamic guestAccessOutput;
@property(nonatomic) _Bool hasGuestAccessOutput; // @dynamic hasGuestAccessOutput;
@property(nonatomic) _Bool hasPoliteMode; // @dynamic hasPoliteMode;
@property(nonatomic) int hotwordSensitivity; // @dynamic hotwordSensitivity;
@property(copy, nonatomic) NSString *locale; // @dynamic locale;
@property(nonatomic) int personalReadout; // @dynamic personalReadout;
@property(retain, nonatomic) GHCAssistantDeviceSettings_PoliteMode *politeMode; // @dynamic politeMode;
@property(nonatomic) int proactiveNotificationOutput; // @dynamic proactiveNotificationOutput;
@property(nonatomic) _Bool speakerIdEnabled; // @dynamic speakerIdEnabled;
@property(nonatomic) int youtubeContent; // @dynamic youtubeContent;
@property(nonatomic) int youtubeTvContent; // @dynamic youtubeTvContent;

@end

