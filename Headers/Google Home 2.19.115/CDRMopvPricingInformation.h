//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRIcon, CDRInformationDialog, NSString;

@interface CDRMopvPricingInformation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInfoDialog; // @dynamic hasInfoDialog;
@property(nonatomic) _Bool hasInfoIcon; // @dynamic hasInfoIcon;
@property(nonatomic) _Bool hasSubstituteTextForPrice; // @dynamic hasSubstituteTextForPrice;
@property(retain, nonatomic) CDRInformationDialog *infoDialog; // @dynamic infoDialog;
@property(retain, nonatomic) CDRIcon *infoIcon; // @dynamic infoIcon;
@property(copy, nonatomic) NSString *substituteTextForPrice; // @dynamic substituteTextForPrice;

@end

