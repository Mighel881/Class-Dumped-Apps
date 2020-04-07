//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GTMSessionFetcher, NSArray, NSDictionary, NSError, NSString, NSURL, SSOIdentity, SSOIdentityPrivate, SSOLoginScopedAuthorization;
@protocol SSOIOSGuardManager, SSOServiceSafariBootstrapDelegate, SSOServiceSignInUIDelegate;

@protocol SSOServiceInternal <NSObject>
@property(readonly, copy, nonatomic) id <SSOIOSGuardManager> iOSGuardManager;
@property(copy, nonatomic) CDUnknownBlockType safariSignInOpenURLHandler;
@property(nonatomic) __weak id <SSOServiceSafariBootstrapDelegate> safariBootstrapDelegate;
@property(retain, nonatomic) SSOIdentity *userSelectedDefaultIdentity;
- (_Bool)processNewlySignedInIdentity:(SSOIdentityPrivate *)arg1 outputIdentity:(id *)arg2 error:(id *)arg3;
- (GTMSessionFetcher *)forgetIdentity:(SSOIdentity *)arg1 revokeToken:(_Bool)arg2 callback:(void (^)(NSError *))arg3;
- (void)finishExternalSignInWithCallbackURL:(NSURL *)arg1 error:(NSError *)arg2;
- (void)prepareExternalSignInWithVerifier:(NSString *)arg1 expectedEmail:(NSString *)arg2 callback:(void (^)(id <SSOIdentity>, NSError *))arg3;
- (void)finishEmbeddedSignInWithAuth:(SSOLoginScopedAuthorization *)arg1 expectedEmail:(NSString *)arg2 error:(NSError *)arg3 callback:(void (^)(id <SSOIdentity>, NSError *))arg4;
- (void)cancelSignIn;
- (void)reauthenticateUser:(NSString *)arg1 userID:(NSString *)arg2 UIDelegate:(id <SSOServiceSignInUIDelegate>)arg3 callback:(void (^)(id <SSOIdentity>, NSError *))arg4;
- (void)signInWithUserEmail:(NSString *)arg1 UIDelegate:(id <SSOServiceSignInUIDelegate>)arg2 callback:(void (^)(id <SSOIdentity>, NSError *))arg3;
- (NSArray *)identitiesSortedForDefaultAccountSelection;
- (NSDictionary *)allIdentities;
@end
