//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileAction.h"

@class DBBlockActionSheetManager, DBLoadingView;

@interface DBBatchActionDeleteAction : DBFileAction
{
    DBBlockActionSheetManager *_weakBatchDeleteActionSheetManager;
    DBLoadingView *_operationLoadingView;
}

+ (id)db_promptForSelection:(id)arg1;
+ (id)db_createActionSheetManagerForSelection:(id)arg1 modalManager:(id)arg2 destructiveAction:(CDUnknownBlockType)arg3;
+ (_Bool)shouldDisplayActionForEntries:(id)arg1 atLocation:(long long)arg2;
- (void).cxx_destruct;
- (void)db_handleBatchDeleteFailedToDeletePaths:(id)arg1 errorMessage:(id)arg2;
- (void)db_handleBatchDeleteSuccessDeletedPaths:(id)arg1;
- (void)db_batchDeleteFilesWithConfirmedFilesystemWarnings:(id)arg1;
- (void)db_dismissOperationLoadingView;
- (void)db_presentOperationLoadingView;
- (void)performActionWithSender:(id)arg1;
- (_Bool)isGreyed;
- (id)initWithActionId:(long long)arg1 actionsController:(id)arg2 location:(long long)arg3;

@end
