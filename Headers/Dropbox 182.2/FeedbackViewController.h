//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DBRestClientFeedbackDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class DBLoadingView, DBRestClient, NSArray, NSString, UIBarButtonItem, UITextView;
@protocol DBBackgroundTaskFactoryProtocol;

@interface FeedbackViewController : UIViewController <UITextViewDelegate, DBRestClientFeedbackDelegate>
{
    UIBarButtonItem *_sendButtonItem;
    UITextView *_messageTextView;
    DBLoadingView *_loadingView;
    DBRestClient *_restClient;
    UIViewController *_modalPresenter;
    unsigned long long _feedbackType;
    NSArray *_keyboardNotificationObservers;
    id <DBBackgroundTaskFactoryProtocol> _backgroundTaskFactory;
}

- (void).cxx_destruct;
- (void)restClientDidSendFeedback:(id)arg1;
- (void)restClient:(id)arg1 sendFeedbackFailedWithError:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)didPressCancelButton;
- (void)logUploadsCompleted:(id)arg1;
- (void)didPressSendButton;
- (void)db_adjustTextViewInsetsForKeyboardNotification:(id)arg1;
- (id)db_registerKeyboardObservers;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setKeyboardAppearance:(long long)arg1;
- (long long)keyboardAppearance;
- (id)initWithModalPresenter:(id)arg1 type:(unsigned long long)arg2 backgroundTaskFactory:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
