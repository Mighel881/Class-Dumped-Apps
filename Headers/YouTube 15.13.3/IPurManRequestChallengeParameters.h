//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, OrchCommonParameters;

@interface IPurManRequestChallengeParameters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchCommonParameters *commonParameters; // @dynamic commonParameters;
@property(nonatomic) _Bool displayBrandImage; // @dynamic displayBrandImage;
@property(nonatomic) _Bool hasCommonParameters; // @dynamic hasCommonParameters;
@property(nonatomic) _Bool hasDisplayBrandImage; // @dynamic hasDisplayBrandImage;
@property(nonatomic) _Bool hasIntegratorRequestId; // @dynamic hasIntegratorRequestId;
@property(nonatomic) _Bool hasPurchaseManagerScenario; // @dynamic hasPurchaseManagerScenario;
@property(copy, nonatomic) NSString *integratorRequestId; // @dynamic integratorRequestId;
@property(nonatomic) int purchaseManagerScenario; // @dynamic purchaseManagerScenario;

@end
