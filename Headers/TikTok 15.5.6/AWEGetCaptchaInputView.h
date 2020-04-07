//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEAccountInputView-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWELoginButton, NSString, UITextField;

@interface AWEGetCaptchaInputView : UIView <UITextFieldDelegate, AWEAccountInputView>
{
    CDUnknownBlockType _didChangeBlock;
    UITextField *_textField;
    AWELoginButton *_button;
    UIView *_textFieldBackgroundView;
}

@property(retain, nonatomic) UIView *textFieldBackgroundView; // @synthesize textFieldBackgroundView=_textFieldBackgroundView;
@property(retain, nonatomic) AWELoginButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) CDUnknownBlockType didChangeBlock; // @synthesize didChangeBlock=_didChangeBlock;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)editingChangedAction:(id)arg1;
- (void)_adjustUI;
- (void)setRemainTime:(unsigned long long)arg1;
- (id)text;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
