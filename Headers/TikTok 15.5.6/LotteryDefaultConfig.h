//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSString;

@interface LotteryDefaultConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *command; // @dynamic command;
@property(retain, nonatomic) GPBInt32Array *conditionTypesArray; // @dynamic conditionTypesArray;
@property(readonly, nonatomic) unsigned long long conditionTypesArray_Count; // @dynamic conditionTypesArray_Count;
@property(nonatomic) long long countDown; // @dynamic countDown;
@property(nonatomic) long long giftCount; // @dynamic giftCount;
@property(nonatomic) long long giftId; // @dynamic giftId;
@property(nonatomic) long long isFirstLottery; // @dynamic isFirstLottery;
@property(nonatomic) long long prizeCount; // @dynamic prizeCount;
@property(copy, nonatomic) NSString *prizeName; // @dynamic prizeName;
@property(nonatomic) long long userNum; // @dynamic userNum;

@end
