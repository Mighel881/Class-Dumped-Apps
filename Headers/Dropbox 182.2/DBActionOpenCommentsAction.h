//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileAction.h"

@class DBFileOpenContext;

@interface DBActionOpenCommentsAction : DBFileAction
{
    DBFileOpenContext *_currentFileOpenContext;
}

+ (_Bool)shouldDisplayActionForEntries:(id)arg1 atLocation:(long long)arg2;
- (void).cxx_destruct;
- (void)performActionWithFileOpenContext:(id)arg1;
- (void)db_showFailedToLoadMessage;
- (void)performActionWithSender:(id)arg1;
- (id)db_commentsContainerDelegate;
- (void)actionsControllerDidUpdateFileEntryDueToUserInteraction:(_Bool)arg1;
- (id)initWithActionId:(long long)arg1 actionsController:(id)arg2 location:(long long)arg3;

@end
