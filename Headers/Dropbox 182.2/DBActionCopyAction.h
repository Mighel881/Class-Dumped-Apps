//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileAction.h"

@interface DBActionCopyAction : DBFileAction
{
}

+ (void)db_showSuccesfulCopyForFileEntry:(id)arg1 modalManager:(id)arg2;
+ (void)db_presentErrorWithErrorMessage:(id)arg1 fileName:(id)arg2 modalManager:(id)arg3;
+ (void)db_didChooseToCopyFile:(id)arg1 toContainingFolder:(id)arg2 withNewFileName:(id)arg3 confirmedFsws:(id)arg4 modalManager:(id)arg5;
+ (id)db_userStateFileEntry:(id)arg1;
+ (_Bool)canCopySharedFoldersAsUser:(id)arg1;
+ (_Bool)shouldDisplayActionForEntries:(id)arg1 atLocation:(long long)arg2;
- (void)db_presentCopyOptionsMenuWithFileEntry:(id)arg1 analyticsLogger:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (id)initWithActionId:(long long)arg1 actionsController:(id)arg2 location:(long long)arg3;

@end

