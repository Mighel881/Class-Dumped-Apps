//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface UserRateRemindInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *detailLink; // @dynamic detailLink;
@property(nonatomic) _Bool hasDetailLink; // @dynamic hasDetailLink;
@property(nonatomic) _Bool hasRemindText; // @dynamic hasRemindText;
@property(nonatomic) _Bool hasShowDayLimit; // @dynamic hasShowDayLimit;
@property(copy, nonatomic) NSString *remindText; // @dynamic remindText;
@property(nonatomic) int showDayLimit; // @dynamic showDayLimit;

@end
