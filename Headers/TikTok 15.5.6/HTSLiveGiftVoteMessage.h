//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveGiftVoteMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) long long finishTime; // @dynamic finishTime;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) long long msgType; // @dynamic msgType;
@property(retain, nonatomic) NSMutableArray *resultsArray; // @dynamic resultsArray;
@property(readonly, nonatomic) unsigned long long resultsArray_Count; // @dynamic resultsArray_Count;
@property(nonatomic) long long voteId; // @dynamic voteId;

@end

