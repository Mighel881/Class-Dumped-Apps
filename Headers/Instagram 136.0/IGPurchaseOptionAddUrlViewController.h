//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGTextFieldDelegate-Protocol.h>

@class IGCoreTextView, IGPurchaseOptionPartnerDataModel, IGTextField, IGUserSession, NSString, UIBarButtonItem;
@protocol IGPurchaseOptionAddUrlViewControllerDelegate;

@interface IGPurchaseOptionAddUrlViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGTextFieldDelegate>
{
    IGUserSession *_userSession;
    NSString *_serviceType;
    NSString *_sessionId;
    NSString *_defaultUrlTitleTextViewString;
    IGTextField *_urlTextField;
    IGCoreTextView *_urlTitleTextView;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_loadingButton;
    IGPurchaseOptionPartnerDataModel *_partner;
    id <IGPurchaseOptionAddUrlViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGPurchaseOptionAddUrlViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateUrlTitleWithErrorMessageString:(id)arg1;
- (void)_setupTableView;
- (void)_setupTextFields;
- (void)_setupTitleTextView;
- (void)_setupNavigationBar;
- (void)_didTapDoneButton;
- (void)_fetchValidationUrl;
- (void)_updateBusinessInfo;
- (void)_popToActionButtonsViewController;
- (void)_stopLoadingSpinner;
- (void)_startLoadingSpinner;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)analyticsModule;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 partner:(id)arg2 serviceType:(id)arg3 sessionId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

