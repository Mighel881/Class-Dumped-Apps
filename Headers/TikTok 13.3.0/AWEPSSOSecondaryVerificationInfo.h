//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface AWEPSSOSecondaryVerificationInfo : NSObject
{
    NSString *_profileKey;
    NSString *_sharkTicket;
    NSNumber *_verifyType;
    NSString *_ticket;
    NSString *_verifyMobile;
    NSDictionary *_OAuthInfo;
}

@property(copy, nonatomic) NSDictionary *OAuthInfo; // @synthesize OAuthInfo=_OAuthInfo;
@property(copy, nonatomic) NSString *verifyMobile; // @synthesize verifyMobile=_verifyMobile;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSNumber *verifyType; // @synthesize verifyType=_verifyType;
@property(copy, nonatomic) NSString *sharkTicket; // @synthesize sharkTicket=_sharkTicket;
@property(copy, nonatomic) NSString *profileKey; // @synthesize profileKey=_profileKey;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)paramsDictionary;

@end
