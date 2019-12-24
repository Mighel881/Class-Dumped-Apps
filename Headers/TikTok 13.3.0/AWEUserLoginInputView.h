//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEAccountDeleteButtonDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWEAccountDeleteButton, AWEUserLoginInputViewModel, NSString, SHSPhoneTextField, UITextField;

@interface AWEUserLoginInputView : UIView <UITextFieldDelegate, AWEAccountDeleteButtonDelegate>
{
    AWEUserLoginInputViewModel *_viewModel;
    UITextField *_commonTextField;
    SHSPhoneTextField *_phoneTextField;
    AWEAccountDeleteButton *_commonDeleteButton;
    AWEAccountDeleteButton *_phoneDeleteButton;
}

@property(retain, nonatomic) AWEAccountDeleteButton *phoneDeleteButton; // @synthesize phoneDeleteButton=_phoneDeleteButton;
@property(retain, nonatomic) AWEAccountDeleteButton *commonDeleteButton; // @synthesize commonDeleteButton=_commonDeleteButton;
@property(retain, nonatomic) SHSPhoneTextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UITextField *commonTextField; // @synthesize commonTextField=_commonTextField;
@property(retain, nonatomic) AWEUserLoginInputViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)deleteButtonDidClick;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) UITextField *textField;
- (void)deleteButtonDidChange:(id)arg1;
- (void)securityDidChange:(id)arg1;
- (void)appearanceDidChange:(id)arg1;
- (void)inputTextDidChange:(id)arg1;
- (void)inputTypeDidChange:(id)arg1;
- (void)addKVO;
- (void)updateTextField:(id)arg1;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
