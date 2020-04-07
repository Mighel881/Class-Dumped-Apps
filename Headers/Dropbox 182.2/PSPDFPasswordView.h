//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PSPDFKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, PSPDFDocument, UIButton, UILabel, UITextField;
@protocol PSPDFPasswordViewDelegate, PSPDFPasswordViewDelegate><PSPDFDelegateProxying;

@interface PSPDFPasswordView : UIView <UITextFieldDelegate>
{
    _Bool _shakeOnError;
    PSPDFDocument *_document;
    UITextField *_passwordField;
    UILabel *_statusLabel;
    UIButton *_unlockButton;
    UIView *_containerView;
    id <PSPDFPasswordViewDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
}

@property(retain) id <PSPDFPasswordViewDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIButton *unlockButton; // @synthesize unlockButton=_unlockButton;
@property(readonly, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(readonly, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordField;
@property(nonatomic) _Bool shakeOnError; // @synthesize shakeOnError=_shakeOnError;
@property(nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)unlockButtonPressed:(id)arg1;
- (void)passwordFieldChanged:(id)arg1;
- (void)updatePasswordView;
- (_Bool)becomeFirstResponder;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) id <PSPDFPasswordViewDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFPasswordViewDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
