//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBChunkedUploadOperationsFactory-Protocol.h>

@class NSString;
@protocol DBRestClientRequestTaskFactoryProtocol;

@interface DBChunkedUploadDefaultOperationsFactory : NSObject <DBChunkedUploadOperationsFactory>
{
    id <DBRestClientRequestTaskFactoryProtocol> _requestTaskFactory;
}

+ (id)db_operationForUploadRequestCreator:(CDUnknownBlockType)arg1 withChunkSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4 didStartRequestBlock:(CDUnknownBlockType)arg5 blockDebugName:(id)arg6;
+ (void)db_setupProgressBlockOnRequest:(id)arg1 withChunkSize:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
+ (CDUnknownBlockType)db_requestProgressBlockForChunkSize:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
+ (id)db_commitUploadRequestWithUploadID:(id)arg1 useBufferFile:(_Bool)arg2 bodyDataFile:(id)arg3 toFilePath:(id)arg4 overwriteExistingFile:(_Bool)arg5 parentRev:(id)arg6 forUserID:(id)arg7 withUploadCommitType:(unsigned long long)arg8 fswsConfirmed:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;
- (void).cxx_destruct;
- (id)writeFileChunkOperationWithDataLoader:(id)arg1 offset:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)prepareDataLoaderOperationWithDataLoader:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)operationToDelayForInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)loadBlockOperationWithDataLoader:(id)arg1 offset:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)ongoingCommitUploadOperationWithRequestTask:(id)arg1 forUserID:(id)arg2 uploadCommitType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)commitUploadOperationWithBufferFile:(id)arg1 uploadSessionID:(id)arg2 toFilePath:(id)arg3 fileSize:(unsigned long long)arg4 overwrite:(_Bool)arg5 parentRev:(id)arg6 forUserID:(id)arg7 uploadCommitType:(unsigned long long)arg8 fswsConfirmed:(_Bool)arg9 fswIds:(id)arg10 completion:(CDUnknownBlockType)arg11 didStartRequestBlock:(CDUnknownBlockType)arg12;
- (id)commitUploadOperationForUploadSessionID:(id)arg1 toFilePath:(id)arg2 fileSize:(unsigned long long)arg3 overwrite:(_Bool)arg4 parentRev:(id)arg5 forUserID:(id)arg6 uploadCommitType:(unsigned long long)arg7 fswsConfirmed:(_Bool)arg8 fswIds:(id)arg9 completion:(CDUnknownBlockType)arg10 didStartRequestBlock:(CDUnknownBlockType)arg11;
- (id)ongoingBlockUploadOperationWithRequestTask:(id)arg1 forUserID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)uploadNextBlockOperationWithChunkFileURL:(id)arg1 fileChunkSize:(unsigned long long)arg2 uploadSessionID:(id)arg3 uploadOffset:(unsigned long long)arg4 forUserID:(id)arg5 completion:(CDUnknownBlockType)arg6 progressBlock:(CDUnknownBlockType)arg7 didStartRequestBlock:(CDUnknownBlockType)arg8;
- (id)uploadNextBlockOperationWithData:(id)arg1 uploadSessionID:(id)arg2 uploadOffset:(unsigned long long)arg3 forUserID:(id)arg4 completion:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 didStartRequestBlock:(CDUnknownBlockType)arg7;
- (id)uploadFirstBlockOperationWithChunkFileURL:(id)arg1 fileChunkSize:(unsigned long long)arg2 forUserID:(id)arg3 completion:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 didStartRequestBlock:(CDUnknownBlockType)arg6;
- (id)uploadFirstBlockOperationWithData:(id)arg1 forUserID:(id)arg2 completion:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4 didStartRequestBlock:(CDUnknownBlockType)arg5;
- (void)terminateDueToUnlink;
- (id)initWithRequestTaskFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
