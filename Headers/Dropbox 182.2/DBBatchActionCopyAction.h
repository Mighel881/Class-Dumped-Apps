//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileAction.h"

@class DBLoadingView;

@interface DBBatchActionCopyAction : DBFileAction
{
    DBLoadingView *_operationLoadingView;
}

+ (_Bool)db_isFolderEntry:(id)arg1;
+ (_Bool)shouldDisplayActionForEntries:(id)arg1 atLocation:(long long)arg2;
- (void).cxx_destruct;
- (void)db_showSuccessfulBatchCopyView;
- (void)db_showFailureBatchCopyMessage:(id)arg1;
- (void)db_handleBatchCopyErrorMessage:(id)arg1;
- (void)db_handleBatchCopySuccessWithPaths:(id)arg1;
- (void)db_dismissOperationProgressView;
- (id)db_showOperationInProgressWithTitle:(id)arg1;
- (void)db_didChooseToCopyFiles:(id)arg1 toFolder:(id)arg2 confirmedFsws:(id)arg3;
- (void)db_showCopySharedFolderError;
- (void)db_presentCopyOptionsMenuToCopyFiles:(id)arg1 analyticsLogger:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (_Bool)isGreyed;
- (id)initWithActionId:(long long)arg1 actionsController:(id)arg2 location:(long long)arg3;

@end
