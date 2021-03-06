//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSUserDefaults, WACellProvider, WAChangeNumberSource, WADomainFrontingProviderStore, WAKeychainWrapper, WAPhoneNumber, WARecoveryToken, WARegistrationManagerDependencyProvider, XMPPConnectionMain;
@protocol WADeviceDate;

@interface WARegistrationManager : NSObject
{
    WARegistrationManagerDependencyProvider *_provider;
    XMPPConnectionMain *_xmppConnection;
    WAKeychainWrapper *_keychainWrapper;
    WACellProvider *_cellProvider;
    WADomainFrontingProviderStore *_domainFrontingProviderStore;
    NSUserDefaults *_userDefaults;
    _Bool _recoveryTokenUpdateInProgress;
    NSDate *_recoveryTokenKeychainCreationDate;
    NSDate *_recoveryTokenKeychainModificationDate;
    _Bool _didReachRegistrationDomain;
    NSDate<WADeviceDate> *_lastRegistrationDomainProbeTime;
}

- (void).cxx_destruct;
- (void)removeRecoveryTokenForJID:(id)arg1;
- (void)performOnConnect;
- (void)probeDomainFrontingProvidersIfNecessary;
- (id)offlineABExposures;
- (void)setOfflineABExposures:(id)arg1;
- (void)processRegistrationJSONResponse:(id)arg1 isChangeNumber:(_Bool)arg2;
- (void)processCertResponseJSONResponse:(id)arg1 isChangeNumber:(_Bool)arg2;
@property(retain, nonatomic) WAPhoneNumber *verificationCodePhoneNumber;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 cellProvider:(id)arg2 xmppConnection:(id)arg3 userDefaults:(id)arg4 keychainWrapper:(id)arg5 provider:(id)arg6;
- (id)initWithPhoneNumber:(id)arg1 cellProvider:(id)arg2 xmppConnection:(id)arg3 userDefaults:(id)arg4 signalManager:(id)arg5;
- (_Bool)reallyUpdateServerRecoveryTokenIfNecessaryForAccount:(id)arg1;
- (void)handleUpdateRecoveryTokenResponseWithToken:(id)arg1 account:(id)arg2 error:(id)arg3;
- (id)recoveryTokenForUpdatingServerForAccount:(id)arg1;
- (_Bool)isRecoveryTokenValid:(id)arg1;
- (void)cleanupRecoveryTokensForCurrentAccount:(id)arg1;
- (void)removeV0RecoveryTokenFile;
- (void)removeV0KeychainRecoveryToken;
- (void)removePrivateRecoveryToken;
- (void)removeSharedRecoveryTokenForAccount:(id)arg1;
- (_Bool)writeSharedRecoveryToken:(id)arg1 account:(id)arg2;
- (_Bool)writePrivateRecoveryToken:(id)arg1;
- (id)v0KeychainRecoveryToken;
- (id)sharedRecoveryTokenForAccount:(id)arg1 canUpdateAccessibilityControl:(_Bool)arg2;
- (id)privateRecoveryToken;
- (id)v0KeychainRecoveryTokenDescriptor;
- (id)sharedRecoveryTokenDescriptorForAccount:(id)arg1;
- (void)updateServerRecoveryTokenIfNecessaryForJID:(id)arg1;
- (void)prepareForRegistrationSessionWithAccount:(id)arg1;
- (void)removeRecoveryTokenForAccount:(id)arg1;
@property(readonly, nonatomic) WARecoveryToken *recoveryToken;
- (void)clearChangeNumberSource:(_Bool)arg1;
- (void)saveChangeNumberSourceWithJIDsToNotify:(id)arg1;
@property(readonly, nonatomic) WAChangeNumberSource *changeNumberSource;
- (void)wipeForTwoFactorAuthenticationForSession:(id)arg1 wipeToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetTwoFactorAuthenticationViaEmailForSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyTwoFactorAuthenticationCode:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerWithVerificationCode:(id)arg1 entryMethod:(int)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestVerificationCodeUsingMethod:(id)arg1 session:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)performSameDeviceCheckForSession:(id)arg1 updateRecoveryTokenIfNeccessary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)urlBuilderForPhoneNumber:(id)arg1;
- (void)beginFetchWithPreparedURL:(id)arg1 waHostIfProxying:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)absoluteURLStringForPreparedURL:(id)arg1;
- (void)processVerificationServerResponse:(id)arg1 error:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)beginDomainFrontingRequest:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sessionWithPhoneNumber:(id)arg1;

@end

