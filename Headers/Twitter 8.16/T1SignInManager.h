//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSTwitterAuthTimelineTokenStorageDelegate-Protocol.h>

@class NSString;
@protocol T1SignInManagerDelegate;

@interface T1SignInManager : NSObject <TFSTwitterAuthTimelineTokenStorageDelegate>
{
    id <T1SignInManagerDelegate> _delegate;
    NSString *_dtabHeader;
}

+ (void)_guestAuthCreateAuthenticatedRequestWithIdentifier:(id)arg1 password:(id)arg2 simCountryCode:(id)arg3 uiMetrics:(id)arg4 oneFactorAuthorizationRequestType:(unsigned long long)arg5 authTokenStorage:(id)arg6 responseBlock:(CDUnknownBlockType)arg7;
@property(copy, nonatomic) NSString *dtabHeader; // @synthesize dtabHeader=_dtabHeader;
@property(nonatomic) __weak id <T1SignInManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)authTimelineToken;
- (void)setAuthTimelineToken:(id)arg1;
- (void)_requestAccessTokensWithIdentifier:(id)arg1 password:(id)arg2 uiMetrics:(id)arg3 oneFactorAuthorizationRequestType:(unsigned long long)arg4 responseBlock:(CDUnknownBlockType)arg5;
- (void)_challengeLoginForResponse:(id)arg1 userName:(id)arg2;
- (void)_unenrollFromLoginVerificationWithAccount:(id)arg1;
- (void)_loginWithToken:(id)arg1 secret:(id)arg2 screenName:(id)arg3 userId:(long long)arg4 knownDeviceToken:(id)arg5;
- (CDUnknownBlockType)_loginChallengeResponseBlock;
- (CDUnknownBlockType)_loginResponseBlockWithUserName:(id)arg1;
- (id)_mappedErrorFromAPIResponseModelParseError:(id)arg1;
- (void)requestOneFactorAuthorization:(id)arg1;
- (void)reauthorizeAccount:(id)arg1 password:(id)arg2;
- (void)addUser:(id)arg1 requestID:(id)arg2 challengeResponse:(id)arg3;
- (void)addUser:(id)arg1 password:(id)arg2 oneFactorAuthorizationRequestType:(unsigned long long)arg3 uiMetrics:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

