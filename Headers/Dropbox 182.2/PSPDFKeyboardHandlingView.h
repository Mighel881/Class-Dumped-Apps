//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PSPDFKitUI/UITextViewDelegate-Protocol.h>

@class NSMutableOrderedSet, NSString, PSPDFKeyboardTracker, PSPDFTrapTextView;
@protocol PSPDFKeyboardHandlerDataSource;

@interface PSPDFKeyboardHandlingView : UIView <UITextViewDelegate>
{
    _Bool _keyboardVisible;
    id <PSPDFKeyboardHandlerDataSource> _dataSource;
    PSPDFTrapTextView *_keyboardTrapView;
    PSPDFKeyboardTracker *_keyboardTracker;
    NSMutableOrderedSet *_delegateProxies;
}

@property(retain, nonatomic) NSMutableOrderedSet *delegateProxies; // @synthesize delegateProxies=_delegateProxies;
@property(retain, nonatomic) PSPDFKeyboardTracker *keyboardTracker; // @synthesize keyboardTracker=_keyboardTracker;
@property(retain, nonatomic) PSPDFTrapTextView *keyboardTrapView; // @synthesize keyboardTrapView=_keyboardTrapView;
@property(nonatomic, getter=isKeyboardVisible) _Bool keyboardVisible; // @synthesize keyboardVisible=_keyboardVisible;
@property(nonatomic) __weak id <PSPDFKeyboardHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)resignKeyboardWithDelegate:(id)arg1;
- (void)activateKeyboardWithDelegate:(id)arg1;
- (id)currentDelegateProxy;
- (void)unregisterKeyboardDelegate:(id)arg1;
- (void)registerKeyboardDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
