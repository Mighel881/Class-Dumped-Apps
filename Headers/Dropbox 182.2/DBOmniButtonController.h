//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBFileActionsControllerDelegate-Protocol.h"

@class DBFileActionsController, NSArray, NSString, UIView;
@protocol DBOmniButtonControllerHandlerProtocol;

@interface DBOmniButtonController : NSObject <DBFileActionsControllerDelegate>
{
    id <DBOmniButtonControllerHandlerProtocol> _defaultOmniButtonHandler;
    DBFileActionsController *_actionsController;
    NSString *_lastSelectTabTypeForAnalytics;
    id <DBOmniButtonControllerHandlerProtocol> _omniButtonHandler;
    _Bool _forceDestinationInDestinationAndOptionsPicker;
    UIView *_omniButtonView;
    NSArray *_entries;
}

- (void).cxx_destruct;
- (_Bool)actionsControllerShouldForceDestinationInDestinationAndOptionsPicker:(id)arg1;
- (id)actionsController:(id)arg1 persistentAnalyticsParamsForAction:(id)arg2;
- (id)actionsControllerViewToPresentFrom:(id)arg1;
- (void)actionsController:(id)arg1 didCreateFolder:(id)arg2 inAccountWithUserId:(id)arg3;
- (void)actionsControllerWillUploadDocumentFile:(id)arg1 destinationDirPath:(id)arg2 inAccountWithUserID:(id)arg3;
- (void)actionsControllerDidQueueWith:(id)arg1 uploads:(id)arg2 destinationDirPath:(id)arg3 inAccountWithUserID:(id)arg4;
- (id)actionsControllerViewControllerForPresentation:(id)arg1;
- (id)db_extraAnalyticsParams;
- (id)db_sourceTab;
- (id)db_actionSenderView;
- (void)db_handleOmniButtonTapWithFolderFileEntry:(id)arg1 shouldForceFolderFileEntryDestination:(_Bool)arg2 omniButtonHandler:(id)arg3 omniButtonView:(id)arg4;
- (void)handleOmniButtonTapWithFolderFileEntry:(id)arg1 shouldForceFolderFileEntryDestination:(_Bool)arg2 omniButtonHandler:(id)arg3 omniButtonView:(id)arg4;
- (id)initWithDefaultHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
