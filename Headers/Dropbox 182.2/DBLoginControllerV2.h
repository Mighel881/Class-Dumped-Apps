//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBLoginControllerProtocol-Protocol.h"

@class NSString;

@interface DBLoginControllerV2 : NSObject <DBLoginControllerProtocol>
{
    // Error parsing type: , name: authProviderFactory
    // Error parsing type: , name: thirdPartyAccountProviderFactory
    // Error parsing type: , name: thirdPartyAccountProvider
    // Error parsing type: , name: logger
    // Error parsing type: , name: loginControllerV1
    // Error parsing type: , name: singleSignOnHelper
    // Error parsing type: , name: isEmmBuild
    // Error parsing type: , name: hasEmmToken
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: $__lazy_storage_$_passwordLessStateProvider
    // Error parsing type: , name: $__lazy_storage_$_emailAndPasswordAuthProvider
    // Error parsing type: , name: $__lazy_storage_$_singleSignOnAuthProvider
    // Error parsing type: , name: $__lazy_storage_$_thirdPartyAuthProvider
    // Error parsing type: , name: twoFactorInteractor
    // Error parsing type: , name: captchaInteractor
    // Error parsing type: , name: passwordInteractor
    // Error parsing type: , name: googleSignUpInteractor
    // Error parsing type: , name: appleSignUpInteractor
}

- (void).cxx_destruct;
- (id)init;
- (void)doForgotPasswordWithViewController:(id)arg1;
- (void)doResendTwoFactorAuthCode:(id)arg1;
- (void)doSubmitTwoFactorAuthCode:(id)arg1;
- (void)finishAppleRegisterWithDelegate:(id)arg1;
- (void)finishGoogleRegisterWithDelegate:(id)arg1;
- (void)finishRegisterWithViewController:(id)arg1;
- (void)doRegisterTOSWithViewController:(id)arg1;
- (void)checkPasswordlessStateWithViewController:(id)arg1;
- (void)doAppleSignInWithDelegate:(id)arg1 anchorWindow:(id)arg2;
- (void)doGoogleSignInWithDelegate:(id)arg1 viewController:(id)arg2;
- (void)doLoginWithViewController:(id)arg1;
@property(nonatomic, readonly) long long twoFactorDeliveryMode;
@property(nonatomic, readonly) NSString *userFacingTwoAuthChallengeMessage;

@end
