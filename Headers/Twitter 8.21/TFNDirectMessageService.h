//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, TFNDirectMessageActivityLog, TFNDirectMessageContext, TFNDirectMessageContextState, TFNDirectMessageModel, TFSModelContext, TFSTwitterAPICommandService;
@protocol OS_dispatch_queue, TFNDirectMessageInboxActions, TFNDirectMessageServiceRefreshObserver, TFSTwitterAPICommandContext;

@interface TFNDirectMessageService : NSObject
{
    TFNDirectMessageContextState *_stagedModelContextState;
    TFNDirectMessageContext *_context;
    TFNDirectMessageModel *_model;
    id <TFNDirectMessageServiceRefreshObserver> _refreshObserver;
    NSString *_accountID;
    long long _authenticatedUserID;
    TFSModelContext *_modelContext;
    TFSTwitterAPICommandService *_commandService;
    id <TFSTwitterAPICommandContext> _commandContext;
    NSObject<OS_dispatch_queue> *_modelDiskLoadQueue;
    NSMapTable *_conversationServices;
}

+ (void)private_reportErrorWhileDeleting:(id)arg1;
+ (void)invalidateWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)purgeAllCaches;
+ (id)registeredServices;
+ (id)sharedDirectMessageServiceForAccountID:(id)arg1 initialize:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *modelDiskLoadQueue; // @synthesize modelDiskLoadQueue=_modelDiskLoadQueue;
@property(readonly, nonatomic) id <TFSTwitterAPICommandContext> commandContext; // @synthesize commandContext=_commandContext;
@property(readonly, nonatomic) TFSTwitterAPICommandService *commandService; // @synthesize commandService=_commandService;
@property(readonly, nonatomic) TFSModelContext *modelContext; // @synthesize modelContext=_modelContext;
@property(readonly, nonatomic) long long authenticatedUserID; // @synthesize authenticatedUserID=_authenticatedUserID;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(nonatomic) __weak id <TFNDirectMessageServiceRefreshObserver> refreshObserver; // @synthesize refreshObserver=_refreshObserver;
- (void)private_directMessagesModelDidClear:(id)arg1;
- (void)private_finishAsynchronousModelLoad;
- (id)private_consumeStagedModelContextState;
- (void)saveToDisk;
- (void)loadFromDisk;
@property(readonly, nonatomic) TFNDirectMessageActivityLog *activityLog;
- (id)conversationActionsWithSelectedUsers:(id)arg1;
- (id)conversationActionsWithRecipientUserID:(long long)arg1;
- (id)conversationActionsWithIdentifier:(id)arg1;
- (id)userForUserID:(long long)arg1;
- (void)reset;
- (id)initWithAccountID:(id)arg1 authenticatedUserID:(long long)arg2 modelContext:(id)arg3 commandService:(id)arg4 commandContext:(id)arg5;
- (id)init;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) id <TFNDirectMessageInboxActions> inboxActions;
@property(readonly, nonatomic) TFNDirectMessageContext *context; // @synthesize context=_context;
@property(retain, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;

@end

