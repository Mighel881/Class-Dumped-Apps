//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GTLRObject.h>

@class GTLRDateTime, NSString;

@interface GTLROAuthIntegrations_TokenInfo : GTLRObject
{
}


// Remaining properties
@property(copy, nonatomic) NSString *accessToken; // @dynamic accessToken;
@property(copy, nonatomic) NSString *authCode; // @dynamic authCode;
@property(retain, nonatomic) GTLRDateTime *expireTime; // @dynamic expireTime;
@property(copy, nonatomic) NSString *refreshToken; // @dynamic refreshToken;
@end
