//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIButton, UILabel;

@interface _TtC10ProtonMail28HumanCheckMenuViewController : UIViewController
{
    // Error parsing type: , name: kSegueToRecaptcha
    // Error parsing type: , name: kSegueToEmailVerify
    // Error parsing type: , name: kSegueToPhoneVerify
    // Error parsing type: , name: recaptchaViewConstraint
    // Error parsing type: , name: emailViewConstraint
    // Error parsing type: , name: phoneViewConstraint
    // Error parsing type: , name: topLeftButton
    // Error parsing type: , name: topTitleLabel
    // Error parsing type: , name: topNotesLabel
    // Error parsing type: , name: optionsTitleLabel
    // Error parsing type: , name: captchaButton
    // Error parsing type: , name: emailCheckButton
    // Error parsing type: , name: phoneCheckButton
    // Error parsing type: , name: kButtonHeight
    // Error parsing type: , name: viewModel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)phoneVerifyAction:(id)arg1;
- (void)emailVerifyAction:(id)arg1;
- (void)recaptchaAction:(id)arg1;
- (void)backAction:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *phoneCheckButton; // @synthesize phoneCheckButton;
@property(nonatomic) __weak UIButton *emailCheckButton; // @synthesize emailCheckButton;
@property(nonatomic) __weak UIButton *captchaButton; // @synthesize captchaButton;
@property(nonatomic) __weak UILabel *optionsTitleLabel; // @synthesize optionsTitleLabel;
@property(nonatomic) __weak UILabel *topNotesLabel; // @synthesize topNotesLabel;
@property(nonatomic) __weak UILabel *topTitleLabel; // @synthesize topTitleLabel;
@property(nonatomic) __weak UIButton *topLeftButton; // @synthesize topLeftButton;
@property(nonatomic) __weak NSLayoutConstraint *phoneViewConstraint; // @synthesize phoneViewConstraint;
@property(nonatomic) __weak NSLayoutConstraint *emailViewConstraint; // @synthesize emailViewConstraint;
@property(nonatomic) __weak NSLayoutConstraint *recaptchaViewConstraint; // @synthesize recaptchaViewConstraint;

@end
