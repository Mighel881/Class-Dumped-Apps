//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGRetroRegistrationSignUpScrollView, IGWelcomeViewBackgroundView;

@interface IGRetroRegistrationSignUpView : UIView
{
    IGRetroRegistrationSignUpScrollView *_signUpScrollView;
    IGWelcomeViewBackgroundView *_redesignedBackgroundView;
}

@property(retain, nonatomic) IGWelcomeViewBackgroundView *redesignedBackgroundView; // @synthesize redesignedBackgroundView=_redesignedBackgroundView;
@property(retain, nonatomic) IGRetroRegistrationSignUpScrollView *signUpScrollView; // @synthesize signUpScrollView=_signUpScrollView;
- (void).cxx_destruct;
- (void)hideInlineErrorForFieldType:(long long)arg1;
- (void)showInlineErrorForFieldType:(long long)arg1 message:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 nameFieldPlaceholder:(id)arg2 passwordFieldPlaceholder:(id)arg3 title:(id)arg4 subtitle:(id)arg5 showSavePasswordCheckbox:(_Bool)arg6 showBackButton:(_Bool)arg7 showFooterView:(_Bool)arg8 preferredContentInsets:(struct UIEdgeInsets)arg9 layoutSpec:(id)arg10;

@end

