//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPIDate, ASTAPITimeOfDay, ASTAPITimeZone;

@interface ASTAPIDateTime : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ASTAPIDate *date; // @dynamic date;
@property(nonatomic) _Bool hasDate; // @dynamic hasDate;
@property(nonatomic) _Bool hasTimeOfDay; // @dynamic hasTimeOfDay;
@property(nonatomic) _Bool hasTimeZone; // @dynamic hasTimeZone;
@property(retain, nonatomic) ASTAPITimeOfDay *timeOfDay; // @dynamic timeOfDay;
@property(retain, nonatomic) ASTAPITimeZone *timeZone; // @dynamic timeZone;

@end

