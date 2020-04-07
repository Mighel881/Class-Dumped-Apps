//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DropboxExtensions/DBPasscodeUIPresenter-Protocol.h>
#import <DropboxExtensions/UIViewControllerTransitioningDelegate-Protocol.h>

@class DBPasscodeDotsView, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol DBPasscodeAppearance, DBPasscodeUICrossAppAuthInfoProvider, DBPasscodeUIDelegate;

@interface DBPasscodeViewController : UIViewController <UIViewControllerTransitioningDelegate, DBPasscodeUIPresenter>
{
    _Bool _animating;
    _Bool _handlingFullPasscodeEntered;
    UIView *_contentView;
    UIImageView *_logoImageView;
    DBPasscodeDotsView *_dotsView;
    UILabel *_promptLabel;
    UILabel *_subtitleLabel;
    id _didBecomeActiveObserver;
    id _didEnterBackgroundObserver;
    _Bool _shouldUseBiometricsAuth;
    UIButton *_cancelButton;
    id <DBPasscodeAppearance> _appearance;
    id _didBecomeKeyWindowObserver;
    id _didResignKeyWindowObserver;
    _Bool _preventContentViewRotation;
    UIView *_warningView;
    unsigned long long _passcodeEntryState;
    NSString *_enteredPasscode;
    NSString *_passcodeText;
    _Bool _verificationUsedTouchId;
    id <DBPasscodeUICrossAppAuthInfoProvider> _crossAppAuthInfoProvider;
    unsigned long long _passcodeEntryMode;
    id <DBPasscodeUIDelegate> _delegate;
    CDUnknownBlockType _backgroundColorDidChangeBlock;
    UIView *_passcodeInputView;
    UIView *_keypadView;
    unsigned long long _verificationNumberOfAttempts;
}

+ (void)db_setEqualFrameConstraintsForView:(id)arg1 andView:(id)arg2 containedBy:(id)arg3;
+ (double)db_inputViewYOffsetForMode:(unsigned long long)arg1 viewHeight:(double)arg2 traitCollection:(id)arg3;
+ (double)db_subtitleLabelYOffsetForViewHeight:(double)arg1 traitCollection:(id)arg2;
+ (double)db_warningViewYOffsetForViewHeight:(double)arg1 traitCollection:(id)arg2;
+ (double)db_dotsViewYOffsetForMode:(unsigned long long)arg1 viewHeight:(double)arg2 traitCollection:(id)arg3;
+ (double)db_yPadForEntryModeType:(unsigned long long)arg1 viewHeight:(double)arg2 traitCollection:(id)arg3;
+ (_Bool)db_isBigScreen;
+ (_Bool)db_isMainVerification:(unsigned long long)arg1;
+ (id)mainPasscodeViewControllerWithPasscodeViewController:(id)arg1;
@property(readonly, nonatomic) unsigned long long verificationNumberOfAttempts; // @synthesize verificationNumberOfAttempts=_verificationNumberOfAttempts;
@property(readonly, nonatomic) _Bool verificationUsedTouchId; // @synthesize verificationUsedTouchId=_verificationUsedTouchId;
@property(retain, nonatomic) UIView *keypadView; // @synthesize keypadView=_keypadView;
@property(retain, nonatomic) UIView *passcodeInputView; // @synthesize passcodeInputView=_passcodeInputView;
@property(copy, nonatomic) CDUnknownBlockType backgroundColorDidChangeBlock; // @synthesize backgroundColorDidChangeBlock=_backgroundColorDidChangeBlock;
@property(nonatomic) __weak id <DBPasscodeUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long passcodeEntryMode; // @synthesize passcodeEntryMode=_passcodeEntryMode;
@property(retain, nonatomic) id <DBPasscodeUICrossAppAuthInfoProvider> crossAppAuthInfoProvider; // @synthesize crossAppAuthInfoProvider=_crossAppAuthInfoProvider;
- (void).cxx_destruct;
- (id)viewControllerForExternalManagement;
- (void)showBiometricsPromptIfAvailable:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)passcodeExternalManagementSessionCompleted;
- (void)presentPasscodeModalAnimated:(_Bool)arg1;
- (void)presentMainPasscodeModallyWithCompletion:(CDUnknownBlockType)arg1 dismissedBlock:(CDUnknownBlockType)arg2;
- (void)dismissPasscodeAnimated:(_Bool)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (_Bool)db_isMainVerification;
- (void)db_touchUpPasscodeButton:(id)arg1;
- (void)db_touchDownPasscodeButton:(id)arg1;
- (void)db_setPasscodeInputButtonWithTag:(long long)arg1 toColor:(id)arg2;
- (void)db_setPasscodeInputLabelWithTag:(long long)arg1 toColor:(id)arg2;
- (void)didPressPasscodeButton:(id)arg1;
- (void)didPressKeyboardButton:(id)arg1;
- (void)handleFullPasscodeEntered;
- (void)db_handleVerifyModeCorrectPasscodeEnteredWithTouchId:(_Bool)arg1;
- (void)db_handleFullPasscodeEnteredDelayed;
- (void)animateIncorrectPasscode;
- (void)setColorsToRed:(_Bool)arg1;
- (void)db_layoutWarningView;
- (void)setPasscodeEntryState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setPasscodeEntryMode:(unsigned long long)arg1;
- (id)db_currentAccountVerificationPromptText;
- (id)db_currentlyIdentifiedAppName;
- (id)db_currentAppName;
- (id)db_currentLogoError;
- (id)db_currentLogoDefault;
- (void)db_addLogo;
- (_Bool)db_shouldAddLogo;
- (void)db_setupCancelButtonIfNeeded;
- (void)didTapCancel;
- (void)updatePasscode:(id)arg1;
- (id)db_passcodePromptColorForPasscodeEntryMode:(unsigned long long)arg1;
- (void)db_updateFontsIfNeeded;
- (void)forceShowTouchIdForInitialLaunchWithTrigger:(unsigned long long)arg1;
- (void)reset;
@property(readonly, nonatomic) id <DBPasscodeAppearance> appearance;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (_Bool)canBecomeFirstResponder;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)db_allowsInteraction;
- (void)db_setupTouchIdWithTrigger:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithPasscodeEntryMode:(unsigned long long)arg1 delegate:(id)arg2 appearance:(id)arg3 preventContentViewRotation:(_Bool)arg4;
- (id)initWithPasscodeEntryMode:(unsigned long long)arg1 delegate:(id)arg2 appearance:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
