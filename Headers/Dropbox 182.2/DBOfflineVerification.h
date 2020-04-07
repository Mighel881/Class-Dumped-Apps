//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBOfflineDatabase, NSOperationQueue, NSString;

@interface DBOfflineVerification : NSObject
{
    DBOfflineDatabase *_offlineDatabase;
    NSOperationQueue *_internalQueue;
    NSString *_userId;
    unsigned long long _serviceAnalyticsNumPathsDeletedFromOfflineDatabase;
    unsigned long long _serviceAnalyticsNumPathsAddedToOfflineDatabase;
    unsigned long long _serviceAnalyticsNumPathsIsDirUpdatedInOfflineDatabase;
    unsigned long long _storeAnalyticsNumFilesProcessed;
    unsigned long long _storeAnalyticsNumFilesSetToNonPurgeable;
}

- (void).cxx_destruct;
- (void)db_verifyStoredRevs:(id)arg1 store:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)db_verifyParentOfflinePath:(id)arg1 withStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)db_verifyStore:(id)arg1 items:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)db_verifyStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_processChangesWithPathsInOfflineDatabase:(id)arg1 packageOrDirectoryItemTypePathsInOfflineDatabase:(id)arg2 pathsInOfflineService:(id)arg3 directoryPathsInOfflineService:(id)arg4 childrenOfflineMetadata:(id)arg5 parentOfflineMetadata:(id)arg6 oldParentOfflineDatabaseItem:(id)arg7 isRoot:(_Bool)arg8 withService:(id)arg9 completionDispatchGroup:(id)arg10;
- (void)db_verifyParentOfflinePath:(id)arg1 isRoot:(_Bool)arg2 withService:(id)arg3 completionDispatchGroup:(id)arg4;
- (void)db_verifyService:(id)arg1 items:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)db_verifyService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_verifyDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)verifyWithService:(id)arg1 store:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithOfflineDatabase:(id)arg1;
- (id)initWithOfflineDatabase:(id)arg1 userIdForAnalytics:(id)arg2;

@end
