//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASSWOAuth2Token;

@interface ASSWWebAuthToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int authTokenOneOfCase; // @dynamic authTokenOneOfCase;
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(retain, nonatomic) ASSWOAuth2Token *oauth2Token; // @dynamic oauth2Token;
@property(nonatomic) int profile; // @dynamic profile;

@end

