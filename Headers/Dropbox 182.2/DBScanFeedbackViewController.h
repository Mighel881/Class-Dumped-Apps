//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class DBDocscannerAnalyticsLogger, DBScanMultipleChoiceQuestion, NSDictionary, UIAlertAction, UIBarButtonItem, UISwitch, UITextField;
@protocol DBModalManaging;

@interface DBScanFeedbackViewController : UITableViewController
{
    unsigned long long _source;
    NSDictionary *_donationAnalyticsParams;
    CDUnknownBlockType _completionBlock;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_sendButton;
    UISwitch *_donateSwitch;
    UITextField *_weakAlertControllerTextField;
    UIAlertAction *_weakDoneAction;
    DBScanMultipleChoiceQuestion *_question;
    id <DBModalManaging> _modalManager;
    DBDocscannerAnalyticsLogger *_analyticsLogger;
}

+ (id)db_createCellForCellType:(unsigned long long)arg1 tableView:(id)arg2;
+ (id)db_defaultFailureQuestion;
+ (id)db_defaultSuccessQuestion;
+ (void)db_presentThankYouAlertWithModalManager:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)db_alertTextFieldDidChange:(id)arg1;
- (void)db_presentAlertForUserInputWithPromt:(id)arg1 initialValue:(id)arg2 placeholder:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)db_reloadQuestionSectionCellsAndUpdateSendButton;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)db_updateCellForIndexPath:(id)arg1 tableView:(id)arg2;
- (void)db_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)db_cellTextForIndexPath:(id)arg1;
- (unsigned long long)db_cellTypeForIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)db_isQuestionReady;
- (void)db_didTapSend:(id)arg1;
- (void)db_didTapCancel:(id)arg1;
- (_Bool)donateSwitchIsOn;
- (void)viewDidLoad;
- (id)initWithSource:(unsigned long long)arg1 donationAnalyticsParams:(id)arg2 modalManager:(id)arg3 analyticsLogger:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
