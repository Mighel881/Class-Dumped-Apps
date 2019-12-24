//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAccountBaseViewController.h"

#import "AWEAccountKeyboardService-Protocol.h"
#import "AWEAccountRequestTimerService-Protocol.h"

@class AWEAccountKeyboardHandler, AWEAccountPhoneNumber, AWEGetCaptchaInputView, AWELoginButton, NSString, UIButton, UILabel;

@interface AWECaptchaViewController : AWEAccountBaseViewController <AWEAccountRequestTimerService, AWEAccountKeyboardService>
{
    unsigned long long _previousContext;
    CDUnknownBlockType _didFinishSMSVerification;
    CDUnknownBlockType _didCancelSMSVerification;
    NSString *_password;
    UILabel *_titleLabel;
    UILabel *_hintLabel;
    AWEGetCaptchaInputView *_captchaInputView;
    AWELoginButton *_nextButton;
    UIButton *_backButton;
    UIButton *_skipButton;
    AWEAccountPhoneNumber *_phoneNumber;
    unsigned long long _useType;
    double _nextButtonBottom;
    AWEAccountKeyboardHandler *_keyboardHandler;
    NSString *_UUIDSMSVerificationLogin;
}

@property(copy, nonatomic) NSString *UUIDSMSVerificationLogin; // @synthesize UUIDSMSVerificationLogin=_UUIDSMSVerificationLogin;
@property(retain, nonatomic) AWEAccountKeyboardHandler *keyboardHandler; // @synthesize keyboardHandler=_keyboardHandler;
@property(nonatomic) double nextButtonBottom; // @synthesize nextButtonBottom=_nextButtonBottom;
@property(nonatomic) unsigned long long useType; // @synthesize useType=_useType;
@property(copy, nonatomic) AWEAccountPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) AWELoginButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) AWEGetCaptchaInputView *captchaInputView; // @synthesize captchaInputView=_captchaInputView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) CDUnknownBlockType didCancelSMSVerification; // @synthesize didCancelSMSVerification=_didCancelSMSVerification;
@property(copy, nonatomic) CDUnknownBlockType didFinishSMSVerification; // @synthesize didFinishSMSVerification=_didFinishSMSVerification;
@property(nonatomic) unsigned long long previousContext; // @synthesize previousContext=_previousContext;
- (void).cxx_destruct;
- (void)accountHideKeyboardInContext:(unsigned long long)arg1;
- (void)accountShowKeyboardInContext:(unsigned long long)arg1;
- (void)accountRequestTimerCallback:(unsigned long long)arg1 retryTime:(unsigned long long)arg2 context:(unsigned long long)arg3;
- (unsigned long long)accountUtilsContext;
- (unsigned long long)_context;
- (void)_trackToastError;
- (void)backAction;
- (void)_skipAction;
- (void)_handleError:(id)arg1 api:(id)arg2;
- (void)nextAction;
- (void)_restorePreviousState;
- (void)_dismiss;
- (void)_setSkipButtonHidden:(_Bool)arg1;
- (void)_stopLoading;
- (void)_startLoading;
- (void)_updateNextButtonState;
- (void)_getCaptcha:(_Bool)arg1;
- (void)_adjustUI;
- (void)_updateHintLabel;
- (void)_configureUseType;
- (_Bool)inputViewIsFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1 phoneNumber:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
