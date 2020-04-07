//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class T1FullPromptView, T1NewsCameraCaptureContext, TFNTwitterAccount;
@protocol T1NewsCameraServiceAuthorizationViewControllerDelegate;

@interface T1NewsCameraServiceAuthorizationViewController : UIViewController
{
    id <T1NewsCameraServiceAuthorizationViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    unsigned long long _authorizationState;
    T1NewsCameraCaptureContext *_context;
    unsigned long long _cameraAuthorizationState;
    unsigned long long _microphoneAuthorizationState;
    T1FullPromptView *_promptView;
}

@property(retain, nonatomic) T1FullPromptView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) unsigned long long microphoneAuthorizationState; // @synthesize microphoneAuthorizationState=_microphoneAuthorizationState;
@property(nonatomic) unsigned long long cameraAuthorizationState; // @synthesize cameraAuthorizationState=_cameraAuthorizationState;
@property(readonly, nonatomic) T1NewsCameraCaptureContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long authorizationState; // @synthesize authorizationState=_authorizationState;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1NewsCameraServiceAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_t1_main_loadBorderViewsWithConstriants:(id)arg1;
- (void)_t1_main_didTapButton:(id)arg1;
- (void)_t1_main_updatePromptButtons;
- (void)_t1_main_updatePromptSecondaryText;
- (void)_t1_main_didTapDismiss:(id)arg1;
- (void)_t1_main_loadPromptViewWithConstriants:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool needsToRegrantAuthorizations;
@property(readonly, nonatomic) _Bool needsToRequestAuthorizations;
- (void)_t1_main_updateForAuthorizationState;
- (void)_t1_main_requestServiceAuthorizations;
- (void)requestServiceAuthorizations;
- (void)_t1_main_queryServiceAuthorizations;
- (void)updateAuthorizationState;
- (id)initWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
