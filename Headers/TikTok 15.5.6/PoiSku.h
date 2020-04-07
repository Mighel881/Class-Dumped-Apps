//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface PoiSku : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attrListArray; // @dynamic attrListArray;
@property(readonly, nonatomic) unsigned long long attrListArray_Count; // @dynamic attrListArray_Count;
@property(nonatomic) _Bool hasOriginalPrice; // @dynamic hasOriginalPrice;
@property(nonatomic) _Bool hasPrice; // @dynamic hasPrice;
@property(nonatomic) _Bool hasSkuId; // @dynamic hasSkuId;
@property(nonatomic) _Bool hasStock; // @dynamic hasStock;
@property(nonatomic) long long originalPrice; // @dynamic originalPrice;
@property(nonatomic) long long price; // @dynamic price;
@property(copy, nonatomic) NSString *skuId; // @dynamic skuId;
@property(nonatomic) long long stock; // @dynamic stock;

@end
