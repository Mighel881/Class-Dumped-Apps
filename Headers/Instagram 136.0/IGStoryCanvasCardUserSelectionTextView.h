//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/UITextFieldDelegate-Protocol.h>

@class IGTapButton, NSString, UIColor, UITextField, UIVisualEffectView;
@protocol IGStoryCanvasCardUserSelectionTextViewDelegate;

@interface IGStoryCanvasCardUserSelectionTextView : UIView <UITextFieldDelegate>
{
    UITextField *_searchField;
    IGTapButton *_clearButton;
    UIVisualEffectView *_blurredBackgroundView;
    _Bool _hasInputAccessoryView;
    _Bool _clearButtonVisible;
    id <IGStoryCanvasCardUserSelectionTextViewDelegate> _delegate;
    NSString *_currentText;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *currentText; // @synthesize currentText=_currentText;
@property(nonatomic) __weak id <IGStoryCanvasCardUserSelectionTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapClearButton;
- (void)_setClearButtonVisible:(_Bool)arg1;
- (void)_searchFieldDidChange;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(retain, nonatomic) UIView *inputAccessoryView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

