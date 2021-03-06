//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingFormViewController.h>

#import <T1Twitter/T1OnboardingErrorHandler-Protocol.h>
#import <T1Twitter/T1VerifyPINFormDelegate-Protocol.h>
#import <T1Twitter/TFNAttributedTextViewDelegate-Protocol.h>

@class NSArray, NSDate, NSString, NSTimer, T1VerifyPINForm, TFNAttributedTextView, UIImageView;
@protocol T1EnterVerificationCodeViewControllerDelegate;

@interface T1EnterVerificationCodeViewController : T1OnboardingFormViewController <TFNAttributedTextViewDelegate, T1VerifyPINFormDelegate, T1OnboardingErrorHandler>
{
    T1VerifyPINForm *_form;
    TFNAttributedTextView *_detailTextView;
    UIImageView *_validImageView;
    UIImageView *_invalidImageView;
    _Bool _isCodeValidated;
    _Bool _nuxRefreshAppearanceEnabled;
    NSArray *_validityIndicatorItems;
    NSTimer *_currentTimer;
    NSDate *_timerStartDate;
    _Bool _viewVisible;
    _Bool _appInBackground;
    id <T1EnterVerificationCodeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAppInBackground) _Bool appInBackground; // @synthesize appInBackground=_appInBackground;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic) __weak id <T1EnterVerificationCodeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)form:(id)arg1 didChangeSubmittability:(_Bool)arg2;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)verifyPINFormShouldSubmit:(id)arg1;
- (void)applicationWillEnterForegroundFromBackground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)layoutMetricsDidChange:(id)arg1 to:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)submitForm;
- (id)updatedSections:(id)arg1;
- (void)handleError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateWithCode:(id)arg1;
- (void)private_updateValidityIndicator;
- (void)private_updatePollingTimer;
- (void)private_updateTimerStartDate;
- (_Bool)private_isPollingTimerRunning;
- (double)private_maxTimeoutInterval;
- (double)private_pollingTimeInterval;
- (_Bool)private_shouldStartPollingTimer;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 codeHint:(id)arg3 verifyButtonTitle:(id)arg4 detailText:(id)arg5 activeRanges:(id)arg6 nuxRefreshAppearanceEnabled:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

