//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBSignInWithAppleProtocol-Protocol.h"

@interface _TtC7Dropbox21SignInWithAppleHelper : NSObject <DBSignInWithAppleProtocol>
{
    // Error parsing type: , name: appleAuthProvider
    // Error parsing type: , name: loginController
    // Error parsing type: , name: signInDelegate
    // Error parsing type: , name: signUpDelegate
    // Error parsing type: , name: disposeBag
}

- (void).cxx_destruct;
- (id)init;
- (void)signUpWithOptInMarketingEmails:(_Bool)arg1 preferredEmail:(id)arg2 appleSignUpDelegate:(id)arg3;
- (void)signInAnchorWindow:(id)arg1 appleSignInDelegate:(id)arg2;
- (id)initWithLoginController:(id)arg1 accountRoutes:(id)arg2 emmToken:(id)arg3;

@end
