//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC10ProtonMail6PMView.h"

@class NSLayoutConstraint, UIButton, UILabel, _TtC10ProtonMail18TextInsetTextField;

@interface _TtC10ProtonMail13TwoFACodeView : _TtC10ProtonMail6PMView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: mode
    // Error parsing type: , name: pwdTop
    // Error parsing type: , name: pwdHeight
    // Error parsing type: , name: twofacodeTop
    // Error parsing type: , name: twofacodeHeight
    // Error parsing type: , name: twoFactorCodeField
    // Error parsing type: , name: loginPasswordField
    // Error parsing type: , name: topTitleLabel
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: enterButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)cancelAction:(id)arg1;
- (void)enterAction:(id)arg1;
- (void)setup;
- (id)getNibName;
- (void)doneButtonAction;
@property(nonatomic) __weak UIButton *enterButton; // @synthesize enterButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UILabel *topTitleLabel; // @synthesize topTitleLabel;
@property(nonatomic) __weak _TtC10ProtonMail18TextInsetTextField *loginPasswordField; // @synthesize loginPasswordField;
@property(nonatomic) __weak _TtC10ProtonMail18TextInsetTextField *twoFactorCodeField; // @synthesize twoFactorCodeField;
@property(nonatomic) __weak NSLayoutConstraint *twofacodeHeight; // @synthesize twofacodeHeight;
@property(nonatomic) __weak NSLayoutConstraint *twofacodeTop; // @synthesize twofacodeTop;
@property(nonatomic) __weak NSLayoutConstraint *pwdHeight; // @synthesize pwdHeight;
@property(nonatomic) __weak NSLayoutConstraint *pwdTop; // @synthesize pwdTop;

@end
