//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AOGTInstrumentDescription, AOGTInstrumentStatus, NSData;

@interface AOGTExistingInstrument : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *challengeToken; // @dynamic challengeToken;
@property(nonatomic) _Bool hasInstrumentDescription; // @dynamic hasInstrumentDescription;
@property(nonatomic) _Bool hasInstrumentStatus; // @dynamic hasInstrumentStatus;
@property(retain, nonatomic) AOGTInstrumentDescription *instrumentDescription; // @dynamic instrumentDescription;
@property(nonatomic) long long instrumentId; // @dynamic instrumentId;
@property(retain, nonatomic) AOGTInstrumentStatus *instrumentStatus; // @dynamic instrumentStatus;

@end

