//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class UserStruct;

@interface FansInfoStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int fansLevel; // @dynamic fansLevel;
@property(nonatomic) _Bool hasFansLevel; // @dynamic hasFansLevel;
@property(nonatomic) _Bool hasIntimacy; // @dynamic hasIntimacy;
@property(nonatomic) _Bool hasLightUp; // @dynamic hasLightUp;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) int intimacy; // @dynamic intimacy;
@property(nonatomic) _Bool lightUp; // @dynamic lightUp;
@property(retain, nonatomic) UserStruct *user; // @dynamic user;

@end
