//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage, NSString;

@interface HTSLiveUser_AuthenticationInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveImage *authenticationBadge; // @dynamic authenticationBadge;
@property(copy, nonatomic) NSString *customVerify; // @dynamic customVerify;
@property(copy, nonatomic) NSString *enterpriseVerifyReason; // @dynamic enterpriseVerifyReason;
@property(nonatomic) _Bool hasAuthenticationBadge; // @dynamic hasAuthenticationBadge;

@end
