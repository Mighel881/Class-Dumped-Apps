//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBFileCacheAPIManagerDelegate-Protocol.h>
#import <DropboxExtensions/DBFileCacheStoreOnlyProtocol-Protocol.h>
#import <DropboxExtensions/DBFileLoadingCache-Protocol.h>
#import <DropboxExtensions/DBLinkableStateObserverProtocol-Protocol.h>
#import <DropboxExtensions/DBMetadataManagerCompatibleFileCache-Protocol.h>
#import <DropboxExtensions/DBRestClientDelegate-Protocol.h>
#import <DropboxExtensions/DBRestClientPreviewDelegate-Protocol.h>

@class DBFileCacheOperationManager, DBFileCacheUserContentAPIPriorityQueue, DBScopedDirectoryMap, DBWeakObserverMap, NSDate, NSString;
@protocol DBFileCacheMetadataDelegate, DBFileSyncAlerter;

@interface DBFileCache : NSObject <DBRestClientDelegate, DBRestClientPreviewDelegate, DBFileCacheAPIManagerDelegate, DBLinkableStateObserverProtocol, DBMetadataManagerCompatibleFileCache, DBFileCacheStoreOnlyProtocol, DBFileLoadingCache>
{
    unsigned long long _maxCacheSize;
    unsigned long long _minCacheSize;
    id <DBFileSyncAlerter> _syncAlerter;
    DBFileCacheOperationManager *_operationManager;
    NSDate *_mockNow;
    long long _mockFreeSpace;
    DBFileCacheUserContentAPIPriorityQueue *_priorityQueue;
    DBScopedDirectoryMap *_scopedDirectoryMap;
    DBWeakObserverMap *_fileCacheObservers;
    NSDate *_lastOutOfSpaceCleanupDate;
    unsigned long long _environment;
    _Bool _isFileSetupComplete;
    id <DBFileCacheMetadataDelegate> _metadataDelegate;
}

+ (void)db_setSizeForCachedFile:(id)arg1 inFileCacheContext:(id)arg2;
+ (void)db_setSizeForCachedFile:(id)arg1 usingFileList:(id)arg2 inFileCacheContext:(id)arg3;
+ (void)db_removeRepr:(long long)arg1 fromCachedFile:(id)arg2 inFileCacheContext:(id)arg3 managedObjectContext:(id)arg4 removalReason:(id)arg5;
+ (void)db_removeCachedFile:(id)arg1 inFileCacheContext:(id)arg2 managedObjectContext:(id)arg3 removalReason:(id)arg4;
+ (_Bool)db_hasLoadedFileWithPath:(id)arg1 withRepr:(long long)arg2 fileCache:(id)arg3 fileCacheContext:(id)arg4 managedObjectContext:(id)arg5 withRev:(id)arg6;
+ (id)db_newCachedFile:(id)arg1 managedObjectContext:(id)arg2;
+ (id)db_loadingFileForPath:(id)arg1 repr:(long long)arg2 fileCacheContext:(id)arg3;
+ (_Bool)db_setCachedFile:(id)arg1 isPurgeable:(_Bool)arg2 context:(id)arg3 managedObjectContext:(id)arg4;
+ (void)db_runBlock:(CDUnknownBlockType)arg1 inQueue:(id)arg2;
+ (long long)db_totalSizeOfFiles:(id)arg1;
+ (id)db_dropboxPathSetToArrayOfLoggableHashes:(id)arg1;
+ (CDUnknownBlockType)db_conditionForFilePath:(id)arg1 notBeingLoadedWithRepr:(long long)arg2;
+ (CDUnknownBlockType)db_conditionForFilePath:(id)arg1 withRepr:(long long)arg2 fileCache:(id)arg3 beingLoadedOrCachedWithRev:(id)arg4;
+ (void)db_postFileSetupCleanupWithContext:(id)arg1;
+ (_Bool)db_loadReprsForCachedFile:(id)arg1 inFileCacheContext:(id)arg2 managedObjectContext:(id)arg3;
+ (void)db_purgeStaleReprsForCachedFile:(id)arg1 fileCacheContext:(id)arg2;
+ (void)db_purgeStaleLocalPathRootForCachedFile:(id)arg1 fileCacheContext:(id)arg2;
+ (CDUnknownBlockType)fileSetupBlock;
+ (unsigned long long)nonpurgeableFilesSpaceAvailableBytes;
@property(readonly, nonatomic) _Bool isFileSetupComplete; // @synthesize isFileSetupComplete=_isFileSetupComplete;
@property(nonatomic) __weak id <DBFileCacheMetadataDelegate> metadataDelegate; // @synthesize metadataDelegate=_metadataDelegate;
- (void).cxx_destruct;
- (void)db_stopTrackingPreviewLoaderWithContext:(id)arg1 path:(id)arg2;
- (id)db_getPreviewLoaderWithContext:(id)arg1 path:(id)arg2;
- (void)db_startTrackingPreviewLoaderWithContext:(id)arg1 previewLoader:(id)arg2 path:(id)arg3;
- (void)db_removeAllLoadingReprsForDropboxPath:(id)arg1 context:(id)arg2;
- (void)db_removeLoadingFileForLocalFilePath:(id)arg1 context:(id)arg2 cancelled:(_Bool)arg3 error:(id)arg4;
- (void)apiManager:(id)arg1 previewFileLoadFailedAtLocalPath:(id)arg2 dropboxPath:(id)arg3 status:(unsigned long long)arg4 withError:(id)arg5;
- (void)loadLatestPreviewForFile:(id)arg1 previewType:(long long)arg2 withFallbackToOriginal:(_Bool)arg3 retryDelay:(double)arg4 retryTimeout:(double)arg5;
- (void)db_fetchWithFilterPredicate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 synchronously:(_Bool)arg3;
- (CDUnknownBlockType)db_fetchBlockWithFilterPredicate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)db_fetchWithFilterPredicate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)db_updateCachedFile:(id)arg1 withContentType:(id)arg2;
- (void)apiManager:(id)arg1 resumeFileLoadAtLocalPath:(id)arg2 dropboxPath:(id)arg3 withRepr:(long long)arg4;
- (void)apiManager:(id)arg1 fileLoadFailedAtLocalPath:(id)arg2 withError:(id)arg3;
- (void)apiManager:(id)arg1 fileLoadProgress:(double)arg2 localPath:(id)arg3;
- (void)apiManager:(id)arg1 fileLoadedWithMetadata:(id)arg2 localPath:(id)arg3 contentType:(id)arg4;
- (void)populateCacheWithFileAtLocalURL:(id)arg1 withMetadata:(id)arg2 contentType:(id)arg3;
- (id)db_cachedFileFromDropboxPath:(id)arg1 repr:(long long)arg2 metadata:(id)arg3 lastKnownRev:(id)arg4 context:(id)arg5 managedObjectContext:(id)arg6;
- (id)db_cachedFileFromLoadingFile:(id)arg1 metadata:(id)arg2 context:(id)arg3 managedObjectContext:(id)arg4;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTotalFileSizeOfCachedFilesMarkedAsNonpurgeableForBlock:(CDUnknownBlockType)arg1;
- (void)fetchCachedFilesMarkedAsNonpurgeableForBlock:(CDUnknownBlockType)arg1;
- (void)setDropboxPath:(id)arg1 isPurgeable:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setDropboxPath:(id)arg1 isPurgeable:(_Bool)arg2;
- (void)setCachedFile:(id)arg1 isPurgeable:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setDropboxPaths:(id)arg1 isPurgeable:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCachedFile:(id)arg1 isPurgeable:(_Bool)arg2;
- (void)completeQueue;
- (void)clearCache;
- (void)sweepNonpurgeablePathsUsingBlock:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)trimCacheWithCompletion:(CDUnknownBlockType)arg1;
- (id)db_getPriorityFromFile:(id)arg1 since:(id)arg2;
- (void)db_performCleanupOfType:(long long)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)performCleanup;
- (void)db_performCleanupIfNecessaryWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)performCleanupIfNecessaryForNonpurgeableFilesWithEstimatedSize:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)db_showOutOfSpaceAlertIfNecessaryForPriority:(unsigned long long)arg1;
- (void)db_cleanupFiles:(id)arg1 context:(id)arg2 managedObjectContext:(id)arg3 currentlyViewedPaths:(id)arg4 cleanupType:(long long)arg5;
- (long long)db_maximumCacheSize;
- (long long)db_deviceFreeSpace;
- (_Bool)db_shouldExpireFile:(id)arg1 withRepr:(long long)arg2 nowDate:(id)arg3;
- (void)db_cancelLoadForLoadingFile:(id)arg1 inContext:(id)arg2;
- (void)changeExistingFilePath:(id)arg1 toNewPath:(id)arg2;
- (void)removeFileAtPath:(id)arg1 removalReason:(id)arg2;
- (void)db_cancelFileLoadForPath:(id)arg1 inContext:(id)arg2;
- (void)cancelFileLoadForPath:(id)arg1;
- (void)loadFilesBatch:(id)arg1 runLoopModes:(id)arg2 startedLoadingBlock:(CDUnknownBlockType)arg3 withPriority:(unsigned long long)arg4 isPurgeable:(_Bool)arg5;
- (void)loadFilesBatch:(id)arg1 runLoopModes:(id)arg2 startedLoadingBlock:(CDUnknownBlockType)arg3;
- (void)db_startLoadingFileIfNeededForPath:(id)arg1 repr:(long long)arg2 priority:(unsigned long long)arg3 isPurgeable:(_Bool)arg4 lastKnownRev:(id)arg5 condition:(CDUnknownBlockType)arg6 retryAction:(CDUnknownBlockType)arg7 cancelAction:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9 inContext:(id)arg10 managedObjectContext:(id)arg11;
- (CDUnknownBlockType)db_assertOnFileCacheQueueBlock;
- (void)db_startLoadingFileIfNeededForPath:(id)arg1 repr:(long long)arg2 priority:(unsigned long long)arg3 isPurgeable:(_Bool)arg4 lastKnownRev:(id)arg5 condition:(CDUnknownBlockType)arg6 retryAction:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)db_logFileStartedForPath:(id)arg1 estimatedSize:(unsigned long long)arg2 lastKnownRev:(id)arg3 isOriginal:(_Bool)arg4 loadType:(id)arg5;
- (void)db_loadThumbnailForFile:(id)arg1 thumbnailRepr:(long long)arg2 condition:(CDUnknownBlockType)arg3 runLoopModes:(id)arg4 lastKnownRev:(id)arg5 withPriority:(unsigned long long)arg6 isPurgeable:(_Bool)arg7 didLoadHandleBlock:(CDUnknownBlockType)arg8;
- (void)loadLatestThumbnailForFile:(id)arg1 thumbnailRepr:(long long)arg2 runLoopModes:(id)arg3 withPriority:(unsigned long long)arg4 isPurgeable:(_Bool)arg5 didLoadHandleBlock:(CDUnknownBlockType)arg6;
- (void)loadLatestThumbnailForFile:(id)arg1 thumbnailRepr:(long long)arg2 runLoopModes:(id)arg3;
- (void)loadThumbnailForFile:(id)arg1 thumbnailRepr:(long long)arg2 lastKnownRev:(id)arg3 runLoopModes:(id)arg4 withPriority:(unsigned long long)arg5 isPurgeable:(_Bool)arg6 didLoadHandleBlock:(CDUnknownBlockType)arg7;
- (void)loadThumbnailForFile:(id)arg1 thumbnailRepr:(long long)arg2 lastKnownRev:(id)arg3 runLoopModes:(id)arg4;
- (void)db_loadPreviewForFile:(id)arg1 previewType:(long long)arg2 condition:(CDUnknownBlockType)arg3 lastKnownRev:(id)arg4 withPriority:(unsigned long long)arg5 isPurgeable:(_Bool)arg6 didLoadHandleBlock:(CDUnknownBlockType)arg7;
- (void)loadLatestPreviewForFile:(id)arg1 previewType:(long long)arg2 withPriority:(unsigned long long)arg3 isPurgeable:(_Bool)arg4 didLoadHandleBlock:(CDUnknownBlockType)arg5;
- (void)loadLatestPreviewForFile:(id)arg1 previewType:(long long)arg2;
- (void)loadPreviewForFile:(id)arg1 previewType:(long long)arg2 lastKnownRev:(id)arg3 withPriority:(unsigned long long)arg4 isPurgeable:(_Bool)arg5 didLoadHandleBlock:(CDUnknownBlockType)arg6;
- (void)loadPreviewForFile:(id)arg1 previewType:(long long)arg2 lastKnownRev:(id)arg3;
- (void)db_loadArchiveForFile:(id)arg1 condition:(CDUnknownBlockType)arg2 lastKnownRev:(id)arg3 withPriority:(unsigned long long)arg4 isPurgeable:(_Bool)arg5 didLoadHandleBlock:(CDUnknownBlockType)arg6;
- (void)loadLatestArchiveForFile:(id)arg1 withPriority:(unsigned long long)arg2 isPurgeable:(_Bool)arg3 didLoadHandleBlock:(CDUnknownBlockType)arg4;
- (void)loadLatestArchiveForFile:(id)arg1;
- (void)loadArchiveForFile:(id)arg1 lastKnownRev:(id)arg2 withPriority:(unsigned long long)arg3 isPurgeable:(_Bool)arg4 didLoadHandleBlock:(CDUnknownBlockType)arg5;
- (void)loadArchiveForFile:(id)arg1 lastKnownRev:(id)arg2;
- (void)db_loadFile:(id)arg1 condition:(CDUnknownBlockType)arg2 estimatedSize:(unsigned long long)arg3 lastKnownRev:(id)arg4 withPriority:(unsigned long long)arg5 isPurgeable:(_Bool)arg6 didLoadHandleBlock:(CDUnknownBlockType)arg7;
- (void)loadLatestFile:(id)arg1 estimatedSize:(unsigned long long)arg2 withPriority:(unsigned long long)arg3 isPurgeable:(_Bool)arg4 didLoadHandleBlock:(CDUnknownBlockType)arg5;
- (void)loadLatestFile:(id)arg1 estimatedSize:(unsigned long long)arg2;
- (void)loadFile:(id)arg1 lastKnownRev:(id)arg2 estimatedSize:(unsigned long long)arg3 withPriority:(unsigned long long)arg4 isPurgeable:(_Bool)arg5 didLoadHandleBlock:(CDUnknownBlockType)arg6;
- (void)loadFile:(id)arg1 lastKnownRev:(id)arg2 estimatedSize:(unsigned long long)arg3;
- (void)getReprsOfFilesLoadingForPaths:(id)arg1 completion:(CDUnknownBlockType)arg2 withAtLeastPriority:(unsigned long long)arg3;
- (void)getReprsOfFileLoadingForPath:(id)arg1 completion:(CDUnknownBlockType)arg2 withAtLeastPriority:(unsigned long long)arg3;
- (_Bool)db_loadingFileForPath:(id)arg1 repr:(long long)arg2 loadProgress:(double *)arg3 withAtLeastPriority:(unsigned long long)arg4;
- (_Bool)loadingFileForPath:(id)arg1 repr:(long long)arg2 loadProgress:(double *)arg3 withAtLeastPriority:(unsigned long long)arg4;
- (_Bool)loadingFileForPath:(id)arg1 repr:(long long)arg2 withAtLeastPriority:(unsigned long long)arg3;
- (_Bool)loadingFileForPath:(id)arg1 repr:(long long)arg2 loadProgress:(double *)arg3;
- (_Bool)loadingFileForPath:(id)arg1 repr:(long long)arg2;
- (id)db_fileForPath:(id)arg1 inFileCacheContext:(id)arg2 managedObjectContext:(id)arg3 andMarkViewed:(_Bool)arg4;
- (id)db_cachedFileForPath:(id)arg1 inFileCacheContext:(id)arg2 managedObjectContext:(id)arg3;
- (void)filesForPaths:(id)arg1 markViewed:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fileForPath:(id)arg1 markViewed:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)fileForPath:(id)arg1 markViewed:(_Bool)arg2;
- (long long)bestCachedThumbnailReprForPath:(id)arg1;
- (unsigned long long)cacheStateForRepr:(long long)arg1 ofPath:(id)arg2 ofRev:(id)arg3 withAtLeastPriority:(unsigned long long)arg4;
- (unsigned long long)cacheStateForRepr:(long long)arg1 ofPath:(id)arg2 ofRev:(id)arg3;
- (unsigned long long)cacheStateOfAnyRevForRepr:(long long)arg1 ofPath:(id)arg2 withAtLeastPriority:(unsigned long long)arg3;
- (unsigned long long)cacheStateOfAnyRevForRepr:(long long)arg1 ofPath:(id)arg2;
- (unsigned long long)db_cacheStateForRepr:(long long)arg1 ofPath:(id)arg2 shouldConsiderCachedFile:(CDUnknownBlockType)arg3 withAtLeastPriority:(unsigned long long)arg4;
- (void)db_setupNextFileInListWithSetupBlock:(CDUnknownBlockType)arg1;
- (void)db_startCachedFileSetup;
- (void)db_populateLoadedFiles;
- (void)db_cleanUpPreviousExportedFiles;
- (void)db_cleanUpNilPathCachedFiles;
- (void)db_resetLoadingFilesDirectory;
- (id)addDelegate:(id)arg1;
- (unsigned long long)priorityQueueCount;
- (void)db_commonSetupWithUserId:(id)arg1 operationManager:(id)arg2 APIManager:(id)arg3 syncAlerter:(id)arg4 environment:(unsigned long long)arg5 scopedDirectoryMap:(id)arg6;
- (id)initWithUserId:(id)arg1 APIManager:(id)arg2 syncAlerter:(id)arg3 environment:(unsigned long long)arg4 scopedDirectoryMap:(id)arg5 backgroundTaskFactory:(id)arg6;
- (void)markFileAtPath:(id)arg1 asViewedOn:(id)arg2;
- (void)setMaxConcurrentBackgroundLoads:(unsigned long long)arg1;
- (void)clearFreeSpace;
- (void)setFreeSpace:(long long)arg1;
- (void)clearCurrentTime;
- (void)setCurrentTime:(id)arg1;
- (void)setMinCacheSize:(unsigned long long)arg1;
- (void)setMaxCacheSize:(unsigned long long)arg1;
- (id)initForUnitTestWithUserId:(id)arg1 fileCacheOperationManager:(id)arg2 apiManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
