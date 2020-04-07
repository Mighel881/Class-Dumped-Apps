//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TMPasswordViewDelegate-Protocol.h"
#import "TMPhoneBindCustomContentProvider-Protocol.h"

@class DYRouterModel, NSString, TMPasswordView;

@interface TMResetPasswordViewController : UIViewController <TMPasswordViewDelegate, TMPhoneBindCustomContentProvider>
{
    long long accountManageStage;
    TMPasswordView *_resetPasswordView;
    DYRouterModel *_userContext;
    long long _findType;
    NSString *_password;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) long long findType; // @synthesize findType=_findType;
@property(retain, nonatomic) DYRouterModel *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) TMPasswordView *resetPasswordView; // @synthesize resetPasswordView=_resetPasswordView;
@property(nonatomic) long long accountManageStage; // @synthesize accountManageStage;
- (void).cxx_destruct;
- (void)supportAction;
- (void)closeAction:(id)arg1;
- (void)trackLoginResultWithError:(id)arg1;
- (void)trackLoginSubmit;
- (void)handleError:(id)arg1;
- (void)changeAccountPassword;
- (void)createAccountPassword;
- (void)changePasswordByEmail;
- (void)resetEmailPassword;
- (void)resetSMSPassword;
- (void)createPasswordAction;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 findType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
