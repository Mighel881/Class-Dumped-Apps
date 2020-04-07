//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileAction.h"

@class DBBlockActionSheetManager;

@interface DBActionDeleteAction : DBFileAction
{
    DBBlockActionSheetManager *_weakDeleteActionSheetManager;
    unsigned long long _popoverArrowDirection;
}

+ (void)db_doDeleteForFileEntry:(id)arg1 modalManager:(id)arg2 confirmedFsws:(id)arg3 deletedBlock:(CDUnknownBlockType)arg4;
+ (void)db_doActionWithoutInteractionForFileEntry:(id)arg1 weakActionsController:(id)arg2 modalManager:(id)arg3;
+ (unsigned long long)db_popoverArrowDirectionForLocation:(long long)arg1;
+ (_Bool)shouldDisplayActionForEntries:(id)arg1 atLocation:(long long)arg2;
- (void).cxx_destruct;
- (id)db_createActionSheetManagerDestructiveBlock:(CDUnknownBlockType)arg1;
- (void)performActionWithSender:(id)arg1;
- (id)initWithActionId:(long long)arg1 actionsController:(id)arg2 location:(long long)arg3;

@end
