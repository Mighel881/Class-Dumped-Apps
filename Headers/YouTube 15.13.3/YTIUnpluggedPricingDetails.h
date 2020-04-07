//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString;

@interface YTIUnpluggedPricingDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float extraTaxValue; // @dynamic extraTaxValue;
@property(nonatomic) _Bool hasExtraTaxValue; // @dynamic hasExtraTaxValue;
@property(nonatomic) _Bool hasIsOneTimePayment; // @dynamic hasIsOneTimePayment;
@property(nonatomic) _Bool hasOfferDescription; // @dynamic hasOfferDescription;
@property(nonatomic) _Bool hasOfferParam; // @dynamic hasOfferParam;
@property(nonatomic) _Bool hasPriceText; // @dynamic hasPriceText;
@property(nonatomic) _Bool hasPriceValue; // @dynamic hasPriceValue;
@property(nonatomic) _Bool hasUserHasPurchasedOffer; // @dynamic hasUserHasPurchasedOffer;
@property(nonatomic) _Bool isOneTimePayment; // @dynamic isOneTimePayment;
@property(retain, nonatomic) YTIFormattedString *offerDescription; // @dynamic offerDescription;
@property(copy, nonatomic) NSString *offerParam; // @dynamic offerParam;
@property(retain, nonatomic) YTIFormattedString *priceText; // @dynamic priceText;
@property(nonatomic) float priceValue; // @dynamic priceValue;
@property(nonatomic) _Bool userHasPurchasedOffer; // @dynamic userHasPurchasedOffer;

@end
