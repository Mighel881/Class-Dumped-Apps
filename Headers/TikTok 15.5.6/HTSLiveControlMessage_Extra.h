//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveText, NSString;

@interface HTSLiveControlMessage_Extra : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *banInfoURL; // @dynamic banInfoURL;
@property(retain, nonatomic) HTSLiveText *displayText; // @dynamic displayText;
@property(nonatomic) long long reasonNo; // @dynamic reasonNo;
@property(retain, nonatomic) HTSLiveText *title; // @dynamic title;
@property(retain, nonatomic) HTSLiveText *violationReason; // @dynamic violationReason;

@end

