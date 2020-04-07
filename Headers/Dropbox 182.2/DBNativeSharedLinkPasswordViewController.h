//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class DBStateContext, NSString, UILabel, UIScrollView, UITextField;

@interface DBNativeSharedLinkPasswordViewController : UIViewController <UITextFieldDelegate>
{
    CDUnknownBlockType _cancelActionBlock;
    UITextField *_passwordInput;
    UILabel *_instructionLabel;
    UIScrollView *_scrollView;
    NSString *_linkString;
    DBStateContext *_stateContext;
}

@property(readonly, nonatomic) DBStateContext *stateContext; // @synthesize stateContext=_stateContext;
@property(readonly, nonatomic) NSString *linkString; // @synthesize linkString=_linkString;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)db_submitPassword;
- (void)db_keyboardWillChange:(id)arg1;
@property(readonly, nonatomic) NSString *currentPassword;
- (void)refocusPasswordInput;
- (void)runCancel;
- (void)setCancelActionBlock:(CDUnknownBlockType)arg1 andAddCancelButton:(_Bool)arg2;
- (double)db_defaultOffsetY;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLinkString:(id)arg1 stateContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
