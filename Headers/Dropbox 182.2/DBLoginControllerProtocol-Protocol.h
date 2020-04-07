//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIViewController, UIWindow;
@protocol CheckPasswordlessStateDelegate, ForgotPasswordViewDelegate, LoginDelegate><TwoFactorViewDelegate, LoginViewDelegate, RegisterViewDelegate, ResendTwoFactorViewDelegate, ThirdPartyRegisterDelegate, ThirdPartySignInDelegate;

@protocol DBLoginControllerProtocol
- (void)doForgotPasswordWithViewController:(id <ForgotPasswordViewDelegate>)arg1;
- (void)doResendTwoFactorAuthCode:(id <ResendTwoFactorViewDelegate>)arg1;
- (void)doSubmitTwoFactorAuthCode:(id <LoginDelegate><TwoFactorViewDelegate>)arg1;
@property(nonatomic, readonly) long long twoFactorDeliveryMode;
@property(nonatomic, readonly) NSString *userFacingTwoAuthChallengeMessage;
- (void)finishAppleRegisterWithDelegate:(id <ThirdPartyRegisterDelegate>)arg1;
- (void)finishGoogleRegisterWithDelegate:(id <ThirdPartyRegisterDelegate>)arg1;
- (void)finishRegisterWithViewController:(id <RegisterViewDelegate>)arg1;
- (void)doRegisterTOSWithViewController:(id <RegisterViewDelegate>)arg1;
- (void)checkPasswordlessStateWithViewController:(id <CheckPasswordlessStateDelegate>)arg1;
- (void)doAppleSignInWithDelegate:(id <ThirdPartySignInDelegate>)arg1 anchorWindow:(UIWindow *)arg2;
- (void)doGoogleSignInWithDelegate:(id <ThirdPartySignInDelegate>)arg1 viewController:(UIViewController *)arg2;
- (void)doLoginWithViewController:(id <LoginViewDelegate>)arg1;
@end
