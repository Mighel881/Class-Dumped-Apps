//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class PoiDetailCouponStruct, PoiDetailLianchiCouponStruct;

@interface PoiDetailActivityCouponStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PoiDetailLianchiCouponStruct *adCard; // @dynamic adCard;
@property(retain, nonatomic) PoiDetailCouponStruct *coupon; // @dynamic coupon;
@property(nonatomic) int couponType; // @dynamic couponType;
@property(nonatomic) _Bool hasAdCard; // @dynamic hasAdCard;
@property(nonatomic) _Bool hasCoupon; // @dynamic hasCoupon;
@property(nonatomic) _Bool hasCouponType; // @dynamic hasCouponType;

@end
