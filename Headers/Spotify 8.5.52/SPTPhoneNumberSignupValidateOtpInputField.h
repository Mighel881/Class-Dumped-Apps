//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, SPTPhoneNumberSignupCodeInputFieldStyle;

@interface SPTPhoneNumberSignupValidateOtpInputField : UITextField <GLUEStyleable>
{
    _Bool _inErrorMode;
    SPTPhoneNumberSignupCodeInputFieldStyle *_style;
}

@property(retain, nonatomic) SPTPhoneNumberSignupCodeInputFieldStyle *style; // @synthesize style=_style;
@property(nonatomic) _Bool inErrorMode; // @synthesize inErrorMode=_inErrorMode;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)currentTextColor;
- (id)currentBackgroundColor;
- (void)glue_applyStyle:(id)arg1;
- (void)deleteBackward;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)didFirstResponderChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configureBindings;
- (id)initWithStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
