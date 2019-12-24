//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSOIdentity.h"

@class GTMSessionFetcher, NSDate, NSMutableArray, NSString, SSOConfiguration, SSOLoginScopedAuthorization;

@interface SSOIdentityPrivate : SSOIdentity
{
    NSString *_cachedUserID;
    unsigned long long _hash;
    NSString *_hashedUserID;
    _Bool _canSelect;
    NSDate *_creationDate;
    SSOConfiguration *_configuration;
    SSOLoginScopedAuthorization *_auth;
    NSString *_userFullName;
    CDUnknownBlockType _signInCallback;
    NSString *_filterAnnotation;
    GTMSessionFetcher *_tokenRevocationFetcher;
    NSMutableArray *_pendingTokenRevocationCallbacks;
}

+ (id)unexpectedResponseErrorFromError:(id)arg1;
+ (id)cookieFromDictionary:(id)arg1;
+ (id)stringFromDelegationType:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *pendingTokenRevocationCallbacks; // @synthesize pendingTokenRevocationCallbacks=_pendingTokenRevocationCallbacks;
@property(retain, nonatomic) GTMSessionFetcher *tokenRevocationFetcher; // @synthesize tokenRevocationFetcher=_tokenRevocationFetcher;
@property(copy, nonatomic) NSString *filterAnnotation; // @synthesize filterAnnotation=_filterAnnotation;
@property(copy, nonatomic) CDUnknownBlockType signInCallback; // @synthesize signInCallback=_signInCallback;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
@property(copy, nonatomic) NSString *userFullName; // @synthesize userFullName=_userFullName;
@property(retain) SSOLoginScopedAuthorization *auth; // @synthesize auth=_auth;
@property(readonly, nonatomic) SSOConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (_Bool)hasValidAuth;
- (id)identityPropertyForKey:(id)arg1;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
- (id)hashedUserID;
- (id)userID;
- (id)userEmail;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)saveServiceBits:(id)arg1;
- (id)serviceBits;
- (void)writeLibraryAccessToken;
- (id)keychainItem;
- (id)initWithConfiguration:(id)arg1 keychainItem:(id)arg2;
- (id)revokeToken:(CDUnknownBlockType)arg1;
- (id)requestAuthAdviceReauthenticating:(id)arg1 requestTrigger:(long long)arg2 service:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)requestAccessTokenForUserID:(id)arg1 delegationType:(unsigned long long)arg2 scopes:(id)arg3 callback:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)requestAccessTokenForScopes:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (id)extraParametersForLibraryClientID:(id)arg1;
- (void)requestLibraryAccessTokenForClientID:(id)arg1 scopes:(id)arg2 callback:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)requestLibraryAccessTokenForClientID:(id)arg1 scopes:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestAccessTokenForUserID:(id)arg1 delegationType:(unsigned long long)arg2 scopes:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)requestAccessTokenForScopes:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestTokenForScopes:(id)arg1 clientID:(id)arg2 extraParameters:(id)arg3 callback:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)requestCookiesForTargetURLs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)summaryForScopes:(id)arg1;
- (void)requestTokenAuthURL:(id)arg1 service:(id)arg2 autoLoginArgs:(id)arg3 source:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)requestTokenAuthURLWithAutoLoginArgs:(id)arg1 source:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestTokenAuthURL:(id)arg1 service:(id)arg2 source:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)authenticateWithCode:(id)arg1 verifier:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)signIn:(id)arg1 finishedWithAuth:(id)arg2 error:(id)arg3;
- (id)appendJSONDataToError:(id)arg1 data:(id)arg2 fetcher:(id)arg3;
- (id)parseJSONResponse:(id)arg1 error:(id *)arg2;

@end
