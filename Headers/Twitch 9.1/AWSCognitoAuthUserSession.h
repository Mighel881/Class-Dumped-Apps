//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSCognitoAuthUserSessionToken, NSDate, NSString;

@interface AWSCognitoAuthUserSession : NSObject
{
    AWSCognitoAuthUserSessionToken *_idToken;
    AWSCognitoAuthUserSessionToken *_accessToken;
    AWSCognitoAuthUserSessionToken *_refreshToken;
    NSDate *_expirationTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) AWSCognitoAuthUserSessionToken *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) AWSCognitoAuthUserSessionToken *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) AWSCognitoAuthUserSessionToken *idToken; // @synthesize idToken=_idToken;
@property(readonly, nonatomic) NSString *username;
- (id)initWithIdToken:(id)arg1 accessToken:(id)arg2 refreshToken:(id)arg3 expirationTime:(id)arg4;
- (id)initWithIdToken:(id)arg1 accessToken:(id)arg2 refreshToken:(id)arg3 expiresIn:(id)arg4;

@end

