//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRCheckoutScreen, CDRGetCartScreenResponse, CDROrder, CDROrderConfirmationScreen, LOGGsxVEData, NSString;

@interface CDRCreateOrderResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CDRGetCartScreenResponse *cartResponse; // @dynamic cartResponse;
@property(retain, nonatomic) CDRCheckoutScreen *checkoutScreen; // @dynamic checkoutScreen;
@property(nonatomic) _Bool hasCartResponse; // @dynamic hasCartResponse;
@property(nonatomic) _Bool hasCheckoutScreen; // @dynamic hasCheckoutScreen;
@property(nonatomic) _Bool hasOrder; // @dynamic hasOrder;
@property(nonatomic) _Bool hasOrderConfirmationScreen; // @dynamic hasOrderConfirmationScreen;
@property(nonatomic) _Bool hasOrderConfirmationURL; // @dynamic hasOrderConfirmationURL;
@property(nonatomic) _Bool hasVeMetadata; // @dynamic hasVeMetadata;
@property(retain, nonatomic) CDROrder *order; // @dynamic order;
@property(retain, nonatomic) CDROrderConfirmationScreen *orderConfirmationScreen; // @dynamic orderConfirmationScreen;
@property(copy, nonatomic) NSString *orderConfirmationURL; // @dynamic orderConfirmationURL;
@property(retain, nonatomic) LOGGsxVEData *veMetadata; // @dynamic veMetadata;

@end

