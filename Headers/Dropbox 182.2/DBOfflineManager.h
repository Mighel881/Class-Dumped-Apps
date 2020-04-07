//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"
#import "DBOfflineDatabaseObserver-Protocol.h"
#import "DBOfflineManagerOperationCoordinatorDelegate-Protocol.h"
#import "DBOfflineNonPurgeableItemFetcher-Protocol.h"
#import "DBOfflineServingObserving-Protocol.h"
#import "DBOfflineStoringObserving-Protocol.h"

@class DBBlockStormcrowListener, DBObserverHandle, DBOfflineManagerLimits, DBOfflineManagerOperationCoordinator, DBOfflineStatusManager, DBUserCapabilityManager, DBWeakObserverMap, NSOperationQueue, NSString;
@protocol DBAnalyticsLogger, DBModalManaging, DBOfflineServing><DBLinkableStateObserverProtocol, DBOfflineStoring><DBLinkableStateObserverProtocol, DBSpotlightIndexingManager, _TtP33dbx_core_stormcrow_protocol_swift21DBAuthLegacyStormcrow_;

@interface DBOfflineManager : NSObject <DBOfflineDatabaseObserver, DBOfflineServingObserving, DBOfflineStoringObserving, DBOfflineNonPurgeableItemFetcher, DBOfflineManagerOperationCoordinatorDelegate, DBLinkableStateObserverProtocol>
{
    id <DBOfflineStoring><DBLinkableStateObserverProtocol> _store;
    id <DBOfflineServing><DBLinkableStateObserverProtocol> _service;
    DBOfflineManagerOperationCoordinator *_operationCoordinator;
    DBObserverHandle *_serviceObserverHandle;
    DBObserverHandle *_storeObserverHandle;
    DBObserverHandle *_databaseObserverHandle;
    NSString *_userId;
    id <DBAnalyticsLogger> _analyticsLogger;
    DBOfflineManagerLimits *_limits;
    DBObserverHandle *_offlineFoldersCapabilityObserverHandle;
    DBUserCapabilityManager *_userCapabilityManager;
    DBOfflineStatusManager *_statusManager;
    id <_TtP33dbx_core_stormcrow_protocol_swift21DBAuthLegacyStormcrow_> _stormcrow;
    DBBlockStormcrowListener *_stormcrowListener;
    id <DBSpotlightIndexingManager> _spotlightManager;
    id <DBModalManaging> _modalManager;
    DBWeakObserverMap *_observers;
    DBWeakObserverMap *_syncObservers;
    NSOperationQueue *_observerQueue;
}

+ (id)db_extensionForLogging:(id)arg1;
+ (unsigned long long)db_itemTypeWithOfflineItemType:(long long)arg1;
+ (_Bool)canRemoveOfflineItemWithOfflineType:(long long)arg1;
+ (_Bool)canAddOfflineItemWithOfflineType:(long long)arg1;
+ (unsigned long long)db_convertTriggerType:(unsigned long long)arg1;
@property(retain, nonatomic) NSOperationQueue *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(retain, nonatomic) DBWeakObserverMap *syncObservers; // @synthesize syncObservers=_syncObservers;
@property(retain, nonatomic) DBWeakObserverMap *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)db_indexStorableFilesUnderOfflineItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_indexAllStorableFilePathsIfNeeded;
- (void)db_handleStormcrowUpdate;
- (void)db_didReorderRootItems;
- (void)db_didRemoveRootItems:(id)arg1 withTrigger:(unsigned long long)arg2;
- (void)db_didAddRootItems:(id)arg1;
- (void)db_notifyObserversOnObserverQueueWithAddedItems:(id)arg1 deletedItems:(id)arg2;
- (unsigned long long)db_queueFullSyncWithSyncType:(long long)arg1 triggerType:(long long)arg2 overrideAllowDownloadOverCellNetwork:(_Bool)arg3;
- (void)db_removeDirectoriesFromOfflineIfNeeded;
- (_Bool)db_hasOfflineFolderCapability;
- (void)db_logNumOfflines;
- (void)offlineDatabase:(id)arg1 didRemoveRootItems:(id)arg2 andNonRootItems:(id)arg3 withTrigger:(unsigned long long)arg4;
- (void)offlineDatabase:(id)arg1 didAddRootItems:(id)arg2 andNonRootItems:(id)arg3;
- (void)offlineStore:(id)arg1 didCancelLoadingNonPurgeableFile:(id)arg2;
- (void)offlineStore:(id)arg1 didErrorLoadingNonPurgeableFile:(id)arg2 error:(id)arg3;
- (void)offlineStore:(id)arg1 didLoadNonPurgeableFile:(id)arg2 newRev:(id)arg3;
- (void)offlineStore:(id)arg1 willLoadNonPurgeableFile:(id)arg2;
- (void)db_queueSyncOfRootItemsWithDescendentItems:(id)arg1;
- (void)offlineService:(id)arg1 didUpdateMetadatas:(id)arg2;
- (long long)db_syncTypeWithoutConfirmation;
- (void)offlineService:(id)arg1 didAddMetadatas:(id)arg2;
- (void)db_deleteFilePaths:(id)arg1 descendantsOnly:(_Bool)arg2;
- (void)offlineService:(id)arg1 didDeleteAndReaddFilePaths:(id)arg2;
- (void)offlineService:(id)arg1 didDeleteFilePaths:(id)arg2;
- (void)offlineService:(id)arg1 pathWillRename:(id)arg2 toPath:(id)arg3 updatedMetadata:(id)arg4;
- (void)offlineService:(id)arg1 pathsWillMove:(id)arg2 toPath:(id)arg3 withUpdatedMetadata:(id)arg4;
- (void)coordinator:(id)arg1 syncDidEndWithId:(unsigned long long)arg2;
- (void)coordinator:(id)arg1 fileSyncProgress:(id)arg2 withSyncId:(unsigned long long)arg3;
- (void)coordinator:(id)arg1 syncWillBeginWithId:(unsigned long long)arg2;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchNonPurgeableItemWithPath:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchNumberOfRootFilesAndFoldersWithCompleteQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchOfflineTypeForPath:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAllRootOfflineItemsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)moveOfflineItemAtPath:(id)arg1 toPositionWithItemAtPath:(id)arg2 moveCompletedCallback:(CDUnknownBlockType)arg3;
- (void)db_removeOfflineItem:(id)arg1 removeCompletedCallback:(CDUnknownBlockType)arg2 trigger:(unsigned long long)arg3;
- (void)removeOfflineItem:(id)arg1 removeCompletedCallback:(CDUnknownBlockType)arg2 trigger:(unsigned long long)arg3;
- (void)db_addOfflineItem:(id)arg1 syncType:(long long)arg2 overrideAllowDownloadOverCellNetwork:(_Bool)arg3 addCompletedCallback:(CDUnknownBlockType)arg4;
- (void)addOfflineItem:(id)arg1 addCompletedCallback:(CDUnknownBlockType)arg2;
- (void)debug_addOfflineItems:(id)arg1;
- (void)fetchTotalBytesForPath:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchStatusAndProgressForPath:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchStatusForPath:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sweepOfflineStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeItemObserverWithHandle:(id)arg1 forPath:(id)arg2;
- (id)addItemObserver:(id)arg1 forPath:(id)arg2;
- (void)removeOfflineObserverWithHandle:(id)arg1;
- (id)addOfflineSyncObserver:(id)arg1;
- (id)addOfflineObserver:(id)arg1;
- (unsigned long long)performUserExplicitSyncWithType:(long long)arg1 overrideAllowDownloadOverCellNetwork:(_Bool)arg2;
- (unsigned long long)performPeriodicSyncWithTriggerType:(long long)arg1;
- (void)refreshStatusObserversForPath:(id)arg1;
- (void)removeStatusObserver:(id)arg1 forPath:(id)arg2;
- (void)addStatusObserver:(id)arg1 forPath:(id)arg2;
@property(readonly, copy, nonatomic) NSString *userId;
- (id)init;
- (id)initWithUserId:(id)arg1 databaseURL:(id)arg2 service:(id)arg3 store:(id)arg4 userCapabilityManager:(id)arg5 shouldVerifyComponents:(_Bool)arg6 stormcrow:(id)arg7 spotlightManager:(id)arg8 modalManager:(id)arg9;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
