//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRMembershipCardInformation, CDRMerchantMembershipInformation, CDRViewDetailButton, NSString;

@interface CDRProductMerchantInformation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMembershipCardInformation; // @dynamic hasMembershipCardInformation;
@property(nonatomic) _Bool hasMerchantLogoURL; // @dynamic hasMerchantLogoURL;
@property(nonatomic) _Bool hasMerchantMembershipInformation; // @dynamic hasMerchantMembershipInformation;
@property(nonatomic) _Bool hasMerchantName; // @dynamic hasMerchantName;
@property(nonatomic) _Bool hasMerchantPageEri; // @dynamic hasMerchantPageEri;
@property(nonatomic) _Bool hasReturnPolicyExplanationText; // @dynamic hasReturnPolicyExplanationText;
@property(nonatomic) _Bool hasReturnPolicyHtml; // @dynamic hasReturnPolicyHtml;
@property(nonatomic) _Bool hasReturnPolicyURL; // @dynamic hasReturnPolicyURL;
@property(nonatomic) _Bool hasSoldByHtmlLabel; // @dynamic hasSoldByHtmlLabel;
@property(nonatomic) _Bool hasSoldByLabel; // @dynamic hasSoldByLabel;
@property(nonatomic) _Bool hasViewReturnPolicyButton; // @dynamic hasViewReturnPolicyButton;
@property(retain, nonatomic) CDRMembershipCardInformation *membershipCardInformation; // @dynamic membershipCardInformation;
@property(copy, nonatomic) NSString *merchantLogoURL; // @dynamic merchantLogoURL;
@property(retain, nonatomic) CDRMerchantMembershipInformation *merchantMembershipInformation; // @dynamic merchantMembershipInformation;
@property(copy, nonatomic) NSString *merchantName; // @dynamic merchantName;
@property(copy, nonatomic) NSString *merchantPageEri; // @dynamic merchantPageEri;
@property(copy, nonatomic) NSString *returnPolicyExplanationText; // @dynamic returnPolicyExplanationText;
@property(copy, nonatomic) NSString *returnPolicyHtml; // @dynamic returnPolicyHtml;
@property(copy, nonatomic) NSString *returnPolicyURL; // @dynamic returnPolicyURL;
@property(copy, nonatomic) NSString *soldByHtmlLabel; // @dynamic soldByHtmlLabel;
@property(copy, nonatomic) NSString *soldByLabel; // @dynamic soldByLabel;
@property(retain, nonatomic) CDRViewDetailButton *viewReturnPolicyButton; // @dynamic viewReturnPolicyButton;

@end

