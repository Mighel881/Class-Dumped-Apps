//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStruct;

@interface BrandOfficialAccountStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) int diggCount; // @dynamic diggCount;
@property(nonatomic) _Bool followStatus; // @dynamic followStatus;
@property(nonatomic) int followerCount; // @dynamic followerCount;
@property(nonatomic) int followerIncrease; // @dynamic followerIncrease;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDiggCount; // @dynamic hasDiggCount;
@property(nonatomic) _Bool hasFollowStatus; // @dynamic hasFollowStatus;
@property(nonatomic) _Bool hasFollowerCount; // @dynamic hasFollowerCount;
@property(nonatomic) _Bool hasFollowerIncrease; // @dynamic hasFollowerIncrease;
@property(nonatomic) _Bool hasLogoURL; // @dynamic hasLogoURL;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasSecUid; // @dynamic hasSecUid;
@property(nonatomic) _Bool hasShareCount; // @dynamic hasShareCount;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(retain, nonatomic) UrlStruct *logoURL; // @dynamic logoURL;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *secUid; // @dynamic secUid;
@property(nonatomic) int shareCount; // @dynamic shareCount;
@property(copy, nonatomic) NSString *uid; // @dynamic uid;

@end
