//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ChallengeBaseStruct, MusicBaseStruct;

@interface RelatedChallengeMusicLiteStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int categoryType; // @dynamic categoryType;
@property(retain, nonatomic) ChallengeBaseStruct *chInfo; // @dynamic chInfo;
@property(nonatomic) _Bool hasCategoryType; // @dynamic hasCategoryType;
@property(nonatomic) _Bool hasChInfo; // @dynamic hasChInfo;
@property(nonatomic) _Bool hasMusicInfo; // @dynamic hasMusicInfo;
@property(retain, nonatomic) MusicBaseStruct *musicInfo; // @dynamic musicInfo;

@end
