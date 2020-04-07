//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface CheckInInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long avatarIconId; // @dynamic avatarIconId;
@property(copy, nonatomic) NSString *bonusType; // @dynamic bonusType;
@property(nonatomic) _Bool hasAvatarIconId; // @dynamic hasAvatarIconId;
@property(nonatomic) _Bool hasBonusType; // @dynamic hasBonusType;
@property(nonatomic) _Bool hasImageURL; // @dynamic hasImageURL;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasReceiveStatus; // @dynamic hasReceiveStatus;
@property(nonatomic) _Bool hasReceiveType; // @dynamic hasReceiveType;
@property(nonatomic) _Bool hasTargetday; // @dynamic hasTargetday;
@property(nonatomic) _Bool hasTitleline; // @dynamic hasTitleline;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int receiveStatus; // @dynamic receiveStatus;
@property(nonatomic) int receiveType; // @dynamic receiveType;
@property(nonatomic) int targetday; // @dynamic targetday;
@property(copy, nonatomic) NSString *titleline; // @dynamic titleline;

@end
