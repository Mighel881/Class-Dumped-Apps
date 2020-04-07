//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, OrderContentBook, OrderContentHomeStay, OrderContentPayCoupon, OrderContentQueue, UrlStruct;

@interface PoiOrderV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrderContentBook *bookContent; // @dynamic bookContent;
@property(copy, nonatomic) NSString *detailURL; // @dynamic detailURL;
@property(nonatomic) _Bool hasBookContent; // @dynamic hasBookContent;
@property(nonatomic) _Bool hasDetailURL; // @dynamic hasDetailURL;
@property(nonatomic) _Bool hasHomeStayContent; // @dynamic hasHomeStayContent;
@property(nonatomic) _Bool hasOrderCtime; // @dynamic hasOrderCtime;
@property(nonatomic) _Bool hasOrderId; // @dynamic hasOrderId;
@property(nonatomic) _Bool hasOrderStatus; // @dynamic hasOrderStatus;
@property(nonatomic) _Bool hasOrderStatusDesc; // @dynamic hasOrderStatusDesc;
@property(nonatomic) _Bool hasOrderType; // @dynamic hasOrderType;
@property(nonatomic) _Bool hasPayCouponContent; // @dynamic hasPayCouponContent;
@property(nonatomic) _Bool hasPoiLogo; // @dynamic hasPoiLogo;
@property(nonatomic) _Bool hasPoiName; // @dynamic hasPoiName;
@property(nonatomic) _Bool hasQueueContent; // @dynamic hasQueueContent;
@property(nonatomic) _Bool hasShopLogo; // @dynamic hasShopLogo;
@property(nonatomic) _Bool hasShopName; // @dynamic hasShopName;
@property(nonatomic) _Bool hasShopURL; // @dynamic hasShopURL;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) OrderContentHomeStay *homeStayContent; // @dynamic homeStayContent;
@property(nonatomic) long long orderCtime; // @dynamic orderCtime;
@property(copy, nonatomic) NSString *orderId; // @dynamic orderId;
@property(copy, nonatomic) NSString *orderStatus; // @dynamic orderStatus;
@property(copy, nonatomic) NSString *orderStatusDesc; // @dynamic orderStatusDesc;
@property(nonatomic) int orderType; // @dynamic orderType;
@property(retain, nonatomic) OrderContentPayCoupon *payCouponContent; // @dynamic payCouponContent;
@property(retain, nonatomic) UrlStruct *poiLogo; // @dynamic poiLogo;
@property(copy, nonatomic) NSString *poiName; // @dynamic poiName;
@property(retain, nonatomic) OrderContentQueue *queueContent; // @dynamic queueContent;
@property(retain, nonatomic) UrlStruct *shopLogo; // @dynamic shopLogo;
@property(copy, nonatomic) NSString *shopName; // @dynamic shopName;
@property(copy, nonatomic) NSString *shopURL; // @dynamic shopURL;
@property(nonatomic) int status; // @dynamic status;

@end
