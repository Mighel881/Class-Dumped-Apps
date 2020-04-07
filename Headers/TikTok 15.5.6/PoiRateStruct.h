//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AwemeStruct, NSString, PoiSpu, UserStruct;

@interface PoiRateStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AwemeStruct *aweme; // @dynamic aweme;
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(nonatomic) _Bool hasAweme; // @dynamic hasAweme;
@property(nonatomic) _Bool hasCreateTime; // @dynamic hasCreateTime;
@property(nonatomic) _Bool hasRateIdStr; // @dynamic hasRateIdStr;
@property(nonatomic) _Bool hasRateScore; // @dynamic hasRateScore;
@property(nonatomic) _Bool hasSpuInfo; // @dynamic hasSpuInfo;
@property(nonatomic) _Bool hasUserInfo; // @dynamic hasUserInfo;
@property(copy, nonatomic) NSString *rateIdStr; // @dynamic rateIdStr;
@property(copy, nonatomic) NSString *rateScore; // @dynamic rateScore;
@property(retain, nonatomic) PoiSpu *spuInfo; // @dynamic spuInfo;
@property(retain, nonatomic) UserStruct *userInfo; // @dynamic userInfo;

@end
