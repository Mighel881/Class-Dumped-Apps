//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel;

@interface _TtC10ProtonMail29EncryptionSetupViewController : UIViewController
{
    // Error parsing type: , name: kSegueToSignUpVerification
    // Error parsing type: , name: hight
    // Error parsing type: , name: low
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: topLeftButton
    // Error parsing type: , name: topTitleLabel
    // Error parsing type: , name: highBitLevel
    // Error parsing type: , name: normalBitLevel
    // Error parsing type: , name: highSecurityLabel
    // Error parsing type: , name: extremeSecurityNoteLabel
    // Error parsing type: , name: continueButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)switchAction:(id)arg1;
- (void)continueAction:(id)arg1;
- (void)backAction:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *continueButton; // @synthesize continueButton;
@property(nonatomic) __weak UILabel *extremeSecurityNoteLabel; // @synthesize extremeSecurityNoteLabel;
@property(nonatomic) __weak UILabel *highSecurityLabel; // @synthesize highSecurityLabel;
@property(nonatomic) __weak UIButton *normalBitLevel; // @synthesize normalBitLevel;
@property(nonatomic) __weak UIButton *highBitLevel; // @synthesize highBitLevel;
@property(nonatomic) __weak UILabel *topTitleLabel; // @synthesize topTitleLabel;
@property(nonatomic) __weak UIButton *topLeftButton; // @synthesize topLeftButton;

@end
