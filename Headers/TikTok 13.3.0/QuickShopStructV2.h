//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, QuickShopSecondFloorV2;

@interface QuickShopStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasQuickShopName; // @dynamic hasQuickShopName;
@property(nonatomic) _Bool hasQuickShopURL; // @dynamic hasQuickShopURL;
@property(nonatomic) _Bool hasSecondFloorInfo; // @dynamic hasSecondFloorInfo;
@property(nonatomic) _Bool hasWithTextEntry; // @dynamic hasWithTextEntry;
@property(copy, nonatomic) NSString *quickShopName; // @dynamic quickShopName;
@property(copy, nonatomic) NSString *quickShopURL; // @dynamic quickShopURL;
@property(retain, nonatomic) QuickShopSecondFloorV2 *secondFloorInfo; // @dynamic secondFloorInfo;
@property(nonatomic) _Bool withTextEntry; // @dynamic withTextEntry;

@end
