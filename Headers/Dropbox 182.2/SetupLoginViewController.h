//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractSetupTableViewController.h"

#import "CheckPasswordlessStateDelegate-Protocol.h"
#import "LoginViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class DBContentLinkActionableData, DBSignInWithAppleStormcrowHelper, DBThirdPartySignInHelper, NSArray, NSString, SetupTwoFactorViewController, TroubleSigningInHelper, UIControl, UIStackView, UITextField, UIView;
@protocol DBCancellableToken;

@interface SetupLoginViewController : AbstractSetupTableViewController <UITableViewDataSource, UITextFieldDelegate, LoginViewDelegate, CheckPasswordlessStateDelegate>
{
    UITextField *usernameField;
    UITextField *passwordField;
    DBThirdPartySignInHelper *_thirdPartySignInHelper;
    SetupTwoFactorViewController *_setupTwoFactorViewController;
    TroubleSigningInHelper *_troubleSigningInHelper;
    int _mode;
    UIView *_footerView;
    DBContentLinkActionableData *_actionableData;
    DBSignInWithAppleStormcrowHelper *_siaStormcrowHelper;
    UIView *_stackViewWrapper;
    UIStackView *_thirdPartyButtonsAndLinkInfoStackView;
    UIControl *_siaButton;
    id <DBCancellableToken> _thirdPartyButtonsStackViewObserver;
    NSArray *_thirdPartyButtonsStackViewWidthConstraints;
    NSString *_optionalMessageText;
    NSString *_defaultEmail;
}

@property(copy, nonatomic) NSString *defaultEmail; // @synthesize defaultEmail=_defaultEmail;
@property(copy, nonatomic) NSString *optionalMessageText; // @synthesize optionalMessageText=_optionalMessageText;
- (void).cxx_destruct;
- (void)db_checkForSIAUpdate;
- (void)db_didPressPasswordManagerButton:(id)arg1;
- (void)onePasswordProvidedUsername:(id)arg1 password:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)doAppleSignIn;
- (void)doGoogleSignIn;
- (void)doLogin;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)db_updateFooterViewWithAnimated:(_Bool)arg1;
- (void)db_updatePasswordFieldWithAnimated:(_Bool)arg1;
- (id)getSignInLabelText;
- (void)setMode:(int)arg1 withAnimated:(_Bool)arg2;
- (void)db_usernameFieldValueChanged:(id)arg1;
- (void)loginController:(id)arg1 thirdPartyState:(long long)arg2;
- (void)loginController:(id)arg1 ssoState:(long long)arg2;
- (void)loginControllerShowSigningIn:(id)arg1;
- (void)loginController:(id)arg1 showGenericError:(id)arg2;
- (void)loginController:(id)arg1 captchaRequired:(id)arg2;
- (void)loginController:(id)arg1 twoFactorAuthChallenge:(id)arg2;
- (void)loginControllerNonEmptyPasswordForSSO:(id)arg1;
- (void)loginControllerEmptyPassword:(id)arg1;
- (void)loginControllerInvalidEmail:(id)arg1;
- (void)loginControllerEmptyEmail:(id)arg1;
- (void)loginController:(id)arg1 registerFailed:(id)arg2;
- (void)loginController:(id)arg1 loginFailedWithError:(id)arg2;
- (id)loginControllerAppleLoginCheckpointToken:(id)arg1;
- (id)loginControllerGoogleLoginCheckpointToken:(id)arg1;
- (id)loginControllerPassword:(id)arg1;
- (id)loginControllerUsername:(id)arg1;
- (long long)actionButtonSection;
- (_Bool)areFieldsReady;
- (void)loadFields;
- (void)loadState;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithActionableData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
