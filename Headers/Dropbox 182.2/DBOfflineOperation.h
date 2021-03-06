//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBAsyncOperation.h"

@class DBDropboxPath, DBOfflineDatabase, DBOfflineOperationContext, NSString;
@protocol DBBackgroundTaskProtocol, DBOfflineServing, DBOfflineStoring;

@interface DBOfflineOperation : DBAsyncOperation
{
    CDUnknownBlockType _operationWillBeginBlock;
    CDUnknownBlockType _operationDidCancelWithReasonBlock;
    id <DBBackgroundTaskProtocol> _bgTask;
    NSString *_userId;
    DBOfflineDatabase *_database;
    id <DBOfflineServing> _service;
    id <DBOfflineStoring> _store;
    DBDropboxPath *_path;
    long long _cancelReason;
    DBOfflineOperationContext *_context;
}

@property(retain, nonatomic) DBOfflineOperationContext *context; // @synthesize context=_context;
@property long long cancelReason; // @synthesize cancelReason=_cancelReason;
@property(readonly, nonatomic) DBDropboxPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) id <DBOfflineStoring> store; // @synthesize store=_store;
@property(readonly, nonatomic) id <DBOfflineServing> service; // @synthesize service=_service;
@property(readonly, nonatomic) DBOfflineDatabase *database; // @synthesize database=_database;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)operationDidCompleteWithError:(id)arg1;
- (void)operationDidComplete;
- (void)cancel;
- (void)cancelWithReason:(long long)arg1;
- (void)setDidCancelWithReasonBlock:(CDUnknownBlockType)arg1;
- (void)setOperationWillBeginBlock:(CDUnknownBlockType)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithPath:(id)arg1 userId:(id)arg2 database:(id)arg3 service:(id)arg4 store:(id)arg5;

@end

