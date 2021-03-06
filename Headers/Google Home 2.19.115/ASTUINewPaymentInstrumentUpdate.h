//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface ASTUINewPaymentInstrumentUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *clientToken; // @dynamic clientToken;
@property(nonatomic) _Bool hasClientToken; // @dynamic hasClientToken;
@property(nonatomic) _Bool hasInstrumentId; // @dynamic hasInstrumentId;
@property(nonatomic) _Bool hasInstrumentToken; // @dynamic hasInstrumentToken;
@property(nonatomic) _Bool hasIntegratorCallbackDataToken; // @dynamic hasIntegratorCallbackDataToken;
@property(nonatomic) long long instrumentId; // @dynamic instrumentId;
@property(copy, nonatomic) NSData *instrumentToken; // @dynamic instrumentToken;
@property(copy, nonatomic) NSData *integratorCallbackDataToken; // @dynamic integratorCallbackDataToken;

@end

