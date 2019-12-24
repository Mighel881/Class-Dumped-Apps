//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPaymentUPI : NSObject
{
}

+ (id)CLErrorDomain;
+ (void)resetCLState;
+ (void)enableSandboxEnvironment:(_Bool)arg1;
+ (id)getCredentialsPresentedFrom:(id)arg1 mode:(unsigned long long)arg2 paymentAccount:(id)arg3 amount_1000:(id)arg4 payer:(id)arg5 payee:(id)arg6 token:(id)arg7 keys:(id)arg8 payInfo:(id)arg9 transactionId:(id)arg10;
+ (id)getChallengeOfType:(id)arg1;
+ (void)notifyAboutCLCompletion:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
+ (id)otpFromCredentials:(id)arg1;
+ (id)nmpinFromCredentials:(id)arg1;
+ (id)mpinFromCredentials:(id)arg1;
+ (id)atmPinFromCredentials:(id)arg1;
+ (id)encryptedBlobFromData:(id)arg1;
+ (id)controlsForMode:(unsigned long long)arg1 pinFormatVersion:(id)arg2 atmPinLength:(long long)arg3 mPinLength:(long long)arg4 otpLength:(long long)arg5;
+ (id)configurationWithBankName:(id)arg1;
+ (id)keyCode;
+ (id)saltWithAppId:(id)arg1 mobile:(id)arg2 deviceId:(id)arg3 transactionId:(id)arg4 amount:(id)arg5 payer:(id)arg6 payee:(id)arg7;
+ (id)hmacForAppId:(id)arg1 mobile:(id)arg2 deviceId:(id)arg3 token:(id)arg4 transactionId:(id)arg5 amount:(id)arg6 payer:(id)arg7 payee:(id)arg8;

@end
