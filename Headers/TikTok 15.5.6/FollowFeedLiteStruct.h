//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AwemeBaseStruct, NSMutableArray, NSString, WebcastRoomFeedCellStruct;

@interface FollowFeedLiteStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AwemeBaseStruct *aweme; // @dynamic aweme;
@property(retain, nonatomic) WebcastRoomFeedCellStruct *cellRoom; // @dynamic cellRoom;
@property(nonatomic) long long commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentListArray; // @dynamic commentListArray;
@property(readonly, nonatomic) unsigned long long commentListArray_Count; // @dynamic commentListArray_Count;
@property(nonatomic) int feedType; // @dynamic feedType;
@property(nonatomic) _Bool hasAweme; // @dynamic hasAweme;
@property(nonatomic) _Bool hasCellRoom; // @dynamic hasCellRoom;
@property(nonatomic) _Bool hasCommentCount; // @dynamic hasCommentCount;
@property(nonatomic) _Bool hasFeedType; // @dynamic hasFeedType;
@property(nonatomic) _Bool hasRecommendReason; // @dynamic hasRecommendReason;
@property(nonatomic) _Bool hasRecommendTotalNum; // @dynamic hasRecommendTotalNum;
@property(retain, nonatomic) NSMutableArray *likeListArray; // @dynamic likeListArray;
@property(readonly, nonatomic) unsigned long long likeListArray_Count; // @dynamic likeListArray_Count;
@property(copy, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) int recommendTotalNum; // @dynamic recommendTotalNum;
@property(retain, nonatomic) NSMutableArray *userArray; // @dynamic userArray;
@property(readonly, nonatomic) unsigned long long userArray_Count; // @dynamic userArray_Count;

@end
