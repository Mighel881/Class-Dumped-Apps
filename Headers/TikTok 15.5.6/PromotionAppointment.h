//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface PromotionAppointment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long appointmentNum; // @dynamic appointmentNum;
@property(nonatomic) _Bool hasAppointmentNum; // @dynamic hasAppointmentNum;
@property(nonatomic) _Bool hasIsAppointment; // @dynamic hasIsAppointment;
@property(nonatomic) _Bool hasServerTime; // @dynamic hasServerTime;
@property(nonatomic) _Bool hasShowLabel; // @dynamic hasShowLabel;
@property(nonatomic) _Bool hasShowText; // @dynamic hasShowText;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool hasStartTimeText; // @dynamic hasStartTimeText;
@property(nonatomic) _Bool isAppointment; // @dynamic isAppointment;
@property(nonatomic) long long serverTime; // @dynamic serverTime;
@property(copy, nonatomic) NSString *showLabel; // @dynamic showLabel;
@property(copy, nonatomic) NSString *showText; // @dynamic showText;
@property(nonatomic) long long startTime; // @dynamic startTime;
@property(copy, nonatomic) NSString *startTimeText; // @dynamic startTimeText;

@end

