//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFBaseTableViewController.h>

#import <PSPDFKitUI/UITableViewDataSource-Protocol.h>
#import <PSPDFKitUI/UITableViewDelegate-Protocol.h>

@class NSString, PSPDFTabbedViewController;
@protocol PSPDFMultiDocumentListControllerDelegate, PSPDFMultiDocumentListControllerDelegate><PSPDFDelegateProxying;

@interface PSPDFMultiDocumentListController : PSPDFBaseTableViewController <UITableViewDataSource, UITableViewDelegate>
{
    PSPDFTabbedViewController *_tabbedViewController;
    id <PSPDFMultiDocumentListControllerDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
    struct CGSize _previousViewSize;
}

@property(retain) id <PSPDFMultiDocumentListControllerDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(nonatomic) struct CGSize previousViewSize; // @synthesize previousViewSize=_previousViewSize;
@property(nonatomic) __weak PSPDFTabbedViewController *tabbedViewController; // @synthesize tabbedViewController=_tabbedViewController;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)allowsClosingDocuments;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)scrollToVisibleDocumentAnimated:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)commonInit;
@property(retain, nonatomic) id <PSPDFMultiDocumentListControllerDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFMultiDocumentListControllerDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
